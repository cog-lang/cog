// source.h
#ifndef COGC_SOURCE_H_INCLUDED
#define COGC_SOURCE_H_INCLUDED

#include "string.h"

#include <stdint.h>

// Representaton of source files, locations, etc.

namespace cogc {

struct Session;

//

struct SourceLoc
{
	SourceLoc();

	SourceLoc(uintptr_t raw);

	uintptr_t raw;
};

struct ExpandedSourceLoc
{
	TerminatedStringSpan 	file;
	int 					line;
	int 					column;
};

struct SourceFile
{
	// next file in the list of loaded files
	SourceFile* next;

	// path to the file
	TerminatedStringSpan path;

	// null-terminated source of the file
	TerminatedStringSpan text;

	// starting source location for the file
	SourceLoc firstLoc;
	SourceLoc lastLoc;
};

SourceFile* getSourceFile(
	Session* 				session,
	TerminatedStringSpan 	path);

ExpandedSourceLoc expandLoc(
	Session*	session,
	SourceLoc 	loc);

}

#endif
