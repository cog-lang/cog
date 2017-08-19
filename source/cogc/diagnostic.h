// diagnostic.h
#ifndef COGC_DIAGNOSTIC_H_INCLUDED
#define COGC_DIAGNOSTIC_H_INCLUDED

#include "source.h"
#include "syntax.h"
#include "token.h"

namespace cogc {

struct Arg;
struct Session;
struct Name;

enum Severity
{
	kSeverity_Note,
	kSeverity_Warning,
	kSeverity_Error,
	kSeverity_Fatal,
};

enum DiagnosticID
{
#define DIAGNOSTIC(severity, id, msg) \
	kDiagnostic_##id,
#include "diagnosticdefs.h"
};

struct DiagnosticSink
{
	Session* session;
    int     errorCount;
};

struct ArgTypeList
{
	Arg* args;

	ArgTypeList(Arg* args)
		: args(args)
	{}
};

struct DiagnosticArg
{
	enum Flavor
	{
		kFlavor_Int,
		kFlavor_TokenCode,
		kFlavor_Name,
		kFlavor_StringSpan,
		kFlavor_Type,
		kFlavor_DeclRef,
		kFlavor_ArgTypeList,
	};

	DiagnosticArg(
		int val);

	DiagnosticArg(
		TokenCode val);

	DiagnosticArg(
		Name* name);

	DiagnosticArg(
		StringSpan text);
	DiagnosticArg(
		TerminatedStringSpan text);
	DiagnosticArg(
		char const* text);

	Flavor flavor;
	union
	{
		int 		    intVal;
		TokenCode 	    tokenCodeVal;
		Name*		    nameVal;
		StringSpanData 	stringSpanVal;
	};
};

void diagnoseImpl(
	DiagnosticSink*				sink,
	SourceLoc 					loc,
	DiagnosticID 				id,
	int 						argCount,
	DiagnosticArg const* const* args);

// HACK
#define diagnose diagnoseX

inline void diagnose(
	DiagnosticSink*	sink,
	SourceLoc 		loc,
	DiagnosticID 	id)
{
	diagnoseImpl(sink, loc, id, 0, 0);
}

inline void diagnose(
	DiagnosticSink*			sink,
	SourceLoc 				loc,
	DiagnosticID 			id,
	DiagnosticArg const&	arg0)
{
	DiagnosticArg const* args[] = { &arg0 };
	diagnoseImpl(sink, loc, id, 1, args);	
}

inline void diagnose(
	DiagnosticSink*			sink,
	SourceLoc 				loc,
	DiagnosticID 			id,
	DiagnosticArg const&	arg0,
	DiagnosticArg const&	arg1)
{
	DiagnosticArg const* args[] = { &arg0, &arg1 };
	diagnoseImpl(sink, loc, id, 2, args);	
}

}

#endif
