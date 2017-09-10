// process.cpp
#include "process.h"

namespace cog
{
	// DirectoryEntry

	TerminatedStringSpan DirectoryEntry::getName()
	{
#ifdef WIN32
		return TerminatedStringSpan(findData.cFileName);
#else
		return TerminatedStringSpan(entry->d_name);
#endif
	}

	String DirectoryEntry::getPath()
	{
		String result = directory->getPath();
		result.append('/');
		result.append(getName());
		return result;
	}

	// DirectoryContents

	DirectoryContents::DirectoryContents(
		char const*	path)
		: path(path)
	{
#ifdef WIN32
		TerminatedStringSpan terminatedPath(path);
		String pattern = terminatedPath;
		if (!terminatedPath.endsWith(TerminatedStringSpan("/")) && !terminatedPath.endsWith(TerminatedStringSpan("\\")))
			pattern.append("/");
		pattern.append("*");

		findHandle = FindFirstFileA(pattern.asSpan().begin, &firstFileData);
		if (!findHandle || (findHandle == INVALID_HANDLE_VALUE))
		{
			fprintf(stderr, "failed to open '%s'\n", path);
			findHandle = nullptr;
		}
#else
		directory = opendir(path);
		if (!directory)
		{
			fprintf(stderr, "failed to open '%s'\n", path);
		}
#endif
	}

	DirectoryContents::~DirectoryContents()
	{
#ifdef WIN32
		if (findHandle)
			FindClose(findHandle);
#else
		if (directory)
			closedir(directory);
#endif
	}

	DirectoryContents::Iterator::Iterator(
		DirectoryContents* outer)
	{
		entry.directory = outer;
		counter = 0;

#ifdef WIN32
		entry.findData = outer->firstFileData;
#endif
	}

	DirectoryContents::Iterator::Iterator()
	{
		entry.directory = nullptr;
		counter = 0;
	}

	void DirectoryContents::Iterator::operator++()
	{
		if (!entry.directory)
			return;

		for (;;)
		{
#ifdef WIN32
			BOOL result = FindNextFileA(entry.directory->findHandle, &entry.findData);
			if (!result)
			{
				entry.directory = nullptr;
				counter = 0;
				return;
			}
#else
			entry.entry = readdir(entry.directory->directory);
			if (!entry.entry)
				return;
#endif

			// We need to skip entries that are named
			// `.` or `..` since these represent
			// the directory and its parent, respectively
			char const* cursor = entry.findData.cFileName;
			if (*cursor == '.')
			{
				cursor++;
				if (*cursor == '.')
					cursor++;

				if (*cursor == 0)
					continue;
			}

			// The default case is to just return the data we
			// found as the next file.
			counter++;
			return;
		}
	}

	DirectoryContents::Iterator DirectoryContents::begin()
	{
#ifdef WIN32
		if (!findHandle) return end();

		Iterator iterator(this);
		return iterator;
#else
		if (!directory) return end();

		Iterator iterator(this);
		++iterator;
		return iterator;
#endif
	}

	DirectoryContents::Iterator DirectoryContents::end()
	{
		return Iterator();
	}

	//

	DirectoryContents getFilesInDirectory(
		char const* path)
	{
		return DirectoryContents(path);
	}

	//

	String getExecutableDirectoryPath()
	{
#ifdef WIN32
		// TODO: figure out a way to allocate this...
		enum
		{
			kBufferSize = 1024,
		};
		char resultBuffer[kBufferSize];

		DWORD result = GetModuleFileNameA(nullptr, resultBuffer, sizeof(resultBuffer));
		if (result == 0 || result == sizeof(resultBuffer))
		{
			// We are in the dangerous case
			throw 99;
		}

		char const* begin = resultBuffer;
		char const* end = resultBuffer + result;

		while (end != begin)
		{
			switch (*(end - 1))
			{
			default:
				end--;
				continue;

			case '\\':
			case '/':
				break;

			}
			break;
		}
		return String(TerminatedStringSpan(begin, end));
#else
		// TODO: figure out a way to allocate this...
		enum
		{
			kBufferSize = 1024,
		};
		char resultBuffer[kBufferSize];

#if 0
		char buffer[32];
		sprintf(buffer, "/proc/%d/exe", getpid());
		int readCount = readlink(buffer, resultBuffer, kBufferSize);
		fprintf(stderr, "EXEC_READ(%s): %d\n", buffer, readCount);
		resultBuffer[readCount] = 0;
#elif 0

		int ret = proc_pidpath(getpid(), resultBuffer, sizeof(kBufferSize));
		fprintf(stderr, "EXEC_READ: %d\n", ret);
		if (ret <= 0)
		{

		}

#else
		uint32_t size = kBufferSize;
		int ret = _NSGetExecutablePath(resultBuffer, &size);
		//    fprintf(stderr, "EXEC_READ: %d\n", ret);

		char realBuffer[PATH_MAX];
		realpath(resultBuffer, realBuffer);

		if (char* lastSlash = strrchr(realBuffer, '/'))
		{
			lastSlash[1] = 0;
		}

#endif

		return String(TerminatedStringSpan(realBuffer));
#endif
	}

	// ProcessSpawner

	ProcessSpawner::ProcessSpawner(char const* appName)
	{
		addArg(appName);
	}

	ProcessSpawner::ProcessSpawner(char const* appName, char const* executablePath_)
	{
#ifdef WIN32
		executablePath = TerminatedStringSpan(executablePath_);
#endif
		addArg(appName);
	}

	void ProcessSpawner::addArg(char const* arg)
	{
#ifdef WIN32
		if (argCount != 0)
		{
			commandLine.append(" ");
		}
		commandLine.append(arg);
		argCount++;
#else
		args.append(arg);
#endif
	}

#ifdef WIN32
	struct OSProcessSpawner_ReaderThreadInfo
	{
		HANDLE	file;
		String	output;
	};

	static DWORD WINAPI osReaderThreadProc(LPVOID threadParam)
	{
		OSProcessSpawner_ReaderThreadInfo* info = (OSProcessSpawner_ReaderThreadInfo*)threadParam;
		HANDLE file = info->file;

		static const int kChunkSize = 1024;
		char buffer[kChunkSize];

		String output;

		// We need to re-write the output to deal with line
		// endings, so we check for paired '\r' and '\n'
		// characters, which may span chunks.
		int prevChar = -1;

		for (;;)
		{
			DWORD bytesRead = 0;
			BOOL readResult = ReadFile(file, buffer, kChunkSize, &bytesRead, nullptr);

			if (!readResult || GetLastError() == ERROR_BROKEN_PIPE)
			{
				break;
			}

			// walk the buffer and rewrite to eliminate '\r' '\n' pairs
			char* readCursor = buffer;
			char const* end = buffer + bytesRead;
			char* writeCursor = buffer;

			while (readCursor != end)
			{
				int p = prevChar;
				int c = *readCursor++;
				prevChar = c;
				switch (c)
				{
				case '\r': case '\n':
					// swallow input if '\r' and '\n' appear in sequence
					if ((p ^ c) == ('\r' ^ '\n'))
					{
						// but don't swallow the next byte
						prevChar = -1;
						continue;
					}
					// always replace '\r' with '\n'
					c = '\n';
					break;

				default:
					break;
				}

				*writeCursor++ = c;
			}
			bytesRead = (DWORD)(writeCursor - buffer);

			// Note: Current "core" implementation gives no way to know
			// the length of the buffer, so we ultimately have
			// to just assume null termination...
			output.append(StringSpan(buffer, buffer + bytesRead));
		}

		info->output = output;

		return 0;
	}
#endif

	int ProcessSpawner::spawnAndWait()
	{
#ifdef WIN32
		SECURITY_ATTRIBUTES securityAttributes;
		securityAttributes.nLength = sizeof(securityAttributes);
		securityAttributes.lpSecurityDescriptor = nullptr;
		securityAttributes.bInheritHandle = true;

		// create stdout pipe for child process
		HANDLE childStdOutReadTmp = nullptr;
		HANDLE childStdOutWrite = nullptr;
		if (!CreatePipe(&childStdOutReadTmp, &childStdOutWrite, &securityAttributes, 0))
		{
			return kOSError_OperationFailed;
		}

		// create stderr pipe for child process
		HANDLE childStdErrReadTmp = nullptr;
		HANDLE childStdErrWrite = nullptr;
		if (!CreatePipe(&childStdErrReadTmp, &childStdErrWrite, &securityAttributes, 0))
		{
			return kOSError_OperationFailed;
		}

		// create stdin pipe for child process
		HANDLE childStdInRead = nullptr;
		HANDLE childStdInWriteTmp = nullptr;
		if (!CreatePipe(&childStdInRead, &childStdInWriteTmp, &securityAttributes, 0))
		{
			return kOSError_OperationFailed;
		}

		HANDLE currentProcess = GetCurrentProcess();

		// create a non-inheritable duplicate of the stdout reader
		HANDLE childStdOutRead = nullptr;
		if (!DuplicateHandle(
			currentProcess, childStdOutReadTmp,
			currentProcess, &childStdOutRead,
			0, FALSE, DUPLICATE_SAME_ACCESS))
		{
			return kOSError_OperationFailed;
		}
		if (!CloseHandle(childStdOutReadTmp))
		{
			return kOSError_OperationFailed;
		}

		// create a non-inheritable duplicate of the stderr reader
		HANDLE childStdErrRead = nullptr;
		if (!DuplicateHandle(
			currentProcess, childStdErrReadTmp,
			currentProcess, &childStdErrRead,
			0, FALSE, DUPLICATE_SAME_ACCESS))
		{
			return kOSError_OperationFailed;
		}
		if (!CloseHandle(childStdErrReadTmp))
		{
			return kOSError_OperationFailed;
		}

		// create a non-inheritable duplicate of the stdin writer
		HANDLE childStdInWrite = nullptr;
		if (!DuplicateHandle(
			currentProcess, childStdInWriteTmp,
			currentProcess, &childStdInWrite,
			0, FALSE, DUPLICATE_SAME_ACCESS))
		{
			return kOSError_OperationFailed;
		}
		if (!CloseHandle(childStdInWriteTmp))
		{
			return kOSError_OperationFailed;
		}

		// Now we can actually get around to starting a process
		PROCESS_INFORMATION processInfo;
		ZeroMemory(&processInfo, sizeof(processInfo));

		// TODO: switch to proper wide-character versions of these...
		STARTUPINFOA startupInfo;
		ZeroMemory(&startupInfo, sizeof(startupInfo));
		startupInfo.cb = sizeof(startupInfo);
		startupInfo.hStdError = childStdErrWrite;
		startupInfo.hStdOutput = childStdOutWrite;
		startupInfo.hStdInput = childStdInRead;
		startupInfo.dwFlags = STARTF_USESTDHANDLES;

		bool isExecutablePath = executablePath.asSpan().getLength() != 0;

		//			fprintf(stderr, "cogc-test: '%s'\n",
		//				commandLine.asSpan().begin);

		// `CreateProcess` requires write access to this, for some reason...
		BOOL success = CreateProcessA(
			isExecutablePath ? executablePath.asSpan().begin : nullptr,
			(LPSTR)commandLine.asSpan().begin,
			nullptr,
			nullptr,
			true,
			CREATE_NO_WINDOW,
			nullptr, // TODO: allow specifying environment variables?
			nullptr,
			&startupInfo,
			&processInfo);
		if (!success)
		{
			return kOSError_OperationFailed;
		}

		// close handles we are now done with
		CloseHandle(processInfo.hThread);
		CloseHandle(childStdOutWrite);
		CloseHandle(childStdErrWrite);
		CloseHandle(childStdInRead);

		// Create a thread to read from the child's stdout.
		OSProcessSpawner_ReaderThreadInfo stdOutThreadInfo;
		stdOutThreadInfo.file = childStdOutRead;
		HANDLE stdOutThread = CreateThread(nullptr, 0, &osReaderThreadProc, (LPVOID)&stdOutThreadInfo, 0, nullptr);

		// Create a thread to read from the child's stderr.
		OSProcessSpawner_ReaderThreadInfo stdErrThreadInfo;
		stdErrThreadInfo.file = childStdErrRead;
		HANDLE stdErrThread = CreateThread(nullptr, 0, &osReaderThreadProc, (LPVOID)&stdErrThreadInfo, 0, nullptr);

		// wait for the process to exit
		// TODO: set a timeout as a safety measure...
		WaitForSingleObject(processInfo.hProcess, INFINITE);

		// get exit code for process
		DWORD childExitCode = 0;
		if (!GetExitCodeProcess(processInfo.hProcess, &childExitCode))
		{
			return kOSError_OperationFailed;
		}

		// wait for the reader threads
		WaitForSingleObject(stdOutThread, INFINITE);
		WaitForSingleObject(stdErrThread, INFINITE);

		CloseHandle(processInfo.hProcess);
		CloseHandle(childStdOutRead);
		CloseHandle(childStdErrRead);
		CloseHandle(childStdInWrite);

		stdoutText = stdOutThreadInfo.output;
		stderrText = stdErrThreadInfo.output;
		resultCode = childExitCode;

		return kOSError_None;
#else

		args[argCount] = nullptr;

		int stdoutPipe[2];
		int stderrPipe[2];

		if (pipe(stdoutPipe) == -1)
			return -1;

		if (pipe(stderrPipe) == -1)
			return -1;

		pid_t childProcessID = fork();

		if (childProcessID == 0)
		{
			// We are the child process

			dup2(stdoutPipe[1], STDOUT_FILENO);
			dup2(stderrPipe[1], STDERR_FILENO);

			close(stdoutPipe[0]);
			close(stdoutPipe[1]);

			close(stderrPipe[0]);
			close(stderrPipe[1]);

			execv(args[0], args);

			// Failed to `exec`!
			fprintf(stderr, "`execv` failed\n");
			exit(1);
		}
		else
		{
			close(stdoutPipe[1]);
			close(stderrPipe[1]);

			// go ahead and try to read

			int stdoutFD = stdoutPipe[0];
			int stderrFD = stderrPipe[0];

			int maxFD = stdoutFD;
			if (stderrFD > maxFD) maxFD = stderrFD;

			fd_set readSet;
			int result;

			int remainingCount = 2;
			while (remainingCount)
			{
				FD_ZERO(&readSet);
				FD_SET(stdoutFD, &readSet);
				FD_SET(stderrFD, &readSet);


				result = select(maxFD + 1, &readSet, NULL, NULL, NULL);

				if (result == -1 || errno == EINTR)
					continue;

				enum { kBufferSize = 1024 };
				char buffer[kBufferSize];

				if (FD_ISSET(stdoutFD, &readSet))
				{
					auto count = read(stdoutFD, buffer, kBufferSize);
					if (count == 0)
						remainingCount--;

					stdoutText.append(
						StringSpan(
							buffer,
							buffer + count));
				}

				if (FD_ISSET(stderrFD, &readSet))
				{
					auto count = read(stderrFD, buffer, kBufferSize);
					if (count == 0)
						remainingCount--;

					stderrText.append(
						StringSpan(
							buffer,
							buffer + count));
				}
			}

			int childStatus = 0;
			for (;;)
			{
				pid_t terminatedProcessID = wait(&childStatus);
				if (terminatedProcessID == childProcessID)
				{
					return childStatus;
				}

				// ?
			}
		}
#endif
	}
}
