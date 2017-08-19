// lexer.cpp
#include "lexer.h"

#include "diagnostic.h"
#include "name.h"
#include "session.h"
#include "source.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

namespace cogc {

struct Lexer
{
	Session*	session;
	SourceFile*	file;

	char const*	cursor;
	uintptr_t 	rawStartPtr;
	TokenFlags 	tokenFlags;
};

static void initializeLexer(
	Lexer*		lexer,
	Session*	session,
	SourceFile*	file)
{
	lexer->session 	= session;
	lexer->file 	= file;

	lexer->cursor = file->text.begin;
	lexer->tokenFlags =
		kTokenFlag_AtStartOfLine
		| kTokenFlag_AfterSpace;

	lexer->rawStartPtr = (uintptr_t)file->text.begin - file->firstLoc.raw;
}

static void finalizeLexer(
	Lexer*		lexer)
{
}

static DiagnosticSink* getSink(
	Lexer* lexer)
{
	return &lexer->session->sink;
}

static int peekByte(Lexer* lexer)
{
	return *lexer->cursor;
}

static int peekCodePoint(Lexer* lexer)
{
	// TODO: UTF-8 decoding
	return peekByte(lexer);
}

static SourceLoc peekLoc(Lexer* lexer)
{
	SourceLoc loc;
	loc.raw = (uintptr_t)lexer->cursor - lexer->rawStartPtr;
	return loc;
}

static void advanceByte(Lexer* lexer)
{
	assert(lexer->cursor != lexer->file->text.end);
	lexer->cursor++;
}

static bool isAlpha(int c)
{
	return ((c >= 'a') && (c <= 'z'))
		|| ((c >= 'A') && (c <= 'Z'))
		|| (c == '_');
}

static bool isDigit(int c)
{
	return (c >= '0') && (c <= '9');
}

static bool isAlphaNum(int c)
{
	return isAlpha(c) || isDigit(c);
}

static bool isOperatorChar(int c)
{
	return strchr("~!%^&*-+=|<>?/", c) != 0;
}

static bool isWhiteSpace(int c)
{
	return strchr(" \t", c) != 0;
}

static void lexDigits(
    Lexer* lexer,
    int     base)
{
    for(;;)
    {
        int c = peekByte(lexer);
        switch(c)
        {
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            advanceByte(lexer);
            continue;

        case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
            if(base > 10)
            {
                advanceByte(lexer);
                continue;
            }
            break;

        default:
            return;
        }
    }
}

static bool peekNumberExponentMarker(
    Lexer*  lexer,
    int     base)
{
    switch(peekByte(lexer))
    {
    case 'e': case 'E':
        return base == 10;

    case 'p': case 'P':
        return base == 16;

    default:
        return false;
    }
}

static TokenCode lexNumber(
    Lexer*  lexer,
    int     base)
{
    TokenCode code = kTokenCode_IntegerLiteral;

    // lex initial digits
    lexDigits(lexer, base);

    // optional fractional part
    if(peekByte(lexer) == '.')
    {
        advanceByte(lexer);
        code = kTokenCode_FloatingPointLiteral;
        lexDigits(lexer, base);
    }

    // optional exponent part
    if(peekNumberExponentMarker(lexer, base))
    {
        advanceByte(lexer);
        code = kTokenCode_FloatingPointLiteral;

        // optional sign for exponent
        switch(peekByte(lexer))
        {
        case '+': case '-':
            advanceByte(lexer);
            break;

        default:
            break;
        }

        // exponent digits
        lexDigits(lexer, base);
    }

    // TODO: allow any kind of suffix?

    return code;
}

static TokenCode lexIdentifier(
	Lexer*	lexer)
{
	for(;;)
	{
		int c = peekByte(lexer);
		if(!isAlphaNum(c))
			break;

		advanceByte(lexer);
	}
	return kTokenCode_Identifier;
}

static TokenCode lexOperator(
	Lexer*	lexer)
{
	for(;;)
	{
		int c = peekByte(lexer);
		if(!isOperatorChar(c))
			break;

		advanceByte(lexer);
	}
	return kTokenCode_InfixOperator;
}

static TokenCode lexLineComment(
	Lexer*	lexer)
{
	for(;;)
	{
		int c = peekByte(lexer);
		switch(c)
		{
		case '\r': case '\n': case 0:
			return kTokenCode_LineComment;

		default:
			advanceByte(lexer);
			break;
		}
	}
}

static TokenCode lexBlockComment(
	Lexer*	lexer)
{
	for(;;)
	{
		int c = peekByte(lexer);
		switch(c)
		{
		case 0:
			// end of file: emit an error!
			return kTokenCode_BlockComment;

		case '*':
			advanceByte(lexer);
			switch(peekByte(lexer))
			{
			case '/':
				advanceByte(lexer);
				return kTokenCode_BlockComment;
			default:
				break;
			}
			break;

		default:
			advanceByte(lexer);
			break;
		}
	}
}

static TokenCode lexWhiteSpace(
	Lexer*	lexer)
{
	for(;;)
	{
		int c = peekByte(lexer);
		if(!isWhiteSpace(c))
		{
			return kTokenCode_WhiteSpace;			
		}

		advanceByte(lexer);
	}
}

static void lexStringLiteral(
	Lexer* 	lexer,
	int 	delimeter)
{
	for(;;)
	{
		int c = peekByte(lexer);
		if(c == delimeter)
		{
			advanceByte(lexer);
			return;
		}

		switch(c)
		{
		case 0: case '\r': case '\n':
			// TODO: error!
			return;

		case '\\':
			{
				advanceByte(lexer);
				int d = peekByte(lexer);
				switch(d)
				{
				case 0: case '\r': case '\n':
					// TODO: error
					return;
				default:
					// error: unexpected
					advanceByte(lexer);
					break;
				}

			}
			break;

		default:
			advanceByte(lexer);
			continue;
		}

	}
}

static TokenCode lexTokenImpl(
	Lexer*	lexer)
{
	int c = peekByte(lexer);
	switch(c)
	{
	case 0:
		{
			if(lexer->cursor == lexer->file->text.end)
			{
				return kTokenCode_EndOfFile;
			}
		}
		break;

	case '\r': case '\n':
		advanceByte(lexer);
		{
			int d = peekByte(lexer);
			if((c ^ d) == ('\r' ^ '\n'))
			{
				advanceByte(lexer);
			}
			return kTokenCode_EndOfLine;
		}
		break;

	case ' ': case '\t':
		return lexWhiteSpace(lexer);

	case '\"':
		advanceByte(lexer);
		lexStringLiteral(lexer, c);
		return kTokenCode_StringLiteral;

	case '\'':
		advanceByte(lexer);
		lexStringLiteral(lexer, c);
		return kTokenCode_CharacterLiteral;

	case '/':
		advanceByte(lexer);
		{
			int d = peekByte(lexer);
			switch(d)
			{
			case '/':
				return lexLineComment(lexer);
			case '*':
				return lexBlockComment(lexer);
			default:
				return lexOperator(lexer);
			}
		}
		break;

	case '-':
		advanceByte(lexer);
		{
			int d = peekByte(lexer);
			switch(d)
			{
			case '>':
			// TODO: only if end of operator cluster
				advanceByte(lexer);
				return kTokenCode_Arrow;
			default:
				return lexOperator(lexer);
			}
		}
		break;

	case '=':
		advanceByte(lexer);
		{
			int d = peekByte(lexer);
			if(isOperatorChar(d))
			{
				return lexOperator(lexer);
			}
			else
			{
				return kTokenCode_Assign;
			}
		}
		break;

	case '.':
		advanceByte(lexer);
		if(peekByte(lexer) == '.')
		{
			// is is an operator
			do
			{
				advanceByte(lexer);
			} while(peekByte(lexer) == '.');
			return kTokenCode_InfixOperator;
		}
		else
		{
			return kTokenCode_Dot;
		}

    case '0':
        advanceByte(lexer);
        {
            int d = peekByte(lexer);
            switch(d)
            {
            case 'x': case 'X':
                advanceByte(lexer);
                return lexNumber(lexer, 16);

            case 'b': case 'B':
                advanceByte(lexer);
                return lexNumber(lexer, 2);

            default:
                return lexNumber(lexer, 10);
            }
        }

              case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        return lexNumber(lexer, 10);

    case '@':
        advanceByte(lexer);
        return lexIdentifier(lexer);

#define SINGLE_CHAR_TOKEN(ch, code) \
	case ch: advanceByte(lexer); return kTokenCode_##code

	SINGLE_CHAR_TOKEN('{', LCurly);
	SINGLE_CHAR_TOKEN('}', RCurly);
    SINGLE_CHAR_TOKEN('[', LSquare);
    SINGLE_CHAR_TOKEN(']', RSquare);
    SINGLE_CHAR_TOKEN('(', LParen);
	SINGLE_CHAR_TOKEN(')', RParen);
	SINGLE_CHAR_TOKEN(';', Semi);
	SINGLE_CHAR_TOKEN(':', Colon);
	SINGLE_CHAR_TOKEN(',', Comma);

#undef SINGLE_CHAR_TOKEN

	default:
		break;
	}
	if(isAlpha(c))
	{
		return lexIdentifier(lexer);
	}
	else if(isOperatorChar(c))
	{
		return lexOperator(lexer);
	}
	else
	{
		diagnose(getSink(lexer),
			peekLoc(lexer),
			kDiagnostic_unexpectedCharacter,
			peekCodePoint(lexer));
		advanceByte(lexer);
		return kTokenCode_Invalid;
	}
}

static Token lexToken(
	Lexer*	lexer)
{
	for(;;)
	{

		char const* begin = lexer->cursor;
		TokenFlags flags = lexer->tokenFlags;
		TokenCode code = lexTokenImpl(lexer);
		char const* end = lexer->cursor;
		void* rawData = (void*) begin;

		switch(code)
		{
		case kTokenCode_Identifier:
		case kTokenCode_InfixOperator:
		case kTokenCode_PrefixOperator:
		case kTokenCode_PostfixOperator:
			rawData = getName(lexer->session, StringSpan(begin, end));
			// fall through
		default:
			lexer->tokenFlags = 0;
			break;

		case kTokenCode_LineComment:
			continue;

		case kTokenCode_EndOfLine:
			lexer->tokenFlags |= kTokenFlag_AtStartOfLine;
		case kTokenCode_WhiteSpace:
		case kTokenCode_BlockComment:
			lexer->tokenFlags |= kTokenFlag_AfterSpace;
			continue;
		}

		Token token;
		token.code = code;
		token.flags = flags;
		token.rawData = rawData;
		token.rawSize = end - begin;
		token.rawLoc = (uintptr_t)begin - lexer->rawStartPtr;
		token.advance = 0;
		return token;
	}
}

static Token* matchDelimeter(
	Lexer*			lexer,
	Token*			open,
	Token*			begin,
	Token const*	end,
	TokenCode 		closingTokenCode)
{
	Token* cursor = begin;
	while(cursor != end)
	{
		TokenCode code = cursor->code;
		if(code == closingTokenCode)
		{
			// We found the closing token

			// Record the "advance" field for the opening token
			open->advance = uint32_t( (cursor - open) - 1 );

			return cursor;
		}

		switch(cursor->code)
		{
		default:
			cursor = cursor + 1;
			break;

		// TODO: need to detect extra closing delimeters here
		// and report an error

		case kTokenCode_LParen:
			cursor = matchDelimeter(lexer, cursor, cursor+1, end, kTokenCode_RParen);
			break;

		case kTokenCode_LCurly:
			cursor = matchDelimeter(lexer, cursor, cursor+1, end, kTokenCode_RCurly);
			break;

		case kTokenCode_LSquare:
			cursor = matchDelimeter(lexer, cursor, cursor+1, end, kTokenCode_RSquare);
			break;
		}
	}

	// unmatched! need to emit an error!

	return cursor;
}

static void matchDelimeters(
	Lexer*			lexer,
	Token*			begin,
	Token const*	end)
{
	matchDelimeter(lexer, 0, begin, end, kTokenCode_EndOfFile);
}

static void markUpOperators(
	Lexer*			lexer,
	Token*			begin,
	Token const*	end)
{
	bool afterSpace = true;

	Token* cursor = begin;
	while(cursor != end)
	{
		TokenCode code = cursor->code;
		TokenCode nextCode = (cursor + 1)->code;

		if(code == kTokenCode_InfixOperator)
		{
			if(cursor->flags & kTokenFlag_AfterSpace)
			{
				afterSpace = true;
			}

			bool beforeSpace = ((cursor + 1)->flags & kTokenFlag_AfterSpace) != 0;
			switch(nextCode)
			{
			default:
				break;

			case kTokenCode_RParen:
			case kTokenCode_RSquare:
			case kTokenCode_RCurly:
			case kTokenCode_Semi:
			case kTokenCode_Colon:
			case kTokenCode_Comma:
				beforeSpace = true;
			}

			if(beforeSpace == afterSpace)
			{
				// do nothing, and leave infix
			}
			else if(beforeSpace)
			{
				cursor->code = kTokenCode_PostfixOperator;
			}
			else
			{
				cursor->code = kTokenCode_PrefixOperator;
			}
		}

		switch(code)
		{
		default:
			afterSpace = false;
			break;

		case kTokenCode_LParen:
		case kTokenCode_LSquare:
		case kTokenCode_LCurly:
		case kTokenCode_Semi:
		case kTokenCode_Colon:
		case kTokenCode_Comma:
			afterSpace = true;
			break;
		}

		cursor++;
	}
}

TokenSpan lexTokens(
	Session*	session,
	SourceFile*	file)
{
	Lexer lexer;
	initializeLexer(&lexer, session, file);

	size_t tokenLimit = 16;
	Token* tokens = (Token*) malloc(tokenLimit * sizeof(Token));
	size_t tokenCount = 0;

	for(;;)
	{
		Token token = lexToken(&lexer);

		if(tokenCount == tokenLimit)
		{
			tokenLimit *= 2;
			tokens = (Token*) realloc(tokens, tokenLimit*sizeof(Token));
		}
		tokens[tokenCount++] = token;

		if(token.code == kTokenCode_EndOfFile)
			break;
	}

	// trim allocation to fit
	tokens = (Token*) realloc(tokens, tokenCount*sizeof(Token));

	// end-of-file token is at the end of the range
	Token const* endToken = tokens + tokenCount - 1;

	TokenSpan tokenSpan = TokenSpan(tokens, endToken);

	matchDelimeters(&lexer, tokens, endToken);

	markUpOperators(&lexer, tokens, endToken);

#if 0
	{
		for(Token const* cursor = tokens; cursor != endToken; ++cursor )
		{
			fprintf(stderr, "code: %s, flags: 0x%x, advance:%d\n",
				getTokenName(cursor->code),
				cursor->flags,
				cursor->advance);
		}
	}
#endif

	finalizeLexer(&lexer);

	return tokenSpan;
}

}
