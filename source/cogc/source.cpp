// source.cpp
#include "source.h"

#include "session.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

namespace cogc {

SourceLoc::SourceLoc()
	: raw(0)
{}

SourceLoc::SourceLoc(uintptr_t raw)
	: raw(raw)
{}

SourceFile* getSourceFile(
	Session* 				session,
	TerminatedStringSpan 	path)
{
	// TODO: dedupe files as needed

	// Check that we can open the file for reading
	FILE* file = fopen(path.begin, "rb");
	if(!file)
	{
		// TODO: error message!

		diagnose(&session->sink, SourceLoc(0), kDiagnostic_unimplemented, path);

		return 0;
	}

	// Check the size of the file
	fseek(file, 0, SEEK_END);
	size_t fileSize = ftell(file);
	fseek(file, 0, SEEK_SET);


	// Allocate storage for file entry,
	// text, and path
	size_t pathSize = path.end - path.begin;

	SourceFile* sourceFile = (SourceFile*) malloc(
		sizeof(SourceFile)
		+ pathSize + 1
		+ fileSize + 1);
    char* pathData = (char*)(sourceFile + 1);
	char* fileData = pathData + pathSize + 1;

	memcpy(pathData, path.begin, pathSize);
	pathData[pathSize] = 0;

	fread(fileData, fileSize, 1, file);
    fclose(file);
	fileData[fileSize] = 0;


	sourceFile->path = TerminatedStringSpan(pathData, pathData + pathSize);
	sourceFile->text = TerminatedStringSpan(fileData, fileData + fileSize);
	sourceFile->firstLoc.raw = session->lastSourceLoc + 1;
	sourceFile->lastLoc.raw = sourceFile->firstLoc.raw + fileSize + 1;

	session->lastSourceLoc = sourceFile->lastLoc.raw;

	sourceFile->next = session->sourceFiles;
	session->sourceFiles = sourceFile;

	return sourceFile;
}

ExpandedSourceLoc expandLoc(
	Session*	session,
	SourceLoc 	loc)
{
	ExpandedSourceLoc expanded;
	if(loc.raw == 0)
	{
		expanded.file = TerminatedStringSpan("");
		expanded.line = 0;
		expanded.column = 0;
		return expanded;
	}

	// TODO: faster implementaton of all of this

	for(auto f = session->sourceFiles; f; f = f->next)
	{
		#if 0
		fprintf(stderr, "loc:%d first:%d last:%d\n",
			(int) loc.raw,
			(int) f->firstLoc.raw,
			(int) f->lastLoc.raw);
		#endif

		if(loc.raw < f->firstLoc.raw)
			continue;

		if(loc.raw > f->lastLoc.raw)
			continue;

		int line = 1;
		int column = 1;
		char const* cursor = f->text.begin;
		uintptr_t offset = loc.raw - f->firstLoc.raw;
		for(uintptr_t ii = 0; ii < offset; ++ii)
		{
			int c = *cursor;
			switch(c)
			{
			case '\r': case '\n':
				{
					int d = cursor[1];
					if((c ^ d) == ('\r' ^ '\n'))
					{
                        ii++;
						cursor++;
					}
					line++;
					column = 1;
				}
				break;

#if 0
            case '\t':
                {
                    column = (((column - 1) + 3) & ~3) + 1;
                }
                break;
#endif

			default:
				column++;
				break;
			}
			cursor++;
		}

		expanded.file = f->path;
		expanded.line = line;
		expanded.column = column;
		return expanded;
	}

	// internal error
	assert(false);
	return expanded;
}

}