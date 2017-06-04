// token.h
#ifndef COGC_TOKEN_H_INCLUDED
#define COGC_TOKEN_H_INCLUDED

#include "source.h"

#include <stdint.h>

namespace cogc {

typedef uint16_t TokenFlags;

enum TokenFlag : TokenFlags
{
	kTokenFlag_AtStartOfLine 	= 1 << 0,
	kTokenFlag_AfterSpace 		= 1 << 1,
};

enum TokenCode : int16_t
{
#define TOKEN(name, desc) kTokenCode_##name,
#include "tokendefs.h"
};

struct Token
{
	uintptr_t 	rawLoc;
	uintptr_t 	rawSize;
	void*		rawData;
	TokenCode 	code;
	TokenFlags 	flags;
	uint32_t 	advance;

	SourceLoc getLoc() const { return SourceLoc(rawLoc); }
};

struct TokenSpan
{
	Token const* begin_;
	Token const* end_;

	TokenSpan()
		: begin_(0)
		, end_(0)
	{}

	TokenSpan(Token const* begin, Token const* end)
		: begin_(begin)
		, end_(end)
	{}
};

char const* getTokenName(TokenCode code);

}

#endif
