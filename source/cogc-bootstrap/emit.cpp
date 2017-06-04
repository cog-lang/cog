// emit.cpp
#include "emit.h"

#include "name.h"
#include "session.h"
#include "syntax.h"

#include <assert.h>
#include <stdio.h>

// Ugh... this is just for bootstrapping, okay
#include <map>

namespace cogc {

struct EmitContext
{
	Session* session;
	FILE*	stream;
};

static DiagnosticSink* getSink(EmitContext* context)
{
    return &context->session->sink;
}

enum DeclEmitMode
{
	kDeclEmitMode_MinimalForward,
	kDeclEmitMode_Forward,
	kDeclEmitMode_Full,
};

static void emitStmt(
	EmitContext*	context,
	Stmt*			stmt);


static void emitDecl(
	EmitContext*	context,
	Decl*			decl,
	DeclEmitMode	mode);

static void emitExp(
    EmitContext*	context,
    Exp*            exp);

static void emitVal(
    EmitContext*    context,
    Val*            val);

static void emit(
	EmitContext* context,
	StringSpan text)
{
	fwrite(text.begin, 1, text.end - text.begin, context->stream);
}

static void emit(
	EmitContext* context,
	char const*	text)
{
	emit(context, TerminatedStringSpan(text));
}

static void emit(
	EmitContext* context,
	Name*			name)
{
	emit(context, getText(name));
}

static void emitDecls(
	EmitContext*	context,
	ContainerDecl*	containerDecl,
	DeclEmitMode	mode);

static void emitType(
	EmitContext*	context,
	Exp*			type)
{
    if(!type)
    {
        emit(context, "NullType");
        return;
    }

	emitExp(context, type);
#if 0
    {
        assert(!"unimplemented");
        emit(context, "UnknownType");
    }
#endif
}

static void emitVal(
    EmitContext*    context,
    Val*            val)
{
    {
        assert(!"unimplemented");
        emit(context, "UnknownVal");        
    }
}

static void emitGenericQuals(
	EmitContext*	context,
	Decl*			decl)
{
	auto pp = decl->parent;
	while (pp)
	{
		auto genericParent = as<GenericDecl>(pp);
		if (genericParent)
		{
#if 0
			emit(context, "template<>\n");
			return;
#else

			emit(context, "template<");
			bool first = true;
			for (auto dd : genericParent->getDecls())
			{
				auto genericParamDecl = as<GenericParamDecl>(dd);
				if (!genericParamDecl)
					continue;

				if (!first) emit(context, ", ");

				emit(context, "typename ");
				emit(context, genericParamDecl->name);
				first = false;
			}
			emit(context, " > ");
#endif
		}

		pp = pp->parent;
	}
}

static void emitDeclNameAndGenericArgs(
	EmitContext*	context,
	Decl*			decl,
	DeclEmitMode	mode);

static void emitDeclName(
	EmitContext*	context,
	Decl*			decl,
	DeclEmitMode	mode)
{
	auto parent = decl->parent;

	auto genericParent = as<GenericDecl>(parent);
	if (genericParent)
	{
		parent = genericParent->parent;
	}

	if (auto aggTypeDecl = as <AggTypeDecl>(parent))
	{
		if (mode == kDeclEmitMode_Full)
		{
			emitDeclNameAndGenericArgs(context, parent, mode);
			emit(context, "::");
		}
	}

	Name* name = decl->name;
	char const* text = getText(name).begin;
	int c = text[0];
	if ('a' <= c && c <= 'z') {}
	else if ('A' <= c && c <= 'Z') {}
	else if ('_' == c || 0 == c) {}
	else
	{
		emit(context, "operator");
	}
	emit(context, decl->name);
}

static void emitDeclNameAndGenericArgs(
	EmitContext*	context,
	Decl*			decl,
	DeclEmitMode	mode)
{
	auto parent = decl->parent;

	auto genericParent = as<GenericDecl>(parent);
	
	emitDeclName(context, decl, mode);

	if (genericParent && (mode == kDeclEmitMode_Full))
	{
		emit(context, "<");
		bool first = true;
		for (auto dd : genericParent->getDecls())
		{
			auto genericParamDecl = as<GenericParamDecl>(dd);
			if (!genericParamDecl)
				continue;

			if (!first) emit(context, ", ");

			emit(context, genericParamDecl->name);
			first = false;
		}
		emit(context, " > ");
	}
}

static void emitDeclarator(
	EmitContext*	context,
	Exp*			type,
	Decl*			decl,
	DeclEmitMode	mode)
{
	emitType(context, type);
	emit(context, " ");

	emitDeclName(context, decl, mode);
}

// Expressions

static void emitBinaryExp(
    EmitContext*	context,
    AppExpBase*     exp,
    char const*     op)
{
    emitExp(context, exp->args.head->exp);
    emit(context, " ");
    emit(context, op);
    emit(context, " ");
    emitExp(context, exp->args.head->next->exp);
}

static void emitStringVal(
    EmitContext*    context,
    StringSpan      str)
{
    char const* cursor = str.begin;
    while(cursor != str.end)
    {
        switch(*cursor)
        {
        case '\n': emit(context, "\\n"); break;
		case '\r': emit(context, "\\r"); break;
		case '\\': emit(context, "\\\\"); break;
		case '\t': emit(context, "\\t"); break;
		case '\'': emit(context, "\\\'"); break;
		case '\"': emit(context, "\\\""); break;
		default:
            {
                char text[] = {*cursor, 0};
                emit(context, text);
            }
            break;
        }
        cursor++;
    }
}

static void emitExp(
    EmitContext*	context,
    Exp*            exp)
{
	if (auto nameExp = as<NameExp>(exp))
	{
		emit(context, nameExp->name);
	}
	else if (auto memberExpr = as<MemberExp>(exp))
	{
		emit(context, "DEREF(");
		emitExp(context, memberExpr->base);
		emit(context, ")");
		emit(context, ".");
		emit(context, memberExpr->memberName);
	}
	else if (auto parenExpr = as<ParenExp>(exp))
	{
		emit(context, "(");
		emitExp(context, parenExpr->base);
		emit(context, ")");
	}
	else if (auto genericAppExp = as<GenericAppExp>(exp))
	{
		emitExp(context, genericAppExp->base);
		emit(context, "<");
		bool first = true;
		for (auto arg : genericAppExp->args)
		{
			if (!first) emit(context, ", ");
			emitExp(context, arg->exp);
			first = false;
		}
		emit(context, "> ");
	}
	else if (auto infixExp = as<InfixExp>(exp))
	{
		emitExp(context, infixExp->args.head->exp);
		emit(context, " ");
		emitExp(context, infixExp->base);
		emit(context, " ");
		emitExp(context, infixExp->args.head->next->exp);
	}
	else if (auto prefixExp = as<PrefixExp>(exp))
	{
		emitExp(context, prefixExp->base);
		emitExp(context, prefixExp->args.head->exp);
	}
	else if (auto postfixExp = as<PostfixExp>(exp))
	{
		emitExp(context, postfixExp->args.head->exp);
		emitExp(context, postfixExp->base);
	}
	else if (auto indexExp = as<IndexExp>(exp))
	{
		emitExp(context, indexExp->base);
		emit(context, "[");
		bool first = true;
		for (auto arg : indexExp->args)
		{
			if (!first) emit(context, ", ");
			emitExp(context, arg->exp);
			first = false;
		}
		emit(context, "]");
	}
	else if(auto appExp = as<AppExpBase>(exp))
    {
#if 0
        if(auto baseDeclRef = as<DeclRefExp>(appExp->base))
        {
            if(auto builtinAttr = baseDeclRef->declRef.getDecl()->findAttr<BuiltinAttr>())
            {
                TerminatedStringSpan name = getText(builtinAttr->name);
                if(name == TerminatedStringSpan("CmpLT"))
                {
                    emitBinaryExp(context, appExp, "<");
                    return;
                }
                if(name == TerminatedStringSpan("CmpGT"))
                {
                    emitBinaryExp(context, appExp, ">");
                    return;
                }
                if(name == TerminatedStringSpan("CmpNE"))
                {
                    emitBinaryExp(context, appExp, "!=");
                    return;
                }
                if(name == TerminatedStringSpan("CmpEQ"))
                {
                    emitBinaryExp(context, appExp, "==");
                    return;
                }
                if(name == TerminatedStringSpan("Add"))
                {
                    emitBinaryExp(context, appExp, "+");
                    return;
                }
                if(name == TerminatedStringSpan("Sub"))
                {
                    emitBinaryExp(context, appExp, "-");
                    return;
                }
                if(name == TerminatedStringSpan("And"))
                {
                    emitBinaryExp(context, appExp, "&&");
                    return;
                }
                if(name == TerminatedStringSpan("Subscript"))
                {
                    emitExp(context, baseDeclRef->getBase());
                    emit(context, "[");
                    emitExp(context, appExp->args.head->exp);
                    emit(context, "]");
                    return;
                }
                if(name == TerminatedStringSpan("Not"))
                {
                    emit(context, "!");
                    emitExp(context, appExp->args.head->exp);
                    return;
                }
                if(name == TerminatedStringSpan("Deref"))
                {
                    emit(context, "*");
                    emitExp(context, appExp->args.head->exp);
                    return;
                }
                if(name == TerminatedStringSpan("AddrOf"))
                {
                    emit(context, "&");
                    emitExp(context, appExp->args.head->exp);
                    return;
                }
                if(name == TerminatedStringSpan("Inc"))
                {
                    emitExp(context, appExp->args.head->exp);
                    emit(context, "++");
                    return;
                }

                diagnose(getSink(context), builtinAttr->loc, kDiagnostic_unimplemented, name);

                assert(!"unimplemented");
            }
        }
#endif

        emitExp(context, appExp->base);
        emit(context, "(");
        bool first = true;
        for(auto arg : appExp->args)
        {
            if(!first) emit(context, ", ");
            emitExp(context, arg->exp);
            first = false;
        }
        emit(context, ")");
    }
    else if(auto assignExp = as<AssignExp>(exp))
    {
        emitExp(context, assignExp->left);
        emit(context, " = ");
        emitExp(context, assignExp->right);
    }
    else if(auto intLitExp = as<IntLitExp>(exp))
    {
        char buffer[16];
        sprintf(buffer, "%lld", intLitExp->val);
        emit(context, buffer);
    }
    else if(auto strLitExp = as<StringLitExp>(exp))
    {
        emit(context, "\"");
        emitStringVal(context, strLitExp->val);
        emit(context, "\"");
    }
    else if(auto charLitExp = as<CharacterLitExp>(exp))
    {
        emit(context, "\'");
        emitStringVal(context, charLitExp->val);
        emit(context, "\'");
    }
    else
    {
        diagnose(getSink(context), exp->loc, kDiagnostic_unimplemented, exp->directClass->name);
        assert(!"unimplemented");
    }
}

// Statements


static void emitBlockStmt(
	EmitContext*	context,
	BlockStmt*		stmt)
{
	emit(context, "{\n");
	for(Stmt* stmt : stmt->getStmts())
	{
		emitStmt(context, stmt);
	}
	emit(context, "}\n");
}

static void emitBlockStmt(
    EmitContext*    context,
    Stmt*           stmt)
{
    if(BlockStmt* blockStmt = as<BlockStmt>(stmt))
    {
        emitBlockStmt(context, blockStmt);
    }
    else
    {
        emit(context, "{\n");
        emitStmt(context, stmt);
        emit(context, "}\n");
    }
}

static void emitStmt(
	EmitContext*	context,
	Stmt*			stmt)
{
	if(auto blockStmt = as<BlockStmt>(stmt))
	{
		emitBlockStmt(context, blockStmt);
	}
	else if(auto decl = as<Decl>(stmt))
	{
		emitDecl(context, decl, kDeclEmitMode_Full);
	}
    else if(auto exp = as<Exp>(stmt))
    {
        emitExp(context, exp);
        emit(context, ";\n");
    }
    else if(auto whileStmt = as<WhileStmt>(stmt))
    {
        emit(context, "while(");
        emitExp(context, whileStmt->condition);
        emit(context, ")\n{\n");
        emitStmt(context, whileStmt->body);
        emit(context, "}\n");
    }
	else if (auto forEachStmt = as<ForEachStmt>(stmt))
	{
		emit(context, "for(auto ");
		emit(context, forEachStmt->name);
		emit(context, " : ");
		emitExp(context, forEachStmt->exp);
		emit(context, ")\n{\n");
		emitStmt(context, forEachStmt->body);
		emit(context, "}\n");
	}
	else if (auto forStmt = as<ForStmt>(stmt))
	{
		emit(context, "{\n");
		if (forStmt->init)
		{
			emitStmt(context, forStmt->init);
		}
		emit(context, "for(;");
		if (forStmt->condition)
		{
			emitExp(context, forStmt->condition);
		}
		emit(context, ";");
		if (forStmt->iter)
		{
			emitExp(context, forStmt->iter);
		}
		emit(context, ")\n{\n");
		emitStmt(context, forStmt->body);
		emit(context, "}}\n");
	}
	else if (auto switchStmt = as<SwitchStmt>(stmt))
	{
		emit(context, "switch(");
		emitExp(context, switchStmt->condition);
		emit(context, ")\n{\n");
		for (auto cc = switchStmt->cases; cc; cc = cc->next)
		{
			for (auto aa = cc->values; aa; aa = aa->next)
			{
				if (aa->exp)
				{
					emit(context, "case ");
					emitExp(context, aa->exp);
				}
				else
				{
					emit(context, "default");
				}
				emit(context, ":\n");
			}
			emit(context, "{\n");
			emitStmt(context, cc->body);
			emit(context, "}\n");
		}
		emit(context, "}\n");
	}
	else if(auto ifStmt = as<IfStmt>(stmt))
    {
        emit(context, "if(");
        emitExp(context, ifStmt->condition);
        emit(context, ")\n");
        emitBlockStmt(context, ifStmt->thenStmt);
        if(auto elseStmt = ifStmt->elseStmt)
        {
            emit(context, "else\n");
            emitBlockStmt(context, elseStmt);
        }
    }
	else if (auto ifLetStmt = as<IfLetStmt>(stmt))
	{
		emit(context, "if(auto ");
		emit(context, ifLetStmt->name);
		emit(context, " = ");
		emitExp(context, ifLetStmt->init);
		emit(context, ")\n");
		emitBlockStmt(context, ifLetStmt->thenStmt);
		if (auto elseStmt = ifLetStmt->elseStmt)
		{
			emit(context, "else\n");
			emitBlockStmt(context, elseStmt);
		}
	}
	else if(auto returnStmt = as<ReturnStmt>(stmt))
    {
        emit(context, "return");
        if(auto value = returnStmt->value)
        {
            emit(context, " ");
            emitExp(context, value);
        }
        emit(context, ";\n");
    }
    else if(auto breakStmt = as<BreakStmt>(stmt))
    {
        emit(context, "break;\n");
    }
    else if(auto continueStmt = as<ContinueStmt>(stmt))
    {
        emit(context, "continue;\n");
    }
    else
    {
        diagnose(getSink(context), stmt->loc, kDiagnostic_unimplemented, stmt->directClass->name);
        assert(!"unimplemented");
    }
}

// Declaration

static void emitClassDecl(
	EmitContext* 	context,
    AggTypeDecl*    aggDecl,
	DeclEmitMode	mode)
{
	if (getText(aggDecl->name) == TerminatedStringSpan("TypeVarDecl"))
	{
		int f = 9;
	}

	// We need to emit implementations for class members here!
	if (mode == kDeclEmitMode_Full)
	{
		for (auto dd : aggDecl->getDecls())
		{
			if (auto varDecl = as<VarDecl>(dd))
				continue;

			emitDecl(context, dd, kDeclEmitMode_Full);
		}

		return;
	}

	emit(context, "struct ");
    emit(context, aggDecl->name);

	if (mode <= kDeclEmitMode_MinimalForward)
	{
		emit(context, ";\n");
		return;
	}

    if(Exp* base = aggDecl->base)
	{
		emit(context, " : ");
		emitType(context, base);
	}

	emit(context, "\n{\n");

	emit(context, "typedef cog::Class StaticClass;\n");
	emit(context, "static StaticClass staticClass;\n");


    emitDecls(context, aggDecl, kDeclEmitMode_Forward);
	emit(context, "};\n");
}

static void emitVarDecl(
	EmitContext* 	context,
	VarDeclBase*	varDecl,
	DeclEmitMode	mode)
{
	if (mode == kDeclEmitMode_MinimalForward)
		return;

	if (varDecl->type)
	{
		emitDeclarator(context, varDecl->type, varDecl, mode);
	}
	else
	{
		emit(context, "auto ");
		emitDeclName(context, varDecl, mode);
	}
    if(auto initExp = varDecl->init)
    {
        emit(context, " = ");
        emitExp(context, initExp);
    }
	emit(context, ";\n");
}

static void emitParamDecl(
	EmitContext* 	context,
	ParamDecl*		paramDecl)
{
	emitDeclarator(context, paramDecl->type, paramDecl, kDeclEmitMode_Full);
}

static void emitFuncDecl(
	EmitContext* 	context,
	FuncDecl*		funcDecl,
	DeclEmitMode	mode)
{
	if (mode == kDeclEmitMode_MinimalForward)
		return;

	if (mode == kDeclEmitMode_Full)
	{
		if (!funcDecl->body)
			return;

		emitGenericQuals(context, funcDecl);
	}

	if (funcDecl->resultType)
	{
		emitDeclarator(context, funcDecl->resultType, funcDecl, mode);
	}
	else
	{
		emit(context, "void ");
		emitDeclName(context, funcDecl, mode);
	}

	emit(context, "(");

	bool first = true;
	for(auto decl : funcDecl->getDecls())
	{
		auto param = as<ParamDecl>(decl);
		if(!param) continue;

		if(!first) emit(context, ", ");
		emitParamDecl(context, param);
		first = false;
	}

	emit(context, ")");

	Stmt* body = funcDecl->body;
	if(body && mode == kDeclEmitMode_Full)
	{
        emit(context, "\n");
		emitBlockStmt(context, body);
	}
	else
	{
		emit(context, ";\n");		
	}
}

static void emitInitializerDecl(
    EmitContext* 	    context,
    InitializerDecl*    initDecl,
	DeclEmitMode		mode)
{
	if (mode == kDeclEmitMode_MinimalForward)
		return;

	if (mode == kDeclEmitMode_Full)
	{
		if (!initDecl->body)
			return;

		emitGenericQuals(context, initDecl);
	}

    // We emit an initializer as a C++ constructor (for now),
    // so we need to emit hte name of the enclosing type...
	if (mode == kDeclEmitMode_Full)
	{
		emitDeclNameAndGenericArgs(context, initDecl->getParent(), mode);
		emit(context, "::");
	}
    emit(context, initDecl->getParent()->name);

    emit(context, "(");

    bool first = true;
    for(auto decl : initDecl->getDecls())
    {
        auto param = as<ParamDecl>(decl);
        if(!param) continue;

        if(!first) emit(context, ", ");
        emitParamDecl(context, param);
        first = false;
    }

    emit(context, ")");

	Stmt* body = initDecl->body;
	if (body && mode == kDeclEmitMode_Full)
	{
		emit(context, "\n");
		emitBlockStmt(context, body);
	}
	else
	{
		emit(context, ";\n");
	}
}

static void emitSubscriptDecl(
	EmitContext* 	    context,
	SubscriptDecl*    decl,
	DeclEmitMode		mode)
{
	if (mode == kDeclEmitMode_MinimalForward)
		return;

	if (mode == kDeclEmitMode_Full)
	{
		if (!decl->body)
			return;

		emitGenericQuals(context, decl);
	}

	if (decl->resultType)
	{
		emitType(context, decl->resultType);
	}
	else
	{
		emit(context, "void ");
	}

	// We emit an initializer as a C++ constructor (for now),
	// so we need to emit hte name of the enclosing type...
	if (mode == kDeclEmitMode_Full)
	{
		emitDeclNameAndGenericArgs(context, decl->getParent(), mode);
		emit(context, "::");
	}

	emit(context, "operator[](");

	bool first = true;
	for (auto decl : decl->getDecls())
	{
		auto param = as<ParamDecl>(decl);
		if (!param) continue;

		if (!first) emit(context, ", ");
		emitParamDecl(context, param);
		first = false;
	}

	emit(context, ")");

	Stmt* body = decl->body;
	if (body && mode == kDeclEmitMode_Full)
	{
		emit(context, "\n");
		emitBlockStmt(context, body);
	}
	else
	{
		emit(context, ";\n");
	}
}

static void emitDecl(
	EmitContext* context,
	Decl*			decl,
	DeclEmitMode	mode)
{
    if(decl->findAttr<BuiltinAttr>())
    {
        // Don't emit declarations for builtin stuff!
        return;
    }

	if(ClassDecl* classDecl = as<ClassDecl>(decl))
	{
		emitClassDecl(context, classDecl, mode);
	}
    else if(StructDecl* structDecl = as<StructDecl>(decl))
    {
		emitClassDecl(context, structDecl, mode);
    }
	// Note: this one comes before the base case for variables...
	else if (EnumTagDecl* tagDecl = as<EnumTagDecl>(decl))
	{
		emit(context, tagDecl->name);
		if (tagDecl->init)
		{
			emit(context, " = ");
			emitExp(context, tagDecl->init);
		}
		emit(context, ",\n");
	}
	else if(VarDeclBase* varDecl = as<VarDeclBase>(decl))
	{
		emitVarDecl(context, varDecl, mode);
	}
	else if(FuncDecl* funcDecl = as<FuncDecl>(decl))
	{
		emitFuncDecl(context, funcDecl, mode);
	}
    else if(InitializerDecl* initDecl = as<InitializerDecl>(decl))
    {
		emitInitializerDecl(context, initDecl, mode);
    }
	else if (SubscriptDecl* subscriptDecl = as<SubscriptDecl>(decl))
	{
		emitSubscriptDecl(context, subscriptDecl, mode);
	}
	else if (EnumDecl* enumDecl = as<EnumDecl>(decl))
	{
		if (mode >= kDeclEmitMode_Full)
			return;

		emit(context, "enum ");
		emitDeclName(context, enumDecl, mode);
		emit(context, " : int");

		if (mode <= kDeclEmitMode_MinimalForward)
		{
			emit(context, ";\n");
			return;
		}

		emit(context, "\n{\n");
		for (auto dd : enumDecl->getDecls())
		{
			emitDecl(context, dd, kDeclEmitMode_Full);
		}
		emit(context, "};\n");
	}
	else if(ImportDecl* importDecl = as<ImportDecl>(decl))
	{ }
	else if (TypeAliasDecl* typeAliasDecl = as<TypeAliasDecl>(decl))
	{
		emit(context, "typedef ");
		emitDeclarator(context, typeAliasDecl->init, typeAliasDecl, mode);
		emit(context, ";\n");
	}
	else if (GenericDecl* genericDecl = as<GenericDecl>(decl))
	{
//		if (mode < kDeclEmitMode_Full)
//			return;

		auto innerDecl = genericDecl->inner;

		if (mode < kDeclEmitMode_Full)
		{
			// DOn't emit spurious `template`...
			if (mode <= kDeclEmitMode_MinimalForward)
			{
				if (as<FuncDeclBase>(innerDecl))
					return;
			}


			emit(context, "template<");
			bool first = true;
			for (auto dd : genericDecl->getDecls())
			{
				if (auto typeParam = as<GenericParamDecl>(dd))
				{
					if (!first) emit(context, ", ");
					emit(context, "typename ");
					emit(context, typeParam->name);
					first = false;
				}
				else
				{
				}
			}
			emit(context, " >\n");
		}
		emitDecl(context, genericDecl->inner, mode);
	}
	else
	{
		assert(!"unimplemented");
		throw 99;
	}
}

static void emitDecls(
	EmitContext*	context,
	ContainerDecl*	containerDecl,
	DeclEmitMode	mode)
{
	for(auto decl : containerDecl->getDecls())
	{
		emitDecl(context, decl, mode);
	}
}

struct DeclSortContext
{
	SyntaxListBuilder<Decl> sortedDecls;
	Decl*					unsortedDecls;

};

static void addDecl(
	DeclSortContext*	context,
	Decl*				decl)
{
	decl->next = nullptr;
	context->sortedDecls.add(decl);
}

static void addDecl(
	DeclSortContext*	context,
	Decl**				declPtr)
{
	Decl* decl = *declPtr;
	*declPtr = (Decl*) decl->next;
	decl->next = nullptr;

	context->sortedDecls.add(decl);
}

static void addDependencies(
	DeclSortContext*	context,
	Decl*				decl);


static void addDependencies(
	DeclSortContext*	context,
	Name*				name)
{
	assert(name);

	// Split remaining declarations into two lists:
	// 1) Declarations that match the desired name
	// 2) All other declarations
	//
	// en add any dependencies of each declaration
	// at had a name match, before moving on to add it.
	Decl* dd = context->unsortedDecls;

	Decl* matchingDecls = nullptr;
	Decl** matchingDeclLink = &matchingDecls;

	Decl** unsortedDeclLink = &context->unsortedDecls;
	context->unsortedDecls = nullptr;

	while (dd)
	{
		Decl* next = (Decl*) dd->next;
		dd->next = nullptr;

		if (dd->name == name)
		{
			*matchingDeclLink = dd;
			matchingDeclLink = (Decl**) &dd->next;
		}
		else
		{
			*unsortedDeclLink = dd;
			unsortedDeclLink = (Decl**) &dd->next;
		}

		dd = next;
	}

	// cap off that lists...
	*matchingDeclLink = nullptr;
	*unsortedDeclLink = nullptr;

	// Now for each of those decls that matched, process it

	dd = matchingDecls;
	while (dd)
	{
		Decl* next = (Decl*) dd->next;
		dd->next = nullptr;

		addDependencies(context, dd);
		addDecl(context, dd);

		dd = next;
	}
}

static void addDependencies(
	DeclSortContext*	context,
	Exp*				exp)
{
	if (!exp) return;

	// HACK to avoid dependencies through pointer types...
	if (auto genericAppExpr = as<GenericAppExp>(exp))
	{
		if (auto nameExpr = as<NameExp>(genericAppExpr->base))
		{
			if (strcmp("Ptr", getText(nameExpr->name).begin) == 0)
				return;
			if (strcmp("ConstPtr", getText(nameExpr->name).begin) == 0)
				return;
		}
	}

	if (auto nameExp = as<NameExp>(exp))
	{
		addDependencies(context, nameExp->name);
	}
	else if (auto appExp = as<AppExpBase>(exp))
	{
		addDependencies(context, appExp->base);
		for (auto aa : appExp->args)
			addDependencies(context, aa->exp);
	}
}

static void addDependencies(
	DeclSortContext*	context,
	Decl*				decl)
{
	// Try to find what this decl depends on, and add them!
	if (auto varDecl = as<VarDeclBase>(decl))
	{
		addDependencies(context, varDecl->type);
	}
	else if (auto funcDecl = as<FuncDeclBase>(decl))
	{
		addDependencies(context, funcDecl->resultType);
		for (auto dd : funcDecl->getDecls())
		{
			addDependencies(context, dd);
		}
	}
	else if (auto aggTypeDecl = as<AggTypeDecl>(decl))
	{
		addDependencies(context, aggTypeDecl->base);
		for (auto dd : aggTypeDecl->getDecls())
		{
			addDependencies(context, dd);
		}
	}

}

static void sortDecls(
	EmitContext*	context,
	ContainerDecl*	container)
{
	DeclSortContext sortContext;
	sortContext.unsortedDecls = container->getDecls().head;

	while (sortContext.unsortedDecls)
	{
		Decl* decl = sortContext.unsortedDecls;
		sortContext.unsortedDecls = (Decl*) decl->next;
		decl->next = nullptr;

		// add dependent decls!!
		addDependencies(&sortContext, decl);

		addDecl(&sortContext, &decl);
	}
}

void emitModule(
	Session* session)
{
    if(!session->sourceFiles)
        return;
    if(!session->moduleDecl)
        return;

	// compute a resonable module name
	auto moduleDecl = session->moduleDecl;
	auto moduleName = moduleDecl->name;
    assert(moduleName);

    auto modulePath = session->modulePath2;
    assert(modulePath);

	TerminatedStringSpan moduleNameText = getText(moduleName);
    TerminatedStringSpan modulePathText = getText(modulePath);

	// TODO: actually compute a reasonable path

	char buffer[1024];
	sprintf(buffer, "%s.cog.cpp", modulePathText.begin);


	FILE* stream = fopen(buffer, "wb");

	EmitContext context = { session, stream };

    for(auto mm = session->loadedModules; mm; mm = (ModuleDecl*) mm->next)
    {
        if(mm == moduleDecl) continue;

		sortDecls(&context, mm);

        fprintf(stderr, "module %p : %s\n", mm, getText(mm->name).begin);
    emit(&context, "namespace ");
    emit(&context, mm->name);
    emit(&context, " {\n");
	emitDecls(&context, mm, kDeclEmitMode_MinimalForward);
	emitDecls(&context, mm, kDeclEmitMode_Forward);
    emit(&context, "}\n");
    }

        fprintf(stderr, "module %p : %s\n", moduleDecl, getText(moduleDecl->name).begin);

	sortDecls(&context, moduleDecl);

    emit(&context, "namespace ");
    emit(&context, moduleNameText);
    emit(&context, " {\n");
	emitDecls(&context, moduleDecl, kDeclEmitMode_MinimalForward);
	emitDecls(&context, moduleDecl, kDeclEmitMode_Forward);
	emitDecls(&context, moduleDecl, kDeclEmitMode_Full);

	// last pass to emit info for classes, I guess
	for (auto dd : moduleDecl->getDecls())
	{
		auto classDecl = as<ClassDecl>(dd);
		if (!classDecl) continue;

		emit(&context, "COGC_DEFINE_CLASS(");
		emitDeclName(&context, classDecl, kDeclEmitMode_Full);
		emit(&context, ", ");
		if (auto base = classDecl->base)
		{
			emitExp(&context, base);
		}
		else
		{
			emit(&context, "cog::Object");
		}
		emit(&context, ")\n");
	}

	emit(&context, "}\n");

	fclose(stream);
}

}