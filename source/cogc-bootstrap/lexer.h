// lexer.h
#ifndef COGC_LEXER_H_INCLUDED
#define COGC_LEXER_H_INCLUDED

// Interface to the lexer

#include "token.h"

namespace cogc {

struct Session;
struct SourceFile;

TokenSpan lexTokens(
	Session*	session,
	SourceFile*	file);

}

#endif
