// main.cpp

// A test-runner program for Cog.

#include "runtime/runtime.h"

#include <dirent.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>

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
