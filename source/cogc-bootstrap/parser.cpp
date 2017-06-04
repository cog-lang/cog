// parser.cpp
#include "parser.h"

#include "diagnostic.h"
#include "lexer.h"
#include "name.h"
#include "scope.h"
#include "session.h"
#include "syntax.h"

// Only used for `findOrLoadModule`
#include "check.h"

#include <assert.h>

#include <stdio.h>

namespace cogc {

//

typedef unsigned int ParserFlags;
enum
{
    kParserFlag_Recovering          = 1 << 0,
    kParserFlag_InsideGenericClause = 1 << 1,
};

struct Parser
{
	Session* session;
	Scope* scope;

	Token const* begin;
	Token const* cursor;
	Token const* end;

	Token const* token;
    ParserFlags     flags;

//	SyntaxListBuilder<Stmt>* stmtList;
};

static void parseDecls(
	Parser* 		parser,
	Token const*	fragment);

static Stmt* parseStmtBody(
    Parser* 		parser);

static void debugState(Parser* parser)
{
#if 0
	fprintf(stderr, "c:%p, e:%p, t:%d", parser->cursor, parser->end, parser->token->code);
	if(parser->token->code == kTokenCode_Identifier)
	{
		fprintf(stderr, " name:'%s'", getText((Name*) parser->token->rawData).begin);
	}
	fprintf(stderr, "\n");
#endif
}

static Token const* advanceToken(
	Parser*	parser)
{
	Token const* result = parser->token;
	parser->token = parser->cursor;
	if(parser->cursor != parser->end)
	{
		parser->cursor++;
	}
	debugState(parser);
	return result;
}

static Token const* advanceFragment(
	Parser*	parser)
{
	Token const* result = parser->token;
    parser->token = parser->cursor;
    parser->cursor = parser->cursor + parser->cursor->advance + 1;
	if(parser->cursor != parser->end)
	{
		parser->cursor++;
	}
	debugState(parser);
	return result;
}

static void initializeParser(
	Parser* 	parser,
	Session*	session,
	SourceFile*	file)
{
	TokenSpan tokens = lexTokens(session, file);

	parser->session = session;
	parser->scope = 0;
	parser->begin = tokens.begin_;
	parser->cursor = tokens.begin_;
	parser->end = tokens.end_;
	parser->flags = 0;

	advanceToken(parser);
}

static void finalizeParser(
	Parser* 	parser)
{}

static void pushScope(
	Parser* 		parser,
	ContainerDecl*	container)
{
	Scope* scope = new Scope();
	scope->parent = parser->scope;

    // TODO: think about how this should be qualified!
	scope->directLink.container = container;

	parser->scope = scope;
}

static void restoreScope(
    Parser* parser,
    Scope*  scope)
{
    // TODO: should really confirm that this scope is valid
    parser->scope = scope;
}

static void popScope(
	Parser* parser)
{
    assert(parser->scope);
    restoreScope(parser, parser->scope->parent);
}


static DiagnosticSink* getSink(Parser* parser)
{
	return &parser->session->sink;
}

static SourceLoc peekLoc(Parser* parser)
{
	return SourceLoc(parser->token->rawLoc);
}

static TokenCode peekTokenCode(Parser* parser)
{
	return parser->token->code;
}

static bool peekTokenCode(Parser* parser, TokenCode code)
{
	return parser->token->code == code;
}

static bool isAtEnd(Parser* parser)
{
	return parser->cursor == parser->end;
}

static bool isRecovering(Parser* parser)
{
    return (parser->flags & kParserFlag_Recovering) != 0;
}

static void unexpected(Parser* parser)
{
    if(!isRecovering(parser))
	{
		diagnose(getSink(parser), peekLoc(parser), kDiagnostic_unexpectedToken, peekTokenCode(parser));
		parser->flags |= kParserFlag_Recovering;
	}
}

static void unexpected(Parser* parser, TokenCode expected)
{
    if(!isRecovering(parser))
	{
		diagnose(getSink(parser), peekLoc(parser), kDiagnostic_unexpectedTokenExpectedToken, peekTokenCode(parser), expected);
        parser->flags |= kParserFlag_Recovering;
	}
}

static bool tokenIsInSet(
    TokenCode           needle,
    int                 count,
    TokenCode const*    haystack)
{
    for(int ii = 0; ii < count; ++ii)
    {
        if(needle == haystack[ii])
        {
            return true;
        }
    }
    return false;
}

static bool recoverIfTokenIsInSet(
    Parser*             parser,
    TokenCode           needle,
    int                 count,
    TokenCode const*    haystack)
{
    if(tokenIsInSet(needle, count, haystack))
    {
        parser->flags &= ~kParserFlag_Recovering;
        return true;
    }
    return false;
}

static void tryRecover(
	Parser* 			parser,
    int 				recoverBeforeCount,
    TokenCode const*	recoverBefore,
    int 				recoverAfterCount,
	TokenCode const*	recoverAfter)
{
	if(!isRecovering(parser))
		return;


	while(!isAtEnd(parser))
	{
		TokenCode peek = peekTokenCode(parser);

        // if we are beforce a token that allows recovery,
        // en do it...
        if(recoverIfTokenIsInSet(parser, peek, recoverBeforeCount, recoverBefore))
        {
            // Don't consume the token.
            return;
        }


		// if the token we just skipped would let
		// us recover, then do so...
        if(recoverIfTokenIsInSet(parser, peek, recoverAfterCount, recoverAfter))
        {
            // Consume the token.
            advanceToken(parser);
            return;
        }

        // If we see any kind of end token, we should bail out without
        // recovering
        switch(peek)
        {
        case kTokenCode_EndOfFile:
        case kTokenCode_RCurly:
        case kTokenCode_RParen:
        case kTokenCode_RSquare:
            // TODO: the problem here is that we *want* to skip
            // certain cases depending on how we are nested...
            return;

        default:
            break;
        }

        // Otherwise we are skipping. We need to be careful to skip balanced
        // tokens, so that we don't mess up nesting.
        advanceFragment(parser);
    }
}

// default recovering, suitable for use inside a statement or declaration context...
static void tryRecover(Parser* parser)
{
	if(!isRecovering(parser))
		return;

    TokenCode recoverBefore[] = { kTokenCode_LCurly };
    TokenCode recoverAfter[] = { kTokenCode_Semi, kTokenCode_RCurly };
	tryRecover(parser, 1, recoverBefore, 2, recoverAfter);
}

// custom recovery
static void tryRecoverBefore(Parser* parser, TokenCode code)
{
	if (!isRecovering(parser))
		return;

	TokenCode recoverBefore[] = { code };
	tryRecover(parser, 1, recoverBefore, 0, nullptr);
}


static Token const* advanceIf(
	Parser*		parser,
	TokenCode 	expected)
{
	if(peekTokenCode(parser) == expected)
	{
		return advanceToken(parser);
	}
	return 0;
}

static Token const* advanceIf(
    Parser* parser,
    StringSpan expected)
{
    switch(peekTokenCode(parser))
    {
    case kTokenCode_Identifier:
        if(getText((Name*)(parser->token->rawData)) == expected)
        {
            return advanceToken(parser);
        }

    default:
        break;
    }
    return 0;
}

static Token const* advanceIfFragment(
	Parser*		parser,
	TokenCode 	expected)
{
	if(peekTokenCode(parser) == expected)
	{
		return advanceFragment(parser);
	}
	return 0;
}

static Token const* expect(
	Parser*		parser,
	TokenCode 	expected)
{
	if(auto token = advanceIf(parser, expected))
		return token;

	unexpected(parser, expected);
	return 0;
}

static Token const* expectFragment(
	Parser*		parser,
	TokenCode 	expected)
{
	if(auto token = advanceIfFragment(parser, expected))
		return token;

	unexpected(parser, expected);
	return 0;
}

static Name* expectIdentifier(
	Parser*		parser)
{
	if(auto token = advanceIf(parser, kTokenCode_Identifier))
	{
		Name* name = (Name*) token->rawData;
		return name;
	}
	else
	{
		unexpected(parser, kTokenCode_Identifier);
		return 0;
	}
}


static Token const* advanceIfEnd(
	Parser*	parser,
	TokenCode 	expected)
{
	if(isAtEnd(parser))
	{
		return expect(parser, expected);
	}

	// TODO: handle recovery
	return advanceIf(parser, expected);
}

static LookupResult lookup(
	Parser*	parser,
	Name*	name)
{
	return lookup(parser->scope, name);
}

#if 0
static Decl* lookupSyntax(
    Parser* parser,
    Name*   name)
{
    LookupResult result = lookup(parser->scope, name);

    // Need to apply a filter to only include syntax defs
    // TODO: this should be included in lookup!
    //
    // TODO: we may want to skip filtering in cases where
    // we aren't making progress (so we can complain
    // about something that doesn't map to syntax...)
    result.filter<SyntaxDecl>();

    if(result.isEmpty())
        return nullptr;

    if(result.isUnique())
        return result.getDecl();

    // Ambiguous! We really need a way
    // to filter for the best candidate
    // based on the context...
    throw 99;
}
#endif

// If this indicates we have syntax, then
// try to pick the right one...
static SyntaxDecl* getSyntaxDecl(
    LookupResult const& result)
{
    for(auto item : result)
    {
        // TODO: pick the best ne...
        if(auto* syntaxDecl = as<SyntaxDecl>(item.decl))
        {
            return syntaxDecl;
        }
    }

    // nothing found, so bail
    return nullptr;
}

static NameExp* createNameExp(
	Parser* 		parser,
	Token const* 	token)
{
	Name* name = (Name*) token->rawData;
	NameExp* exp = COGC_ALLOC_SYNTAX(NameExp);
	exp->loc = token->getLoc();
	exp->name = name;
	exp->scope = parser->scope;
	return exp;	
}

static Exp* createErrorExp(
    Parser* parser)
{
    ErrorExp* exp = COGC_ALLOC_SYNTAX(ErrorExp);
    exp->loc = peekLoc(parser);
    return exp;
}

bool tryParseGenericOpen(Parser* parser);
bool peekGenericClose(Parser* parser);
void expectGenericClose(Parser* parser);
static Exp* parseExp(
    Parser*	parser);
static Arg* createPositionalArg(
    Parser* parser,
    Exp*	exp);

static Arg* parseArg(Parser* parser)
{
    Exp* argExp = parseExp(parser);
    return createPositionalArg(parser, argExp);
}

static SyntaxList<Arg> parseArgs(
    Parser* parser)
{
    SyntaxListBuilder<Arg> args;
    switch(peekTokenCode(parser))
    {
    case kTokenCode_RParen:
    case kTokenCode_RCurly:
    case kTokenCode_RSquare:
    case kTokenCode_EndOfFile:
        return args;

    default:
        break;
    }

    for(;;)
    {
        Arg* arg = parseArg(parser);
        if(arg)
        {
            args.add(arg);
        }

        switch(peekTokenCode(parser))
        {
        case kTokenCode_RParen:
        case kTokenCode_RCurly:
        case kTokenCode_RSquare:
        case kTokenCode_EndOfFile:
            return args;

        default:
            break;
        }

        expect(parser, kTokenCode_Comma);

		tryRecoverBefore(parser, kTokenCode_RParen);
    }
}

static Arg* parseGenericArg(Parser* parser)
{
    ParserFlags flags = parser->flags; 
    parser->flags |= kParserFlag_InsideGenericClause;
    Arg* arg = parseArg(parser);
    parser->flags = flags;
    return arg;
}

static SyntaxList<Arg> parseGenericArgs(
    Parser* parser)
{
    SyntaxListBuilder<Arg> args;
    if(peekGenericClose(parser))
        return args;

    for(;;)
    {
        Arg* arg = parseGenericArg(parser);
        if(arg)
        {
            args.add(arg);
        }

        if(peekGenericClose(parser))
            return args;

        expect(parser, kTokenCode_Comma);
    }
}

static bool peekGenericApp(
    Parser* inParser)
{
    // Save the parser state so we can rewind it!
    Parser parserImpl = *inParser;
    Parser* parser = &parserImpl;

    // check for the opening `<`
    if(!tryParseGenericOpen(parser))
        return false;

    // now scan arguments
    for(;;)
    {
        if(peekGenericClose(parser))
            break;

        switch(peekTokenCode(parser))
        {
        case kTokenCode_EndOfFile:
        case kTokenCode_RParen:
        case kTokenCode_RSquare:
        case kTokenCode_RCurly:
		case kTokenCode_Semi:
			return false;

        default:
            // TODO: handle the annoying case of
            // an operator that ends with `>`...
            advanceFragment(parser);
            break;
        }
    }

    // consume the closing `>`
    expectGenericClose(parser);

    // inspect the token *after* the close, and see
    // if it is one we can use to disambiguate

    // TODO: implement that
    return true;
}

static Exp* maybeParseGenericApp(
    Parser* parser,
    Exp*    base)
{
    if(!peekGenericApp(parser))
        return base;

    tryParseGenericOpen(parser);


    SyntaxList<Arg> args = parseGenericArgs(parser);

    expectGenericClose(parser);

    GenericAppExp* exp = COGC_ALLOC_SYNTAX(GenericAppExp);
    exp->base = base;
    exp->args = args;
    return exp;
}

static IntLitVal getIntegerLiteralVal(
    Token const& token)
{
    char const* textBegin = (char const*) token.rawData;
    char const* textEnd = textBegin + token.rawSize;

    IntLitVal val = 0;
    int base = 10;

    char const* tt = textBegin;
    if(tt != textEnd && *tt == '0')
    {
        ++tt;

        if(tt == textEnd)
            return 0;

        switch(*tt)
        {
        case 'x': case 'X':
            base = 16;
            tt++;
            break;
        case 'b': case 'B':
            base = 2;
            tt++;
            break;
        default:
            break;
        }
    }

    while(tt != textEnd)
    {
        int c = *tt++;
        if((c >= '0') && (c <= '9'))
        {
            val = val*base + (c - '0');
        }
    }
    return val;
}

static String getStringLiteralVal(
    Token const& token)
{
    char const* textBegin = (char const*) token.rawData;
    char const* textEnd = textBegin + token.rawSize;

    // TODO: actually extract value:

    char const* cursor = textBegin;

    String val;

    char delimeter = *cursor++;
    for(;;)
    {
        char c = *cursor++;

        if(c == delimeter)
            break;

        switch(c)
        {
        case '\\':
            {
                int d = *cursor++;
                switch(d)
                {
                case 'r': val.append('\r'); break;
                case 'n': val.append('\n'); break;
                case 't': val.append('\t'); break;
                case '\\': val.append('\\'); break;
				case '\"': val.append('\"'); break;
				case '\'': val.append('\''); break;

                default:
                    assert(!"unimplemented");
                    break;
                }
            }
            break;
        default:
            val.append(c);
            break;
        }
    }

    return val;
}

static Exp* parseAtomicExp(
	Parser* parser)
{
	switch(peekTokenCode(parser))
	{
	case kTokenCode_Identifier:
		{
			Token const* nameToken = advanceToken(parser);
			Exp* exp = createNameExp(parser, nameToken);
            return maybeParseGenericApp(parser, exp);
		}

    case kTokenCode_IntegerLiteral:
        {
            Token const* token = advanceToken(parser);
            IntLitExp* exp = COGC_ALLOC_SYNTAX(IntLitExp);
            exp->loc = token->getLoc();
            exp->val = getIntegerLiteralVal(*token);
            return exp;
        }

    case kTokenCode_StringLiteral:
        {
            Token const* token = advanceToken(parser);
            StringLitExp* exp = COGC_ALLOC_SYNTAX(StringLitExp);
            exp->loc = token->getLoc();
            exp->val = getStringLiteralVal(*token);
            return exp;
        }

    case kTokenCode_CharacterLiteral:
        {
            Token const* token = advanceToken(parser);
            CharacterLitExp* exp = COGC_ALLOC_SYNTAX(CharacterLitExp);
            exp->loc = token->getLoc();
            exp->val = getStringLiteralVal(*token);
            return exp;
        }

    case kTokenCode_LParen:
        {
            Token const* open = advanceToken(parser);
            Exp* inner = parseExp(parser);
            expect(parser, kTokenCode_RParen);

            // TODO: actual construct an identity expression here

			ParenExp* exp = COGC_ALLOC_SYNTAX(ParenExp);
			exp->loc = open->getLoc();
			exp->base = inner;

            return exp;
        }

    default:
		unexpected(parser);
        return createErrorExp(parser);
	}
}

static Arg* createPositionalArg(
	Parser* parser,
	Exp*	exp)
{
	PositionalArg* arg = COGC_ALLOC_SYNTAX(PositionalArg);
	arg->loc = exp->loc;
	arg->exp = exp;
	return arg;
}

static AppExpBase* createApp(
	Parser* 		parser,
	AppExpBase* 	exp,
	Token const*	op,
	Exp*			argExp)
{
	exp->loc = op->getLoc();
	exp->base = createNameExp(parser, op);

	SyntaxListBuilder<Arg> args;
	args.add(createPositionalArg(parser, argExp));
	exp->args = args;
	return exp;
}

static AppExpBase* createApp(
	Parser* 		parser,
	AppExpBase* 	exp,
	Token const*	op,
	Exp*			argExp0,
	Exp*			argExp1)
{
	exp->loc = op->getLoc();
	exp->base = createNameExp(parser, op);

	SyntaxListBuilder<Arg> args;
	args.add(createPositionalArg(parser, argExp0));
	args.add(createPositionalArg(parser, argExp1));
	exp->args = args;
	return exp;
}

static bool isInGenericClause(
    Parser* parser)
{
    return (parser->flags & kParserFlag_InsideGenericClause) != 0;
}

static Exp* parsePostfixExp(
	Parser* parser)
{
	Exp* exp = parseAtomicExp(parser);
    for(;;)
    {
        switch(peekTokenCode(parser))
        {
        case kTokenCode_PostfixOperator:
            {
                // bail out if we shouldn't parse this here...
                if(isInGenericClause(parser) && peekGenericClose(parser))
                    return exp;

                Token const* op = advanceToken(parser);
                exp = createApp(parser, COGC_ALLOC_SYNTAX(PostfixExp), op, exp);
            }
            break;

        case kTokenCode_LParen:
            {
                Token const* lParen = advanceToken(parser);
                SyntaxList<Arg> args = parseArgs(parser);
                expect(parser, kTokenCode_RParen);

                AppExp* app = COGC_ALLOC_SYNTAX(AppExp);
                app->loc = lParen->getLoc();
                app->base = exp;
                app->args = args;
                exp = app;
            }
            break;

        case kTokenCode_LSquare:
            {
                Token const* lParen = advanceToken(parser);
                SyntaxList<Arg> args = parseArgs(parser);
                expect(parser, kTokenCode_RSquare);

                IndexExp* app = COGC_ALLOC_SYNTAX(IndexExp);
                app->loc = lParen->getLoc();
                app->base = exp;
                app->args = args;
                exp = app;
            }
            break;

		case kTokenCode_Arrow:
			diagnose(getSink(parser), peekLoc(parser), kDiagnostic_youMeanDot);
		case kTokenCode_Dot:
            {
                Token const* dot = advanceToken(parser);
                Name* memberName = expectIdentifier(parser);

                MemberExp* memberExp = COGC_ALLOC_SYNTAX(MemberExp);
                memberExp->loc = dot->getLoc();
                memberExp->base = exp;
                memberExp->memberName = memberName;

				exp = maybeParseGenericApp(parser, memberExp);
            }
            break;

        default:
            return exp;
        }
    }
}

static Exp* parsePrefixExp(
	Parser* parser)
{
	if(peekTokenCode(parser) == kTokenCode_PrefixOperator)
	{
		Token const* op = advanceToken(parser);
		Exp* arg = parsePrefixExp(parser);

		return createApp(parser, COGC_ALLOC_SYNTAX(PrefixExp), op, arg);
	}
	else
	{
		return parsePostfixExp(parser);
	}
}

static Exp* parseInfixExp(
	Parser* parser)
{
	Exp* left = parsePrefixExp(parser);
    for(;;)
    {
        switch(peekTokenCode(parser))
        {
        case kTokenCode_InfixOperator:
            {
                // Don't parse an operator starting with `>` if we are in a generic context.
                if(isInGenericClause(parser) && peekGenericClose(parser))
                    return left;

                Token const* op = advanceToken(parser);
                Exp* right = parseInfixExp(parser);

                left = createApp(parser, COGC_ALLOC_SYNTAX(InfixExp), op, left, right);
            }
            break;

        case kTokenCode_Assign:
            {
                // Assignment isn't just another binary operator, but we need to handle it here...
                // Don't parse an operator starting with `>` if we are in a generic context.
                Token const* op = advanceToken(parser);

                auto assign = createObject<AssignExp>();
                assign->left = left;
                assign->right = parseInfixExp(parser);

                left = assign;
            }
            break;

        default:
            return left;
        }
    }
    return left;
}

static Exp* parseExp(
	Parser*	parser)
{
	return parseInfixExp(parser);
}

static TypeExp parseType(
	Parser* parser)
{
	Exp* exp = parsePostfixExp(parser);

	TypeExp typeExp;
	typeExp.exp = exp;
	return typeExp;
}

static Decl* parseDecl(
	Parser* 	parser)
{
    SyntaxListBuilder<Attr> attrs;

    for(;;)
    {
        switch(peekTokenCode(parser))
        {
        case kTokenCode_Identifier:
        {
            SourceLoc loc = peekLoc(parser);

            // An identifier might name a declaration keyword
            Name* name = expectIdentifier(parser);
            LookupResult result = lookup(parser, name);

            if(SyntaxDecl* syntax = getSyntaxDecl(result))
            {
                // we have a syntax declaration, but does it provide to resolve to a decl?
                auto syntaxClass = syntax->syntaxClass;
                if(isSubClass(syntaxClass, getClass<Decl>()))
                {
                    // TODO: enforce validity
                    Syntax* result = syntax->callback(parser);
                    Decl* resultDecl = as<Decl>(result);

                    // Attach the attributes to the declaration...
                    if(auto genericDecl = as<GenericDecl>(resultDecl))
                    {
                        // For a generic declaration, we attach the attributes to the inner declaration
                        genericDecl->inner->attrs = attrs;
                    }
                    else
                    {
                        resultDecl->attrs = attrs;
                    }

                    resultDecl->loc = loc;
                    return resultDecl;
                }
                else if(isSubClass(syntaxClass, getClass<Attr>()))
                {
                    Syntax* result = syntax->callback(parser);
                    Attr* resultAttr = as<Attr>(result);
                    attrs.add(resultAttr);

                    // Now that we have the attribute, look after it...
                    continue;
                }

                // now we need to parse using that decl



            }
            else
            {
                diagnose(getSink(parser), peekLoc(parser), kDiagnostic_unexpectedDeclName, name);
                // error
                assert(false);
                return 0;
            }
        }
        break;

        default:
            // TODO: error
            unexpected(parser);
            return 0;
        }
    }
}

void parseFileIntoModule(
    Session*    session,
    SourceFile*	file,
    ModuleDecl* moduleDecl);

ModuleDecl* findOrImportModule(
    Session*    session,
    SourceLoc   loc,
    Name*       name)
{
    // we need to find the damn module

    for(auto mm = session->loadedModules; mm; mm = (ModuleDecl*) mm->next)
    {
        if(mm->name == name)
        {
            return mm;
        }
    }

    // now we need to load the damn thing!
    
    auto nameText = getText(name);

    char path[1024];
    sprintf(path, "source/%.*s.cog", (int)(nameText.end - nameText.begin), nameText.begin);

    SourceFile* file = getSourceFile(session, path);
    if(!file)
    {
        sprintf(path, "../../source/%.*s.cog", (int)(nameText.end - nameText.begin), nameText.begin);
        file = getSourceFile(session, path);
    }
    if(!file)
    {
        sprintf(path, "../../source/coglib/%.*s.cog", (int)(nameText.end - nameText.begin), nameText.begin);
        file = getSourceFile(session, path);
    }
    if(!file)
    {
        sprintf(path, "source/coglib/%.*s.cog", (int)(nameText.end - nameText.begin), nameText.begin);
        file = getSourceFile(session, path);
    }
    if(!file)
    {
        throw 99;
    }

    ModuleDecl* moduleDecl = createObject<ModuleDecl>();
    moduleDecl->name = name;

    parseFileIntoModule(session, file, moduleDecl);

    // Note: we link the module into our session before
    // checking it, so that it can resolve references
    // into itself (in the case of the stdlib module)

    moduleDecl->next = session->loadedModules;
    session->loadedModules = moduleDecl;

    // TODO: what if we have errors here?
    checkModule(session, moduleDecl);

    return moduleDecl;
}

static SyntaxList<Decl> parseDeclsInBody(
	Parser* 		parser )
{
    auto savedScope = parser->scope;

	SyntaxListBuilder<Decl> decls;
    while(!isAtEnd(parser))
	{
		switch(peekTokenCode(parser))
		{
		case kTokenCode_RParen:
		case kTokenCode_RCurly:
		case kTokenCode_EndOfFile:
			return decls;

		default:
			break;
		}

		Decl* decl = parseDecl(parser);
		if(decl)
		{
            decl->parent = parser->scope->directLink.container;
            decls.add(decl);

#if 0
            // is is a bit hacky to handle this here, but there isn't a much better place right now.
            // If the declaration names an `ImportDecl`, then we do the import logic right here
            if(auto importDecl = as<ImportDecl>(decl))
            {
                auto scopeToImportInto = parser->scope;
                auto moduleToImport = findOrImportModule(parser->session, importDecl->loc, importDecl->name);
                if(moduleToImport)
                {
                    auto scopeLink = new ScopeLink();
                    scopeLink->container = as<ContainerDecl>(
                        DeclRefVal(moduleToImport));
                    
                    scopeLink->next = scopeToImportInto->directLink.next;
                    scopeToImportInto->directLink.next = scopeLink;
                }
            }
#endif
		}

        restoreScope(parser, savedScope);

		tryRecover(parser);
	}
    return decls;
}

static SyntaxList<Decl>  parseDeclBody(
	Parser* 		parser )
{
	expect(parser, kTokenCode_LCurly);
	SyntaxList<Decl> decls = parseDeclsInBody(parser);
	expect(parser, kTokenCode_RCurly);
	return decls;
}

static void  parseDeclBody(
	Parser* 		parser,
	ContainerDecl*	decl )
{
	pushScope(parser, decl);
	decl->getDecls() = parseDeclBody(parser);

    for(auto dd : decl->getDecls())
    {
        dd->parent = decl;
    }

	popScope(parser);
}

static Stmt* parseExpStmt(
    Parser* parser)
{
    Exp* exp = parseExp(parser);
    expect(parser, kTokenCode_Semi);
    return exp;
}

static Stmt* parseStmt(
	Parser* 	parser)
{
	switch(peekTokenCode(parser))
	{
	case kTokenCode_Identifier:
		{
			// An identifier might name a declaration keyword
            SourceLoc loc = peekLoc(parser);
            Name* name = (Name*)parser->token->rawData;
			LookupResult result = lookup(parser, name);

            if(SyntaxDecl* syntax = getSyntaxDecl(result))
            {
                advanceToken(parser);

                // TODO: also check that it defines a statement or declaration...
                // (don't want to use this branch to parse an expression)

                // now we need to parse using that decl

                Syntax* result = syntax->callback(parser);
                Stmt* resultStmt = as<Stmt>(result);

                // TODO: enforce validity

                resultStmt->loc = loc;

                return resultStmt;
            }

            // default case is to parse an expression statement
            return parseExpStmt(parser);
		}
		break;

    case kTokenCode_LCurly:
        return parseStmtBody(parser);

    case kTokenCode_PrefixOperator:
        return parseExpStmt(parser);

	default:
		// TODO: error
		unexpected(parser);
		return 0;
	}
}

static SyntaxListBuilder<Stmt> parseStmtsInBody(
	Parser* 		parser )
{
	SyntaxListBuilder<Stmt> stmts;
    while(!isAtEnd(parser))
	{
		switch(peekTokenCode(parser))
		{
		case kTokenCode_RParen:
		case kTokenCode_RCurly:
		case kTokenCode_EndOfFile:
			return stmts;

		default:
			break;
		}

		Stmt* stmt = parseStmt(parser);
		if(stmt)
		{
			stmts.add(stmt);
		}

		tryRecover(parser);
	}
    return stmts;
}

static Stmt* parseStmtBody(
	Parser* 		parser )
{
	BlockStmt* stmt = COGC_ALLOC_SYNTAX(BlockStmt);

    pushScope(parser, stmt);
	expect(parser, kTokenCode_LCurly);
	SyntaxListBuilder<Stmt> stmts = parseStmtsInBody(parser);
	expect(parser, kTokenCode_RCurly);
    popScope(parser);

	stmt->stmts = stmts;

	return stmt;
}

bool peekGenericClose(Parser* parser)
{
	switch(peekTokenCode(parser))
	{
	default:
		// definitely not a generic close
		return false;

	case kTokenCode_InfixOperator:
	case kTokenCode_PrefixOperator:
	case kTokenCode_PostfixOperator:
		break;
	}

	Name* name = (Name*) parser->token->rawData;
	TerminatedStringSpan nameText = getText(name);

	// TODO: allow `>` to be just a prefix
	if(nameText != TerminatedStringSpan(">"))
		return false;

	return true;
}

bool tryParseGenericClose(Parser* parser)
{
	if(!peekGenericClose(parser))
		return false;

	// consume the `>`
	advanceToken(parser);
	return true;
}

void expectGenericClose(Parser* parser)
{
	if(!tryParseGenericClose(parser))
	{
		// TODO: proper diagnostic
		unexpected(parser);
	}
}

Decl* parseGenericParam(Parser* parser)
{
	SourceLoc loc = peekLoc(parser);
	Name* name = expectIdentifier(parser);

	// TODO: handle constraints

	GenericParamDecl* decl = COGC_ALLOC_SYNTAX(GenericParamDecl);
	decl->loc = loc;
	decl->name = name;
	return decl;
}

void parseGenericParams(Parser* parser, SyntaxListBuilder<Decl>* ioDecls)
{
	SyntaxListBuilder<Decl>& decls = *ioDecls;

	if(peekGenericClose(parser))
		return;

	for(;;)
	{
		Decl* decl = parseGenericParam(parser);
		if(decl)
		{
			decls.add(decl);
		}

		if(peekGenericClose(parser))
			return;

		expect(parser, kTokenCode_Comma);
	}
}

bool tryParseGenericOpen(Parser* parser)
{
    switch(peekTokenCode(parser))
    {
    default:
        // definitely not a generic param list
//		diagnose(getSink(parser), peekLoc(parser), kDiagnostic_notGeneric, "start");
        return false;

    case kTokenCode_InfixOperator:
    case kTokenCode_PrefixOperator:
    case kTokenCode_PostfixOperator:
        break;
    }

    Name* name = (Name*)parser->token->rawData;
    TerminatedStringSpan nameText = getText(name);

    // TODO: allow `<` to be just a prefix
    if(nameText != TerminatedStringSpan("<"))
        return false;

    // consume the starting `<`
    advanceToken(parser);

    return true;
}

Decl* maybeParseGenericParams(Parser* parser, Decl* decl)
{
    if(!tryParseGenericOpen(parser))
        return decl;


	GenericDecl* genericDecl = COGC_ALLOC_SYNTAX(GenericDecl);

	SyntaxListBuilder<Decl> decls;
	parseGenericParams(parser, &decls);

	genericDecl->name = decl->name;
	genericDecl->getDecls() = decls;
	genericDecl->inner = decl;

    decl->parent = genericDecl;

    pushScope(parser, genericDecl);

	expectGenericClose(parser);
	return genericDecl;
}

Decl* parseAggTypeDeclCommon(Parser* parser, AggTypeDecl* decl)
{
	decl->name = expectIdentifier(parser);

	// generic args, if any
	Decl* result = maybeParseGenericParams(parser, decl);

    // DEBUGGING
    if(result != decl)
    {
        fprintf(stderr, "BEGIN PARSE GENERIC: %s\n", getText(decl->name).begin);
    }

	// inheritance clause
	if(advanceIf(parser, kTokenCode_Colon))
	{
		decl->base = parseType(parser);
	}

	// body
	parseDeclBody(parser, decl);

    if(result != decl)
    {
        fprintf(stderr, "END PARSE GENERIC: %s\n", getText(decl->name).begin);
    }

    return result;
}

Syntax* parseClassDecl(Parser* parser)
{
	ClassDecl* decl = createObject<ClassDecl>();
    return parseAggTypeDeclCommon(parser, decl);
}

Syntax* parseStructDecl(Parser* parser)
{
	StructDecl* decl = createObject<StructDecl>();
	return parseAggTypeDeclCommon(parser, decl);
}

Syntax* parseEnumDecl(Parser* parser)
{
	EnumDecl* decl = createObject<EnumDecl>();

	decl->name = expectIdentifier(parser);

	// generic args, if any
	Decl* result = maybeParseGenericParams(parser, decl);

	// TODO: have an enum be a general-purpose type declaration...

	if (advanceIf(parser, kTokenCode_Colon))
	{
		decl->base = parseType(parser);
	}


	SyntaxListBuilder<Decl> decls;

	expect(parser, kTokenCode_LCurly);
	for (;;)
	{
		switch (peekTokenCode(parser))
		{
		case kTokenCode_RCurly:
		case kTokenCode_RParen:
		case kTokenCode_EndOfFile:
			goto done;

		default:
			break;
		}

		// parse one tag
		EnumTagDecl* tag = createObject<EnumTagDecl>();
		tag->name = expectIdentifier(parser);
		if (advanceIf(parser, kTokenCode_Assign))
		{
			tag->init = parseExp(parser);
		}

		decls.add(tag);

		switch (peekTokenCode(parser))
		{
		case kTokenCode_RCurly:
		case kTokenCode_RParen:
		case kTokenCode_EndOfFile:
			goto done;

		default:
			break;
		}

		expect(parser, kTokenCode_Comma);
	}
done:
	expect(parser, kTokenCode_RCurly);

	decl->stmts = decls.head;

	return result;
}

Syntax* parseImportDecl(Parser* parser)
{
    ImportDecl* decl = createObject<ImportDecl>();
    decl->name = expectIdentifier(parser);
    expect(parser, kTokenCode_Semi);
    return decl;
}


void parseVarDeclCommon(Parser* parser, VarDeclBase* decl)
{
	decl->name = expectIdentifier(parser);

	// type clause
	if(advanceIf(parser, kTokenCode_Colon))
	{
		decl->type = parseType(parser);
	}

	// init clause
	if(advanceIf(parser, kTokenCode_Assign))
	{
		decl->init = parseExp(parser);
	}
}

Syntax* parseVarDecl(Parser* parser)
{
	VarDecl* decl = createObject<VarDecl>();
	parseVarDeclCommon(parser, decl);
	expect(parser, kTokenCode_Semi);
	return decl;
}

Syntax* parseLetDecl(Parser* parser)
{
    LetDecl* decl = createObject<LetDecl>();
    parseVarDeclCommon(parser, decl);
    expect(parser, kTokenCode_Semi);
    return decl;
}

void parseTypeVarDeclSuffixCommon(Parser* parser, TypeVarDecl* decl)
{
	// constraint clause
	if(advanceIf(parser, kTokenCode_Colon))
	{
		decl->bound = parseType(parser);
	}

	// init clause
	if(advanceIf(parser, kTokenCode_Assign))
	{
		decl->init = parseType(parser);
	}
}

void parseTypeVarDeclCommon(Parser* parser, TypeVarDecl* decl)
{
	decl->name = expectIdentifier(parser);
	parseTypeVarDeclSuffixCommon(parser, decl);
}

static Name* expectOperatorOrIdentifier(Parser* parser)
{
	switch(peekTokenCode(parser))
	{
	default:
		return expectIdentifier(parser);

	case kTokenCode_Identifier:
	case kTokenCode_InfixOperator:
	case kTokenCode_PrefixOperator:
	case kTokenCode_PostfixOperator:
		return (Name*) advanceToken(parser)->rawData;
	}
}

Syntax* parseTypeAliasDecl(Parser* parser)
{
	TypeAliasDecl* decl = createObject<TypeAliasDecl>();

	decl->name = expectOperatorOrIdentifier(parser);
	Decl* result = maybeParseGenericParams(parser, decl);

	parseTypeVarDeclSuffixCommon(parser, decl);
	expect(parser, kTokenCode_Semi);
	return result;
}

Syntax* parseIfStmt(Parser* parser)
{
    expect(parser, kTokenCode_LParen);

	// special case `if(let ...)` for now
	if (advanceIf(parser, TerminatedStringSpan("let")))
	{
		IfLetStmt* stmt = createObject<IfLetStmt>();
		stmt->name = expectIdentifier(parser);
		expect(parser, kTokenCode_Assign);
		stmt->init = parseExp(parser);
		expect(parser, kTokenCode_RParen);
		stmt->thenStmt = parseStmt(parser);
		if (advanceIf(parser, TerminatedStringSpan("else")))
		{
			stmt->elseStmt = parseStmt(parser);
		}
		return stmt;
	}
	else
	{
		IfStmt* stmt = createObject<IfStmt>();
		stmt->condition = parseExp(parser);
		expect(parser, kTokenCode_RParen);
		stmt->thenStmt = parseStmt(parser);
		if (advanceIf(parser, TerminatedStringSpan("else")))
		{
			stmt->elseStmt = parseStmt(parser);
		}
		return stmt;
	}
}

Syntax* parseWhileStmt(Parser* parser)
{
    WhileStmt* stmt = createObject<WhileStmt>();
    expect(parser, kTokenCode_LParen);
    stmt->condition = parseExp(parser);
    expect(parser, kTokenCode_RParen);
    stmt->body = parseStmt(parser);
    return stmt;
}

Syntax* parseForStmt(Parser* parser)
{
	ForStmt* stmt = createObject<ForStmt>();
	expect(parser, kTokenCode_LParen);

	// initialization clause
	switch (peekTokenCode(parser))
	{
	case kTokenCode_Semi:
		advanceToken(parser);
		break;

	default:
		// HACK: accept *any* statement, even if it doesn't make sense
		stmt->init = parseStmt(parser);
		break;
	}

	// condition clause
	switch (peekTokenCode(parser))
	{
	case kTokenCode_Semi:
		advanceToken(parser);
		break;

		// TODO: handle a declaration keyword here!!!

	default:
		stmt->condition = parseExp(parser);
		expect(parser, kTokenCode_Semi);
		break;
	}

	// iteration clause
	switch (peekTokenCode(parser))
	{
	case kTokenCode_RParen:
		break;

	default:
		stmt->iter = parseExp(parser);
		break;
	}

	expect(parser, kTokenCode_RParen);
	stmt->body = parseStmt(parser);
	return stmt;
}

Syntax* parseForEachStmt(Parser* parser)
{
	ForEachStmt* stmt = createObject<ForEachStmt>();
	expect(parser, kTokenCode_LParen);

	stmt->name = expectIdentifier(parser);

	if (!advanceIf(parser, TerminatedStringSpan("in")))
	{
		expect(parser, kTokenCode_Colon);
	}

	stmt->exp = parseExp(parser);

	expect(parser, kTokenCode_RParen);
	stmt->body = parseStmt(parser);
	return stmt;
}

Syntax* parseSwitchStmt(Parser* parser)
{
	SwitchStmt* stmt = createObject<SwitchStmt>();
	expect(parser, kTokenCode_LParen);
	stmt->condition = parseExp(parser);
	expect(parser, kTokenCode_RParen);

	expect(parser, kTokenCode_LCurly);

	SwitchCase** caseLink = &stmt->cases;

	for (;;)
	{
		switch (peekTokenCode(parser))
		{
		case kTokenCode_RCurly:
		case kTokenCode_RParen:
		case kTokenCode_EndOfFile:
			expect(parser, kTokenCode_RCurly);
			return stmt;
		
		default:
			break;
		}

		SourceLoc caseStart = peekLoc(parser);
		SwitchCase* c = createObject<SwitchCase>();
		c->loc = caseStart;

		Arg** valueLink = &c->values;

		// parse cases...
		for (;;)
		{
			Arg* arg = nullptr;
			if (advanceIf(parser, TerminatedStringSpan("case")))
			{
				arg = createObject<Arg>();
				arg->exp = parseExp(parser);
				expect(parser, kTokenCode_Colon);
			}
			else if (advanceIf(parser, TerminatedStringSpan("default")))
			{
				arg = createObject<Arg>();
				arg->exp = nullptr;
				expect(parser, kTokenCode_Colon);
			}
			else
			{
				// done with cases, I guess
				break;
			}

			*valueLink = arg;
			valueLink = &arg->next;
		}

		if (!*valueLink)
		{
			// ere was nothing to match!!!
			// TODO: diagnose!
		}

		// TODO: need to handle stmts until we see another `case` or `default`...
		c->body = parseStmt(parser);

		*caseLink = c;
		caseLink = &c->next;

		tryRecover(parser);
	}
}

Syntax* parseReturnStmt(Parser* parser)
{
    ReturnStmt* stmt = createObject<ReturnStmt>();
    if(peekTokenCode(parser) != kTokenCode_Semi)
    {
        stmt->value = parseExp(parser);
    }
    expect(parser, kTokenCode_Semi);
    return stmt;
}

Syntax* parseBreakStmt(Parser* parser)
{
    BreakStmt* stmt = createObject<BreakStmt>();
    expect(parser, kTokenCode_Semi);
    return stmt;
}

Syntax* parseContinueStmt(Parser* parser)
{
    ContinueStmt* stmt = createObject<ContinueStmt>();
    expect(parser, kTokenCode_Semi);
    return stmt;
}

Syntax* parseBuiltinAttr(Parser* parser)
{
    BuiltinAttr* attr = createObject<BuiltinAttr>();
    expect(parser, kTokenCode_LParen);
    attr->name = expectIdentifier(parser);
    expect(parser, kTokenCode_RParen);
    return attr;
}

ParamDecl* parseParam(Parser* parser)
{
	ParamDecl* decl = createObject<ParamDecl>();
	parseVarDeclCommon(parser, decl);
	return decl;
}

void parseParams(Parser* parser, ContainerDecl* decl)
{
	SyntaxListBuilder<Decl> params;

	switch(peekTokenCode(parser))
	{
	case kTokenCode_RCurly:
	case kTokenCode_RParen:
	case kTokenCode_EndOfFile:
		return;

	default:
		break;
	}


	for(;;)
	{
		Decl* param = parseParam(parser);
		if(param)
		{
			params.add(param);
		}

		tryRecover(parser);

		switch(peekTokenCode(parser))
		{
		case kTokenCode_RCurly:
		case kTokenCode_RParen:
		case kTokenCode_EndOfFile:
			{
				decl->getDecls() = params;
			}
			return;

		default:
			break;
		}

		expect(parser, kTokenCode_Comma);

	}

	decl->getDecls() = params;
}



static Syntax* parseFuncDecl(Parser* parser)
{
	FuncDecl* decl = createObject<FuncDecl>();
    decl->loc = peekLoc(parser);

	decl->name = expectOperatorOrIdentifier(parser);

    // generic args, if any
    Decl* result = maybeParseGenericParams(parser, decl);

    pushScope(parser, decl);

	if(expect(parser, kTokenCode_LParen))
	{
		parseParams(parser, decl);
	}
	expect(parser, kTokenCode_RParen);

	if(advanceIf(parser, kTokenCode_Arrow))
	{
		decl->resultType = parseType(parser);
	}

	if(peekTokenCode(parser, kTokenCode_LCurly))
	{
		decl->body = parseStmtBody(parser);
	}
	else
	{
		expect(parser, kTokenCode_Semi);
	}

    popScope(parser);

	return result;
}

static Syntax* parseSubscriptDecl(Parser* parser)
{
    SubscriptDecl* decl = createObject<SubscriptDecl>();

    pushScope(parser, decl);

    if(expect(parser, kTokenCode_LParen))
    {
        parseParams(parser, decl);
    }
    expect(parser, kTokenCode_RParen);

    if(advanceIf(parser, kTokenCode_Arrow))
    {
        decl->resultType = parseType(parser);
    }

    if(peekTokenCode(parser, kTokenCode_LCurly))
    {
        decl->body = parseStmtBody(parser);
    }
    else
    {
        expect(parser, kTokenCode_Semi);
    }

    popScope(parser);

    return decl;
}

static Syntax* parseInitializerDecl(Parser* parser)
{
    InitializerDecl* decl = createObject<InitializerDecl>();

    pushScope(parser, decl);

    if(expect(parser, kTokenCode_LParen))
    {
        parseParams(parser, decl);
    }
    expect(parser, kTokenCode_RParen);

    // Note(tfoley): This should be an error, and we'll need to report it as such...
    if(advanceIf(parser, kTokenCode_Arrow))
    {
        decl->resultType = parseType(parser);
    }

    if(peekTokenCode(parser, kTokenCode_LCurly))
    {
        decl->body = parseStmtBody(parser);
    }
    else
    {
        expect(parser, kTokenCode_Semi);
    }

    popScope(parser);

    return decl;
}

SyntaxDecl* createSyntaxDecl(Session* session, char const* name, SyntaxCallback callback, Class* syntaxClass)
{
	SyntaxDecl* syntaxDecl = createObject<SyntaxDecl>();
	syntaxDecl->name = getName(session, name);
    syntaxDecl->syntaxClass = syntaxClass;
	syntaxDecl->callback = callback;
	return syntaxDecl;
}

template<typename T>
SyntaxDecl* createSyntaxDecl(Session* session, char const* name, SyntaxCallback callback)
{
    return createSyntaxDecl(session, name, callback, getClass<T>());
}

void parseFileIntoModule(
    Session*    session,
    SourceFile*	file,
    ModuleDecl* moduleDecl)
{
    Parser parser;
    initializeParser(&parser, session, file);

    // set up decl list to add to
    SyntaxListBuilder<Decl> moduleDeclList;
    moduleDeclList.head = moduleDecl->getDecls().head;
    moduleDeclList.link = moduleDeclList.head ? session->moduleDeclLink : &moduleDeclList.head;

    //	parser.stmtList = &moduleDeclList;

    // set up super-global scope

    ContainerDecl* globals = createObject<ContainerDecl>();
    SyntaxListBuilder<Decl> globalDecls;

    // add decls here!
    globalDecls.add(createSyntaxDecl<Decl>(session, "import", &parseImportDecl));
    globalDecls.add(createSyntaxDecl<Decl>(session, "class", &parseClassDecl));
    globalDecls.add(createSyntaxDecl<Decl>(session, "struct", &parseStructDecl));
	globalDecls.add(createSyntaxDecl<Decl>(session, "enum", &parseEnumDecl));
	globalDecls.add(createSyntaxDecl<Decl>(session, "var", &parseVarDecl));
    globalDecls.add(createSyntaxDecl<Decl>(session, "let", &parseLetDecl));
    globalDecls.add(createSyntaxDecl<Decl>(session, "func", &parseFuncDecl));
    globalDecls.add(createSyntaxDecl<Decl>(session, "subscript", &parseSubscriptDecl));
    globalDecls.add(createSyntaxDecl<Decl>(session, "init", &parseInitializerDecl));
    globalDecls.add(createSyntaxDecl<Decl>(session, "typealias", &parseTypeAliasDecl));
    globalDecls.add(createSyntaxDecl<Stmt>(session, "if", &parseIfStmt));
    globalDecls.add(createSyntaxDecl<Stmt>(session, "while", &parseWhileStmt));
	globalDecls.add(createSyntaxDecl<Stmt>(session, "for", &parseForStmt));
	globalDecls.add(createSyntaxDecl<Stmt>(session, "foreach", &parseForEachStmt));
	globalDecls.add(createSyntaxDecl<Stmt>(session, "return", &parseReturnStmt));
    globalDecls.add(createSyntaxDecl<Stmt>(session, "break", &parseBreakStmt));
    globalDecls.add(createSyntaxDecl<Stmt>(session, "continue", &parseContinueStmt));
	globalDecls.add(createSyntaxDecl<Stmt>(session, "switch", &parseSwitchStmt));
	globalDecls.add(createSyntaxDecl<Attr>(session, "@__builtin", &parseBuiltinAttr));

    globals->getDecls() = globalDecls;

    Scope* globalScope = new Scope();
    globalScope->parent = 0;
    globalScope->directLink.container = globals;

    parser.scope = globalScope;

    //


    // TODO: really need to construct a custom scope for the file...
    pushScope(&parser, moduleDecl);
    SyntaxList<Decl> fileDecls = parseDeclsInBody(&parser);
    for(auto dd : fileDecls)
        dd->parent = moduleDecl;
    popScope(&parser);

    expect(&parser, kTokenCode_EndOfFile);

#if 0
    {
        for(auto d : fileDecls)
        {
            fprintf(stderr, "file decl %s returned\n", getText(d->name).begin);
        }
    }
#endif

    moduleDeclList.append(fileDecls);

#if 0
    {
        for(auto d : moduleDeclList)
        {
            fprintf(stderr, "file decl %s returned\n", getText(d->name).begin);
        }
    }
#endif

    moduleDecl->getDecls() = moduleDeclList;

    finalizeParser(&parser);
}

void parseFile(
	Session*	session,
	SourceFile*	file)
{
    fprintf(stderr, "PARSING\n");

	// set up module if needed
	ModuleDecl* moduleDecl = session->moduleDecl;
	if(!moduleDecl)
	{
		moduleDecl = COGC_ALLOC_SYNTAX(ModuleDecl);
        moduleDecl->name = getModuleName(session);
		session->moduleDecl = moduleDecl;
		session->moduleDeclLink = &moduleDecl->getDecls().head;
	}

    parseFileIntoModule(session, file, moduleDecl);
}

}
