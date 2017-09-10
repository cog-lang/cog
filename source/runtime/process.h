// process.h
#pragma once

#include "runtime.h"
#include "string.h"

#ifdef WIN32
#include <Windows.h>
#else
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>
#include <libproc.h>
#include <mach-o/dyld.h>
#include <errno.h>
#endif

namespace cog
{

	enum OSError
	{
		kOSError_None = 0,
		kOSError_InvalidArgument,
		kOSError_OperationFailed,
		kOSError_FileNotFound,
	};

	struct DirectoryContents;

	struct DirectoryEntry
	{
		DirectoryContents*	directory = nullptr;
#ifdef WIN32
		WIN32_FIND_DATAA	findData;
#else
		struct dirent*		entry = nullptr;
#endif

		// Get the name of the item
		TerminatedStringSpan getName();

		// Get the path of the item (this includes
		// the parent directory)
		String getPath();
	};

	struct DirectoryContents
	{
		// The path we were give
		char const*	path;

#ifdef WIN32
		// The current find-in-files session
		HANDLE findHandle;
		WIN32_FIND_DATAA firstFileData;
#else
		// The directory we have open
		DIR*	directory;
#endif

		DirectoryContents(
			char const*	path);

		~DirectoryContents();

		TerminatedStringSpan getPath()
		{
			return TerminatedStringSpan(path);
		}

		struct Iterator
		{
			DirectoryEntry 		entry;
			UInt32				counter;

			Iterator(
				DirectoryContents* outer);

			Iterator();

			DirectoryEntry& operator*()
			{
				return entry;
			}

			bool operator!=(Iterator const& other)
			{
				return entry.directory != other.entry.directory
					|| counter != other.counter;
			}

			void operator++();
		};

		Iterator begin();

		Iterator end();
	};

	DirectoryContents getFilesInDirectory(
		char const* path);

	String getExecutableDirectoryPath();


	//

	struct ProcessSpawner
	{
		int argCount = 0;
		int resultCode = 0;

		String stdoutText;
		String stderrText;

#ifdef WIN32
		String executablePath;
		String commandLine;
#else
		Array<String> args;
#endif

		ProcessSpawner(char const* appName);
		ProcessSpawner(char const* appName, char const* executablePath);

		void addArg(char const* arg);

		int spawnAndWait();
	};



}
