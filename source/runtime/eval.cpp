// eval.cpp

#include "runtime.h"
#include "process.h"

// Includes needed for platform/OS interface

#include <stdio.h>
#include <string.h>

#ifdef _WIN32

#include <Windows.h>

#else

// TODO: These are currently the right ones for MacOS

#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>
#include <libproc.h>
#include <mach-o/dyld.h>
#include <dlfcn.h>

#endif

namespace cog
{

	//

#if 0

	enum
	{
		kMaxArgs = 64,
	};

	struct ProcessSpawner
	{
		char const* executablePath = nullptr;
		char* args[kMaxArgs];
		int argCount = 0;

		ProcessSpawner(char const* appName)
		{
			addArg(appName);
		}

		ProcessSpawner(char const* appName, char const* executablePath)
			: executablePath(executablePath)
		{
			addArg(appName);
		}

		void addArg(char const* arg)
		{
			args[argCount++] = (char*)arg;
		}

		int spawnAndWait();
	};

#endif

	//

	typedef int(*DynamicFunc)();

	//

#if _WIN32




	// Try to find VS install path

	String tryToFindVisualStudioPath()
	{
		static const struct RegistryKeyInfo
		{
			char const* key;

		} kRegistryKeys[] =
		{
			{ "SOFTWARE\\Microsoft\\VisualStudio\\SxS\\VC7", },
		};
		static const int kRegistryKeyCount = sizeof(kRegistryKeys) / sizeof(kRegistryKeys[0]);


		static const struct VersionInfo
		{
			char const* version;
		} kVersions[]
		{
			{ "15.0" },
			{ "14.0" },
			{ "12.0" },
			{ "11.0" },
			{ "10.0" },
			{ "9.0" },
			{ "8.0" },
		};
		static const int kVersionCount = sizeof(kVersions) / sizeof(kVersions[0]);

		char pathValue[MAX_PATH];
		DWORD pathSize = MAX_PATH;

		for (int ii = 0; ii < kRegistryKeyCount; ++ii)
		for (int jj = 0; jj < kVersionCount; ++jj)
		{
			auto& keyInfo = kRegistryKeys[ii];
			auto& versionInfo = kVersions[jj];

			HKEY registryKeyHandle;
			LONG keyResult = RegOpenKeyExA(
				HKEY_LOCAL_MACHINE,
				keyInfo.key,
				0,
				KEY_READ | KEY_WOW64_32KEY,
				&registryKeyHandle);

			LONG versionResult = RegQueryValueExA(
				registryKeyHandle,
				versionInfo.version,
				nullptr,
				nullptr,
				(LPBYTE)pathValue,
				&pathSize);
			if (versionResult == ERROR_SUCCESS)
			{
				// We found it!
				RegCloseKey(registryKeyHandle);

				return TerminatedStringSpan(pathValue);
			}

			RegCloseKey(registryKeyHandle);
		}
	}

#if 0
	int ProcessSpawner::spawnAndWait()
	{
		args[argCount] = nullptr;

		char commandLine[16384];
		char* cursor = commandLine;
		for (int aa = 0; aa < argCount; ++aa)
		{
			cursor += sprintf(cursor, "%s ", args[aa]);
		}

		PROCESS_INFORMATION processInfo;
		ZeroMemory(&processInfo, sizeof(processInfo));

		STARTUPINFOA startupInfo;
		ZeroMemory(&startupInfo, sizeof(startupInfo));
		startupInfo.cb = sizeof(startupInfo);

		CreateProcessA(
			executablePath ? executablePath : nullptr,
			commandLine,
			nullptr,
			nullptr,
			true,
			0,
			nullptr,
			nullptr,
			&startupInfo,
			&processInfo);

		WaitForSingleObject(processInfo.hProcess, INFINITE);

		CloseHandle(processInfo.hProcess);
		CloseHandle(processInfo.hThread);

		return 0;
	}
#endif

	void loadAndEval(char const* path)
	{
		String visualStudioPath = tryToFindVisualStudioPath();
		if (!visualStudioPath.asSpan().getLength())
			return;

		String executablePath;
		executablePath.append(visualStudioPath);
		executablePath.append("bin/cl.exe");

		String vcIncludePath;
		vcIncludePath.append("\"");
		vcIncludePath.append(visualStudioPath);
		vcIncludePath.append("include");
		vcIncludePath.append("\"");

		String vcLibPath;
		vcLibPath.append("/LIBPATH:\"");
		vcLibPath.append(visualStudioPath);
		vcLibPath.append("lib");
		vcLibPath.append("\"");

		char const* dynamicLibraryPath = "cog-eval.dll";

		ProcessSpawner compilerSpawner("cl", executablePath.asSpan().begin);

		compilerSpawner.addArg("/GS");
		compilerSpawner.addArg("/MDd");

		compilerSpawner.addArg("/I");
		compilerSpawner.addArg(".");

		compilerSpawner.addArg("/I");
		compilerSpawner.addArg("source");

		compilerSpawner.addArg("/I");
		compilerSpawner.addArg(vcIncludePath.asSpan().begin);

		compilerSpawner.addArg("/I");
		compilerSpawner.addArg("\"C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.14393.0\\ucrt\"");

		compilerSpawner.addArg(path);

		compilerSpawner.addArg("/link");

		compilerSpawner.addArg(vcLibPath.asSpan().begin);

		compilerSpawner.addArg("/LIBPATH:\"C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.14393.0\\ucrt\\x86\"");
		compilerSpawner.addArg("/LIBPATH:\"C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.14393.0\\um\\x86\"");

		compilerSpawner.addArg("/LIBPATH:.\\bin\\windows-x86\\Debug\\");
		compilerSpawner.addArg("runtime.lib");

		compilerSpawner.addArg("advapi32.lib");

		compilerSpawner.addArg("/DLL");
		compilerSpawner.addArg("/debug");


		String outArg;
		outArg.append("/OUT:");
		outArg.append(dynamicLibraryPath);
		compilerSpawner.addArg(outArg.asSpan().begin);

		int err = compilerSpawner.spawnAndWait();

//		fprintf(stderr, "%s",
//			compilerSpawner.stdoutText.asSpan().begin);

		if (err)
			return;

		auto dynamicLibraryHandle = LoadLibraryA(dynamicLibraryPath);

		DynamicFunc func = (DynamicFunc)GetProcAddress(dynamicLibraryHandle, "_cogc_eval");

		func();

		FreeLibrary(dynamicLibraryHandle);
	}

#else

	#if 0
	int ProcessSpawner::spawnAndWait()
	{
		args[argCount] = nullptr;

		pid_t childProcessID = fork();

		if (childProcessID == 0)
		{
			// We are the child process
			execvp(args[0], args);

			// Failed to `exec`!
			fprintf(stderr, "`execvp` failed\n");
			exit(1);
		}
		else
		{
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
	}
	#endif

	void loadAndEval(char const* path)
	{
		char const* dynamicLibraryPath = "cog-eval.so";

		ProcessSpawner compilerSpawner("clang++");

		compilerSpawner.addArg("-shared");
		compilerSpawner.addArg("-o");
		compilerSpawner.addArg(dynamicLibraryPath);

		compilerSpawner.addArg("-I");
		compilerSpawner.addArg(".");

		compilerSpawner.addArg("-I");
		compilerSpawner.addArg("source");

		compilerSpawner.addArg("-std=c++11");
		compilerSpawner.addArg("-Wno-writable-strings");
		compilerSpawner.addArg("-g");

		compilerSpawner.addArg(path);

		compilerSpawner.addArg("bin/cog.so");

		compilerSpawner.spawnAndWait();

//		fprintf(stderr, "RESULT:%d\n", compilerSpawner.resultCode);
//		fprintf(stderr, "STDOUT:{{{%s}}}\n", compilerSpawner.stdoutText.asSpan().begin);
//		fprintf(stderr, "STDERR:{{{%s}}}\n", compilerSpawner.stderrText.asSpan().begin);

		void* dynamicLibraryHandle = dlopen(dynamicLibraryPath, 0);

		void* symbol = dlsym(dynamicLibraryHandle, "_cogc_eval");

		DynamicFunc func = (DynamicFunc)symbol;

		func();

		dlclose(dynamicLibraryHandle);
	}

#endif

// Putting thesehere for lack of a better place

void print(char const* val)
{
	fprintf(stdout, "%s", val);
}

void print(String val)
{
	fprintf(stdout, "%s", val.asSpan().begin);
}

void print(Int val)
{
	fprintf(stdout, "%lld", (long long) val);
}

void print(UInt val)
{
	fprintf(stdout, "%llu", (unsigned long long) val);
}



} // cog
