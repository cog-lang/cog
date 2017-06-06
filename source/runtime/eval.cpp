// eval.cpp
#include "runtime.h"

// Includes needed for platform/OS interface
#include <dirent.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <libproc.h>
#include <mach-o/dyld.h>

#include <dlfcn.h>

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
		args[argCount++] = (char*) arg;
	}

	int spawnAndWait()
	{
		args[argCount] = nullptr;

		pid_t childProcessID = fork();

		if(childProcessID == 0)
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
	}
};

//

typedef int (*DynamicFunc)();

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

	DynamicFunc func = (DynamicFunc) symbol;

	func();

	dlclose(dynamicLibraryHandle);
}

} // cog
