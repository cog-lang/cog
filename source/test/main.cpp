// main.cpp

// A test-runner program for Cog.

#include "runtime/runtime.h"

#include <stdio.h>
#include <string.h>

enum OSError
{
	kOSError_None = 0,
	kOSError_InvalidArgument,
	kOSError_OperationFailed,
	kOSError_FileNotFound,
};

#ifdef WIN32

#include <Windows.h>

using namespace cog;

struct DirectoryContents;

struct DirectoryEntry
{
	HANDLE WINAPI FindFirstFile(
		_In_  LPCTSTR           lpFileName,
		_Out_ LPWIN32_FIND_DATA lpFindFileData
	);

	DirectoryContents*	directory = nullptr;
	WIN32_FIND_DATAA	findData;

	// Get the name of the item
	TerminatedStringSpan getName()
	{
		return TerminatedStringSpan(findData.cFileName);
	}

	// Get the path of the item (this includes
	// the parent directory)
	String getPath();


};

struct DirectoryContents
{
	// The path we were give
	char const*	path;

	// The current find-in-files session
	HANDLE findHandle;
	WIN32_FIND_DATAA firstFileData;

	DirectoryContents(
		char const*	path)
		: path(path)
	{
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
	}

	~DirectoryContents()
	{
		if (findHandle)
			FindClose(findHandle);
	}

	TerminatedStringSpan getPath()
	{
		return TerminatedStringSpan(path);
	}

	struct Iterator
	{
		DirectoryEntry 		entry;
		UInt32				counter;

		Iterator(
			DirectoryContents* outer)
		{
			entry.directory = outer;
			entry.findData = outer->firstFileData;
			counter = 0;
		}

		Iterator()
		{
			entry.directory = nullptr;
			counter = 0;
		}

		DirectoryEntry& operator*()
		{
			return entry;
		}

		bool operator!=(Iterator const& other)
		{
			return entry.directory != other.entry.directory
				|| counter != other.counter;
		}

		void operator++()
		{
			if (!entry.directory)
				return;

			for (;;)
			{
				BOOL result = FindNextFileA(entry.directory->findHandle, &entry.findData);
				if (!result)
				{
					entry.directory = nullptr;
					counter = 0;
					return;
				}

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
	};

	Iterator begin()
	{
		if (!findHandle) return end();

		Iterator iterator(this);
		++iterator;
		return iterator;
	}

	Iterator end()
	{
		return Iterator();
	}
};

String DirectoryEntry::getPath()
{
	String result = directory->getPath();
	result.append('/');
	result.append(getName());
	return result;
}

DirectoryContents getFilesInDirectory(
	char const* path)
{
	return DirectoryContents(path);
}

//

static String getExecutableDirectoryPath()
{
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
}


//

enum
{
	kMaxArgs = 16,
};

struct ProcessSpawner
{
	String executableName;

	String commandLine;
	int argCount = 0;

	String stdoutText;
	String stderrText;
	int resultCode = 0;

	ProcessSpawner(char const* appName)
	{
		executableName = TerminatedStringSpan(appName);
		addArg(appName);
	}

	void addArg(char const* arg)
	{
		if (argCount != 0)
		{
			commandLine.append(" ");
		}
		commandLine.append(arg);
		argCount++;
	}

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

	int spawnAndWait()
	{
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

		bool isExecutablePath = false;

		fprintf(stderr, "cogc-test: '%s'\n",
			commandLine.asSpan().begin);

		// `CreateProcess` requires write access to this, for some reason...
		BOOL success = CreateProcessA(
			isExecutablePath ? executableName.asSpan().begin : nullptr,
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
	}
};

#else
#include <dirent.h>
#include <sys/types.h>

#include <unistd.h>
#include <libproc.h>

#include <mach-o/dyld.h>

#include <errno.h>

using namespace cog;

struct DirectoryContents;

struct DirectoryEntry
{
	DirectoryContents*	directory 	= nullptr;
	struct dirent*		entry 		= nullptr;

	// Get the name of the item
	TerminatedStringSpan getName()
	{
		return TerminatedStringSpan(entry->d_name);
	}

	// Get the path of the item (this includes
	// the parent directory)
	String getPath();


};

struct DirectoryContents
{
	// The path we were give
	char const*	path;

	// The directory we have open
	DIR*	directory;

	DirectoryContents(
		char const*	path)
		: path(path)
	{
		directory = opendir(path);
		if(!directory)
		{
			fprintf(stderr, "failed to open '%s'\n", path);
		}
	}

	~DirectoryContents()
	{
		if(directory)
			closedir(directory);
	}

	TerminatedStringSpan getPath()
	{
		return TerminatedStringSpan(path);
	}

	struct Iterator
	{
		DirectoryEntry 		entry;

		Iterator(
			DirectoryContents* outer)
		{
			entry.directory = outer;
		}

		DirectoryEntry& operator*()
		{
			return entry;
		}

		bool operator!=(Iterator const& other)
		{
			return entry.entry != other.entry.entry;
		}

		void operator++()
		{
			for(;;)
			{
				entry.entry = readdir(entry.directory->directory);
				if(!entry.entry)
					return;

				// We need to skip entries that are named
				// `.` or `..` since these represent
				// the directory and its parent, respectively
				char const* cursor = entry.entry->d_name;
				if(*cursor == '.')
				{
					cursor++;
					if(*cursor == '.')
						cursor++;

					if(*cursor == 0)
						continue;
				}

				// The default case is to just exit
				return;
			}
		}
	};

	Iterator begin()
	{
		if(!directory) return end();

		Iterator iterator(this);
		++iterator;
		return iterator;
	}

	Iterator end()
	{
		return Iterator(this);
	}
};

String DirectoryEntry::getPath()
{
	String result = directory->getPath();
	result.append('/');
	result.append(getName());
	return result;
}

DirectoryContents getFilesInDirectory(
	char const* path)
{
	return DirectoryContents(path);
}

//

static String getExecutableDirectoryPath()
{
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
    if(ret <= 0)
    {

    }

#else
    uint32_t size = kBufferSize;
    int ret = _NSGetExecutablePath(resultBuffer, &size);
//    fprintf(stderr, "EXEC_READ: %d\n", ret);

    char realBuffer[PATH_MAX];
    realpath(resultBuffer, realBuffer);

    if(char* lastSlash = strrchr(realBuffer, '/'))
    {
    	lastSlash[1] = 0;
    }

#endif

	return String(TerminatedStringSpan(realBuffer));
}


//

enum
{
	kMaxArgs = 16,
};

struct ProcessSpawner
{
	char* args[kMaxArgs];
	int argCount = 0;

	String stdoutText;
	String stderrText;

	ProcessSpawner(char const* appName)
	{
		addArg(appName);
	}

	void addArg(char const* arg)
	{
		args[argCount++] = (char*) arg;
	}

	int spawnAndWait()
	{
		args[argCount] = nullptr;

		int stdoutPipe[2];
		int stderrPipe[2];

		if(pipe(stdoutPipe) == -1)
			return -1;

		if(pipe(stderrPipe) == -1)
			return -1;

		pid_t childProcessID = fork();

		if(childProcessID == 0)
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
			if(stderrFD > maxFD) maxFD = stderrFD;

			fd_set readSet;
			int result;

			int remainingCount = 2;
			while(remainingCount)
			{
				FD_ZERO(&readSet);
				FD_SET(stdoutFD, &readSet);
				FD_SET(stderrFD, &readSet);


				result = select(maxFD + 1, &readSet, NULL, NULL, NULL);

				if(result == -1 || errno == EINTR)
					continue;

				enum { kBufferSize = 1024 };
				char buffer[kBufferSize];

				if(FD_ISSET(stdoutFD, &readSet))
				{
					auto count = read(stdoutFD, buffer, kBufferSize);
					if(count == 0)
						remainingCount--;

					stdoutText.append(
						StringSpan(
							buffer,
							buffer + count));
				}

				if(FD_ISSET(stderrFD, &readSet))
				{
					auto count = read(stderrFD, buffer, kBufferSize);
					if(count == 0)
						remainingCount--;

					stderrText.append(
						StringSpan(
							buffer,
							buffer + count));
				}
			}



#if 0

int socket_fd, result;
fd_set readset;
...
/* Socket has been created and connected to the other party */
...

/* Call select() */
do {
   FD_ZERO(&readset);
   FD_SET(socket_fd, &readset);
   result = select(socket_fd + 1, &readset, NULL, NULL, NULL);
} while (result == -1 && errno == EINTR);

if (result > 0) {
   if (FD_ISSET(socket_fd, &readset)) {
      /* The socket_fd has data available to be read */
      result = recv(socket_fd, some_buffer, some_length, 0);
      if (result == 0) {
         /* This means the other side closed the socket */
         close(socket_fd);
      }
      else {
         /* I leave this part to your own implementation */
      }
   }
}
else if (result < 0) {
   /* An error ocurred, just print it to stdout */
   printf("Error on select(): %s\", strerror(errno));
}


#endif


			int childStatus = 0;
			for(;;)
			{
				pid_t terminatedProcessID = wait(&childStatus);
				if(terminatedProcessID == childProcessID)
				{
					return childStatus;
				}

				// ?
			}
		}


		#if 0


    int nbytes = read(link[0], foo, sizeof(foo));
    printf("Output: (%.*s)\n", nbytes, foo);
    wait(NULL);

  }
  return 0;
}		
		#endif
	}
};

#endif


//

String gExeutableDirectoryPath;

static String getExpectedOutput(
	char const* basePath)
{
	String path;
	path.append(basePath);
	path.append(".expected");

	FILE* file = fopen(path.asSpan().begin, "r");
	if(!file)
	{
		return TerminatedStringSpan(
			"result: 0\nstdout: {\n}\nstderr: {\n}\n");
	}

	enum { kBufferSize = 1024 };
	char buffer[kBufferSize];

	String result;
	while(!feof(file))
	{
		auto count = fread(buffer, 1, kBufferSize, file);
		result.append(
			StringSpan(
				buffer,
				buffer + count));
	}

	fclose(file);
	return result;
}

static int testCount = 0;
static int passedCount = 0;

static void doTest(
	char const* path)
{
	testCount++;

	// need to `exec` the compiler/evaluator on
	// the given file and capture the results

	String appPath = gExeutableDirectoryPath + "cogc";

	ProcessSpawner spawner(appPath.asSpan().begin);
	spawner.addArg("-eval");
	spawner.addArg(path);

	int result = spawner.spawnAndWait();

	char resultName[16];
	sprintf(resultName, "%d", result);

	String actualOutput;
	actualOutput.append("result: ");
	actualOutput.append(resultName);
	actualOutput.append("\nstdout: {\n");
	actualOutput.append(spawner.stdoutText);
	actualOutput.append("}\nstderr: {\n");
	actualOutput.append(spawner.stderrText);
	actualOutput.append("}\n");

	String expectedOutput = getExpectedOutput(path);

	if(actualOutput == expectedOutput)
	{
		fprintf(stderr, "passed: %s\n", path);

		passedCount++;
		return;
	}

	fprintf(stderr, "FAILED: %s\n", path);

	String actualOutputPath;
	actualOutputPath.append(path);
	actualOutputPath.append(".actual");

	FILE* file = fopen(actualOutputPath.asSpan().begin, "w");
	fprintf(file, "%s", actualOutput.asSpan().begin);
	fclose(file);
}

static bool endsWith(char const* text, char const* suffix)
{
	return TerminatedStringSpan(text).endsWith(
		TerminatedStringSpan(suffix));
}

static void maybeDoTest(
	char const* path)
{
	if(endsWith(path, ".cog"))
	{
		doTest(path);
	}
}

static void enumerateTestsInDirectory(
	char const* path)
{
	for(auto entry : getFilesInDirectory(path))
	{
		maybeDoTest(entry.getPath().asSpan().begin);
	}
}

int main(
	int argc,
	char** argv)
{
	gExeutableDirectoryPath = getExecutableDirectoryPath();

//	fprintf(stderr, "PATH: '%s'\n", gExeutableDirectoryPath.asSpan().begin);

	// enumerate files in test directory

	// for each test file, extract tests to run,
	// and then run them and compare to expected output

	enumerateTestsInDirectory("tests");

}
