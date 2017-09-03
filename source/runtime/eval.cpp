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

		compilerSpawner.addArg("/DLL");

		String outArg;
		outArg.append("/OUT:");
		outArg.append(dynamicLibraryPath);
		compilerSpawner.addArg(outArg.asSpan().begin);

		int err = compilerSpawner.spawnAndWait();
		if (err)
			return;

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
