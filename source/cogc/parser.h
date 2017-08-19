// parser.h
#ifndef COGC_PARSER_H_INCLUDED
#define COGC_PARSER_H_INCLUDED

namespace cogc {

struct FileDecl;
struct Session;
struct SourceFile;

void parseFile(
	Session*	session,
	SourceFile*	file);

}

#endif
