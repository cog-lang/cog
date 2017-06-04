// diagnostic.cpp
#include "diagnostic.h"

#include "format.h"
#include "name.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

namespace cogc {

DiagnosticArg::DiagnosticArg(
	int val)
	: flavor(kFlavor_Int)
{
	intVal = val;
}

DiagnosticArg::DiagnosticArg(
	TokenCode val)
	: flavor(kFlavor_TokenCode)
{
	tokenCodeVal = val;
}

DiagnosticArg::DiagnosticArg(
	Name* val)
	: flavor(kFlavor_Name)
{
	nameVal = val;
}

DiagnosticArg::DiagnosticArg(
	StringSpan text)
	: flavor(kFlavor_StringSpan)
{
	stringSpanVal = text;
}

DiagnosticArg::DiagnosticArg(
	TerminatedStringSpan text)
	: flavor(kFlavor_StringSpan)
{
	stringSpanVal = text;
}

DiagnosticArg::DiagnosticArg(
	char const* text)
	: flavor(kFlavor_StringSpan)
{
	stringSpanVal = TerminatedStringSpan(text);
}

static const char* kSeverityNames[] =
{
	"note",
	"warning",
	"error",
	"fatal",
};

struct DiagnosticInfo
{
	Severity 	severity;
	char const*	message;
};

static const DiagnosticInfo kDiagnostics[] =
{
#define DIAGNOSTIC(severity, id, msg) \
	{ kSeverity_##severity, msg },
#include "diagnosticdefs.h"
};

static void printDiagnosticArg(
	DiagnosticArg const*	arg)
{
	switch(arg->flavor)
	{
	case DiagnosticArg::kFlavor_Int:
		fprintf(stderr, "%d", arg->intVal);
		break;

	case DiagnosticArg::kFlavor_TokenCode:
		fprintf(stderr, "%s", getTokenName(arg->tokenCodeVal));
		break;
		
	case DiagnosticArg::kFlavor_Name:
		{
			StringSpan text = getText(arg->nameVal);
			fwrite(text.begin, 1, text.end-text.begin, stderr);
		}
		break;
		
	case DiagnosticArg::kFlavor_StringSpan:
		{
			StringSpan text = arg->stringSpanVal;
			fwrite(text.begin, 1, text.end-text.begin, stderr);
		}
		break;
						
	default:
		assert(!"unimplemented");
		break;
	}
}

void diagnoseImpl(
	DiagnosticSink*				sink,
	SourceLoc 					loc,
	DiagnosticID 				id,
	int 						argCount,
	DiagnosticArg const* const* args)
{
	DiagnosticInfo const& info = kDiagnostics[id];

	ExpandedSourceLoc expandedLoc = expandLoc(sink->session, loc);

	fprintf(stderr, "%s(%d,%d): %s: ",
			expandedLoc.file.begin, expandedLoc.line, expandedLoc.column,
			kSeverityNames[info.severity]);

	char const* cursor = info.message;
	while(*cursor)
	{
		int c = *cursor++;
		if(c != '$')
		{
			fputc(c, stderr);
		}
		else
		{
			int d = *cursor++;
			switch(d)
			{
			case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9':
				{
					int index = d - '0';
					printDiagnosticArg(args[index]);
				}
				break;

			default:
				break;
			}
		}
	}

	fprintf(stderr, "\n");

    if(info.severity >= kSeverity_Error)
    {
        sink->errorCount++;
        if(info.severity >= kSeverity_Fatal)
        {
        	assert(!"fatal");
            exit(1);
        }

		if (sink->errorCount >= 100)
		{
			// TOO many errors!
			exit(1);
		}
    }
}

}