
#include "check.h"
#include "emit.h"
#include "session.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <Windows.h>
#endif

using namespace cogc;

static void parseCommandLine(
	Session*	session,
	int*		ioArgc,
	char**		argv)
{
	char** argCursor = argv;
	char** argEnd = argv + *ioArgc;

	char** writeCursor = argv;

	if (argCursor != argEnd)
	{
		// consume app name
		argCursor++;
	}

	while(argCursor != argEnd)
	{
		char* arg = *argCursor++;
		if (arg[0] == '-' && arg[1] != 0)
		{
			if (strcmp(arg, "--") == 0)
			{
				// end of options
				while (argCursor != argEnd)
				{
					*writeCursor++ = *argCursor++;
				}
				break;
			}
			else if (strcmp(arg, "-m") == 0)
			{
				if (argCursor == argEnd)
				{
					fprintf(stderr, "command line: error: expected an argument after '-m' option\n");
				}
				else
				{
					char const* valArg = *argCursor++;
					setModulePath(session, TerminatedStringSpan(valArg));
				}
			}
			else if (strcmp(arg, "-o") == 0)
			{
				if (argCursor == argEnd)
				{
					fprintf(stderr, "command line: error: expected an argument after '-o' option\n");
				}
				else
				{
					char const* valArg = *argCursor++;
					// setOutputPath(session, valArg);
				}
			}
		}
		else
		{
			*writeCursor++ = arg;
		}
	}

	*ioArgc = writeCursor - argv;

    // Do some implicit options stuff..

    if(!getModuleName(session))
    {
        if(*ioArgc == 1)
        {
            // exactly one input file, so use it to infer the module name...
            StringSpan name = TerminatedStringSpan(argv[0]);

            // If it ends with `.cog`, then strip that off
            name.trimFromEnd(TerminatedStringSpan(".cog"));

            setModulePath(session, name);
        }
        else
        {
            // error!
            fprintf(stderr, "module name must be specified when using more than one input file");
            exit(1);
        }
    }
}

int main(
    int argc,
    char** argv)
{
    Session* session = createSession();

	// TODO: parse command line options
	parseCommandLine(session, &argc, argv);

    for(int ii = 0; ii < argc; ++ii)
    {
		char const* path = argv[ii];
#if 0

		// TODO: Unicode!
		WIN32_FIND_DATAA findData;
		HANDLE findHandle = FindFirstFileA(path, &findData);
		if (findHandle == INVALID_HANDLE_VALUE)
		{
			fprintf(stderr, "could not find file '%s'\n", path);
		}

		for (;;)
		{
			char const* path = findData.cFileName;
#endif

//			fprintf(stderr, "FILE: %s\n", path);
			loadSourceFile(
				session,
				TerminatedStringSpan(path));

#if 0

			if (!FindNextFileA(findHandle, &findData))
				break;
		}
#endif

	}

    if(getErrorCount(session) > 0)
        return 1;

    checkModule(session);

    if(getErrorCount(session) > 0)
        return 1;

    // TODO: emit code
    emitModule(session);

    return 0;
}
