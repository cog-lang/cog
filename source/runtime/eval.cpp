// eval.cpp
#include "runtime.h"

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

	enum
	{
		kMaxArgs = 16,
	};

	struct ProcessSpawner
	{
		char* args[kMaxArgs];
		int argCount = 0;

		ProcessSpawner(char const* appName)
		{
			addArg(appName);
		}

		void addArg(char const* arg)
		{
			args[argCount++] = (char*)arg;
		}

		int spawnAndWait();
	};

	//

	typedef int(*DynamicFunc)();

	//

#if _WIN32

	int ProcessSpawner::spawnAndWait()
	{
		args[argCount] = nullptr;

		char commandLine[4096];
		char* cursor = commandLine;
		for (int aa = 0; aa < argCount; ++aa)
		{
			cursor += sprintf(cursor, "%s ", args[aa]);
		}

		PROCESS_INFORMATION processInfo;

		CreateProcessA(
			args[0],
			commandLine,
			nullptr,
			nullptr,
			true,
			0,
			nullptr,
			nullptr,
			nullptr,
			&processInfo);

		WaitForSingleObject(processInfo.hProcess, INFINITE);

		CloseHandle(processInfo.hProcess);
		CloseHandle(processInfo.hThread);

		return 0;
	}
	void loadAndEval(char const* path)
	{
		char const* dynamicLibraryPath = "cog-eval.dll";

		ProcessSpawner compilerSpawner("cl");

		compilerSpawner.addArg("/I");
		compilerSpawner.addArg(".");

		compilerSpawner.addArg("/I");
		compilerSpawner.addArg("source");

		compilerSpawner.addArg(path);

		compilerSpawner.addArg("/link");

		compilerSpawner.addArg("/DLL");

		compilerSpawner.addArg("/OUT:");
		compilerSpawner.addArg(dynamicLibraryPath);

		compilerSpawner.spawnAndWait();

		auto dynamicLibraryHandle = LoadLibraryA(dynamicLibraryPath);

		DynamicFunc func = (DynamicFunc)GetProcAddress(dynamicLibraryHandle, "_cogc_eval");

		func();

		FreeLibrary(dynamicLibraryHandle);
	}

#else
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

		compilerSpawner.spawnAndWait();

		void* dynamicLibraryHandle = dlopen(dynamicLibraryPath, 0);

		void* symbol = dlsym(dynamicLibraryHandle, "_cogc_eval");

		DynamicFunc func = (DynamicFunc)symbol;

		func();

		dlclose(dynamicLibraryHandle);
	}

#endif

} // cog
