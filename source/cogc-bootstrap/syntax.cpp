// syntax.cpp
#include "syntax.h"

COGC_DEFINE_CLASS(cogc::Syntax, cogc::Object);

COGC_DEFINE_CLASS(cogc::ImportDecl, cogc::Decl);


COGC_DEFINE_CLASS(cogc::Attr, cogc::Syntax);
COGC_DEFINE_CLASS(cogc::BuiltinAttr, cogc::Attr);

COGC_DEFINE_CLASS(cogc::Stmt, cogc::Syntax);
COGC_DEFINE_CLASS(cogc::Decl, cogc::Stmt);
COGC_DEFINE_CLASS(cogc::ContainerStmt, cogc::Decl);
COGC_DEFINE_CLASS(cogc::ContainerDecl, cogc::ContainerStmt);

COGC_DEFINE_CLASS(cogc::GenericDecl, cogc::ContainerDecl);

COGC_DEFINE_CLASS(cogc::TypeVarDecl, cogc::Decl);
COGC_DEFINE_CLASS(cogc::TypeAliasDecl, cogc::TypeVarDecl);
COGC_DEFINE_CLASS(cogc::GenericParamDecl, cogc::TypeVarDecl);

COGC_DEFINE_CLASS(cogc::ModuleDecl, cogc::ContainerDecl);
COGC_DEFINE_CLASS(cogc::PatternDecl, cogc::ContainerDecl);
COGC_DEFINE_CLASS(cogc::AggTypeDecl, cogc::PatternDecl);
COGC_DEFINE_CLASS(cogc::ClassDecl, cogc::AggTypeDecl);
COGC_DEFINE_CLASS(cogc::StructDecl, cogc::AggTypeDecl);

COGC_DEFINE_CLASS(cogc::VarDeclBase, cogc::Decl);
COGC_DEFINE_CLASS(cogc::VarDecl, cogc::VarDeclBase);
COGC_DEFINE_CLASS(cogc::LetDecl, cogc::VarDeclBase);
COGC_DEFINE_CLASS(cogc::ParamDecl, cogc::LetDecl);

COGC_DEFINE_CLASS(cogc::FuncDeclBase, cogc::PatternDecl);
COGC_DEFINE_CLASS(cogc::FuncDecl, cogc::FuncDeclBase);
COGC_DEFINE_CLASS(cogc::SubscriptDecl, cogc::FuncDeclBase);
COGC_DEFINE_CLASS(cogc::InitializerDecl, cogc::FuncDeclBase);


COGC_DEFINE_CLASS(cogc::SyntaxDecl, cogc::Decl);

COGC_DEFINE_CLASS(cogc::Arg, cogc::Syntax);
COGC_DEFINE_CLASS(cogc::PositionalArg, cogc::Arg);

//

COGC_DEFINE_CLASS(cogc::Val, cogc::Object);

//

COGC_DEFINE_CLASS(cogc::Exp, cogc::Stmt);

COGC_DEFINE_CLASS(cogc::LitExp, cogc::Exp);
COGC_DEFINE_CLASS(cogc::IntLitExp, cogc::LitExp);
COGC_DEFINE_CLASS(cogc::StringLitExp, cogc::LitExp);
COGC_DEFINE_CLASS(cogc::CharacterLitExp, cogc::LitExp);

COGC_DEFINE_CLASS(cogc::AppExpBase, cogc::Exp);
COGC_DEFINE_CLASS(cogc::GenericAppExp, cogc::AppExpBase);
COGC_DEFINE_CLASS(cogc::AppExp, cogc::AppExpBase);
COGC_DEFINE_CLASS(cogc::IndexExp, cogc::AppExpBase);

COGC_DEFINE_CLASS(cogc::OperatorAppExp, cogc::AppExp);
COGC_DEFINE_CLASS(cogc::InfixExp, cogc::OperatorAppExp);
COGC_DEFINE_CLASS(cogc::PrefixExp, cogc::OperatorAppExp);
COGC_DEFINE_CLASS(cogc::PostfixExp, cogc::OperatorAppExp);

COGC_DEFINE_CLASS(cogc::AssignExp, cogc::Exp);

COGC_DEFINE_CLASS(cogc::NameExp, cogc::Exp);
COGC_DEFINE_CLASS(cogc::MemberExp, cogc::Exp);

COGC_DEFINE_CLASS(cogc::ErrorExp, cogc::Exp);

COGC_DEFINE_CLASS(cogc::OverloadedExpr, cogc::Exp);

COGC_DEFINE_CLASS(cogc::ParenExp, cogc::Exp);


//


COGC_DEFINE_CLASS(cogc::BlockStmt, cogc::ContainerDecl);

COGC_DEFINE_CLASS(cogc::IfStmtBase, cogc::Stmt);
COGC_DEFINE_CLASS(cogc::IfStmt, cogc::IfStmtBase);
COGC_DEFINE_CLASS(cogc::IfLetStmt, cogc::IfStmtBase);

COGC_DEFINE_CLASS(cogc::WhileStmt, cogc::Stmt);
COGC_DEFINE_CLASS(cogc::ReturnStmt, cogc::Stmt);
COGC_DEFINE_CLASS(cogc::ForStmt, cogc::Stmt);
COGC_DEFINE_CLASS(cogc::ForEachStmt, cogc::Stmt);
COGC_DEFINE_CLASS(cogc::BreakStmt, cogc::Stmt);
COGC_DEFINE_CLASS(cogc::ContinueStmt, cogc::Stmt);
COGC_DEFINE_CLASS(cogc::SwitchCase, cogc::Syntax);
COGC_DEFINE_CLASS(cogc::SwitchStmt, cogc::Stmt);

// Should probably track things added afer I started porting...

COGC_DEFINE_CLASS(cogc::EnumDecl, cogc::AggTypeDecl);
COGC_DEFINE_CLASS(cogc::EnumTagDecl, cogc::VarDeclBase);


//

//

namespace cogc
{

Attr* Stmt::findAttrImpl(Class* attrClass)
{
    for(auto a : attrs)
    {
        if(auto match = as(a, attrClass))
            return (Attr*) match;
    }
    return nullptr;
}

ContainerStmt*  Decl::getParent() { return parent; }


//

//

}
