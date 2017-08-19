#include "runtime/runtime.h"
namespace cogc {
struct DiagnosticSink;
struct SourceLoc;
using Syntax = struct SyntaxImpl* ;
struct SyntaxImpl;
template<typename T >
struct SyntaxList;
using Attr = struct AttrImpl* ;
struct AttrImpl;
using Stmt = struct StmtImpl* ;
struct StmtImpl;
enum DeclCheckState : int;
using Decl = struct DeclImpl* ;
struct DeclImpl;
template<typename T, typename U >
struct FilteredSyntaxList;
using ContainerStmt = struct ContainerStmtImpl* ;
struct ContainerStmtImpl;
using ContainerDecl = struct ContainerDeclImpl* ;
struct ContainerDeclImpl;
using ModuleDecl = struct ModuleDeclImpl* ;
struct ModuleDeclImpl;
using Session = struct SessionImpl* ;
struct SessionImpl;
struct SharedCheckContext;
struct CheckContext;
struct ScopeLink;
struct Scope;
using GenericDecl = struct GenericDeclImpl* ;
struct GenericDeclImpl;
using Val = struct ValImpl* ;
struct ValImpl;
using Type = struct TypeImpl* ;
struct TypeImpl;
using Exp = struct ExpImpl* ;
struct ExpImpl;
struct TypeExp;
using TypeVarDecl = struct TypeVarDeclImpl* ;
struct TypeVarDeclImpl;
using TypeAliasDecl = struct TypeAliasDeclImpl* ;
struct TypeAliasDeclImpl;
using VarDeclBase = struct VarDeclBaseImpl* ;
struct VarDeclBaseImpl;
using PatternDecl = struct PatternDeclImpl* ;
struct PatternDeclImpl;
using FuncDeclBase = struct FuncDeclBaseImpl* ;
struct FuncDeclBaseImpl;
using AggTypeDecl = struct AggTypeDeclImpl* ;
struct AggTypeDeclImpl;
using ClassDecl = struct ClassDeclImpl* ;
struct ClassDeclImpl;
using StructDecl = struct StructDeclImpl* ;
struct StructDeclImpl;
using BlockStmt = struct BlockStmtImpl* ;
struct BlockStmtImpl;
using DeclRefExp = struct DeclRefExpImpl* ;
struct DeclRefExpImpl;
using MemberExp = struct MemberExpImpl* ;
struct MemberExpImpl;
using Arg = struct ArgImpl* ;
struct ArgImpl;
using AppExpBase = struct AppExpBaseImpl* ;
struct AppExpBaseImpl;
enum OverloadResolveMode : int;
enum OverloadCandidateState : int;
struct OverloadCandidate;
struct OverloadResolveContext;
using TypeType = struct TypeTypeImpl* ;
struct TypeTypeImpl;
using SpecializationArg = struct SpecializationArgImpl* ;
struct SpecializationArgImpl;
using Specializations = struct SpecializationsImpl* ;
struct SpecializationsImpl;
using SubscriptDecl = struct SubscriptDeclImpl* ;
struct SubscriptDeclImpl;
using InitializerDecl = struct InitializerDeclImpl* ;
struct InitializerDeclImpl;
using GenericParamDecl = struct GenericParamDeclImpl* ;
struct GenericParamDeclImpl;
struct GenericInferenceArg;
struct GenericInferenceContext;
using LetDecl = struct LetDeclImpl* ;
struct LetDeclImpl;
using ParamDecl = struct ParamDeclImpl* ;
struct ParamDeclImpl;
enum Severity : int;
enum DiagnosticID : int;
struct ArgTypeList;
enum DiagnosticArgFlavor : int;
enum TokenCode : int;
struct StringSpan;
struct DiagnosticArg;
struct EmitContext;
enum DeclEmitMode : int;
struct TerminatedStringSpan;
struct Name;
using FuncDecl = struct FuncDeclImpl* ;
struct FuncDeclImpl;
template<typename T >
struct SyntaxListBuilder;
struct DeclSortContext;
struct SourceFile;
typedef UInt16 TokenFlags;
struct Lexer;
struct Token;
struct TokenSpan;
struct A;
typedef UInt32 ParserFlags;
enum ParserFlag : int;
struct Parser;
struct LookupResultItem;
struct LookupResult;
using SyntaxDecl = struct SyntaxDeclImpl* ;
struct SyntaxDeclImpl;
using NameExp = struct NameExpImpl* ;
struct NameExpImpl;
typedef Int64 IntLitVal;
struct Dummy;
struct ExpandedSourceLoc;
template<typename T >
struct SyntaxListIterator;
template<typename T, typename U >
struct FilteredSyntaxListIterator;
using BuiltinAttr = struct BuiltinAttrImpl* ;
struct BuiltinAttrImpl;
using SpecializedDecl = struct SpecializedDeclImpl* ;
struct SpecializedDeclImpl;
template<typename T >
struct DeclRefListIterator;
template<typename T >
struct DeclRefList;
using ImportDecl = struct ImportDeclImpl* ;
struct ImportDeclImpl;
using VarDecl = struct VarDeclImpl* ;
struct VarDeclImpl;
using IfStmtBase = struct IfStmtBaseImpl* ;
struct IfStmtBaseImpl;
using IfStmt = struct IfStmtImpl* ;
struct IfStmtImpl;
using IfLetStmt = struct IfLetStmtImpl* ;
struct IfLetStmtImpl;
using WhileStmt = struct WhileStmtImpl* ;
struct WhileStmtImpl;
using ForStmt = struct ForStmtImpl* ;
struct ForStmtImpl;
using ReturnStmt = struct ReturnStmtImpl* ;
struct ReturnStmtImpl;
using BreakStmt = struct BreakStmtImpl* ;
struct BreakStmtImpl;
using ContinueStmt = struct ContinueStmtImpl* ;
struct ContinueStmtImpl;
using SwitchCase = struct SwitchCaseImpl* ;
struct SwitchCaseImpl;
using SwitchStmt = struct SwitchStmtImpl* ;
struct SwitchStmtImpl;
using PositionalArg = struct PositionalArgImpl* ;
struct PositionalArgImpl;
using LitExp = struct LitExpImpl* ;
struct LitExpImpl;
using IntLitExp = struct IntLitExpImpl* ;
struct IntLitExpImpl;
using StringLitExp = struct StringLitExpImpl* ;
struct StringLitExpImpl;
using CharacterLitExp = struct CharacterLitExpImpl* ;
struct CharacterLitExpImpl;
using GenericAppExp = struct GenericAppExpImpl* ;
struct GenericAppExpImpl;
using AppExp = struct AppExpImpl* ;
struct AppExpImpl;
using IndexExp = struct IndexExpImpl* ;
struct IndexExpImpl;
using OperatorAppExp = struct OperatorAppExpImpl* ;
struct OperatorAppExpImpl;
using InfixExp = struct InfixExpImpl* ;
struct InfixExpImpl;
using PrefixExp = struct PrefixExpImpl* ;
struct PrefixExpImpl;
using PostfixExp = struct PostfixExpImpl* ;
struct PostfixExpImpl;
using AssignExp = struct AssignExpImpl* ;
struct AssignExpImpl;
using ErrorExp = struct ErrorExpImpl* ;
struct ErrorExpImpl;
using OverloadedExpr = struct OverloadedExprImpl* ;
struct OverloadedExprImpl;
using DeclRefType = struct DeclRefTypeImpl* ;
struct DeclRefTypeImpl;
using FuncType = struct FuncTypeImpl* ;
struct FuncTypeImpl;
using ErrorType = struct ErrorTypeImpl* ;
struct ErrorTypeImpl;
using OverloadGroupType = struct OverloadGroupTypeImpl* ;
struct OverloadGroupTypeImpl;
using EnumDecl = struct EnumDeclImpl* ;
struct EnumDeclImpl;
using EnumTagDecl = struct EnumTagDeclImpl* ;
struct EnumTagDeclImpl;
using ForEachStmt = struct ForEachStmtImpl* ;
struct ForEachStmtImpl;
using ParenExp = struct ParenExpImpl* ;
struct ParenExpImpl;
using ThisExpr = struct ThisExprImpl* ;
struct ThisExprImpl;
using CastExpr = struct CastExprImpl* ;
struct CastExprImpl;
enum TokenFlag : int;
struct DiagnosticSink
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Session session;
Int errorCount;
};
struct SourceLoc
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
USize raw;
SourceLoc();
SourceLoc(USize raw);
};
using Syntax = struct SyntaxImpl* ;
struct SyntaxImpl : ObjectImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
SourceLoc loc;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Syntax > { typedef cogc::SyntaxImpl Impl; };
} namespace cogc {
template<typename T >
struct SyntaxList
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
T head;
T operator[](Size index);
SyntaxListIterator<T>  begin();
SyntaxListIterator<T>  end();
SyntaxList();
SyntaxList(T head);
};
using Attr = struct AttrImpl* ;
struct AttrImpl : SyntaxImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Attr next;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Attr > { typedef cogc::AttrImpl Impl; };
} namespace cogc {
using Stmt = struct StmtImpl* ;
struct StmtImpl : SyntaxImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
SyntaxList<Attr>  attrs;
Stmt next;
Attr findAttrImpl(Ptr<Class>  attrClass);
template<typename T >
T findAttr();
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Stmt > { typedef cogc::StmtImpl Impl; };
} namespace cogc {
enum DeclCheckState : int
{
kDeclCheckState_Unchecked = 0,
kDeclCheckState_CheckingHead,
kDeclCheckState_CheckedHead,
kDeclCheckState_Checked,
};
using Decl = struct DeclImpl* ;
struct DeclImpl : StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Ptr<Name>  name;
ContainerStmt parent;
DeclCheckState checkState = kDeclCheckState_Unchecked;
ContainerStmt getParent();
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Decl > { typedef cogc::DeclImpl Impl; };
} namespace cogc {
template<typename T, typename U >
struct FilteredSyntaxList
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
U head;
FilteredSyntaxListIterator<T, U>  begin();
FilteredSyntaxListIterator<T, U>  end();
FilteredSyntaxList();
FilteredSyntaxList(U head);
FilteredSyntaxList(ConstRef<SyntaxList<U> >  list);
};
using ContainerStmt = struct ContainerStmtImpl* ;
struct ContainerStmtImpl : DeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
SyntaxList<Stmt>  stmts;
SyntaxList<Stmt>  getStmts();
FilteredSyntaxList<Decl, Stmt>  getDecls();
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ContainerStmt > { typedef cogc::ContainerStmtImpl Impl; };
} namespace cogc {
using ContainerDecl = struct ContainerDeclImpl* ;
struct ContainerDeclImpl : ContainerStmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Ref<SyntaxList<Decl> >  getDecls();
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ContainerDecl > { typedef cogc::ContainerDeclImpl Impl; };
} namespace cogc {
using ModuleDecl = struct ModuleDeclImpl* ;
struct ModuleDeclImpl : ContainerDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ModuleDecl > { typedef cogc::ModuleDeclImpl Impl; };
} namespace cogc {
using Session = struct SessionImpl* ;
struct SessionImpl : cog::ObjectImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Ptr<SourceFile>  sourceFiles;
Ptr<Name>  names;
USize lastSourceLoc;
DiagnosticSink sink;
ModuleDecl moduleDecl;
Ptr<Decl>  moduleDeclLink;
Ptr<Name>  moduleName2;
Ptr<Name>  modulePath2;
ModuleDecl loadedModules;
Bool eval;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Session > { typedef cogc::SessionImpl Impl; };
} namespace cogc {
void checkModule(Session session);
void checkModule(Session session, ModuleDecl moduleDecl);
struct SharedCheckContext
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Session session;
};
struct CheckContext
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
SharedCheckContext* shared;
};
DiagnosticSink* getSink(CheckContext* context);
void checkModule(CheckContext* context, ModuleDecl moduleDecl);
void checkImportDecls(CheckContext* context, ContainerDecl containerDecl);
void checkDecls(CheckContext* context, ContainerDecl containerDecl);
struct ScopeLink
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
ContainerStmt container;
Ptr<ScopeLink>  next = nullptr;
};
struct Scope
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Ptr<Scope>  parent;
ScopeLink directLink;
};
void attachToScope(Scope* scope, ContainerDecl decl);
void checkDecl(CheckContext* context, Decl decl);
void checkDeclImpl(CheckContext* context, Decl decl);
using GenericDecl = struct GenericDeclImpl* ;
struct GenericDeclImpl : ContainerDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Decl inner;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::GenericDecl > { typedef cogc::GenericDeclImpl Impl; };
} namespace cogc {
void checkGenericDecl(CheckContext* context, GenericDecl decl);
using Val = struct ValImpl* ;
struct ValImpl : ObjectImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Val > { typedef cogc::ValImpl Impl; };
} namespace cogc {
using Type = struct TypeImpl* ;
struct TypeImpl : ValImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Type > { typedef cogc::TypeImpl Impl; };
} namespace cogc {
using Exp = struct ExpImpl* ;
struct ExpImpl : StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Type type;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Exp > { typedef cogc::ExpImpl Impl; };
} namespace cogc {
struct TypeExp
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Exp exp = nullptr;
Type type = nullptr;
};
using TypeVarDecl = struct TypeVarDeclImpl* ;
struct TypeVarDeclImpl : DeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
TypeExp bound;
TypeExp init;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::TypeVarDecl > { typedef cogc::TypeVarDeclImpl Impl; };
} namespace cogc {
using TypeAliasDecl = struct TypeAliasDeclImpl* ;
struct TypeAliasDeclImpl : TypeVarDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::TypeAliasDecl > { typedef cogc::TypeAliasDeclImpl Impl; };
} namespace cogc {
void checkTypeAliasDecl(CheckContext* context, TypeAliasDecl decl);
using VarDeclBase = struct VarDeclBaseImpl* ;
struct VarDeclBaseImpl : DeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
TypeExp type;
Exp init;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::VarDeclBase > { typedef cogc::VarDeclBaseImpl Impl; };
} namespace cogc {
void checkVarDecl(CheckContext* context, VarDeclBase decl);
using PatternDecl = struct PatternDeclImpl* ;
struct PatternDeclImpl : ContainerDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::PatternDecl > { typedef cogc::PatternDeclImpl Impl; };
} namespace cogc {
using FuncDeclBase = struct FuncDeclBaseImpl* ;
struct FuncDeclBaseImpl : PatternDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
TypeExp resultType;
Stmt body;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::FuncDeclBase > { typedef cogc::FuncDeclBaseImpl Impl; };
} namespace cogc {
void checkFuncDecl(CheckContext* context, FuncDeclBase decl);
using AggTypeDecl = struct AggTypeDeclImpl* ;
struct AggTypeDeclImpl : PatternDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
TypeExp base;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::AggTypeDecl > { typedef cogc::AggTypeDeclImpl Impl; };
} namespace cogc {
using ClassDecl = struct ClassDeclImpl* ;
struct ClassDeclImpl : AggTypeDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ClassDecl > { typedef cogc::ClassDeclImpl Impl; };
} namespace cogc {
void checkClassDecl(CheckContext* context, ClassDecl decl);
using StructDecl = struct StructDeclImpl* ;
struct StructDeclImpl : AggTypeDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::StructDecl > { typedef cogc::StructDeclImpl Impl; };
} namespace cogc {
void checkStructDecl(CheckContext* context, StructDecl decl);
void checkAggTypeDeclCommon(CheckContext* context, AggTypeDecl decl);
Stmt checkStmt(CheckContext* context, Stmt stmt);
using BlockStmt = struct BlockStmtImpl* ;
struct BlockStmtImpl : ContainerDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::BlockStmt > { typedef cogc::BlockStmtImpl Impl; };
} namespace cogc {
Stmt checkBlockStmt(CheckContext* context, BlockStmt stmt);
Exp checkExp(CheckContext* context, Exp exp);
Exp coerceToExp(CheckContext* context, Syntax term);
Type checkType(CheckContext* context, Exp exp);
void checkTypeExp(CheckContext* context, TypeExp* typeExp);
Type coerceToType(CheckContext* context, Exp exp);
Exp checkTerm(CheckContext* context, Exp exp);
Val extractVal(Exp exp);
using DeclRefExp = struct DeclRefExpImpl* ;
struct DeclRefExpImpl : ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
CompactDeclRef declRef;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::DeclRefExp > { typedef cogc::DeclRefExpImpl Impl; };
} namespace cogc {
using MemberExp = struct MemberExpImpl* ;
struct MemberExpImpl : DeclRefExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Exp base;
Ptr<Name>  memberName;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::MemberExp > { typedef cogc::MemberExpImpl Impl; };
} namespace cogc {
Exp checkMemberExp(CheckContext* context, MemberExp exp);
using Arg = struct ArgImpl* ;
struct ArgImpl : SyntaxImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Exp exp;
Arg next;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Arg > { typedef cogc::ArgImpl Impl; };
} namespace cogc {
using AppExpBase = struct AppExpBaseImpl* ;
struct AppExpBaseImpl : ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Exp base;
SyntaxList<Arg>  args;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::AppExpBase > { typedef cogc::AppExpBaseImpl Impl; };
} namespace cogc {
enum OverloadResolveMode : int
{
kOverloadResolveMode_justTrying,
kOverloadResolveMode_forReal,
};
enum OverloadCandidateState : int
{
kOverloadCandidateState_Unchecked,
kOverloadCandidateState_GenericArgumentInferenceFailed,
kOverloadCandidateState_CheckedArity,
kOverloadCandidateState_CheckedTypes,
kOverloadCandidateState_Applicable,
};
struct OverloadCandidate
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
OverloadCandidateState state;
DeclRefVal declRef;
Type resultType;
};
struct OverloadResolveContext
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
CheckContext* checkContext;
AppExpBase appExp;
Exp baseExp = nullptr;
OverloadResolveMode mode = kOverloadResolveMode_justTrying;
Array<OverloadCandidate>  candidates;
};
void addAppOverloadCandidates(OverloadResolveContext* context, Exp baseExp);
Type createFuncType(CheckContext* context, DeclRefValImpl<FuncDeclBase>  funcDeclRef);
Type createDeclRefType(CheckContext* context, DeclRefVal declRef);
Type createDeclRefTypeType(CheckContext* context, DeclRefVal declRef);
using TypeType = struct TypeTypeImpl* ;
struct TypeTypeImpl : TypeImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Type type;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::TypeType > { typedef cogc::TypeTypeImpl Impl; };
} namespace cogc {
TypeType createTypeType(CheckContext* context, Type type);
Type specializeTypeForDeclRef(CheckContext* context, Type type, DeclRefVal declRef);
Type getTypeForDeclRefImpl(CheckContext* context, DeclRefVal declRef);
Type getTypeForDeclRef(CheckContext* context, DeclRefVal declRef);
Type getTypeForDeclRef(CheckContext* context, CompactDeclRef declRef);
Type createErrorType(CheckContext* context);
Type getBuiltinType(CheckContext* context, SourceLoc loc, ConstPtr<Char>  name);
Type getResultType(CheckContext* context, DeclRefValImpl<PatternDecl>  decl);
Exp createErrorExp(CheckContext* context, Exp exp);
Exp createErrorExp(CheckContext* context, SourceLoc loc);
Bool isSameVal(Val left, Val right);
using SpecializationArg = struct SpecializationArgImpl* ;
struct SpecializationArgImpl : ObjectImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
SpecializationArg next;
Val value;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::SpecializationArg > { typedef cogc::SpecializationArgImpl Impl; };
} namespace cogc {
using Specializations = struct SpecializationsImpl* ;
struct SpecializationsImpl : ObjectImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
DeclRefValImpl<GenericDecl>  genericDeclRef;
SyntaxList<SpecializationArg>  args;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Specializations > { typedef cogc::SpecializationsImpl Impl; };
} namespace cogc {
Bool isSameSpecializations(Specializations left, Specializations right);
Bool isSameDeclRef(ConstRef<DeclRefVal>  left, ConstRef<DeclRefVal>  right);
Bool isSameType(Type left, Type right);
Bool tryCoerceImpl(CheckContext* context, Exp fromExp, Type fromType, Exp* toExp, Type toType);
Bool tryCoerceImpl(CheckContext* context, Exp fromExp, Exp* toExp, Type toType);
Exp coerce(CheckContext* context, Exp exp, Type type);
Bool canCoerce(CheckContext* context, Exp exp, Type type);
Bool checkOverloadCandidateArity(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate);
Bool checkOverloadCandidateTypes(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate);
Bool checkOverloadCandidateDirections(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate);
void checkOverloadCandidateImpl(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate);
void checkOverloadCandidate(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate);
Int compareCandidates(Ref<OverloadCandidate>  left, Ref<OverloadCandidate>  right);
void addCheckedOverloadCandidate(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate);
void addOverloadCandidate(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate);
using SubscriptDecl = struct SubscriptDeclImpl* ;
struct SubscriptDeclImpl : FuncDeclBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::SubscriptDecl > { typedef cogc::SubscriptDeclImpl Impl; };
} namespace cogc {
void addSubscriptOverloadCandidate(OverloadResolveContext* context, DeclRefValImpl<SubscriptDecl>  declRef);
void addFuncOverloadCandidate(OverloadResolveContext* context, DeclRefValImpl<FuncDeclBase>  declRef);
using InitializerDecl = struct InitializerDeclImpl* ;
struct InitializerDeclImpl : FuncDeclBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::InitializerDecl > { typedef cogc::InitializerDeclImpl Impl; };
} namespace cogc {
void addInitializerOverloadCandidate(OverloadResolveContext* context, Type type, DeclRefValImpl<InitializerDecl>  declRef);
Exp createDeclRefExp(CheckContext* context, CompactDeclRef declRef, SourceLoc loc, Exp baseExp);
Exp createDeclRefExp(CheckContext* context, DeclRefVal declRef, SourceLoc loc, Exp baseExp);
Exp createDeclRefExp(CheckContext* context, DeclRefVal declRef, SourceLoc loc);
Exp completeOverload(OverloadResolveContext* overloadContext);
Bool isError(Type type);
Bool isError(CheckContext* context, Exp exp);
void addTypeOverloadCandidates(OverloadResolveContext* context, Exp typeExp, Type type);
using GenericParamDecl = struct GenericParamDeclImpl* ;
struct GenericParamDeclImpl : TypeVarDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::GenericParamDecl > { typedef cogc::GenericParamDeclImpl Impl; };
} namespace cogc {
struct GenericInferenceArg
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
DeclRefValImpl<GenericParamDecl>  paramDeclRef;
Val val = nullptr;
};
struct GenericInferenceContext
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
CheckContext* checkContext;
GenericInferenceArg* args;
};
Bool doInferenceForVals(GenericInferenceContext* context, Val argVal, Val paramVal);
Bool doInferenceForSpecializations(GenericInferenceContext* context, Specializations argSpec, Specializations paramSpec);
Bool doInferenceForDeclRefs(GenericInferenceContext* context, DeclRefVal argDeclRef, DeclRefVal paramDeclRef);
Bool doInferenceForTypes(GenericInferenceContext* context, Type argType, Type paramType);
using LetDecl = struct LetDeclImpl* ;
struct LetDeclImpl : VarDeclBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::LetDecl > { typedef cogc::LetDeclImpl Impl; };
} namespace cogc {
using ParamDecl = struct ParamDeclImpl* ;
struct ParamDeclImpl : LetDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ParamDecl > { typedef cogc::ParamDeclImpl Impl; };
} namespace cogc {
Bool doInferenceForArgAndParam(GenericInferenceContext* context, Exp argExpr, DeclRefValImpl<ParamDecl>  paramDeclRef);
Specializations inferGenericArgsForApp(CheckContext* context, DeclRefValImpl<GenericDecl>  genericDeclRef, AppExpBase appExpr);
void addGenericOverloadCandidate(OverloadResolveContext* context, DeclRefValImpl<GenericDecl>  genericDeclRef);
void addDeclRefOverloadCandidates(OverloadResolveContext* context, DeclRefVal val);
Type specializeType(Type type, Specializations specializations);
void ensureDecl(CheckContext* context, Decl decl, DeclCheckState state);
void ensureDecl(CheckContext* context, Decl decl);
enum Severity : int
{
kSeverity_Note,
kSeverity_Warning,
kSeverity_Error,
kSeverity_Fatal,
};
enum DiagnosticID : int
{
kDiagnostic_unimplemented,
kDiagnostic_unexpectedCharacter,
kDiagnostic_unexpectedToken,
kDiagnostic_unexpectedTokenExpectedToken,
kDiagnostic_youMeanDot,
kDiagnostic_unexpectedDeclName,
kDiagnostic_undefinedIdentifier,
kDiagnostic_noMemberOfNameInType,
kDiagnostic_failedToFindBuiltinType,
kDiagnostic_cannotConvertType,
kDiagnostic_noOverloadCandidatesFound,
kDiagnostic_candidate,
kDiagnostic_ambiguousCallToOverload,
kDiagnostic_noApplicableOverloadForCall,
};
struct ArgTypeList
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Arg args;
ArgTypeList();
ArgTypeList(Arg args);
};
enum DiagnosticArgFlavor : int
{
kFlavor_Int,
kFlavor_TokenCode,
kFlavor_Name,
kFlavor_StringSpan,
kFlavor_Type,
kFlavor_DeclRef,
kFlavor_ArgTypeList,
};
enum TokenCode : int
{
kTokenCode_Invalid,
kTokenCode_EndOfFile,
kTokenCode_Identifier,
kTokenCode_InfixOperator,
kTokenCode_PrefixOperator,
kTokenCode_PostfixOperator,
kTokenCode_LineComment,
kTokenCode_BlockComment,
kTokenCode_WhiteSpace,
kTokenCode_EndOfLine,
kTokenCode_IntegerLiteral,
kTokenCode_FloatingPointLiteral,
kTokenCode_StringLiteral,
kTokenCode_CharacterLiteral,
kTokenCode_LSquare,
kTokenCode_RSquare,
kTokenCode_Assign,
kTokenCode_Arrow,
kTokenCode_LParen,
kTokenCode_RParen,
kTokenCode_LCurly,
kTokenCode_RCurly,
kTokenCode_Semi,
kTokenCode_Colon,
kTokenCode_Comma,
kTokenCode_Dot,
};
struct StringSpan
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Ptr<Char>  begin;
Ptr<Char>  end;
StringSpan();
StringSpan(Ptr<Char>  begin, Ptr<Char>  end);
StringSpan(ConstPtr<Char>  begin, ConstPtr<Char>  end);
Size getLength();
Bool endsWith(StringSpan suffix);
Bool trimFromEnd(StringSpan suffix);
StringSpan suffixAfterLast(Char c);
};
struct DiagnosticArg
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
DiagnosticArg(Int val);
DiagnosticArg(TokenCode val);
DiagnosticArg(Ptr<Name>  val);
DiagnosticArg(StringSpan val);
DiagnosticArg(ConstPtr<Char>  val);
DiagnosticArg(Type val);
DiagnosticArg(DeclRefVal val);
DiagnosticArg(ConstRef<ArgTypeList>  val);
DiagnosticArgFlavor flavor;
Int intVal;
TokenCode tokenCodeVal;
Ptr<Name>  nameVal;
StringSpan stringSpanVal;
Type typeVal;
DeclRefVal declRefVal;
ArgTypeList argTypeListVal;
};
void diagnose(Ptr<DiagnosticSink>  sink, SourceLoc loc, DiagnosticID id);
void diagnose(Ptr<DiagnosticSink>  sink, SourceLoc loc, DiagnosticID id, DiagnosticArg arg0);
void diagnose(Ptr<DiagnosticSink>  sink, SourceLoc loc, DiagnosticID id, DiagnosticArg arg0, DiagnosticArg arg1);
void printDeclRef(FILE* stream, DeclRefVal declRef);
void printType(FILE* stream, Type type);
void printDiagnosticArg(ConstPtr<DiagnosticArg>  arg);
void diagnoseImpl(Ptr<DiagnosticSink>  sink, SourceLoc loc, DiagnosticID id, int argCount, Ptr<Ptr<DiagnosticArg> >  args);
struct EmitContext
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Session session;
FILE* stream;
};
DiagnosticSink* getSink(EmitContext* context);
enum DeclEmitMode : int
{
kDeclEmitMode_MinimalForward,
kDeclEmitMode_Forward,
kDeclEmitMode_Full,
};
void emit(EmitContext* context, StringSpan text);
void emit(EmitContext* context, Char* text);
struct TerminatedStringSpan : StringSpan
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
TerminatedStringSpan(ConstPtr<Char>  text);
TerminatedStringSpan();
TerminatedStringSpan(Ptr<Char>  begin, Ptr<Char>  end);
StringSpan asStringSpan();
};
struct Name
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
TerminatedStringSpan text;
Ptr<Name>  next;
};
void emit(EmitContext* context, Name* name);
void emitType(EmitContext* context, Exp type);
void emitVal(EmitContext* context, Val val);
void emitGenericQuals(EmitContext* context, Decl decl);
void emitDeclName(EmitContext* context, Decl decl, DeclEmitMode mode, Bool includeModule);
void emitDeclName(EmitContext* context, Decl decl, DeclEmitMode mode);
void emitDeclNameAndGenericArgs(EmitContext* context, Decl decl, DeclEmitMode mode);
void emitDeclarator(EmitContext* context, Exp type, Decl decl, DeclEmitMode mode);
void emitDeclarator(EmitContext* context, TypeExp type, Decl decl, DeclEmitMode mode);
void emitBinaryExp(EmitContext* context, AppExpBase exp, Char* op);
void emitStringVal(EmitContext* context, StringSpan str);
void emitStringVal(EmitContext* context, String str);
void emitExp(EmitContext* context, Exp exp);
void emitBlockStmt(EmitContext* context, BlockStmt stmt);
void emitBlockStmt(EmitContext* context, Stmt stmt);
void emitStmt(EmitContext* context, Stmt stmt);
void emitClassDecl(EmitContext* context, ClassDecl aggDecl, DeclEmitMode mode);
void emitStructDecl(EmitContext* context, StructDecl aggDecl, DeclEmitMode mode);
void emitVarDecl(EmitContext* context, VarDeclBase varDecl, DeclEmitMode mode);
void emitParamDecl(EmitContext* context, ParamDecl paramDecl);
using FuncDecl = struct FuncDeclImpl* ;
struct FuncDeclImpl : FuncDeclBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::FuncDecl > { typedef cogc::FuncDeclImpl Impl; };
} namespace cogc {
void emitFuncDecl(EmitContext* context, FuncDecl funcDecl, DeclEmitMode mode);
void emitInitializerDecl(EmitContext* context, InitializerDecl initDecl, DeclEmitMode mode);
void emitSubscriptDecl(EmitContext* context, SubscriptDecl decl, DeclEmitMode mode);
void emitDecl(EmitContext* context, Decl decl, DeclEmitMode mode);
void emitDecls(EmitContext* context, ContainerDecl containerDecl, DeclEmitMode mode);
template<typename T >
struct SyntaxListBuilder : SyntaxList<T> 
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Ptr<T>  link;
SyntaxListBuilder();
SyntaxListBuilder(SyntaxList<T>  other);
void adjust();
void add(T element);
void append(SyntaxListBuilder<T>  other);
};
struct DeclSortContext
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
SyntaxListBuilder<Decl>  sortedDecls;
Decl unsortedDecls;
};
void addDecl(DeclSortContext* context, Decl decl);
void addDecl(DeclSortContext* context, Decl* declPtr);
void addDependencies(DeclSortContext* context, Decl decl);
void addDependencies(DeclSortContext* context, Name* name);
void addDependencies(DeclSortContext* context, Exp exp);
void addDependencies(DeclSortContext* context, TypeExp typeExp);
void addDependencies(DeclSortContext* context, Decl decl);
void sortDecls(EmitContext* context, ContainerDecl container);
void emitModuleInner(Session session, TerminatedStringSpan moduleNameText, Ptr<Char>  outputPath, Ptr<Char>  extra);
void emitModule(Session session);
void evalModule(Session session);
struct SourceFile
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Ptr<SourceFile>  next;
TerminatedStringSpan path;
TerminatedStringSpan text;
SourceLoc firstLoc;
SourceLoc lastLoc;
};
typedef UInt16 TokenFlags;
struct Lexer
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Session session;
SourceFile* file;
ConstPtr<Char>  cursor;
UIntPtr rawStartPtr;
TokenFlags tokenFlags;
};
void initializeLexer(Lexer* lexer, Session session, SourceFile* file);
void finalizeLexer(Lexer* lexer);
DiagnosticSink* getSink(Lexer* lexer);
Int peekByte(Lexer* lexer);
Int peekCodePoint(Lexer* lexer);
SourceLoc peekLoc(Lexer* lexer);
void advanceByte(Lexer* lexer);
Bool isAlpha(Int c);
Bool isDigit(Int c);
Bool isAlphaNum(Int c);
Bool isOperatorChar(Int c);
Bool isWhiteSpace(Int c);
void lexDigits(Lexer* lexer, Int base);
Bool peekNumberExponentMarker(Lexer* lexer, Int base);
TokenCode lexNumber(Lexer* lexer, Int base);
TokenCode lexIdentifier(Lexer* lexer);
TokenCode lexOperator(Lexer* lexer);
TokenCode lexLineComment(Lexer* lexer);
TokenCode lexBlockComment(Lexer* lexer);
TokenCode lexWhiteSpace(Lexer* lexer);
void lexStringLiteral(Lexer* lexer, Int delimeter);
TokenCode lexTokenImpl(Lexer* lexer);
struct Token
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
UIntPtr rawLoc;
UIntPtr rawSize;
Ptr<Void>  rawData;
TokenCode code;
TokenFlags flags;
UInt32 advance;
SourceLoc getLoc();
};
Token lexToken(Lexer* lexer);
Token* matchDelimeter(Lexer* lexer, Token* open, Token* begin, ConstPtr<Token>  end, TokenCode closingTokenCode);
void matchDelimeters(Lexer* lexer, Token* begin, ConstPtr<Token>  end);
void markUpOperators(Lexer* lexer, Token* begin, ConstPtr<Token>  end);
struct TokenSpan
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
ConstPtr<Token>  begin_;
ConstPtr<Token>  end_;
TokenSpan();
TokenSpan(ConstPtr<Token>  begin, ConstPtr<Token>  end);
};
TokenSpan lexTokens(Session session, SourceFile* file);
struct A
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
void B(A a);
void parseCommandLine(Session session, Ptr<Int>  ioArgc, Ptr<Ptr<Char> >  argv);
Int main(Int argc, Ptr<Ptr<Char> >  argv);
Ptr<Name>  getName(Session session, StringSpan text);
TerminatedStringSpan getText(Ptr<Name>  name);
Ptr<Name>  getName(Session session, Ptr<Char>  text);
typedef UInt32 ParserFlags;
enum ParserFlag : int
{
kParserFlag_Recovering = 1 << 0,
kParserFlag_InsideGenericClause = 1 << 1,
};
struct Parser
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Session session;
Scope* scope;
ConstPtr<Token>  begin;
ConstPtr<Token>  cursor;
ConstPtr<Token>  end;
ConstPtr<Token>  token;
ParserFlags flags;
};
void debugState(Parser* parser);
ConstPtr<Token>  advanceToken(Parser* parser);
ConstPtr<Token>  advanceFragment(Parser* parser);
void initializeParser(Parser* parser, Session session, SourceFile* file);
void finalizeParser(Parser* parser);
void pushScope(Parser* parser, ContainerDecl container);
void restoreScope(Parser* parser, Scope* scope);
void popScope(Parser* parser);
DiagnosticSink* getSink(Parser* parser);
SourceLoc peekLoc(Parser* parser);
TokenCode peekTokenCode(Parser* parser);
Bool peekTokenCode(Parser* parser, TokenCode code);
Bool isAtEnd(Parser* parser);
Bool isRecovering(Parser* parser);
void unexpected(Parser* parser);
void unexpected(Parser* parser, TokenCode expected);
Bool tokenIsInSet(TokenCode needle, Int count, ConstPtr<TokenCode>  haystack);
Bool recoverIfTokenIsInSet(Parser* parser, TokenCode needle, Int count, ConstPtr<TokenCode>  haystack);
void tryRecover(Parser* parser, Int recoverBeforeCount, ConstPtr<TokenCode>  recoverBefore, Int recoverAfterCount, ConstPtr<TokenCode>  recoverAfter);
void tryRecover(Parser* parser);
void tryRecoverBefore(Parser* parser, TokenCode code);
ConstPtr<Token>  advanceIf(Parser* parser, TokenCode expected);
ConstPtr<Token>  advanceIf(Parser* parser, StringSpan expected);
ConstPtr<Token>  advanceIfFragment(Parser* parser, TokenCode expected);
ConstPtr<Token>  expect(Parser* parser, TokenCode expected);
ConstPtr<Token>  expectFragment(Parser* parser, TokenCode expected);
Name* expectIdentifier(Parser* parser);
ConstPtr<Token>  advanceIfEnd(Parser* parser, TokenCode expected);
struct LookupResultItem
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Decl decl;
LookupResultItem();
LookupResultItem(Decl decl);
};
struct LookupResult
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Array<LookupResultItem>  items;
Ptr<LookupResultItem>  begin();
Ptr<LookupResultItem>  end();
Bool isEmpty();
Bool isUnique();
Bool isOverloaded();
Decl getDecl();
};
LookupResult lookup(Parser* parser, Name* name);
using SyntaxDecl = struct SyntaxDeclImpl* ;
struct SyntaxDeclImpl : DeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Ptr<Class>  syntaxClass;
SyntaxCallback callback;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::SyntaxDecl > { typedef cogc::SyntaxDeclImpl Impl; };
} namespace cogc {
SyntaxDecl getSyntaxDecl(ConstRef<LookupResult>  result);
using NameExp = struct NameExpImpl* ;
struct NameExpImpl : DeclRefExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Ptr<Name>  name;
Ptr<Scope>  scope;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::NameExp > { typedef cogc::NameExpImpl Impl; };
} namespace cogc {
NameExp createNameExp(Parser* parser, ConstPtr<Token>  token);
Exp createErrorExp(Parser* parser);
Arg parseArg(Parser* parser);
SyntaxList<Arg>  parseArgs(Parser* parser);
Arg parseGenericArg(Parser* parser);
SyntaxList<Arg>  parseGenericArgs(Parser* parser);
Bool peekGenericApp(Parser* inParser);
Exp maybeParseGenericApp(Parser* parser, Exp base);
typedef Int64 IntLitVal;
IntLitVal getIntegerLiteralVal(ConstRef<Token>  token);
String getStringLiteralVal(ConstRef<Token>  token);
Exp parseAtomicExp(Parser* parser);
Arg createPositionalArg(Parser* parser, Exp exp);
AppExpBase createApp(Parser* parser, AppExpBase exp, ConstPtr<Token>  op, Exp argExp);
AppExpBase createApp(Parser* parser, AppExpBase exp, ConstPtr<Token>  op, Exp argExp0, Exp argExp1);
Bool isInGenericClause(Parser* parser);
Exp parsePostfixExp(Parser* parser);
Exp parsePrefixExp(Parser* parser);
Exp parseInfixExp(Parser* parser);
Exp parseExp(Parser* parser);
TypeExp parseType(Parser* parser);
Decl parseDecl(Parser* parser);
ModuleDecl findOrImportModule(Session session, SourceLoc loc, Name* name);
SyntaxList<Decl>  parseDeclsInBody(Parser* parser);
SyntaxList<Decl>  parseDeclBody(Parser* parser);
void parseDeclBody(Parser* parser, ContainerDecl decl);
Stmt parseExpStmt(Parser* parser);
Stmt parseStmt(Parser* parser);
SyntaxListBuilder<Stmt>  parseStmtsInBody(Parser* parser);
Stmt parseStmtBody(Parser* parser);
Bool peekGenericClose(Parser* parser);
Bool tryParseGenericClose(Parser* parser);
void expectGenericClose(Parser* parser);
Decl parseGenericParam(Parser* parser);
void parseGenericParams(Parser* parser, Ptr<SyntaxListBuilder<Decl> >  ioDecls);
Bool tryParseGenericOpen(Parser* parser);
Decl maybeParseGenericParams(Parser* parser, Decl decl);
Decl parseAggTypeDeclCommon(Parser* parser, AggTypeDecl decl);
Syntax parseClassDecl(Parser* parser);
Syntax parseStructDecl(Parser* parser);
SyntaxList<Decl>  parseEnumTags(Parser* parser);
Syntax parseEnumDecl(Parser* parser);
Syntax parseImportDecl(Parser* parser);
void parseVarDeclCommon(Parser* parser, VarDeclBase decl);
Syntax parseVarDecl(Parser* parser);
Syntax parseLetDecl(Parser* parser);
void parseTypeVarDeclSuffixCommon(Parser* parser, TypeVarDecl decl);
void parseTypeVarDeclCommon(Parser* parser, TypeVarDecl decl);
Name* expectOperatorOrIdentifier(Parser* parser);
Syntax parseTypeAliasDecl(Parser* parser);
Syntax parseIfStmt(Parser* parser);
Syntax parseWhileStmt(Parser* parser);
Syntax parseForStmt(Parser* parser);
Syntax parseForEachStmt(Parser* parser);
Syntax parseSwitchStmt(Parser* parser);
Syntax parseReturnStmt(Parser* parser);
Syntax parseBreakStmt(Parser* parser);
Syntax parseContinueStmt(Parser* parser);
Syntax parseBuiltinAttr(Parser* parser);
ParamDecl parseParam(Parser* parser);
void parseParams(Parser* parser, ContainerDecl decl);
Syntax parseFuncDecl(Parser* parser);
Syntax parseSubscriptDecl(Parser* parser);
Syntax parseInitializerDecl(Parser* parser);
Syntax parseThisExpr(Parser* parser);
Syntax parseCastExpr(Parser* parser);
SyntaxDecl createSyntaxDecl(Session session, ConstPtr<Char>  name, SyntaxCallback callback, Class* syntaxClass);
template<typename T >
SyntaxDecl createSyntaxDecl(Session session, ConstPtr<Char>  name, SyntaxCallback callback);
void parseFileIntoModule(Session session, SourceFile* file, ModuleDecl moduleDecl);
void parseFile(Session session, SourceFile* file);
void lookupDirectImpl(ContainerStmt container, Ptr<Name>  name, Ptr<LookupResult>  ioResult);
LookupResult lookupDirect(ContainerStmt container, Ptr<Name>  name);
LookupResult lookupDirect(Ptr<Scope>  scope, Ptr<Name>  name);
LookupResult lookup(Ptr<Scope>  scope, Ptr<Name>  name);
Session createSession();
void destroySession(Session session);
void setModulePath(Session session, StringSpan path);
void setModulePath(Session session, TerminatedStringSpan path);
Ptr<Name>  getModulePath(Session session);
Ptr<Name>  getModuleName(Session session);
void setEvaluate(Session session);
void loadSourceFile(Session session, TerminatedStringSpan path);
Int getErrorCount(Session session);
struct Dummy
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
struct ExpandedSourceLoc
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
TerminatedStringSpan file;
Int line;
Int column;
};
Ptr<SourceFile>  getSourceFile(Session session, TerminatedStringSpan path);
ExpandedSourceLoc expandLoc(Session session, SourceLoc loc);
Bool operator==(StringSpan left, StringSpan right);
Bool operator!=(StringSpan left, StringSpan right);
Bool asBool(TypeExp typeExp);
template<typename T >
struct SyntaxListIterator
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
T current;
SyntaxListIterator(T current);
Bool operator!=(SyntaxListIterator<T>  other);
T operator*();
void operator++();
};
template<typename T, typename U >
struct FilteredSyntaxListIterator
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
T current;
FilteredSyntaxListIterator(U current);
Bool operator!=(FilteredSyntaxListIterator<T, U>  other);
T operator*();
void operator++();
T adjust(U obj);
};
using BuiltinAttr = struct BuiltinAttrImpl* ;
struct BuiltinAttrImpl : AttrImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Ptr<Name>  name;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::BuiltinAttr > { typedef cogc::BuiltinAttrImpl Impl; };
} namespace cogc {
using SpecializedDecl = struct SpecializedDeclImpl* ;
struct SpecializedDeclImpl : ObjectImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Decl decl;
Specializations specializations;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::SpecializedDecl > { typedef cogc::SpecializedDeclImpl Impl; };
} namespace cogc {
template<typename T >
struct DeclRefListIterator
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Decl decl;
Specializations specializations;
DeclRefListIterator(Decl decl, Specializations specializations);
void operator++();
DeclRefValImpl<T>  operator*();
void adjust();
};
template<typename T >
struct DeclRefList
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Decl decl;
Specializations specializations;
DeclRefListIterator<T>  begin();
DeclRefListIterator<T>  end();
DeclRefList();
DeclRefList(Decl decl, Specializations specializations);
};
template<typename T >
Bool operator!=(DeclRefListIterator<T>  left, DeclRefListIterator<T>  right);
DeclRefList<Decl>  getDecls(DeclRefValImpl<ContainerDecl>  container);
DeclRefVal getInner(DeclRefValImpl<GenericDecl>  declRef);
using ImportDecl = struct ImportDeclImpl* ;
struct ImportDeclImpl : DeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Ptr<Scope>  scope;
Ptr<Name>  name;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ImportDecl > { typedef cogc::ImportDeclImpl Impl; };
} namespace cogc {
Type getResultType(DeclRefValImpl<FuncDeclBase>  declRef);
Type getType(DeclRefValImpl<VarDeclBase>  declRef);
using VarDecl = struct VarDeclImpl* ;
struct VarDeclImpl : VarDeclBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::VarDecl > { typedef cogc::VarDeclImpl Impl; };
} namespace cogc {
using IfStmtBase = struct IfStmtBaseImpl* ;
struct IfStmtBaseImpl : StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Stmt thenStmt;
Stmt elseStmt;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::IfStmtBase > { typedef cogc::IfStmtBaseImpl Impl; };
} namespace cogc {
using IfStmt = struct IfStmtImpl* ;
struct IfStmtImpl : IfStmtBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Exp condition;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::IfStmt > { typedef cogc::IfStmtImpl Impl; };
} namespace cogc {
using IfLetStmt = struct IfLetStmtImpl* ;
struct IfLetStmtImpl : IfStmtBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Name* name;
Exp init;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::IfLetStmt > { typedef cogc::IfLetStmtImpl Impl; };
} namespace cogc {
using WhileStmt = struct WhileStmtImpl* ;
struct WhileStmtImpl : StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Exp condition;
Stmt body;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::WhileStmt > { typedef cogc::WhileStmtImpl Impl; };
} namespace cogc {
using ForStmt = struct ForStmtImpl* ;
struct ForStmtImpl : StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Stmt init;
Exp condition;
Exp iter;
Stmt body;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ForStmt > { typedef cogc::ForStmtImpl Impl; };
} namespace cogc {
using ReturnStmt = struct ReturnStmtImpl* ;
struct ReturnStmtImpl : StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Exp value;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ReturnStmt > { typedef cogc::ReturnStmtImpl Impl; };
} namespace cogc {
using BreakStmt = struct BreakStmtImpl* ;
struct BreakStmtImpl : StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::BreakStmt > { typedef cogc::BreakStmtImpl Impl; };
} namespace cogc {
using ContinueStmt = struct ContinueStmtImpl* ;
struct ContinueStmtImpl : StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ContinueStmt > { typedef cogc::ContinueStmtImpl Impl; };
} namespace cogc {
using SwitchCase = struct SwitchCaseImpl* ;
struct SwitchCaseImpl : SyntaxImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Arg values;
Stmt body;
SwitchCase next;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::SwitchCase > { typedef cogc::SwitchCaseImpl Impl; };
} namespace cogc {
using SwitchStmt = struct SwitchStmtImpl* ;
struct SwitchStmtImpl : StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Exp condition;
SwitchCase cases;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::SwitchStmt > { typedef cogc::SwitchStmtImpl Impl; };
} namespace cogc {
using PositionalArg = struct PositionalArgImpl* ;
struct PositionalArgImpl : ArgImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::PositionalArg > { typedef cogc::PositionalArgImpl Impl; };
} namespace cogc {
using LitExp = struct LitExpImpl* ;
struct LitExpImpl : ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::LitExp > { typedef cogc::LitExpImpl Impl; };
} namespace cogc {
using IntLitExp = struct IntLitExpImpl* ;
struct IntLitExpImpl : LitExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
IntLitVal val;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::IntLitExp > { typedef cogc::IntLitExpImpl Impl; };
} namespace cogc {
using StringLitExp = struct StringLitExpImpl* ;
struct StringLitExpImpl : LitExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
String val;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::StringLitExp > { typedef cogc::StringLitExpImpl Impl; };
} namespace cogc {
using CharacterLitExp = struct CharacterLitExpImpl* ;
struct CharacterLitExpImpl : LitExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
String val;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::CharacterLitExp > { typedef cogc::CharacterLitExpImpl Impl; };
} namespace cogc {
using GenericAppExp = struct GenericAppExpImpl* ;
struct GenericAppExpImpl : AppExpBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::GenericAppExp > { typedef cogc::GenericAppExpImpl Impl; };
} namespace cogc {
using AppExp = struct AppExpImpl* ;
struct AppExpImpl : AppExpBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::AppExp > { typedef cogc::AppExpImpl Impl; };
} namespace cogc {
using IndexExp = struct IndexExpImpl* ;
struct IndexExpImpl : AppExpBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::IndexExp > { typedef cogc::IndexExpImpl Impl; };
} namespace cogc {
using OperatorAppExp = struct OperatorAppExpImpl* ;
struct OperatorAppExpImpl : AppExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::OperatorAppExp > { typedef cogc::OperatorAppExpImpl Impl; };
} namespace cogc {
using InfixExp = struct InfixExpImpl* ;
struct InfixExpImpl : OperatorAppExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::InfixExp > { typedef cogc::InfixExpImpl Impl; };
} namespace cogc {
using PrefixExp = struct PrefixExpImpl* ;
struct PrefixExpImpl : OperatorAppExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::PrefixExp > { typedef cogc::PrefixExpImpl Impl; };
} namespace cogc {
using PostfixExp = struct PostfixExpImpl* ;
struct PostfixExpImpl : OperatorAppExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::PostfixExp > { typedef cogc::PostfixExpImpl Impl; };
} namespace cogc {
using AssignExp = struct AssignExpImpl* ;
struct AssignExpImpl : ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Exp left;
Exp right;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::AssignExp > { typedef cogc::AssignExpImpl Impl; };
} namespace cogc {
using ErrorExp = struct ErrorExpImpl* ;
struct ErrorExpImpl : ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ErrorExp > { typedef cogc::ErrorExpImpl Impl; };
} namespace cogc {
using OverloadedExpr = struct OverloadedExprImpl* ;
struct OverloadedExprImpl : ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
LookupResult lookupResult;
Exp base;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::OverloadedExpr > { typedef cogc::OverloadedExprImpl Impl; };
} namespace cogc {
using DeclRefType = struct DeclRefTypeImpl* ;
struct DeclRefTypeImpl : TypeImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
CompactDeclRef declRef;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::DeclRefType > { typedef cogc::DeclRefTypeImpl Impl; };
} namespace cogc {
using FuncType = struct FuncTypeImpl* ;
struct FuncTypeImpl : TypeImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::FuncType > { typedef cogc::FuncTypeImpl Impl; };
} namespace cogc {
using ErrorType = struct ErrorTypeImpl* ;
struct ErrorTypeImpl : TypeImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ErrorType > { typedef cogc::ErrorTypeImpl Impl; };
} namespace cogc {
using OverloadGroupType = struct OverloadGroupTypeImpl* ;
struct OverloadGroupTypeImpl : TypeImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::OverloadGroupType > { typedef cogc::OverloadGroupTypeImpl Impl; };
} namespace cogc {
using EnumDecl = struct EnumDeclImpl* ;
struct EnumDeclImpl : AggTypeDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::EnumDecl > { typedef cogc::EnumDeclImpl Impl; };
} namespace cogc {
using EnumTagDecl = struct EnumTagDeclImpl* ;
struct EnumTagDeclImpl : VarDeclBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::EnumTagDecl > { typedef cogc::EnumTagDeclImpl Impl; };
} namespace cogc {
using ForEachStmt = struct ForEachStmtImpl* ;
struct ForEachStmtImpl : StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Name* name;
Exp exp;
Stmt body;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ForEachStmt > { typedef cogc::ForEachStmtImpl Impl; };
} namespace cogc {
using ParenExp = struct ParenExpImpl* ;
struct ParenExpImpl : ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Exp base;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ParenExp > { typedef cogc::ParenExpImpl Impl; };
} namespace cogc {
using ThisExpr = struct ThisExprImpl* ;
struct ThisExprImpl : ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
Scope* scope;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ThisExpr > { typedef cogc::ThisExprImpl Impl; };
} namespace cogc {
using CastExpr = struct CastExprImpl* ;
struct CastExprImpl : ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
TypeExp toType;
Exp arg;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::CastExpr > { typedef cogc::CastExprImpl Impl; };
} namespace cogc {
enum TokenFlag : int
{
kTokenFlag_AtStartOfLine = 1 << 0,
kTokenFlag_AfterSpace = 1 << 1,
};
SourceLoc::SourceLoc()
{
DEREF(this).raw = 0;
}
SourceLoc::SourceLoc(USize raw)
{
DEREF(this).raw = raw;
}
template<typename T > T SyntaxList<T > ::operator[](Size index)
{
auto item = head;
{
Size ii = 0;
for(;ii < index;++ii)
{
{
item = cast<T>(DEREF(item).next);
}
}}
return item;
}
template<typename T > SyntaxListIterator<T>  SyntaxList<T > ::begin()
{
return SyntaxListIterator<T> (head);
}
template<typename T > SyntaxListIterator<T>  SyntaxList<T > ::end()
{
return SyntaxListIterator<T> (0);
}
template<typename T > SyntaxList<T > ::SyntaxList()
{
DEREF(this).head = 0;
}
template<typename T > SyntaxList<T > ::SyntaxList(T head)
{
DEREF(this).head = head;
}
Attr StmtImpl::findAttrImpl(Ptr<Class>  attrClass)
{
for(auto a : attrs)
{
{
auto match = as(a, attrClass);
if(match)
{
return cast<Attr>(match);
}
}
}
return nullptr;
}
template<typename T > T StmtImpl::findAttr()
{
return cast<T>(findAttrImpl(getClass<T> ()));
}
ContainerStmt DeclImpl::getParent()
{
return parent;
}
template<typename T, typename U > FilteredSyntaxListIterator<T, U>  FilteredSyntaxList<T, U > ::begin()
{
return FilteredSyntaxListIterator<T, U> (head);
}
template<typename T, typename U > FilteredSyntaxListIterator<T, U>  FilteredSyntaxList<T, U > ::end()
{
return FilteredSyntaxListIterator<T, U> (nullptr);
}
template<typename T, typename U > FilteredSyntaxList<T, U > ::FilteredSyntaxList()
{
DEREF(this).head = nullptr;
}
template<typename T, typename U > FilteredSyntaxList<T, U > ::FilteredSyntaxList(U head)
{
DEREF(this).head = head;
}
template<typename T, typename U > FilteredSyntaxList<T, U > ::FilteredSyntaxList(ConstRef<SyntaxList<U> >  list)
{
DEREF(this).head = DEREF(list).head;
}
SyntaxList<Stmt>  ContainerStmtImpl::getStmts()
{
return stmts;
}
FilteredSyntaxList<Decl, Stmt>  ContainerStmtImpl::getDecls()
{
return FilteredSyntaxList<Decl, Stmt> (stmts);
}
Ref<SyntaxList<Decl> >  ContainerDeclImpl::getDecls()
{
return *cast<Ptr<SyntaxList<Decl> > >(&stmts);
}
void checkModule(Session session)
{
checkModule(session, DEREF(session).moduleDecl);
}
void checkModule(Session session, ModuleDecl moduleDecl)
{
SharedCheckContext sharedContext;
DEREF(sharedContext).session = session;
CheckContext context;
DEREF(context).shared = &sharedContext;
checkModule(&context, moduleDecl);
}
DiagnosticSink* getSink(CheckContext* context)
{
return &DEREF(DEREF(DEREF(context).shared).session).sink;
}
void checkModule(CheckContext* context, ModuleDecl moduleDecl)
{
checkDecls(context, moduleDecl);
}
void checkImportDecls(CheckContext* context, ContainerDecl containerDecl)
{
for(auto decl : DEREF(containerDecl).getDecls())
{
{
if(auto importDecl = as<ImportDecl> (decl))
{
auto module = findOrImportModule(DEREF(DEREF(context).shared).session, DEREF(importDecl).loc, DEREF(importDecl).name);
attachToScope(DEREF(importDecl).scope, module);
}
}
}
}
void checkDecls(CheckContext* context, ContainerDecl containerDecl)
{
checkImportDecls(context, containerDecl);
for(auto decl : DEREF(containerDecl).getDecls())
{
{
checkDecl(context, decl);
}
}
}
void attachToScope(Scope* scope, ContainerDecl decl)
{
auto link = cast<Ptr<ScopeLink> >(malloc(sizeof(ScopeLink)));
DEREF(link).container = decl;
DEREF(link).next = nullptr;
DEREF(link).next = DEREF(DEREF(scope).directLink).next;
DEREF(DEREF(scope).directLink).next = link;
}
void checkDecl(CheckContext* context, Decl decl)
{
if(DEREF(decl).checkState == kDeclCheckState_Checked)
{
return;
}
if(DEREF(decl).checkState != kDeclCheckState_Unchecked)
{
diagnose(getSink(context), DEREF(decl).loc, kDiagnostic_unimplemented, "circularity");
return;
}
DEREF(decl).checkState = kDeclCheckState_CheckingHead;
checkDeclImpl(context, decl);
DEREF(decl).checkState = kDeclCheckState_Checked;
}
void checkDeclImpl(CheckContext* context, Decl decl)
{
if(auto classDecl = as<ClassDecl> (decl))
{
checkClassDecl(context, classDecl);
}
else
{
if(auto structDecl = as<StructDecl> (decl))
{
checkStructDecl(context, structDecl);
}
else
{
if(auto funcDecl = as<FuncDeclBase> (decl))
{
checkFuncDecl(context, funcDecl);
}
else
{
if(auto varDecl = as<VarDeclBase> (decl))
{
checkVarDecl(context, varDecl);
}
else
{
if(auto genericDecl = as<GenericDecl> (decl))
{
checkGenericDecl(context, genericDecl);
}
else
{
if(auto typeAliasDecl = as<TypeAliasDecl> (decl))
{
checkTypeAliasDecl(context, typeAliasDecl);
}
else
{
if(auto genericParamDecl = as<GenericParamDecl> (decl))
{
}
else
{
if(auto importDecl = as<ImportDecl> (decl))
{
}
else
{
}
}
}
}
}
}
}
}
}
void checkGenericDecl(CheckContext* context, GenericDecl decl)
{
checkDecls(context, decl);
DEREF(decl).checkState = kDeclCheckState_CheckedHead;
checkDecl(context, DEREF(decl).inner);
}
void checkTypeAliasDecl(CheckContext* context, TypeAliasDecl decl)
{
}
void checkVarDecl(CheckContext* context, VarDeclBase decl)
{
checkTypeExp(context, &DEREF(decl).type);
auto type = DEREF(DEREF(decl).type).type;
auto initExpr = DEREF(decl).init;
if(initExpr)
{
initExpr = checkTerm(context, initExpr);
if(type)
{
initExpr = coerce(context, initExpr, type);
}
else
{
type = DEREF(initExpr).type;
}
}
else
{
if(!type)
{
diagnose(getSink(context), DEREF(decl).loc, kDiagnostic_unimplemented, "decl without init must have type");
type = createErrorType(context);
}
}
DEREF(decl).init = initExpr;
DEREF(DEREF(decl).type).type = type;
}
void checkFuncDecl(CheckContext* context, FuncDeclBase decl)
{
checkDecls(context, decl);
checkTypeExp(context, &DEREF(decl).resultType);
if(!asBool(DEREF(decl).resultType))
{
DEREF(DEREF(decl).resultType).type = getBuiltinType(context, DEREF(decl).loc, "Void");
}
DEREF(decl).checkState = kDeclCheckState_CheckedHead;
if(auto body = DEREF(decl).body)
{
DEREF(decl).body = checkStmt(context, body);
}
}
void checkClassDecl(CheckContext* context, ClassDecl decl)
{
checkAggTypeDeclCommon(context, decl);
}
void checkStructDecl(CheckContext* context, StructDecl decl)
{
checkAggTypeDeclCommon(context, decl);
}
void checkAggTypeDeclCommon(CheckContext* context, AggTypeDecl decl)
{
checkTypeExp(context, &DEREF(decl).base);
DEREF(decl).checkState = kDeclCheckState_CheckedHead;
checkDecls(context, decl);
}
Stmt checkStmt(CheckContext* context, Stmt stmt)
{
if(!stmt)
{
return nullptr;
}
if(auto blockStmt = as<BlockStmt> (stmt))
{
return checkBlockStmt(context, blockStmt);
}
else
{
if(auto decl = as<Decl> (stmt))
{
checkDecl(context, decl);
return decl;
}
else
{
if(auto exp = as<Exp> (stmt))
{
return checkExp(context, exp);
}
else
{
if(auto ifStmt = as<IfStmt> (stmt))
{
DEREF(ifStmt).condition = checkExp(context, DEREF(ifStmt).condition);
DEREF(ifStmt).thenStmt = checkStmt(context, DEREF(ifStmt).thenStmt);
DEREF(ifStmt).elseStmt = checkStmt(context, DEREF(ifStmt).elseStmt);
return ifStmt;
}
else
{
if(auto whileStmt = as<WhileStmt> (stmt))
{
DEREF(whileStmt).condition = checkExp(context, DEREF(whileStmt).condition);
DEREF(whileStmt).body = checkStmt(context, DEREF(whileStmt).body);
return whileStmt;
}
else
{
if(auto returnStmt = as<ReturnStmt> (stmt))
{
DEREF(returnStmt).value = checkExp(context, DEREF(returnStmt).value);
return returnStmt;
}
else
{
if(auto breakStmt = as<BreakStmt> (stmt))
{
return breakStmt;
}
else
{
diagnose(getSink(context), DEREF(stmt).loc, kDiagnostic_unimplemented, DEREF(DEREF(stmt).directClass).name);
assert(!"unimplemented");
}
}
}
}
}
}
}
}
Stmt checkBlockStmt(CheckContext* context, BlockStmt stmt)
{
for(auto stmt : DEREF(stmt).stmts)
{
{
checkStmt(context, stmt);
}
}
return stmt;
}
Exp checkExp(CheckContext* context, Exp exp)
{
return coerceToExp(context, checkTerm(context, exp));
}
Exp coerceToExp(CheckContext* context, Syntax term)
{
if(auto exp = as<Exp> (term))
{
return exp;
}
assert(!"need an exp");
}
Type checkType(CheckContext* context, Exp exp)
{
return coerceToType(context, checkTerm(context, exp));
}
void checkTypeExp(CheckContext* context, TypeExp* typeExp)
{
auto exp = DEREF(typeExp).exp;
if(!exp)
{
return;
}
auto type = checkType(context, exp);
DEREF(typeExp).type = type;
}
Type coerceToType(CheckContext* context, Exp exp)
{
auto expType = DEREF(exp).type;
if(auto typeType = as<TypeType> (expType))
{
return DEREF(typeType).type;
}
else
{
if(auto errorType = as<ErrorType> (expType))
{
return errorType;
}
else
{
diagnose(getSink(context), DEREF(exp).loc, kDiagnostic_unimplemented, DEREF(DEREF(expType).directClass).name);
assert(!"unimplemented");
}
}
}
Exp checkTerm(CheckContext* context, Exp exp)
{
if(!exp)
{
return nullptr;
}
if(auto nameExp = as<NameExp> (exp))
{
auto scope = DEREF(nameExp).scope;
auto result = lookup(scope, DEREF(nameExp).name);
if(DEREF(result).isEmpty())
{
diagnose(getSink(context), DEREF(nameExp).loc, kDiagnostic_undefinedIdentifier, DEREF(nameExp).name);
return createErrorExp(context, DEREF(nameExp).loc);
}
else
{
if(!DEREF(result).isOverloaded())
{
auto declRef = CompactDeclRef(DEREF(result).getDecl());
auto declRefExp = createObject<DeclRefExp> ();
DEREF(declRefExp).loc = DEREF(exp).loc;
DEREF(declRefExp).declRef = declRef;
DEREF(declRefExp).type = getTypeForDeclRef(context, declRef);
return declRefExp;
}
else
{
auto overloadedExpr = createObject<OverloadedExpr> ();
DEREF(overloadedExpr).loc = DEREF(exp).loc;
DEREF(overloadedExpr).lookupResult = result;
DEREF(overloadedExpr).type = createObject<OverloadGroupType> ();
return overloadedExpr;
}
}
}
else
{
if(auto memberExp = as<MemberExp> (exp))
{
return checkMemberExp(context, memberExp);
}
else
{
if(auto intLitExp = as<IntLitExp> (exp))
{
DEREF(intLitExp).type = getBuiltinType(context, DEREF(intLitExp).loc, "Int");
return intLitExp;
}
else
{
if(auto stringLitExp = as<StringLitExp> (exp))
{
DEREF(stringLitExp).type = getBuiltinType(context, DEREF(stringLitExp).loc, "String");
return stringLitExp;
}
else
{
if(auto charLitExp = as<CharacterLitExp> (exp))
{
DEREF(charLitExp).type = getBuiltinType(context, DEREF(charLitExp).loc, "Char");
return charLitExp;
}
else
{
if(auto assignExp = as<AssignExp> (exp))
{
auto left = checkExp(context, DEREF(assignExp).left);
auto right = checkTerm(context, DEREF(assignExp).right);
right = coerce(context, right, DEREF(left).type);
DEREF(assignExp).left = left;
DEREF(assignExp).right = right;
DEREF(assignExp).type = DEREF(left).type;
return assignExp;
}
else
{
if(auto indexExp = as<IndexExp> (exp))
{
auto base = checkTerm(context, DEREF(indexExp).base);
DEREF(indexExp).base = base;
for(auto arg : DEREF(indexExp).args)
{
{
DEREF(arg).exp = checkTerm(context, DEREF(arg).exp);
}
}
if(as<ErrorExp> (base) || as<ErrorType> (DEREF(base).type))
{
return createErrorExp(context, DEREF(indexExp).loc);
}
OverloadResolveContext overloadContext;
DEREF(overloadContext).checkContext = context;
DEREF(overloadContext).appExp = indexExp;
DEREF(overloadContext).baseExp = base;
auto baseType = DEREF(base).type;
if(auto baseDeclRefType = as<DeclRefType> (baseType))
{
auto baseDeclRef = DEREF(baseDeclRefType).declRef;
if(auto aggTypeDeclRef = as<AggTypeDecl> (baseDeclRef))
{
for(auto memberDeclRef : getDecls(aggTypeDeclRef))
{
{
if(auto memberSubscriptDeclRef = as<SubscriptDecl> (memberDeclRef))
{
addSubscriptOverloadCandidate(&overloadContext, memberSubscriptDeclRef);
}
}
}
}
}
return completeOverload(&overloadContext);
}
else
{
if(auto appExp = as<AppExp> (exp))
{
auto base = checkTerm(context, DEREF(appExp).base);
DEREF(appExp).base = base;
for(auto arg : DEREF(appExp).args)
{
{
DEREF(arg).exp = checkTerm(context, DEREF(arg).exp);
}
}
if(isError(context, base))
{
return createErrorExp(context, appExp);
}
OverloadResolveContext overloadContext;
DEREF(overloadContext).checkContext = context;
DEREF(overloadContext).appExp = appExp;
DEREF(overloadContext).baseExp = nullptr;
if(auto baseMemberRef = as<MemberExp> (base))
{
DEREF(overloadContext).baseExp = DEREF(baseMemberRef).base;
}
addAppOverloadCandidates(&overloadContext, base);
return completeOverload(&overloadContext);
}
else
{
if(auto appExp = as<AppExpBase> (exp))
{
auto base = checkTerm(context, DEREF(appExp).base);
DEREF(appExp).base = base;
for(auto arg : DEREF(appExp).args)
{
{
DEREF(arg).exp = checkTerm(context, DEREF(arg).exp);
}
}
if(as<ErrorExp> (base))
{
return createErrorExp(context, DEREF(appExp).loc);
}
if(auto baseDeclRefExp = as<DeclRefExp> (base))
{
auto baseDeclRef = DEREF(baseDeclRefExp).declRef;
if(auto patternDeclRef = as<PatternDecl> (baseDeclRef))
{
Arg argIter = DEREF(DEREF(appExp).args).head;
for(auto declRef : getDecls(patternDeclRef))
{
{
auto paramRef = as<ParamDecl> (declRef);
if(!paramRef)
{
continue;
}
Arg arg = argIter;
argIter = DEREF(argIter).next;
}
}
DEREF(appExp).type = getResultType(context, patternDeclRef);
return appExp;
}
else
{
if(auto genericDeclRef = as<GenericDecl> (baseDeclRef))
{
auto argIter = DEREF(DEREF(appExp).args).head;
for(auto decl : getDecls(genericDeclRef))
{
{
auto param = as<GenericParamDecl> (decl);
if(!param)
{
continue;
}
auto arg = argIter;
argIter = DEREF(argIter).next;
}
}
auto specializations = createObject<Specializations> ();
DEREF(specializations).genericDeclRef = genericDeclRef;
auto specArgLink = &DEREF(DEREF(specializations).args).head;
argIter = DEREF(DEREF(appExp).args).head;
for(auto decl : getDecls(genericDeclRef))
{
{
auto param = as<GenericParamDecl> (decl);
if(!param)
{
continue;
}
auto arg = argIter;
argIter = DEREF(argIter).next;
auto specArg = createObject<SpecializationArg> ();
DEREF(specArg).value = extractVal(DEREF(arg).exp);
*specArgLink = specArg;
specArgLink = &DEREF(specArg).next;
}
}
auto innerDeclRef = DeclRefVal(DEREF(DEREF(genericDeclRef).getDecl()).inner, specializations);
return createDeclRefExp(context, innerDeclRef, DEREF(appExp).loc);
}
}
}
diagnose(getSink(context), DEREF(exp).loc, kDiagnostic_unimplemented, DEREF(DEREF(exp).directClass).name);
assert(!"unimplemented");
return 0;
}
else
{
if(auto thisExpr = as<ThisExpr> (exp))
{
auto scope = DEREF(thisExpr).scope;
while(scope)
{
{
auto containerDecl = DEREF(DEREF(scope).directLink).container;
auto aggTypeDecl = as<AggTypeDecl> (containerDecl);
if(aggTypeDecl)
{
DEREF(thisExpr).type = createDeclRefType(context, DeclRefVal(aggTypeDecl));
return thisExpr;
}
scope = DEREF(scope).parent;
}
}
diagnose(getSink(context), DEREF(exp).loc, kDiagnostic_unimplemented, "this expression type");
return createErrorExp(context, exp);
}
else
{
if(auto castExpr = as<CastExpr> (exp))
{
checkTypeExp(context, &DEREF(castExpr).toType);
DEREF(castExpr).arg = checkTerm(context, DEREF(castExpr).arg);
DEREF(castExpr).type = DEREF(DEREF(castExpr).toType).type;
return castExpr;
}
else
{
diagnose(getSink(context), DEREF(exp).loc, kDiagnostic_unimplemented, DEREF(DEREF(exp).directClass).name);
assert(!"unimplemented");
return 0;
}
}
}
}
}
}
}
}
}
}
}
}
Val extractVal(Exp exp)
{
if(auto typeType = as<TypeType> (DEREF(exp).type))
{
return DEREF(typeType).type;
}
else
{
assert(!"unimplemented");
}
}
Exp checkMemberExp(CheckContext* context, MemberExp exp)
{
auto base = DEREF(exp).base;
base = checkTerm(context, base);
auto memberName = DEREF(exp).memberName;
if(isError(context, base))
{
return createErrorExp(context, exp);
}
auto baseType = DEREF(base).type;
if(auto baseDeclRefType = as<DeclRefType> (baseType))
{
auto baseDeclRef = DEREF(baseDeclRefType).declRef;
if(auto aggTypeDeclRef = as<AggTypeDecl> (baseDeclRef))
{
auto lookupResult = lookupDirect(aggTypeDeclRef, memberName);
if(DEREF(lookupResult).isUnique())
{
return createDeclRefExp(context, CompactDeclRef(DEREF(lookupResult).getDecl()), DEREF(exp).loc, base);
}
else
{
if(DEREF(lookupResult).isOverloaded())
{
auto overloadedExpr = createObject<OverloadedExpr> ();
DEREF(overloadedExpr).loc = DEREF(exp).loc;
DEREF(overloadedExpr).lookupResult = lookupResult;
DEREF(overloadedExpr).type = createObject<OverloadGroupType> ();
DEREF(overloadedExpr).base = base;
return overloadedExpr;
}
}
}
}
diagnose(getSink(context), DEREF(exp).loc, kDiagnostic_noMemberOfNameInType, memberName, baseType);
return createErrorExp(context, exp);
}
void addAppOverloadCandidates(OverloadResolveContext* context, Exp baseExp)
{
if(auto typeType = as<TypeType> (DEREF(baseExp).type))
{
addTypeOverloadCandidates(context, baseExp, DEREF(typeType).type);
}
else
{
if(auto declRefExp = as<DeclRefExp> (baseExp))
{
addDeclRefOverloadCandidates(context, DEREF(declRefExp).declRef);
}
else
{
if(auto overloadedExpr = as<OverloadedExpr> (baseExp))
{
assert(!DEREF(context).baseExp);
DEREF(context).baseExp = DEREF(overloadedExpr).base;
assert(DEREF(DEREF(DEREF(overloadedExpr).lookupResult).items).getCount() != 0);
for(auto item : DEREF(overloadedExpr).lookupResult)
{
{
addDeclRefOverloadCandidates(context, DeclRefVal(DEREF(item).decl));
}
}
}
else
{
}
}
}
}
Type createFuncType(CheckContext* context, DeclRefValImpl<FuncDeclBase>  funcDeclRef)
{
auto funcType = createObject<FuncType> ();
return funcType;
}
Type createDeclRefType(CheckContext* context, DeclRefVal declRef)
{
auto type = createObject<DeclRefType> ();
DEREF(type).declRef = CompactDeclRef(declRef);
return type;
}
Type createDeclRefTypeType(CheckContext* context, DeclRefVal declRef)
{
auto type = createDeclRefType(context, declRef);
auto typeType = createTypeType(context, type);
return typeType;
}
TypeType createTypeType(CheckContext* context, Type type)
{
auto typeType = createObject<TypeType> ();
DEREF(typeType).type = type;
return typeType;
}
Type specializeTypeForDeclRef(CheckContext* context, Type type, DeclRefVal declRef)
{
return specializeType(type, DEREF(declRef).specializations);
}
Type getTypeForDeclRefImpl(CheckContext* context, DeclRefVal declRef)
{
auto decl = DEREF(declRef).getDecl();
ensureDecl(context, decl);
if(auto varDecl = as<VarDeclBase> (decl))
{
return specializeTypeForDeclRef(context, DEREF(DEREF(varDecl).type).type, declRef);
}
else
{
if(auto aggTypeDecl = as<AggTypeDecl> (decl))
{
return createDeclRefTypeType(context, declRef);
}
else
{
if(auto typeVarDecl = as<TypeVarDecl> (decl))
{
return createDeclRefTypeType(context, declRef);
}
else
{
if(auto genericDecl = as<GenericDecl> (decl))
{
return createDeclRefTypeType(context, declRef);
}
else
{
if(auto funcDeclRef = as<FuncDeclBase> (declRef))
{
return createFuncType(context, funcDeclRef);
}
else
{
assert(!"unimplemented");
return 0;
}
}
}
}
}
}
Type getTypeForDeclRef(CheckContext* context, DeclRefVal declRef)
{
auto result = getTypeForDeclRefImpl(context, declRef);
return result;
}
Type getTypeForDeclRef(CheckContext* context, CompactDeclRef declRef)
{
return getTypeForDeclRef(context, DeclRefVal(declRef));
}
Type createErrorType(CheckContext* context)
{
return createObject<ErrorType> ();
}
Type getBuiltinType(CheckContext* context, SourceLoc loc, ConstPtr<Char>  name)
{
auto cogModuleName = getName(DEREF(DEREF(context).shared).session, "cog");
ModuleDecl cogModule = nullptr;
if(DEREF(DEREF(DEREF(DEREF(context).shared).session).moduleDecl).name == cogModuleName)
{
cogModule = DEREF(DEREF(DEREF(context).shared).session).moduleDecl;
}
else
{
cogModule = findOrImportModule(DEREF(DEREF(context).shared).session, loc, cogModuleName);
}
auto nameSpan = TerminatedStringSpan(name);
for(auto decl : DEREF(cogModule).getDecls())
{
{
if(DEREF(decl).name && getText(DEREF(decl).name) == nameSpan)
{
auto type = createObject<DeclRefType> ();
DEREF(type).declRef = CompactDeclRef(decl);
return type;
}
}
}
diagnose(getSink(context), loc, kDiagnostic_failedToFindBuiltinType, name);
return createErrorType(context);
}
Type getResultType(CheckContext* context, DeclRefValImpl<PatternDecl>  decl)
{
if(auto funcDeclRef = as<FuncDecl> (decl))
{
return getResultType(funcDeclRef);
}
else
{
if(auto subscriptDeclRef = as<SubscriptDecl> (decl))
{
return getResultType(subscriptDeclRef);
}
else
{
if(auto typeDeclRef = as<AggTypeDecl> (decl))
{
return createDeclRefType(context, CompactDeclRef(typeDeclRef));
}
else
{
diagnose(getSink(context), DEREF(DEREF(decl).decl).loc, kDiagnostic_unimplemented, "result type");
return 0;
}
}
}
}
Exp createErrorExp(CheckContext* context, Exp exp)
{
DEREF(exp).type = createErrorType(context);
return exp;
}
Exp createErrorExp(CheckContext* context, SourceLoc loc)
{
auto exp = createObject<ErrorExp> ();
DEREF(exp).loc = loc;
return createErrorExp(context, exp);
}
Bool isSameVal(Val left, Val right)
{
if(auto leftType = as<Type> (left))
{
if(auto rightType = as<Type> (right))
{
return isSameType(leftType, rightType);
}
}
assert(!"unimplemented");
return false;
}
Bool isSameSpecializations(Specializations left, Specializations right)
{
if(!left || !right)
{
return left == right;
}
if(!isSameDeclRef(DEREF(left).genericDeclRef, DEREF(right).genericDeclRef))
{
return false;
}
auto leftCursor = DEREF(DEREF(left).args).begin();
auto rightCursor = DEREF(DEREF(right).args).begin();
while(leftCursor != DEREF(DEREF(left).args).end())
{
{
auto leftArg = *leftCursor;
auto rightArg = *rightCursor;
if(!isSameVal(DEREF(leftArg).value, DEREF(rightArg).value))
{
return false;
}
++leftCursor;
++rightCursor;
}
}
return true;
}
Bool isSameDeclRef(ConstRef<DeclRefVal>  left, ConstRef<DeclRefVal>  right)
{
if(DEREF(left).decl != DEREF(right).decl)
{
return false;
}
return isSameSpecializations(DEREF(left).specializations, DEREF(right).specializations);
}
Bool isSameType(Type left, Type right)
{
if(DEREF(left).directClass != DEREF(right).directClass)
{
return false;
}
if(auto leftDeclRefType = as<DeclRefType> (left))
{
if(auto rightDeclRefType = as<DeclRefType> (right))
{
if(isSameDeclRef(DEREF(leftDeclRefType).declRef, DEREF(rightDeclRefType).declRef))
{
return true;
}
}
}
return false;
}
Bool tryCoerceImpl(CheckContext* context, Exp fromExp, Type fromType, Exp* toExp, Type toType)
{
if(isSameType(fromType, toType))
{
if(toExp)
{
*toExp = fromExp;
}
return true;
}
if(isError(fromType) || isError(toType))
{
if(toExp)
{
*toExp = fromExp;
}
return true;
}
return false;
}
Bool tryCoerceImpl(CheckContext* context, Exp fromExp, Exp* toExp, Type toType)
{
if(auto fromOverloadedExpr = as<OverloadedExpr> (fromExp))
{
assert(!"unimplemented");
}
else
{
return tryCoerceImpl(context, fromExp, DEREF(fromExp).type, toExp, toType);
}
}
Exp coerce(CheckContext* context, Exp exp, Type type)
{
Exp result = nullptr;
if(tryCoerceImpl(context, exp, &result, type))
{
return result;
}
diagnose(getSink(context), DEREF(exp).loc, kDiagnostic_cannotConvertType, type, DEREF(exp).type);
return createErrorExp(context, exp);
}
Bool canCoerce(CheckContext* context, Exp exp, Type type)
{
return tryCoerceImpl(context, exp, nullptr, type);
}
Bool checkOverloadCandidateArity(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate)
{
auto args = &DEREF(DEREF(context).appExp).args;
auto argCursor = DEREF(args).begin();
auto argEnd = DEREF(args).end();
if(auto funcDeclRef = as<FuncDeclBase> (DEREF(candidate).declRef))
{
for(auto dd : getDecls(funcDeclRef))
{
{
if(auto paramDeclRef = as<ParamDecl> (dd))
{
if(!(argCursor != argEnd))
{
return false;
}
++argCursor;
}
else
{
}
}
}
if(argCursor != argEnd)
{
return false;
}
return true;
}
else
{
return false;
}
}
Bool checkOverloadCandidateTypes(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate)
{
auto args = &DEREF(DEREF(context).appExp).args;
auto argCursor = DEREF(args).begin();
auto argEnd = DEREF(args).end();
if(auto funcDeclRef = as<FuncDeclBase> (DEREF(candidate).declRef))
{
for(auto dd : getDecls(funcDeclRef))
{
{
if(auto paramDeclRef = as<ParamDecl> (dd))
{
if(!(argCursor != argEnd))
{
assert(false);
return false;
}
auto arg = *argCursor;
auto argExpr = &DEREF(arg).exp;
auto paramType = getType(paramDeclRef);
if(DEREF(context).mode == kOverloadResolveMode_justTrying)
{
if(!canCoerce(DEREF(context).checkContext, *argExpr, paramType))
{
return false;
}
}
else
{
*argExpr = coerce(DEREF(context).checkContext, *argExpr, paramType);
}
++argCursor;
}
else
{
}
}
}
if(argCursor != argEnd)
{
assert(false);
return false;
}
return true;
}
else
{
return false;
}
}
Bool checkOverloadCandidateDirections(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate)
{
return true;
}
void checkOverloadCandidateImpl(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate)
{
DEREF(candidate).state = kOverloadCandidateState_Unchecked;
if(!checkOverloadCandidateArity(context, candidate))
{
return;
}
DEREF(candidate).state = kOverloadCandidateState_CheckedArity;
if(!checkOverloadCandidateTypes(context, candidate))
{
return;
}
DEREF(candidate).state = kOverloadCandidateState_CheckedTypes;
if(!checkOverloadCandidateDirections(context, candidate))
{
return;
}
DEREF(candidate).state = kOverloadCandidateState_Applicable;
}
void checkOverloadCandidate(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate)
{
checkOverloadCandidateImpl(context, candidate);
}
Int compareCandidates(Ref<OverloadCandidate>  left, Ref<OverloadCandidate>  right)
{
if(DEREF(left).state != DEREF(right).state)
{
return int(DEREF(right).state) - int(DEREF(left).state);
}
return 0;
}
void addCheckedOverloadCandidate(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate)
{
Bool anyBetter = false;
Bool anyWorse = false;
{
UInt ii = 0;
for(;ii < DEREF(DEREF(context).candidates).getCount();++ii)
{
{
auto compareResult = compareCandidates(candidate, DEREF(context).candidates[ii]);
if(compareResult < 0)
{
DEREF(DEREF(context).candidates).fastRemoveAt(ii);
anyBetter = true;
--ii;
}
else
{
if(compareResult > 0)
{
anyWorse = true;
}
}
}
}}
if(anyWorse)
{
assert(!anyBetter);
return;
}
DEREF(DEREF(context).candidates).append(candidate);
}
void addOverloadCandidate(OverloadResolveContext* context, Ref<OverloadCandidate>  candidate)
{
checkOverloadCandidate(context, candidate);
addCheckedOverloadCandidate(context, candidate);
}
void addSubscriptOverloadCandidate(OverloadResolveContext* context, DeclRefValImpl<SubscriptDecl>  declRef)
{
OverloadCandidate candidate;
DEREF(candidate).declRef = declRef;
DEREF(candidate).resultType = getResultType(DEREF(context).checkContext, declRef);
addOverloadCandidate(context, candidate);
}
void addFuncOverloadCandidate(OverloadResolveContext* context, DeclRefValImpl<FuncDeclBase>  declRef)
{
OverloadCandidate candidate;
DEREF(candidate).declRef = declRef;
DEREF(candidate).resultType = getResultType(DEREF(context).checkContext, declRef);
addOverloadCandidate(context, candidate);
}
void addInitializerOverloadCandidate(OverloadResolveContext* context, Type type, DeclRefValImpl<InitializerDecl>  declRef)
{
OverloadCandidate candidate;
DEREF(candidate).declRef = declRef;
DEREF(candidate).resultType = type;
addOverloadCandidate(context, candidate);
}
Exp createDeclRefExp(CheckContext* context, CompactDeclRef declRef, SourceLoc loc, Exp baseExp)
{
DeclRefExp declRefExp = nullptr;
if(baseExp)
{
auto memberRefExp = createObject<MemberExp> ();
DEREF(memberRefExp).base = baseExp;
declRefExp = memberRefExp;
}
else
{
declRefExp = createObject<DeclRefExp> ();
}
DEREF(declRefExp).loc = loc;
DEREF(declRefExp).declRef = declRef;
DEREF(declRefExp).type = getTypeForDeclRef(context, declRef);
return declRefExp;
}
Exp createDeclRefExp(CheckContext* context, DeclRefVal declRef, SourceLoc loc, Exp baseExp)
{
auto decl = DEREF(declRef).getDecl();
if(auto specializations = DEREF(declRef).getSpecializations())
{
auto specializedDecl = createObject<SpecializedDecl> ();
DEREF(specializedDecl).decl = decl;
DEREF(specializedDecl).specializations = specializations;
return createDeclRefExp(context, CompactDeclRef(specializedDecl), loc, baseExp);
}
else
{
return createDeclRefExp(context, CompactDeclRef(decl), loc, baseExp);
}
}
Exp createDeclRefExp(CheckContext* context, DeclRefVal declRef, SourceLoc loc)
{
return createDeclRefExp(context, declRef, loc, nullptr);
}
Exp completeOverload(OverloadResolveContext* overloadContext)
{
auto context = DEREF(overloadContext).checkContext;
auto appExp = DEREF(overloadContext).appExp;
auto count = DEREF(DEREF(overloadContext).candidates).getCount();
Name* baseName = nullptr;
if(auto declRefExp = as<DeclRefExp> (DEREF(appExp).base))
{
baseName = DEREF(DEREF(DEREF(declRefExp).declRef).getDecl()).name;
}
else
{
if(auto nameExp = as<NameExp> (DEREF(appExp).base))
{
baseName = DEREF(nameExp).name;
}
else
{
if(auto overloadedExpr = as<OverloadedExpr> (DEREF(appExp).base))
{
baseName = DEREF(DEREF(DEREF(DEREF(overloadedExpr).lookupResult).items[0]).decl).name;
}
}
}
if(count == 1)
{
auto candidate = &DEREF(overloadContext).candidates[0];
if(DEREF(candidate).state == kOverloadCandidateState_Applicable)
{
auto baseExp = createDeclRefExp(context, DEREF(candidate).declRef, DEREF(appExp).loc, DEREF(overloadContext).baseExp);
DEREF(appExp).base = baseExp;
DEREF(appExp).type = DEREF(candidate).resultType;
return appExp;
}
else
{
DEREF(overloadContext).mode = kOverloadResolveMode_forReal;
checkOverloadCandidate(overloadContext, *candidate);
return createErrorExp(context, DEREF(appExp).loc);
}
}
else
{
if(count == 0)
{
diagnose(getSink(context), DEREF(appExp).loc, kDiagnostic_noOverloadCandidatesFound, baseName);
if(auto overloadedExpr = as<OverloadedExpr> (DEREF(appExp).base))
{
for(auto item : DEREF(overloadedExpr).lookupResult)
{
{
diagnose(getSink(context), DEREF(DEREF(item).decl).loc, kDiagnostic_candidate, DeclRefVal(DEREF(item).decl));
}
}
}
return createErrorExp(context, DEREF(appExp).loc);
}
else
{
if(DEREF(DEREF(overloadContext).candidates[0]).state == kOverloadCandidateState_Applicable)
{
diagnose(getSink(context), DEREF(appExp).loc, kDiagnostic_ambiguousCallToOverload, baseName, ArgTypeList(DEREF(DEREF(appExp).args).head));
for(auto cc : DEREF(overloadContext).candidates)
{
{
diagnose(getSink(context), DEREF(DEREF(DEREF(cc).declRef).getDecl()).loc, kDiagnostic_candidate, DEREF(cc).declRef);
}
}
return createErrorExp(context, DEREF(appExp).loc);
}
else
{
diagnose(getSink(context), DEREF(appExp).loc, kDiagnostic_noApplicableOverloadForCall, baseName, ArgTypeList(DEREF(DEREF(appExp).args).head));
for(auto cc : DEREF(overloadContext).candidates)
{
{
diagnose(getSink(context), DEREF(DEREF(DEREF(cc).declRef).getDecl()).loc, kDiagnostic_candidate, DEREF(cc).declRef);
}
}
return createErrorExp(context, DEREF(appExp).loc);
}
}
}
}
Bool isError(Type type)
{
return as<ErrorType> (type) != nullptr;
}
Bool isError(CheckContext* context, Exp exp)
{
return as<ErrorExp> (exp) || isError(DEREF(exp).type);
}
void addTypeOverloadCandidates(OverloadResolveContext* context, Exp typeExp, Type type)
{
if(auto declRefType = as<DeclRefType> (type))
{
if(auto aggTypeDeclRef = as<AggTypeDecl> (DEREF(declRefType).declRef))
{
for(auto memberDeclRef : getDecls(aggTypeDeclRef))
{
{
if(auto initializerDeclRef = as<InitializerDecl> (memberDeclRef))
{
addInitializerOverloadCandidate(context, type, initializerDeclRef);
}
}
}
}
}
}
Bool doInferenceForVals(GenericInferenceContext* context, Val argVal, Val paramVal)
{
if(auto argType = as<Type> (argVal))
{
if(auto paramType = as<Type> (paramVal))
{
return doInferenceForTypes(context, argType, paramType);
}
}
return false;
}
Bool doInferenceForSpecializations(GenericInferenceContext* context, Specializations argSpec, Specializations paramSpec)
{
if(!argSpec || !paramSpec)
{
return argSpec == paramSpec;
}
if(!doInferenceForDeclRefs(context, DEREF(argSpec).genericDeclRef, DEREF(paramSpec).genericDeclRef))
{
return false;
}
auto aa = DEREF(DEREF(argSpec).args).head;
auto pp = DEREF(DEREF(paramSpec).args).head;
while(aa)
{
{
if(!doInferenceForVals(context, DEREF(aa).value, DEREF(pp).value))
{
return false;
}
aa = DEREF(aa).next;
pp = DEREF(pp).next;
}
}
return true;
}
Bool doInferenceForDeclRefs(GenericInferenceContext* context, DeclRefVal argDeclRef, DeclRefVal paramDeclRef)
{
if(DEREF(paramDeclRef).getDecl() != DEREF(argDeclRef).getDecl())
{
return false;
}
return doInferenceForSpecializations(context, DEREF(argDeclRef).specializations, DEREF(paramDeclRef).specializations);
}
Bool doInferenceForTypes(GenericInferenceContext* context, Type argType, Type paramType)
{
if(isSameType(argType, paramType))
{
return true;
}
if(auto paramDeclRefType = as<DeclRefType> (paramType))
{
if(auto genericParamDeclRef = as<GenericParamDecl> (DEREF(paramDeclRefType).declRef))
{
assert(!"unimplemented");
}
if(auto argDeclRefType = as<DeclRefType> (argType))
{
return doInferenceForDeclRefs(context, DEREF(argDeclRefType).declRef, DEREF(paramDeclRefType).declRef);
}
}
return false;
}
Bool doInferenceForArgAndParam(GenericInferenceContext* context, Exp argExpr, DeclRefValImpl<ParamDecl>  paramDeclRef)
{
return doInferenceForTypes(context, DEREF(argExpr).type, getType(paramDeclRef));
}
Specializations inferGenericArgsForApp(CheckContext* context, DeclRefValImpl<GenericDecl>  genericDeclRef, AppExpBase appExpr)
{
auto innerDeclRef = getInner(genericDeclRef);
auto innerFuncDeclRef = as<FuncDeclBase> (innerDeclRef);
if(!innerFuncDeclRef)
{
return nullptr;
}
Array<GenericInferenceArg>  args;
for(auto member : getDecls(genericDeclRef))
{
{
if(auto genericParamDeclRef = as<GenericParamDecl> (member))
{
GenericInferenceArg arg;
DEREF(arg).paramDeclRef = genericParamDeclRef;
DEREF(args).append(arg);
}
else
{
}
}
}
GenericInferenceContext inferenceContext;
DEREF(inferenceContext).checkContext = context;
DEREF(inferenceContext).args = &args[0];
auto aa = DEREF(DEREF(appExpr).args).begin();
auto ae = DEREF(DEREF(appExpr).args).end();
for(auto member : getDecls(innerFuncDeclRef))
{
{
auto paramDeclRef = as<ParamDecl> (member);
if(!paramDeclRef)
{
continue;
}
if(!(aa != ae))
{
return nullptr;
}
auto arg = *aa;
++aa;
if(!doInferenceForArgAndParam(&inferenceContext, DEREF(arg).exp, paramDeclRef))
{
return nullptr;
}
}
}
if(aa != ae)
{
return nullptr;
}
for(auto arg : args)
{
{
if(!DEREF(arg).val)
{
return nullptr;
}
}
}
return nullptr;
}
void addGenericOverloadCandidate(OverloadResolveContext* context, DeclRefValImpl<GenericDecl>  genericDeclRef)
{
auto innerDeclRef = getInner(genericDeclRef);
auto specializations = inferGenericArgsForApp(DEREF(context).checkContext, genericDeclRef, DEREF(context).appExp);
if(specializations)
{
DEREF(innerDeclRef).specializations = specializations;
}
addDeclRefOverloadCandidates(context, innerDeclRef);
}
void addDeclRefOverloadCandidates(OverloadResolveContext* context, DeclRefVal val)
{
if(auto funcDeclRef = as<FuncDeclBase> (val))
{
addFuncOverloadCandidate(context, funcDeclRef);
}
else
{
if(auto genericDeclRef = as<GenericDecl> (val))
{
addGenericOverloadCandidate(context, genericDeclRef);
}
else
{
}
}
}
Type specializeType(Type type, Specializations specializations)
{
if(!specializations)
{
return type;
}
assert(!"unimplemented");
return nullptr;
}
void ensureDecl(CheckContext* context, Decl decl, DeclCheckState state)
{
if(DEREF(decl).checkState >= state)
{
return;
}
checkDecl(context, decl);
}
void ensureDecl(CheckContext* context, Decl decl)
{
ensureDecl(context, decl, kDeclCheckState_CheckedHead);
}
ArgTypeList::ArgTypeList()
{
DEREF(this).args = nullptr;
}
ArgTypeList::ArgTypeList(Arg args)
{
DEREF(this).args = args;
}
StringSpan::StringSpan()
{
}
StringSpan::StringSpan(Ptr<Char>  begin, Ptr<Char>  end)
{
DEREF(this).begin = begin;
DEREF(this).end = end;
}
StringSpan::StringSpan(ConstPtr<Char>  begin, ConstPtr<Char>  end)
{
DEREF(this).begin = cast<Ptr<Char> >(begin);
DEREF(this).end = cast<Ptr<Char> >(end);
}
Size StringSpan::getLength()
{
return end - begin;
}
Bool StringSpan::endsWith(StringSpan suffix)
{
auto len = getLength();
auto suffixLen = DEREF(suffix).getLength();
if(suffixLen > len)
{
return false;
}
return StringSpan(end - suffixLen, end) == suffix;
}
Bool StringSpan::trimFromEnd(StringSpan suffix)
{
if(!endsWith(suffix))
{
return false;
}
auto suffixLen = DEREF(suffix).getLength();
end -= suffixLen;
return true;
}
StringSpan StringSpan::suffixAfterLast(Char c)
{
auto cursor = end;
while(cursor != begin)
{
{
--cursor;
if(*cursor == c)
{
return StringSpan(cursor + 1, end);
}
}
}
return *this;
}
DiagnosticArg::DiagnosticArg(Int val)
{
DEREF(this).flavor = kFlavor_Int;
DEREF(this).intVal = val;
}
DiagnosticArg::DiagnosticArg(TokenCode val)
{
DEREF(this).flavor = kFlavor_TokenCode;
DEREF(this).tokenCodeVal = val;
}
DiagnosticArg::DiagnosticArg(Ptr<Name>  val)
{
DEREF(this).flavor = kFlavor_Name;
DEREF(this).nameVal = val;
}
DiagnosticArg::DiagnosticArg(StringSpan val)
{
DEREF(this).flavor = kFlavor_StringSpan;
DEREF(this).stringSpanVal = val;
}
DiagnosticArg::DiagnosticArg(ConstPtr<Char>  val)
{
DEREF(this).flavor = kFlavor_StringSpan;
DEREF(this).stringSpanVal = TerminatedStringSpan(val);
}
DiagnosticArg::DiagnosticArg(Type val)
{
DEREF(this).flavor = kFlavor_Type;
DEREF(this).typeVal = val;
}
DiagnosticArg::DiagnosticArg(DeclRefVal val)
{
DEREF(this).flavor = kFlavor_DeclRef;
DEREF(this).declRefVal = val;
}
DiagnosticArg::DiagnosticArg(ConstRef<ArgTypeList>  val)
{
DEREF(this).flavor = kFlavor_ArgTypeList;
DEREF(this).argTypeListVal = val;
}
void diagnose(Ptr<DiagnosticSink>  sink, SourceLoc loc, DiagnosticID id)
{
diagnoseImpl(sink, loc, id, 0, 0);
}
void diagnose(Ptr<DiagnosticSink>  sink, SourceLoc loc, DiagnosticID id, DiagnosticArg arg0)
{
FixedSizeArray<1, Ptr<DiagnosticArg> >  args;
args[0] = &arg0;
diagnoseImpl(sink, loc, id, 1, args);
}
void diagnose(Ptr<DiagnosticSink>  sink, SourceLoc loc, DiagnosticID id, DiagnosticArg arg0, DiagnosticArg arg1)
{
FixedSizeArray<2, Ptr<DiagnosticArg> >  args;
args[0] = &arg0;
args[1] = &arg1;
diagnoseImpl(sink, loc, id, 2, args);
}
void printDeclRef(FILE* stream, DeclRefVal declRef)
{
fprintf(stream, "%s", DEREF(getText(DEREF(DEREF(declRef).getDecl()).name)).begin);
}
void printType(FILE* stream, Type type)
{
if(auto declRefType = as<DeclRefType> (type))
{
printDeclRef(stream, DEREF(declRefType).declRef);
}
else
{
if(auto typeType = as<TypeType> (type))
{
fprintf(stream, "typeof(");
printType(stream, DEREF(typeType).type);
fprintf(stream, ")");
}
else
{
if(auto funcType = as<FuncType> (type))
{
fprintf(stream, "FUNC_TYPE");
}
else
{
if(auto errorType = as<ErrorType> (type))
{
fprintf(stream, "<error>");
}
else
{
if(auto overloadGroupType = as<OverloadGroupType> (type))
{
fprintf(stream, "<overload group>");
}
else
{
if(!type)
{
fprintf(stream, "NULL_TYPE");
}
else
{
fprintf(stream, "UNKNOWN_TYPE(%s)", DEREF(DEREF(type).directClass).name);
}
}
}
}
}
}
}
void printDiagnosticArg(ConstPtr<DiagnosticArg>  arg)
{
switch(DEREF(arg).flavor)
{
case kFlavor_Int:
{
fprintf(stderr, "%ld", DEREF(arg).intVal);
}
{
break;
}
case kFlavor_TokenCode:
{
fprintf(stderr, "TOKEN: %d", DEREF(arg).tokenCodeVal);
}
{
break;
}
case kFlavor_Name:
{
{
auto text = getText(DEREF(arg).nameVal);
fwrite(DEREF(text).begin, 1, DEREF(text).end - DEREF(text).begin, stderr);
}
}
{
break;
}
case kFlavor_StringSpan:
{
{
auto text = DEREF(arg).stringSpanVal;
fwrite(DEREF(text).begin, 1, DEREF(text).end - DEREF(text).begin, stderr);
}
}
{
break;
}
case kFlavor_Type:
{
{
printType(stderr, DEREF(arg).typeVal);
}
}
{
break;
}
case kFlavor_ArgTypeList:
{
{
auto first = true;
{
auto aa = DEREF(DEREF(arg).argTypeListVal).args;
for(;aa;aa = DEREF(aa).next)
{
{
if(!first)
{
fprintf(stderr, ", ");
}
printType(stderr, DEREF(DEREF(aa).exp).type);
first = false;
}
}}
}
}
{
break;
}
case kFlavor_DeclRef:
{
{
printDeclRef(stderr, DEREF(arg).declRefVal);
}
}
{
break;
}
default:
{
fprintf(stderr, "UNIMPLEMENTD:%d", DEREF(arg).flavor);
}
{
break;
}
}
}
void diagnoseImpl(Ptr<DiagnosticSink>  sink, SourceLoc loc, DiagnosticID id, int argCount, Ptr<Ptr<DiagnosticArg> >  args)
{
auto expandedLoc = expandLoc(DEREF(sink).session, loc);
auto severity = kSeverity_Error;
fprintf(stderr, "%s(%ld,%ld): %s: ", DEREF(DEREF(expandedLoc).file).begin, DEREF(expandedLoc).line, DEREF(expandedLoc).column, "error");
fprintf(stderr, "%d", id);
{
int ii = 0;
for(;ii < argCount;ii++)
{
{
fprintf(stderr, "[");
printDiagnosticArg(args[ii]);
fprintf(stderr, "]");
}
}}
fprintf(stderr, "\n");
if(severity >= kSeverity_Error)
{
DEREF(sink).errorCount++;
if(severity >= kSeverity_Fatal)
{
assert(!"fatal");
exit(1);
}
}
}
DiagnosticSink* getSink(EmitContext* context)
{
return &DEREF(DEREF(context).session).sink;
}
void emit(EmitContext* context, StringSpan text)
{
fwrite(DEREF(text).begin, 1, DEREF(text).end - DEREF(text).begin, DEREF(context).stream);
}
void emit(EmitContext* context, Char* text)
{
emit(context, TerminatedStringSpan(text));
}
TerminatedStringSpan::TerminatedStringSpan(ConstPtr<Char>  text)
{
DEREF(this).begin = cast<Ptr<Char> >(text);
DEREF(this).end = cast<Ptr<Char> >(text + strlen(text));
}
TerminatedStringSpan::TerminatedStringSpan()
{
}
TerminatedStringSpan::TerminatedStringSpan(Ptr<Char>  begin, Ptr<Char>  end)
{
DEREF(this).begin = begin;
DEREF(this).end = end;
}
StringSpan TerminatedStringSpan::asStringSpan()
{
return StringSpan(begin, end);
}
void emit(EmitContext* context, Name* name)
{
emit(context, getText(name));
}
void emitType(EmitContext* context, Exp type)
{
if(!type)
{
emit(context, "NullType");
return;
}
emitExp(context, type);
}
void emitVal(EmitContext* context, Val val)
{
{
assert(!"unimplemented");
emit(context, "UnknownVal");
}
}
void emitGenericQuals(EmitContext* context, Decl decl)
{
auto pp = DEREF(decl).parent;
while(pp)
{
{
auto genericParent = as<GenericDecl> (pp);
if(genericParent)
{
emit(context, "template<");
auto first = true;
for(auto dd : DEREF(genericParent).getDecls())
{
{
auto genericParamDecl = as<GenericParamDecl> (dd);
if(!genericParamDecl)
{
continue;
}
if(!first)
{
emit(context, ", ");
}
emit(context, "typename ");
emit(context, DEREF(genericParamDecl).name);
first = false;
}
}
emit(context, " > ");
}
pp = DEREF(pp).parent;
}
}
}
void emitDeclName(EmitContext* context, Decl decl, DeclEmitMode mode, Bool includeModule)
{
auto parent = DEREF(decl).parent;
auto genericParent = as<GenericDecl> (parent);
if(genericParent)
{
parent = DEREF(genericParent).parent;
}
auto aggTypeDecl = as<AggTypeDecl> (parent);
if(aggTypeDecl)
{
if(mode == kDeclEmitMode_Full)
{
emitDeclNameAndGenericArgs(context, parent, mode);
emit(context, "::");
}
}
else
{
if(auto moduleDecl = as<ModuleDecl> (parent))
{
if(includeModule)
{
emitDeclName(context, parent, mode);
emit(context, "::");
}
}
}
auto name = DEREF(decl).name;
auto text = DEREF(getText(name)).begin;
auto c = text[0];
if('a' <= c && c <= 'z')
{
}
else
{
if('A' <= c && c <= 'Z')
{
}
else
{
if('_' == c || 0 == c)
{
}
else
{
emit(context, "operator");
}
}
}
emit(context, DEREF(decl).name);
}
void emitDeclName(EmitContext* context, Decl decl, DeclEmitMode mode)
{
emitDeclName(context, decl, mode, false);
}
void emitDeclNameAndGenericArgs(EmitContext* context, Decl decl, DeclEmitMode mode)
{
auto parent = DEREF(decl).parent;
auto genericParent = as<GenericDecl> (parent);
emitDeclName(context, decl, mode);
if(auto classDecl = as<ClassDecl> (decl))
{
emit(context, "Impl");
}
if(genericParent && (mode == kDeclEmitMode_Full))
{
emit(context, "<");
auto first = true;
for(auto dd : DEREF(genericParent).getDecls())
{
{
auto genericParamDecl = as<GenericParamDecl> (dd);
if(!genericParamDecl)
{
continue;
}
if(!first)
{
emit(context, ", ");
}
emit(context, DEREF(genericParamDecl).name);
first = false;
}
}
emit(context, " > ");
}
}
void emitDeclarator(EmitContext* context, Exp type, Decl decl, DeclEmitMode mode)
{
emitType(context, type);
emit(context, " ");
emitDeclName(context, decl, mode);
}
void emitDeclarator(EmitContext* context, TypeExp type, Decl decl, DeclEmitMode mode)
{
emitDeclarator(context, DEREF(type).exp, decl, mode);
}
void emitBinaryExp(EmitContext* context, AppExpBase exp, Char* op)
{
emitExp(context, DEREF(DEREF(DEREF(exp).args).head).exp);
emit(context, " ");
emit(context, op);
emit(context, " ");
emitExp(context, DEREF(DEREF(DEREF(DEREF(exp).args).head).next).exp);
}
void emitStringVal(EmitContext* context, StringSpan str)
{
auto cursor = DEREF(str).begin;
while(cursor != DEREF(str).end)
{
{
switch(*cursor)
{
case '\n':
{
emit(context, "\\n");
}
{
break;
}
case '\r':
{
emit(context, "\\r");
}
{
break;
}
case '\\':
{
emit(context, "\\\\");
}
{
break;
}
case '\t':
{
emit(context, "\\t");
}
{
break;
}
case '\'':
{
emit(context, "\\\'");
}
{
break;
}
case '\"':
{
emit(context, "\\\"");
}
{
break;
}
default:
{
{
FixedSizeArray<2, Char>  text;
text[0] = *cursor;
text[1] = 0;
emit(context, text);
}
}
{
break;
}
}
cursor++;
}
}
}
void emitStringVal(EmitContext* context, String str)
{
auto strSpan = DEREF(str).asSpan();
emitStringVal(context, StringSpan(DEREF(strSpan).begin, DEREF(strSpan).end));
}
void emitExp(EmitContext* context, Exp exp)
{
if(auto nameExp = as<NameExp> (exp))
{
emit(context, DEREF(nameExp).name);
}
else
{
if(auto memberExpr = as<MemberExp> (exp))
{
emit(context, "DEREF(");
emitExp(context, DEREF(memberExpr).base);
emit(context, ")");
emit(context, ".");
emit(context, DEREF(memberExpr).memberName);
}
else
{
if(auto parenExpr = as<ParenExp> (exp))
{
emit(context, "(");
emitExp(context, DEREF(parenExpr).base);
emit(context, ")");
}
else
{
if(auto genericAppExp = as<GenericAppExp> (exp))
{
emitExp(context, DEREF(genericAppExp).base);
emit(context, "<");
auto first = true;
for(auto arg : DEREF(genericAppExp).args)
{
{
if(!first)
{
emit(context, ", ");
}
emitExp(context, DEREF(arg).exp);
first = false;
}
}
emit(context, "> ");
}
else
{
if(auto infixExp = as<InfixExp> (exp))
{
emitExp(context, DEREF(DEREF(DEREF(infixExp).args).head).exp);
emit(context, " ");
emitExp(context, DEREF(infixExp).base);
emit(context, " ");
emitExp(context, DEREF(DEREF(DEREF(DEREF(infixExp).args).head).next).exp);
}
else
{
if(auto prefixExp = as<PrefixExp> (exp))
{
emitExp(context, DEREF(prefixExp).base);
emitExp(context, DEREF(DEREF(DEREF(prefixExp).args).head).exp);
}
else
{
if(auto postfixExp = as<PostfixExp> (exp))
{
emitExp(context, DEREF(DEREF(DEREF(postfixExp).args).head).exp);
emitExp(context, DEREF(postfixExp).base);
}
else
{
if(auto indexExp = as<IndexExp> (exp))
{
emitExp(context, DEREF(indexExp).base);
emit(context, "[");
auto first = true;
for(auto arg : DEREF(indexExp).args)
{
{
if(!first)
{
emit(context, ", ");
}
emitExp(context, DEREF(arg).exp);
first = false;
}
}
emit(context, "]");
}
else
{
if(auto appExp = as<AppExpBase> (exp))
{
emitExp(context, DEREF(appExp).base);
emit(context, "(");
auto first = true;
for(auto arg : DEREF(appExp).args)
{
{
if(!first)
{
emit(context, ", ");
}
emitExp(context, DEREF(arg).exp);
first = false;
}
}
emit(context, ")");
}
else
{
if(auto assignExp = as<AssignExp> (exp))
{
emitExp(context, DEREF(assignExp).left);
emit(context, " = ");
emitExp(context, DEREF(assignExp).right);
}
else
{
if(auto intLitExp = as<IntLitExp> (exp))
{
FixedSizeArray<16, Char>  buffer;
sprintf(buffer, "%lld", DEREF(intLitExp).val);
emit(context, buffer);
}
else
{
if(auto strLitExp = as<StringLitExp> (exp))
{
emit(context, "\"");
emitStringVal(context, DEREF(strLitExp).val);
emit(context, "\"");
}
else
{
if(auto charLitExp = as<CharacterLitExp> (exp))
{
emit(context, "\'");
emitStringVal(context, DEREF(charLitExp).val);
emit(context, "\'");
}
else
{
if(auto thisExpr = as<ThisExpr> (exp))
{
emit(context, "this");
}
else
{
if(auto castExpr = as<CastExpr> (exp))
{
emit(context, "cast<");
emitType(context, DEREF(DEREF(castExpr).toType).exp);
emit(context, ">(");
emitExp(context, DEREF(castExpr).arg);
emit(context, ")");
}
else
{
diagnose(getSink(context), DEREF(exp).loc, kDiagnostic_unimplemented, DEREF(DEREF(exp).directClass).name);
assert(!"unimplemented");
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
void emitBlockStmt(EmitContext* context, BlockStmt stmt)
{
emit(context, "{\n");
for(auto stmt : DEREF(stmt).getStmts())
{
{
emitStmt(context, stmt);
}
}
emit(context, "}\n");
}
void emitBlockStmt(EmitContext* context, Stmt stmt)
{
if(auto blockStmt = as<BlockStmt> (stmt))
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
void emitStmt(EmitContext* context, Stmt stmt)
{
if(auto blockStmt = as<BlockStmt> (stmt))
{
emitBlockStmt(context, blockStmt);
}
else
{
if(auto decl = as<Decl> (stmt))
{
emitDecl(context, decl, kDeclEmitMode_Full);
}
else
{
if(auto exp = as<Exp> (stmt))
{
emitExp(context, exp);
emit(context, ";\n");
}
else
{
if(auto whileStmt = as<WhileStmt> (stmt))
{
emit(context, "while(");
emitExp(context, DEREF(whileStmt).condition);
emit(context, ")\n{\n");
emitStmt(context, DEREF(whileStmt).body);
emit(context, "}\n");
}
else
{
if(auto forEachStmt = as<ForEachStmt> (stmt))
{
emit(context, "for(auto ");
emit(context, DEREF(forEachStmt).name);
emit(context, " : ");
emitExp(context, DEREF(forEachStmt).exp);
emit(context, ")\n{\n");
emitStmt(context, DEREF(forEachStmt).body);
emit(context, "}\n");
}
else
{
if(auto forStmt = as<ForStmt> (stmt))
{
emit(context, "{\n");
if(DEREF(forStmt).init)
{
emitStmt(context, DEREF(forStmt).init);
}
emit(context, "for(;");
if(DEREF(forStmt).condition)
{
emitExp(context, DEREF(forStmt).condition);
}
emit(context, ";");
if(DEREF(forStmt).iter)
{
emitExp(context, DEREF(forStmt).iter);
}
emit(context, ")\n{\n");
emitStmt(context, DEREF(forStmt).body);
emit(context, "}}\n");
}
else
{
if(auto switchStmt = as<SwitchStmt> (stmt))
{
emit(context, "switch(");
emitExp(context, DEREF(switchStmt).condition);
emit(context, ")\n{\n");
{
auto cc = DEREF(switchStmt).cases;
for(;cc;cc = DEREF(cc).next)
{
{
{
auto aa = DEREF(cc).values;
for(;aa;aa = DEREF(aa).next)
{
{
if(DEREF(aa).exp)
{
emit(context, "case ");
emitExp(context, DEREF(aa).exp);
}
else
{
emit(context, "default");
}
emit(context, ":\n");
}
}}
emit(context, "{\n");
emitStmt(context, DEREF(cc).body);
emit(context, "}\n");
}
}}
emit(context, "}\n");
}
else
{
if(auto ifStmt = as<IfStmt> (stmt))
{
emit(context, "if(");
emitExp(context, DEREF(ifStmt).condition);
emit(context, ")\n");
emitBlockStmt(context, DEREF(ifStmt).thenStmt);
if(auto elseStmt = DEREF(ifStmt).elseStmt)
{
emit(context, "else\n");
emitBlockStmt(context, elseStmt);
}
}
else
{
if(auto ifLetStmt = as<IfLetStmt> (stmt))
{
emit(context, "if(auto ");
emit(context, DEREF(ifLetStmt).name);
emit(context, " = ");
emitExp(context, DEREF(ifLetStmt).init);
emit(context, ")\n");
emitBlockStmt(context, DEREF(ifLetStmt).thenStmt);
if(auto elseStmt = DEREF(ifLetStmt).elseStmt)
{
emit(context, "else\n");
emitBlockStmt(context, elseStmt);
}
}
else
{
if(auto returnStmt = as<ReturnStmt> (stmt))
{
emit(context, "return");
if(auto value = DEREF(returnStmt).value)
{
emit(context, " ");
emitExp(context, value);
}
emit(context, ";\n");
}
else
{
if(auto breakStmt = as<BreakStmt> (stmt))
{
emit(context, "break;\n");
}
else
{
if(auto continueStmt = as<ContinueStmt> (stmt))
{
emit(context, "continue;\n");
}
else
{
diagnose(getSink(context), DEREF(stmt).loc, kDiagnostic_unimplemented, DEREF(DEREF(stmt).directClass).name);
assert(!"unimplemented");
}
}
}
}
}
}
}
}
}
}
}
}
}
void emitClassDecl(EmitContext* context, ClassDecl aggDecl, DeclEmitMode mode)
{
if(mode == kDeclEmitMode_Full)
{
for(auto dd : DEREF(aggDecl).getDecls())
{
{
if(auto varDecl = as<VarDecl> (dd))
{
continue;
}
emitDecl(context, dd, kDeclEmitMode_Full);
}
}
return;
}
emit(context, "using ");
emit(context, DEREF(aggDecl).name);
emit(context, " = struct ");
emit(context, DEREF(aggDecl).name);
emit(context, "Impl* ");
emit(context, ";\n");
emit(context, "struct ");
emit(context, DEREF(aggDecl).name);
emit(context, "Impl");
if(mode <= kDeclEmitMode_MinimalForward)
{
emit(context, ";\n");
return;
}
if(auto base = DEREF(DEREF(aggDecl).base).exp)
{
emit(context, " : ");
emitType(context, base);
emit(context, "Impl");
}
else
{
emit(context, " : cog::ObjectImpl");
}
emit(context, "\n{\n");
emit(context, "typedef cog::Class StaticClass;\n");
emit(context, "static StaticClass staticClass;\n");
emitDecls(context, aggDecl, kDeclEmitMode_Forward);
emit(context, "};\n");
emit(context, "} namespace cog {\n");
emit(context, "template<> struct ObjectClassImpl<");
emitDeclName(context, aggDecl, kDeclEmitMode_Full, true);
emit(context, " > { typedef ");
emitDeclName(context, aggDecl, kDeclEmitMode_Full, true);
emit(context, "Impl Impl; };\n");
emit(context, "} namespace ");
emit(context, DEREF(DEREF(DEREF(context).session).moduleDecl).name);
emit(context, " {\n");
}
void emitStructDecl(EmitContext* context, StructDecl aggDecl, DeclEmitMode mode)
{
if(mode == kDeclEmitMode_Full)
{
for(auto dd : DEREF(aggDecl).getDecls())
{
{
if(auto varDecl = as<VarDecl> (dd))
{
continue;
}
emitDecl(context, dd, kDeclEmitMode_Full);
}
}
return;
}
emit(context, "struct ");
emit(context, DEREF(aggDecl).name);
if(mode <= kDeclEmitMode_MinimalForward)
{
emit(context, ";\n");
return;
}
if(auto base = DEREF(DEREF(aggDecl).base).exp)
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
void emitVarDecl(EmitContext* context, VarDeclBase varDecl, DeclEmitMode mode)
{
if(mode == kDeclEmitMode_MinimalForward)
{
return;
}
if(auto type = DEREF(DEREF(varDecl).type).exp)
{
emitDeclarator(context, type, varDecl, mode);
}
else
{
emit(context, "auto ");
emitDeclName(context, varDecl, mode);
}
if(auto initExp = DEREF(varDecl).init)
{
emit(context, " = ");
emitExp(context, initExp);
}
emit(context, ";\n");
}
void emitParamDecl(EmitContext* context, ParamDecl paramDecl)
{
emitDeclarator(context, DEREF(paramDecl).type, paramDecl, kDeclEmitMode_Full);
}
void emitFuncDecl(EmitContext* context, FuncDecl funcDecl, DeclEmitMode mode)
{
if(mode == kDeclEmitMode_MinimalForward)
{
return;
}
if(mode == kDeclEmitMode_Full)
{
if(!DEREF(funcDecl).body)
{
return;
}
emitGenericQuals(context, funcDecl);
}
if(auto resultType = DEREF(DEREF(funcDecl).resultType).exp)
{
emitDeclarator(context, resultType, funcDecl, mode);
}
else
{
emit(context, "void ");
emitDeclName(context, funcDecl, mode);
}
emit(context, "(");
auto first = true;
for(auto decl : DEREF(funcDecl).getDecls())
{
{
auto param = as<ParamDecl> (decl);
if(!param)
{
continue;
}
if(!first)
{
emit(context, ", ");
}
emitParamDecl(context, param);
first = false;
}
}
emit(context, ")");
auto body = DEREF(funcDecl).body;
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
void emitInitializerDecl(EmitContext* context, InitializerDecl initDecl, DeclEmitMode mode)
{
if(mode == kDeclEmitMode_MinimalForward)
{
return;
}
if(mode == kDeclEmitMode_Full)
{
if(!DEREF(initDecl).body)
{
return;
}
emitGenericQuals(context, initDecl);
}
if(mode == kDeclEmitMode_Full)
{
emitDeclNameAndGenericArgs(context, DEREF(initDecl).getParent(), mode);
emit(context, "::");
}
emit(context, DEREF(DEREF(initDecl).getParent()).name);
if(as<ClassDecl> (DEREF(initDecl).getParent()))
{
emit(context, "Impl");
}
emit(context, "(");
auto first = true;
for(auto decl : DEREF(initDecl).getDecls())
{
{
auto param = as<ParamDecl> (decl);
if(!param)
{
continue;
}
if(!first)
{
emit(context, ", ");
}
emitParamDecl(context, param);
first = false;
}
}
emit(context, ")");
auto body = DEREF(initDecl).body;
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
void emitSubscriptDecl(EmitContext* context, SubscriptDecl decl, DeclEmitMode mode)
{
if(mode == kDeclEmitMode_MinimalForward)
{
return;
}
if(mode == kDeclEmitMode_Full)
{
if(!DEREF(decl).body)
{
return;
}
emitGenericQuals(context, decl);
}
if(auto resultType = DEREF(DEREF(decl).resultType).exp)
{
emitType(context, resultType);
emit(context, " ");
}
else
{
emit(context, "void ");
}
if(mode == kDeclEmitMode_Full)
{
emitDeclNameAndGenericArgs(context, DEREF(decl).getParent(), mode);
emit(context, "::");
}
emit(context, "operator[](");
auto first = true;
for(auto decl : DEREF(decl).getDecls())
{
{
auto param = as<ParamDecl> (decl);
if(!param)
{
continue;
}
if(!first)
{
emit(context, ", ");
}
emitParamDecl(context, param);
first = false;
}
}
emit(context, ")");
auto body = DEREF(decl).body;
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
void emitDecl(EmitContext* context, Decl decl, DeclEmitMode mode)
{
auto builtinAttr = DEREF(decl).findAttr<BuiltinAttr> ();
if(builtinAttr)
{
return;
}
if(auto classDecl = as<ClassDecl> (decl))
{
emitClassDecl(context, classDecl, mode);
}
else
{
if(auto structDecl = as<StructDecl> (decl))
{
emitStructDecl(context, structDecl, mode);
}
else
{
if(auto tagDecl = as<EnumTagDecl> (decl))
{
emit(context, DEREF(tagDecl).name);
if(DEREF(tagDecl).init)
{
emit(context, " = ");
emitExp(context, DEREF(tagDecl).init);
}
emit(context, ",\n");
}
else
{
if(auto varDecl = as<VarDeclBase> (decl))
{
emitVarDecl(context, varDecl, mode);
}
else
{
if(auto funcDecl = as<FuncDecl> (decl))
{
emitFuncDecl(context, funcDecl, mode);
}
else
{
if(auto initDecl = as<InitializerDecl> (decl))
{
emitInitializerDecl(context, initDecl, mode);
}
else
{
if(auto subscriptDecl = as<SubscriptDecl> (decl))
{
emitSubscriptDecl(context, subscriptDecl, mode);
}
else
{
if(auto enumDecl = as<EnumDecl> (decl))
{
if(mode >= kDeclEmitMode_Full)
{
return;
}
emit(context, "enum ");
emitDeclName(context, enumDecl, mode);
emit(context, " : int");
if(mode <= kDeclEmitMode_MinimalForward)
{
emit(context, ";\n");
return;
}
emit(context, "\n{\n");
for(auto dd : DEREF(enumDecl).getDecls())
{
{
emitDecl(context, dd, kDeclEmitMode_Full);
}
}
emit(context, "};\n");
}
else
{
if(auto importDecl = as<ImportDecl> (decl))
{
}
else
{
if(auto typeAliasDecl = as<TypeAliasDecl> (decl))
{
emit(context, "typedef ");
emitDeclarator(context, DEREF(typeAliasDecl).init, typeAliasDecl, mode);
emit(context, ";\n");
}
else
{
if(auto genericDecl = as<GenericDecl> (decl))
{
if(mode < kDeclEmitMode_Full)
{
auto innerDecl = DEREF(genericDecl).inner;
if(mode <= kDeclEmitMode_MinimalForward)
{
if(as<FuncDeclBase> (innerDecl))
{
return;
}
}
emit(context, "template<");
auto first = true;
for(auto dd : DEREF(genericDecl).getDecls())
{
{
if(auto typeParam = as<GenericParamDecl> (dd))
{
if(!first)
{
emit(context, ", ");
}
emit(context, "typename ");
emit(context, DEREF(typeParam).name);
first = false;
}
else
{
}
}
}
emit(context, " >\n");
}
emitDecl(context, DEREF(genericDecl).inner, mode);
}
else
{
assert(!"unimplemented");
}
}
}
}
}
}
}
}
}
}
}
}
void emitDecls(EmitContext* context, ContainerDecl containerDecl, DeclEmitMode mode)
{
for(auto decl : DEREF(containerDecl).getDecls())
{
{
emitDecl(context, decl, mode);
}
}
}
template<typename T > SyntaxListBuilder<T > ::SyntaxListBuilder()
{
DEREF(this).link = &DEREF(this).head;
}
template<typename T > SyntaxListBuilder<T > ::SyntaxListBuilder(SyntaxList<T>  other)
{
DEREF(this).head = DEREF(other).head;
DEREF(this).link = &DEREF(this).head;
adjust();
}
template<typename T > void SyntaxListBuilder<T > ::adjust()
{
while(*link)
{
{
link = cast<Ptr<T> >(&DEREF((*link)).next);
}
}
}
template<typename T > void SyntaxListBuilder<T > ::add(T element)
{
adjust();
*link = element;
DEREF(element).next = 0;
}
template<typename T > void SyntaxListBuilder<T > ::append(SyntaxListBuilder<T>  other)
{
adjust();
if(DEREF(other).head)
{
*link = DEREF(other).head;
link = DEREF(other).link;
}
}
void addDecl(DeclSortContext* context, Decl decl)
{
DEREF(decl).next = nullptr;
DEREF(DEREF(context).sortedDecls).add(decl);
}
void addDecl(DeclSortContext* context, Decl* declPtr)
{
auto decl = *declPtr;
*declPtr = cast<Decl>(DEREF(decl).next);
DEREF(decl).next = nullptr;
DEREF(DEREF(context).sortedDecls).add(decl);
}
void addDependencies(DeclSortContext* context, Name* name)
{
assert(name);
auto dd = DEREF(context).unsortedDecls;
Decl matchingDecls = nullptr;
auto matchingDeclLink = &matchingDecls;
auto unsortedDeclLink = &DEREF(context).unsortedDecls;
DEREF(context).unsortedDecls = nullptr;
while(dd)
{
{
auto next = cast<Decl>(DEREF(dd).next);
DEREF(dd).next = nullptr;
if(DEREF(dd).name == name)
{
*matchingDeclLink = dd;
matchingDeclLink = cast<Ptr<Decl> >(&DEREF(dd).next);
}
else
{
*unsortedDeclLink = dd;
unsortedDeclLink = cast<Ptr<Decl> >(&DEREF(dd).next);
}
dd = next;
}
}
*matchingDeclLink = nullptr;
*unsortedDeclLink = nullptr;
dd = matchingDecls;
while(dd)
{
{
auto next = cast<Decl>(DEREF(dd).next);
DEREF(dd).next = nullptr;
addDependencies(context, dd);
addDecl(context, dd);
dd = next;
}
}
}
void addDependencies(DeclSortContext* context, Exp exp)
{
if(!exp)
{
return;
}
if(auto genericAppExpr = as<GenericAppExp> (exp))
{
if(auto nameExpr = as<NameExp> (DEREF(genericAppExpr).base))
{
if(strcmp("Ptr", DEREF(getText(DEREF(nameExpr).name)).begin) == 0)
{
return;
}
if(strcmp("ConstPtr", DEREF(getText(DEREF(nameExpr).name)).begin) == 0)
{
return;
}
}
}
if(auto nameExp = as<NameExp> (exp))
{
addDependencies(context, DEREF(nameExp).name);
}
else
{
if(auto appExp = as<AppExpBase> (exp))
{
addDependencies(context, DEREF(appExp).base);
for(auto aa : DEREF(appExp).args)
{
addDependencies(context, DEREF(aa).exp);
}
}
}
}
void addDependencies(DeclSortContext* context, TypeExp typeExp)
{
addDependencies(context, DEREF(typeExp).exp);
}
void addDependencies(DeclSortContext* context, Decl decl)
{
if(auto varDecl = as<VarDeclBase> (decl))
{
addDependencies(context, DEREF(varDecl).type);
}
else
{
if(auto funcDecl = as<FuncDeclBase> (decl))
{
addDependencies(context, DEREF(funcDecl).resultType);
for(auto dd : DEREF(funcDecl).getDecls())
{
{
addDependencies(context, dd);
}
}
}
else
{
if(auto aggTypeDecl = as<AggTypeDecl> (decl))
{
addDependencies(context, DEREF(aggTypeDecl).base);
for(auto dd : DEREF(aggTypeDecl).getDecls())
{
{
addDependencies(context, dd);
}
}
}
}
}
}
void sortDecls(EmitContext* context, ContainerDecl container)
{
DeclSortContext sortContext;
DEREF(sortContext).unsortedDecls = DEREF(DEREF(container).getDecls()).head;
while(DEREF(sortContext).unsortedDecls)
{
{
auto decl = DEREF(sortContext).unsortedDecls;
DEREF(sortContext).unsortedDecls = cast<Decl>(DEREF(decl).next);
DEREF(decl).next = nullptr;
addDependencies(&sortContext, decl);
addDecl(&sortContext, &decl);
}
}
}
void emitModuleInner(Session session, TerminatedStringSpan moduleNameText, Ptr<Char>  outputPath, Ptr<Char>  extra)
{
auto moduleDecl = DEREF(session).moduleDecl;
auto stream = fopen(outputPath, "wb");
EmitContext context;
DEREF(context).session = session;
DEREF(context).stream = stream;
emit(&context, "#include \"runtime/runtime.h\"\n");
{
auto mm = DEREF(session).loadedModules;
for(;mm;mm = cast<ModuleDecl>(DEREF(mm).next))
{
{
if(mm == moduleDecl)
{
continue;
}
sortDecls(&context, mm);
emit(&context, "namespace ");
emit(&context, DEREF(mm).name);
emit(&context, " {\n");
emitDecls(&context, mm, kDeclEmitMode_MinimalForward);
emitDecls(&context, mm, kDeclEmitMode_Forward);
emit(&context, "}\n");
}
}}
sortDecls(&context, moduleDecl);
emit(&context, "namespace ");
emit(&context, moduleNameText);
emit(&context, " {\n");
emitDecls(&context, moduleDecl, kDeclEmitMode_MinimalForward);
emitDecls(&context, moduleDecl, kDeclEmitMode_Forward);
emitDecls(&context, moduleDecl, kDeclEmitMode_Full);
for(auto dd : DEREF(moduleDecl).getDecls())
{
{
auto classDecl = as<ClassDecl> (dd);
if(!classDecl)
{
continue;
}
emit(&context, "COG_DEFINE_CLASS(");
emitDeclName(&context, classDecl, kDeclEmitMode_Full);
emit(&context, ", ");
if(auto base = DEREF(DEREF(classDecl).base).exp)
{
emitExp(&context, base);
}
else
{
emit(&context, "cog::Object");
}
emit(&context, ")\n");
}
}
emit(&context, "}\n");
if(extra)
{
emit(&context, TerminatedStringSpan(extra));
}
fclose(stream);
}
void emitModule(Session session)
{
if(!DEREF(session).sourceFiles)
{
return;
}
if(!DEREF(session).moduleDecl)
{
return;
}
auto moduleDecl = DEREF(session).moduleDecl;
auto moduleName = DEREF(moduleDecl).name;
assert(moduleName);
auto modulePath = DEREF(session).modulePath2;
assert(modulePath);
auto moduleNameText = getText(moduleName);
auto modulePathText = getText(modulePath);
FixedSizeArray<1024, Char>  buffer;
sprintf(buffer, "%s.cog.cpp", DEREF(modulePathText).begin);
emitModuleInner(session, moduleNameText, buffer, nullptr);
}
void evalModule(Session session)
{
auto moduleDecl = DEREF(session).moduleDecl;
if(!moduleDecl)
{
return;
}
emitModuleInner(session, "cogc_eval", "cogc-eval.cog.cpp", "COG_EXPORT int _cogc_eval() { return cogc_eval::main(0, nullptr); }\n");
loadAndEval("cogc-eval.cog.cpp");
}
typedef UInt16 TokenFlags;
void initializeLexer(Lexer* lexer, Session session, SourceFile* file)
{
DEREF(lexer).session = session;
DEREF(lexer).file = file;
DEREF(lexer).cursor = DEREF(DEREF(file).text).begin;
DEREF(lexer).tokenFlags = kTokenFlag_AtStartOfLine | kTokenFlag_AfterSpace;
DEREF(lexer).rawStartPtr = cast<UIntPtr>(DEREF(DEREF(file).text).begin) - DEREF(DEREF(file).firstLoc).raw;
}
void finalizeLexer(Lexer* lexer)
{
}
DiagnosticSink* getSink(Lexer* lexer)
{
return &DEREF(DEREF(lexer).session).sink;
}
Int peekByte(Lexer* lexer)
{
return *DEREF(lexer).cursor;
}
Int peekCodePoint(Lexer* lexer)
{
return peekByte(lexer);
}
SourceLoc peekLoc(Lexer* lexer)
{
SourceLoc loc;
DEREF(loc).raw = cast<UIntPtr>(DEREF(lexer).cursor) - DEREF(lexer).rawStartPtr;
return loc;
}
void advanceByte(Lexer* lexer)
{
assert(DEREF(lexer).cursor != DEREF(DEREF(DEREF(lexer).file).text).end);
DEREF(lexer).cursor++;
}
Bool isAlpha(Int c)
{
return ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || (c == '_');
}
Bool isDigit(Int c)
{
return (c >= '0') && (c <= '9');
}
Bool isAlphaNum(Int c)
{
return isAlpha(c) || isDigit(c);
}
Bool isOperatorChar(Int c)
{
return strchr("~!%^&*-+=|<>?/", c) != 0;
}
Bool isWhiteSpace(Int c)
{
return strchr(" \t", c) != 0;
}
void lexDigits(Lexer* lexer, Int base)
{
{
for(;;)
{
{
auto c = peekByte(lexer);
switch(c)
{
case '0':
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
{
advanceByte(lexer);
}
{
continue;
}
case 'a':
case 'b':
case 'c':
case 'd':
case 'e':
case 'f':
case 'A':
case 'B':
case 'C':
case 'D':
case 'E':
case 'F':
{
if(base > 10)
{
advanceByte(lexer);
continue;
}
}
{
break;
}
default:
{
return;
}
}
}
}}
}
Bool peekNumberExponentMarker(Lexer* lexer, Int base)
{
switch(peekByte(lexer))
{
case 'e':
case 'E':
{
return base == 10;
}
case 'p':
case 'P':
{
return base == 16;
}
default:
{
return false;
}
}
}
TokenCode lexNumber(Lexer* lexer, Int base)
{
auto code = kTokenCode_IntegerLiteral;
lexDigits(lexer, base);
if(peekByte(lexer) == '.')
{
advanceByte(lexer);
code = kTokenCode_FloatingPointLiteral;
lexDigits(lexer, base);
}
if(peekNumberExponentMarker(lexer, base))
{
advanceByte(lexer);
code = kTokenCode_FloatingPointLiteral;
switch(peekByte(lexer))
{
case '+':
case '-':
{
advanceByte(lexer);
}
{
break;
}
default:
{
break;
}
}
lexDigits(lexer, base);
}
return code;
}
TokenCode lexIdentifier(Lexer* lexer)
{
{
for(;;)
{
{
auto c = peekByte(lexer);
if(!isAlphaNum(c))
{
break;
}
advanceByte(lexer);
}
}}
return kTokenCode_Identifier;
}
TokenCode lexOperator(Lexer* lexer)
{
{
for(;;)
{
{
auto c = peekByte(lexer);
if(!isOperatorChar(c))
{
break;
}
advanceByte(lexer);
}
}}
return kTokenCode_InfixOperator;
}
TokenCode lexLineComment(Lexer* lexer)
{
{
for(;;)
{
{
auto c = peekByte(lexer);
switch(c)
{
case '\r':
case '\n':
case 0:
{
return kTokenCode_LineComment;
}
default:
{
advanceByte(lexer);
}
{
break;
}
}
}
}}
}
TokenCode lexBlockComment(Lexer* lexer)
{
{
for(;;)
{
{
auto c = peekByte(lexer);
switch(c)
{
case 0:
{
return kTokenCode_BlockComment;
}
case '*':
{
advanceByte(lexer);
}
{
switch(peekByte(lexer))
{
case '/':
{
advanceByte(lexer);
}
{
return kTokenCode_BlockComment;
}
default:
{
break;
}
}
}
{
break;
}
default:
{
advanceByte(lexer);
}
{
break;
}
}
}
}}
}
TokenCode lexWhiteSpace(Lexer* lexer)
{
{
for(;;)
{
{
auto c = peekByte(lexer);
if(!isWhiteSpace(c))
{
return kTokenCode_WhiteSpace;
}
advanceByte(lexer);
}
}}
}
void lexStringLiteral(Lexer* lexer, Int delimeter)
{
{
for(;;)
{
{
auto c = peekByte(lexer);
if(c == delimeter)
{
advanceByte(lexer);
return;
}
switch(c)
{
case 0:
case '\r':
case '\n':
{
return;
}
case '\\':
{
{
advanceByte(lexer);
auto d = peekByte(lexer);
switch(d)
{
case 0:
case '\r':
case '\n':
{
return;
}
default:
{
advanceByte(lexer);
}
{
break;
}
}
}
}
{
break;
}
default:
{
advanceByte(lexer);
}
{
continue;
}
}
}
}}
}
TokenCode lexTokenImpl(Lexer* lexer)
{
auto c = peekByte(lexer);
switch(c)
{
case 0:
{
{
if(DEREF(lexer).cursor == DEREF(DEREF(DEREF(lexer).file).text).end)
{
return kTokenCode_EndOfFile;
}
}
}
{
break;
}
case '\r':
case '\n':
{
advanceByte(lexer);
}
{
{
auto d = peekByte(lexer);
if((c ^ d) == ('\r' ^ '\n'))
{
advanceByte(lexer);
}
return kTokenCode_EndOfLine;
}
}
{
break;
}
case ' ':
case '\t':
{
return lexWhiteSpace(lexer);
}
case '\"':
{
advanceByte(lexer);
}
{
lexStringLiteral(lexer, c);
}
{
return kTokenCode_StringLiteral;
}
case '\'':
{
advanceByte(lexer);
}
{
lexStringLiteral(lexer, c);
}
{
return kTokenCode_CharacterLiteral;
}
case '/':
{
advanceByte(lexer);
}
{
{
auto d = peekByte(lexer);
switch(d)
{
case '/':
{
return lexLineComment(lexer);
}
case '*':
{
return lexBlockComment(lexer);
}
default:
{
return lexOperator(lexer);
}
}
}
}
{
break;
}
case '-':
{
advanceByte(lexer);
}
{
{
auto d = peekByte(lexer);
switch(d)
{
case '>':
{
advanceByte(lexer);
}
{
return kTokenCode_Arrow;
}
default:
{
return lexOperator(lexer);
}
}
}
}
{
break;
}
case '=':
{
advanceByte(lexer);
}
{
{
auto d = peekByte(lexer);
if(isOperatorChar(d))
{
return lexOperator(lexer);
}
else
{
return kTokenCode_Assign;
}
}
}
{
break;
}
case '.':
{
advanceByte(lexer);
}
{
if(peekByte(lexer) == '.')
{
{
for(;;)
{
{
advanceByte(lexer);
if(peekByte(lexer) != '.')
{
break;
}
}
}}
return kTokenCode_InfixOperator;
}
else
{
return kTokenCode_Dot;
}
}
case '0':
{
advanceByte(lexer);
}
{
{
auto d = peekByte(lexer);
switch(d)
{
case 'x':
case 'X':
{
advanceByte(lexer);
}
{
return lexNumber(lexer, 16);
}
case 'b':
case 'B':
{
advanceByte(lexer);
}
{
return lexNumber(lexer, 2);
}
default:
{
return lexNumber(lexer, 10);
}
}
}
}
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
{
return lexNumber(lexer, 10);
}
case '@':
{
advanceByte(lexer);
}
{
return lexIdentifier(lexer);
}
case '{':
{
advanceByte(lexer);
}
{
return kTokenCode_LCurly;
}
case '}':
{
advanceByte(lexer);
}
{
return kTokenCode_RCurly;
}
case '[':
{
advanceByte(lexer);
}
{
return kTokenCode_LSquare;
}
case ']':
{
advanceByte(lexer);
}
{
return kTokenCode_RSquare;
}
case '(':
{
advanceByte(lexer);
}
{
return kTokenCode_LParen;
}
case ')':
{
advanceByte(lexer);
}
{
return kTokenCode_RParen;
}
case ';':
{
advanceByte(lexer);
}
{
return kTokenCode_Semi;
}
case ':':
{
advanceByte(lexer);
}
{
return kTokenCode_Colon;
}
case ',':
{
advanceByte(lexer);
}
{
return kTokenCode_Comma;
}
default:
{
break;
}
}
if(isAlpha(c))
{
return lexIdentifier(lexer);
}
else
{
if(isOperatorChar(c))
{
return lexOperator(lexer);
}
else
{
diagnose(getSink(lexer), peekLoc(lexer), kDiagnostic_unexpectedCharacter, peekCodePoint(lexer));
advanceByte(lexer);
return kTokenCode_Invalid;
}
}
}
SourceLoc Token::getLoc()
{
return SourceLoc(rawLoc);
}
Token lexToken(Lexer* lexer)
{
{
for(;;)
{
{
auto begin = DEREF(lexer).cursor;
auto flags = DEREF(lexer).tokenFlags;
auto code = lexTokenImpl(lexer);
auto end = DEREF(lexer).cursor;
auto rawData = cast<Ptr<Void> >(begin);
switch(code)
{
case kTokenCode_Identifier:
case kTokenCode_InfixOperator:
case kTokenCode_PrefixOperator:
case kTokenCode_PostfixOperator:
{
rawData = getName(DEREF(lexer).session, StringSpan(begin, end));
}
default:
{
DEREF(lexer).tokenFlags = 0;
}
{
break;
}
case kTokenCode_LineComment:
{
continue;
}
case kTokenCode_EndOfLine:
{
DEREF(lexer).tokenFlags |= kTokenFlag_AtStartOfLine;
}
case kTokenCode_WhiteSpace:
case kTokenCode_BlockComment:
{
DEREF(lexer).tokenFlags |= kTokenFlag_AfterSpace;
}
{
continue;
}
}
Token token;
DEREF(token).code = code;
DEREF(token).flags = flags;
DEREF(token).rawData = rawData;
DEREF(token).rawSize = end - begin;
DEREF(token).rawLoc = cast<UIntPtr>(begin) - DEREF(lexer).rawStartPtr;
DEREF(token).advance = 0;
return token;
}
}}
}
Token* matchDelimeter(Lexer* lexer, Token* open, Token* begin, ConstPtr<Token>  end, TokenCode closingTokenCode)
{
auto cursor = begin;
while(cursor != end)
{
{
auto code = DEREF(cursor).code;
if(code == closingTokenCode)
{
DEREF(open).advance = uint32_t((cursor - open) - 1);
return cursor;
}
switch(DEREF(cursor).code)
{
default:
{
cursor = cursor + 1;
}
{
break;
}
case kTokenCode_LParen:
{
cursor = matchDelimeter(lexer, cursor, cursor + 1, end, kTokenCode_RParen);
}
{
break;
}
case kTokenCode_LCurly:
{
cursor = matchDelimeter(lexer, cursor, cursor + 1, end, kTokenCode_RCurly);
}
{
break;
}
case kTokenCode_LSquare:
{
cursor = matchDelimeter(lexer, cursor, cursor + 1, end, kTokenCode_RSquare);
}
{
break;
}
}
}
}
return cursor;
}
void matchDelimeters(Lexer* lexer, Token* begin, ConstPtr<Token>  end)
{
matchDelimeter(lexer, 0, begin, end, kTokenCode_EndOfFile);
}
void markUpOperators(Lexer* lexer, Token* begin, ConstPtr<Token>  end)
{
auto afterSpace = true;
auto cursor = begin;
while(cursor != end)
{
{
auto code = DEREF(cursor).code;
auto nextCode = DEREF((cursor + 1)).code;
if(code == kTokenCode_InfixOperator)
{
if(DEREF(cursor).flags & kTokenFlag_AfterSpace)
{
afterSpace = true;
}
auto beforeSpace = (DEREF((cursor + 1)).flags & kTokenFlag_AfterSpace) != 0;
switch(nextCode)
{
default:
{
break;
}
case kTokenCode_RParen:
case kTokenCode_RSquare:
case kTokenCode_RCurly:
case kTokenCode_Semi:
case kTokenCode_Colon:
case kTokenCode_Comma:
{
beforeSpace = true;
}
}
if(beforeSpace == afterSpace)
{
}
else
{
if(beforeSpace)
{
DEREF(cursor).code = kTokenCode_PostfixOperator;
}
else
{
DEREF(cursor).code = kTokenCode_PrefixOperator;
}
}
}
switch(code)
{
default:
{
afterSpace = false;
}
{
break;
}
case kTokenCode_LParen:
case kTokenCode_LSquare:
case kTokenCode_LCurly:
case kTokenCode_Semi:
case kTokenCode_Colon:
case kTokenCode_Comma:
{
afterSpace = true;
}
{
break;
}
}
cursor++;
}
}
}
TokenSpan::TokenSpan()
{
DEREF(this).begin_ = nullptr;
DEREF(this).end_ = nullptr;
}
TokenSpan::TokenSpan(ConstPtr<Token>  begin, ConstPtr<Token>  end)
{
DEREF(this).begin_ = begin;
DEREF(this).end_ = end;
}
TokenSpan lexTokens(Session session, SourceFile* file)
{
Lexer lexer;
initializeLexer(&lexer, session, file);
SizeT tokenLimit = 16;
auto tokens = cast<Ptr<Token> >(malloc(tokenLimit * sizeOf<Token> ()));
SizeT tokenCount = 0;
{
for(;;)
{
{
auto token = lexToken(&lexer);
if(tokenCount == tokenLimit)
{
tokenLimit *= 2;
tokens = cast<Ptr<Token> >(realloc(tokens, tokenLimit * sizeOf<Token> ()));
}
tokens[tokenCount++] = token;
if(DEREF(token).code == kTokenCode_EndOfFile)
{
break;
}
}
}}
tokens = cast<Ptr<Token> >(realloc(tokens, tokenLimit * sizeOf<Token> ()));
auto endToken = tokens + tokenCount - 1;
auto tokenSpan = TokenSpan(tokens, endToken);
matchDelimeters(&lexer, tokens, endToken);
markUpOperators(&lexer, tokens, endToken);
finalizeLexer(&lexer);
return tokenSpan;
}
void parseCommandLine(Session session, Ptr<Int>  ioArgc, Ptr<Ptr<Char> >  argv)
{
auto argCursor = argv;
auto argEnd = argv + *ioArgc;
auto writeCursor = argv;
if(argCursor != argEnd)
{
argCursor++;
}
while(argCursor != argEnd)
{
{
Ptr<Char>  arg = *argCursor++;
if((arg[0] == '-') && (arg[1] != 0))
{
if(strcmp(arg, "--") == 0)
{
while(argCursor != argEnd)
{
{
*writeCursor++ = *argCursor++;
}
}
break;
}
else
{
if(strcmp(arg, "-m") == 0)
{
if(argCursor == argEnd)
{
fprintf(stderr, "command line: error: expected an argument after \'-m\' option\n");
}
else
{
auto valArg = *argCursor++;
setModulePath(session, TerminatedStringSpan(valArg));
}
}
else
{
if(strcmp(arg, "-o") == 0)
{
if(argCursor == argEnd)
{
fprintf(stderr, "command line: error: expected an argument after \'-o\' option\n");
}
else
{
auto valArg = *argCursor++;
}
}
else
{
if(strcmp(arg, "-eval") == 0)
{
setEvaluate(session);
}
else
{
fprintf(stderr, "command line: unknown option \'%s\'\n", arg);
}
}
}
}
}
else
{
*writeCursor++ = arg;
}
}
}
*ioArgc = writeCursor - argv;
if(!getModuleName(session))
{
if(*ioArgc == 1)
{
auto name = DEREF(TerminatedStringSpan(argv[0])).asStringSpan();
DEREF(name).trimFromEnd(DEREF(TerminatedStringSpan(".cog")).asStringSpan());
setModulePath(session, name);
}
else
{
fprintf(stderr, "module name must be specified when using more than one input file");
exit(1);
}
}
}
Int main(Int argc, Ptr<Ptr<Char> >  argv)
{
auto session = createSession();
parseCommandLine(session, &argc, argv);
Int ii = 0;
while(ii < argc)
{
{
loadSourceFile(session, TerminatedStringSpan(argv[ii]));
ii = ii + 1;
}
}
if(getErrorCount(session) > 0)
{
return 1;
}
if(getErrorCount(session) > 0)
{
return 1;
}
if(DEREF(session).eval)
{
evalModule(session);
}
else
{
emitModule(session);
}
return 0;
}
Ptr<Name>  getName(Session session, StringSpan text)
{
{
auto nn = DEREF(session).names;
for(;nn;nn = DEREF(nn).next)
{
{
if(DEREF(nn).text == text)
{
return nn;
}
}
}}
auto textSize = DEREF(text).end - DEREF(text).begin;
auto name = cast<Ptr<Name> >(malloc(sizeof(Name) + textSize + 1));
auto textBegin = cast<Ptr<Char> >(name + 1);
auto textEnd = textBegin + textSize;
memcpy(textBegin, DEREF(text).begin, textSize);
*textEnd = 0;
DEREF(name).text = TerminatedStringSpan(textBegin, textEnd);
DEREF(name).next = DEREF(session).names;
DEREF(session).names = name;
return name;
}
TerminatedStringSpan getText(Ptr<Name>  name)
{
return DEREF(name).text;
}
Ptr<Name>  getName(Session session, Ptr<Char>  text)
{
return getName(session, TerminatedStringSpan(text));
}
typedef UInt32 ParserFlags;
void debugState(Parser* parser)
{
}
ConstPtr<Token>  advanceToken(Parser* parser)
{
auto result = DEREF(parser).token;
DEREF(parser).token = DEREF(parser).cursor;
if(DEREF(parser).cursor != DEREF(parser).end)
{
DEREF(parser).cursor++;
}
debugState(parser);
return result;
}
ConstPtr<Token>  advanceFragment(Parser* parser)
{
auto result = DEREF(parser).token;
DEREF(parser).token = DEREF(parser).cursor;
DEREF(parser).cursor = DEREF(parser).cursor + DEREF(DEREF(parser).cursor).advance + 1;
if(DEREF(parser).cursor != DEREF(parser).end)
{
DEREF(parser).cursor++;
}
debugState(parser);
return result;
}
void initializeParser(Parser* parser, Session session, SourceFile* file)
{
auto tokens = lexTokens(session, file);
DEREF(parser).session = session;
DEREF(parser).scope = 0;
DEREF(parser).begin = DEREF(tokens).begin_;
DEREF(parser).cursor = DEREF(tokens).begin_;
DEREF(parser).end = DEREF(tokens).end_;
DEREF(parser).flags = 0;
advanceToken(parser);
}
void finalizeParser(Parser* parser)
{
}
void pushScope(Parser* parser, ContainerDecl container)
{
auto scope = alloc<Scope> ();
DEREF(scope).parent = DEREF(parser).scope;
DEREF(DEREF(scope).directLink).container = container;
DEREF(parser).scope = scope;
}
void restoreScope(Parser* parser, Scope* scope)
{
DEREF(parser).scope = scope;
}
void popScope(Parser* parser)
{
assert(DEREF(parser).scope);
restoreScope(parser, DEREF(DEREF(parser).scope).parent);
}
DiagnosticSink* getSink(Parser* parser)
{
return &DEREF(DEREF(parser).session).sink;
}
SourceLoc peekLoc(Parser* parser)
{
return SourceLoc(DEREF(DEREF(parser).token).rawLoc);
}
TokenCode peekTokenCode(Parser* parser)
{
return DEREF(DEREF(parser).token).code;
}
Bool peekTokenCode(Parser* parser, TokenCode code)
{
return DEREF(DEREF(parser).token).code == code;
}
Bool isAtEnd(Parser* parser)
{
return DEREF(parser).cursor == DEREF(parser).end;
}
Bool isRecovering(Parser* parser)
{
return (DEREF(parser).flags & kParserFlag_Recovering) != 0;
}
void unexpected(Parser* parser)
{
if(!isRecovering(parser))
{
diagnose(getSink(parser), peekLoc(parser), kDiagnostic_unexpectedToken, peekTokenCode(parser));
DEREF(parser).flags |= kParserFlag_Recovering;
}
}
void unexpected(Parser* parser, TokenCode expected)
{
if(!isRecovering(parser))
{
diagnose(getSink(parser), peekLoc(parser), kDiagnostic_unexpectedTokenExpectedToken, peekTokenCode(parser), expected);
DEREF(parser).flags |= kParserFlag_Recovering;
}
}
Bool tokenIsInSet(TokenCode needle, Int count, ConstPtr<TokenCode>  haystack)
{
{
auto ii = 0;
for(;ii < count;++ii)
{
{
if(needle == haystack[ii])
{
return true;
}
}
}}
return false;
}
Bool recoverIfTokenIsInSet(Parser* parser, TokenCode needle, Int count, ConstPtr<TokenCode>  haystack)
{
if(tokenIsInSet(needle, count, haystack))
{
DEREF(parser).flags &= ~kParserFlag_Recovering;
return true;
}
return false;
}
void tryRecover(Parser* parser, Int recoverBeforeCount, ConstPtr<TokenCode>  recoverBefore, Int recoverAfterCount, ConstPtr<TokenCode>  recoverAfter)
{
if(!isRecovering(parser))
{
return;
}
while(!isAtEnd(parser))
{
{
auto peek = peekTokenCode(parser);
if(recoverIfTokenIsInSet(parser, peek, recoverBeforeCount, recoverBefore))
{
return;
}
if(recoverIfTokenIsInSet(parser, peek, recoverAfterCount, recoverAfter))
{
advanceToken(parser);
return;
}
switch(peek)
{
case kTokenCode_EndOfFile:
case kTokenCode_RCurly:
case kTokenCode_RParen:
case kTokenCode_RSquare:
{
return;
}
default:
{
break;
}
}
advanceFragment(parser);
}
}
}
void tryRecover(Parser* parser)
{
if(!isRecovering(parser))
{
return;
}
FixedSizeArray<1, TokenCode>  recoverBefore;
recoverBefore[0] = kTokenCode_LCurly;
FixedSizeArray<2, TokenCode>  recoverAfter;
recoverAfter[0] = kTokenCode_Semi;
recoverAfter[1] = kTokenCode_RCurly;
tryRecover(parser, 1, recoverBefore, 2, recoverAfter);
}
void tryRecoverBefore(Parser* parser, TokenCode code)
{
if(!isRecovering(parser))
{
return;
}
FixedSizeArray<1, TokenCode>  recoverBefore;
recoverBefore[0] = code;
tryRecover(parser, 1, recoverBefore, 0, nullptr);
}
ConstPtr<Token>  advanceIf(Parser* parser, TokenCode expected)
{
if(peekTokenCode(parser) == expected)
{
return advanceToken(parser);
}
return 0;
}
ConstPtr<Token>  advanceIf(Parser* parser, StringSpan expected)
{
switch(peekTokenCode(parser))
{
case kTokenCode_Identifier:
{
if(getText((Name*)(DEREF(DEREF(parser).token).rawData)) == expected)
{
return advanceToken(parser);
}
}
default:
{
break;
}
}
return 0;
}
ConstPtr<Token>  advanceIfFragment(Parser* parser, TokenCode expected)
{
if(peekTokenCode(parser) == expected)
{
return advanceFragment(parser);
}
return 0;
}
ConstPtr<Token>  expect(Parser* parser, TokenCode expected)
{
if(auto token = advanceIf(parser, expected))
{
return token;
}
unexpected(parser, expected);
return 0;
}
ConstPtr<Token>  expectFragment(Parser* parser, TokenCode expected)
{
if(auto token = advanceIfFragment(parser, expected))
{
return token;
}
unexpected(parser, expected);
return 0;
}
Name* expectIdentifier(Parser* parser)
{
if(auto token = advanceIf(parser, kTokenCode_Identifier))
{
auto name = cast<Ptr<Name> >(DEREF(token).rawData);
return name;
}
else
{
unexpected(parser, kTokenCode_Identifier);
return 0;
}
}
ConstPtr<Token>  advanceIfEnd(Parser* parser, TokenCode expected)
{
if(isAtEnd(parser))
{
return expect(parser, expected);
}
return advanceIf(parser, expected);
}
LookupResultItem::LookupResultItem()
{
DEREF(this).decl = nullptr;
}
LookupResultItem::LookupResultItem(Decl decl)
{
DEREF(this).decl = decl;
}
Ptr<LookupResultItem>  LookupResult::begin()
{
return DEREF(items).begin();
}
Ptr<LookupResultItem>  LookupResult::end()
{
return DEREF(items).end();
}
Bool LookupResult::isEmpty()
{
return DEREF(items).getCount() == 0;
}
Bool LookupResult::isUnique()
{
return DEREF(items).getCount() == 1;
}
Bool LookupResult::isOverloaded()
{
return DEREF(items).getCount() > 1;
}
Decl LookupResult::getDecl()
{
assert(isUnique());
return DEREF(items[0]).decl;
}
LookupResult lookup(Parser* parser, Name* name)
{
return lookup(DEREF(parser).scope, name);
}
SyntaxDecl getSyntaxDecl(ConstRef<LookupResult>  result)
{
for(auto item : UNCONST(result))
{
{
if(auto syntaxDecl = as<SyntaxDecl> (DEREF(item).decl))
{
return syntaxDecl;
}
}
}
return nullptr;
}
NameExp createNameExp(Parser* parser, ConstPtr<Token>  token)
{
auto name = cast<Ptr<Name> >(DEREF(token).rawData);
auto exp = createObject<NameExp> ();
DEREF(exp).loc = DEREF(token).getLoc();
DEREF(exp).name = name;
DEREF(exp).scope = DEREF(parser).scope;
return exp;
}
Exp createErrorExp(Parser* parser)
{
auto exp = createObject<ErrorExp> ();
DEREF(exp).loc = peekLoc(parser);
return exp;
}
Arg parseArg(Parser* parser)
{
auto argExp = parseExp(parser);
return createPositionalArg(parser, argExp);
}
SyntaxList<Arg>  parseArgs(Parser* parser)
{
SyntaxListBuilder<Arg>  args;
switch(peekTokenCode(parser))
{
case kTokenCode_RParen:
case kTokenCode_RCurly:
case kTokenCode_RSquare:
case kTokenCode_EndOfFile:
{
return args;
}
default:
{
break;
}
}
{
for(;;)
{
{
auto arg = parseArg(parser);
if(arg)
{
DEREF(args).add(arg);
}
switch(peekTokenCode(parser))
{
case kTokenCode_RParen:
case kTokenCode_RCurly:
case kTokenCode_RSquare:
case kTokenCode_EndOfFile:
{
return args;
}
default:
{
break;
}
}
expect(parser, kTokenCode_Comma);
tryRecoverBefore(parser, kTokenCode_RParen);
}
}}
}
Arg parseGenericArg(Parser* parser)
{
auto flags = DEREF(parser).flags;
DEREF(parser).flags |= kParserFlag_InsideGenericClause;
auto arg = parseArg(parser);
DEREF(parser).flags = flags;
return arg;
}
SyntaxList<Arg>  parseGenericArgs(Parser* parser)
{
SyntaxListBuilder<Arg>  args;
if(peekGenericClose(parser))
{
return args;
}
{
for(;;)
{
{
auto arg = parseGenericArg(parser);
if(arg)
{
DEREF(args).add(arg);
}
if(peekGenericClose(parser))
{
return args;
}
expect(parser, kTokenCode_Comma);
}
}}
}
Bool peekGenericApp(Parser* inParser)
{
auto parserImpl = *inParser;
auto parser = &parserImpl;
if(!tryParseGenericOpen(parser))
{
return false;
}
{
for(;;)
{
{
if(peekGenericClose(parser))
{
break;
}
switch(peekTokenCode(parser))
{
case kTokenCode_EndOfFile:
case kTokenCode_RParen:
case kTokenCode_RSquare:
case kTokenCode_RCurly:
case kTokenCode_Semi:
{
return false;
}
default:
{
advanceFragment(parser);
}
{
break;
}
}
}
}}
expectGenericClose(parser);
return true;
}
Exp maybeParseGenericApp(Parser* parser, Exp base)
{
if(!peekGenericApp(parser))
{
return base;
}
tryParseGenericOpen(parser);
auto args = parseGenericArgs(parser);
expectGenericClose(parser);
auto exp = createObject<GenericAppExp> ();
DEREF(exp).base = base;
DEREF(exp).args = args;
return exp;
}
typedef Int64 IntLitVal;
IntLitVal getIntegerLiteralVal(ConstRef<Token>  token)
{
auto textBegin = cast<ConstPtr<Char> >(DEREF(token).rawData);
auto textEnd = textBegin + DEREF(token).rawSize;
IntLitVal val = 0;
auto base = 10;
auto tt = textBegin;
if(tt != textEnd && *tt == '0')
{
++tt;
if(tt == textEnd)
{
return 0;
}
switch(*tt)
{
case 'x':
case 'X':
{
base = 16;
}
{
tt++;
}
{
break;
}
case 'b':
case 'B':
{
base = 2;
}
{
tt++;
}
{
break;
}
default:
{
break;
}
}
}
while(tt != textEnd)
{
{
auto c = *tt++;
if((c >= '0') && (c <= '9'))
{
val = val * base + (c - '0');
}
}
}
return val;
}
String getStringLiteralVal(ConstRef<Token>  token)
{
auto textBegin = cast<ConstPtr<Char> >(DEREF(token).rawData);
auto textEnd = textBegin + DEREF(token).rawSize;
auto cursor = textBegin;
String val;
auto delimeter = *cursor++;
{
for(;;)
{
{
auto c = *cursor++;
if(c == delimeter)
{
break;
}
switch(c)
{
case '\\':
{
{
auto d = *cursor++;
switch(d)
{
case 'r':
{
DEREF(val).append('\r');
}
{
break;
}
case 'n':
{
DEREF(val).append('\n');
}
{
break;
}
case 't':
{
DEREF(val).append('\t');
}
{
break;
}
case '\\':
{
DEREF(val).append('\\');
}
{
break;
}
case '\"':
{
DEREF(val).append('\"');
}
{
break;
}
case '\'':
{
DEREF(val).append('\'');
}
{
break;
}
default:
{
assert(!"unimplemented");
}
{
break;
}
}
}
}
{
break;
}
default:
{
DEREF(val).append(c);
}
{
break;
}
}
}
}}
return val;
}
Exp parseAtomicExp(Parser* parser)
{
switch(peekTokenCode(parser))
{
case kTokenCode_Identifier:
{
{
auto loc = peekLoc(parser);
auto name = cast<Ptr<Name> >(DEREF(DEREF(parser).token).rawData);
auto result = lookup(parser, name);
if(auto syntax = getSyntaxDecl(result))
{
if(isSubClass(DEREF(syntax).syntaxClass, getClass<Exp> ()))
{
advanceToken(parser);
auto result = DEREF(syntax).callback(parser);
auto resultExp = as<Exp> (result);
DEREF(resultExp).loc = loc;
return resultExp;
}
}
auto nameToken = advanceToken(parser);
auto exp = createNameExp(parser, nameToken);
return maybeParseGenericApp(parser, exp);
}
}
{
break;
}
case kTokenCode_IntegerLiteral:
{
{
auto token = advanceToken(parser);
auto exp = createObject<IntLitExp> ();
DEREF(exp).loc = DEREF(token).getLoc();
DEREF(exp).val = getIntegerLiteralVal(*token);
return exp;
}
}
case kTokenCode_StringLiteral:
{
{
auto token = advanceToken(parser);
auto exp = createObject<StringLitExp> ();
DEREF(exp).loc = DEREF(token).getLoc();
DEREF(exp).val = getStringLiteralVal(*token);
return exp;
}
}
case kTokenCode_CharacterLiteral:
{
{
auto token = advanceToken(parser);
auto exp = createObject<CharacterLitExp> ();
DEREF(exp).loc = DEREF(token).getLoc();
DEREF(exp).val = getStringLiteralVal(*token);
return exp;
}
}
case kTokenCode_LParen:
{
{
auto open = advanceToken(parser);
auto inner = parseExp(parser);
expect(parser, kTokenCode_RParen);
auto exp = createObject<ParenExp> ();
DEREF(exp).loc = DEREF(open).getLoc();
DEREF(exp).base = inner;
return exp;
}
}
default:
{
unexpected(parser);
}
{
return createErrorExp(parser);
}
}
}
Arg createPositionalArg(Parser* parser, Exp exp)
{
auto arg = createObject<PositionalArg> ();
DEREF(arg).loc = DEREF(exp).loc;
DEREF(arg).exp = exp;
return arg;
}
AppExpBase createApp(Parser* parser, AppExpBase exp, ConstPtr<Token>  op, Exp argExp)
{
DEREF(exp).loc = DEREF(op).getLoc();
DEREF(exp).base = createNameExp(parser, op);
SyntaxListBuilder<Arg>  args;
DEREF(args).add(createPositionalArg(parser, argExp));
DEREF(exp).args = args;
return exp;
}
AppExpBase createApp(Parser* parser, AppExpBase exp, ConstPtr<Token>  op, Exp argExp0, Exp argExp1)
{
DEREF(exp).loc = DEREF(op).getLoc();
DEREF(exp).base = createNameExp(parser, op);
SyntaxListBuilder<Arg>  args;
DEREF(args).add(createPositionalArg(parser, argExp0));
DEREF(args).add(createPositionalArg(parser, argExp1));
DEREF(exp).args = args;
return exp;
}
Bool isInGenericClause(Parser* parser)
{
return (DEREF(parser).flags & kParserFlag_InsideGenericClause) != 0;
}
Exp parsePostfixExp(Parser* parser)
{
auto exp = parseAtomicExp(parser);
{
for(;;)
{
{
switch(peekTokenCode(parser))
{
case kTokenCode_PostfixOperator:
{
{
if(isInGenericClause(parser) && peekGenericClose(parser))
{
return exp;
}
auto op = advanceToken(parser);
exp = createApp(parser, createObject<PostfixExp> (), op, exp);
}
}
{
break;
}
case kTokenCode_LParen:
{
{
auto lParen = advanceToken(parser);
auto args = parseArgs(parser);
expect(parser, kTokenCode_RParen);
auto app = createObject<AppExp> ();
DEREF(app).loc = DEREF(lParen).getLoc();
DEREF(app).base = exp;
DEREF(app).args = args;
exp = app;
}
}
{
break;
}
case kTokenCode_LSquare:
{
{
auto lParen = advanceToken(parser);
auto args = parseArgs(parser);
expect(parser, kTokenCode_RSquare);
auto app = createObject<IndexExp> ();
DEREF(app).loc = DEREF(lParen).getLoc();
DEREF(app).base = exp;
DEREF(app).args = args;
exp = app;
}
}
{
break;
}
case kTokenCode_Arrow:
{
diagnose(getSink(parser), peekLoc(parser), kDiagnostic_youMeanDot);
}
case kTokenCode_Dot:
{
{
auto dot = advanceToken(parser);
auto memberName = expectIdentifier(parser);
auto memberExp = createObject<MemberExp> ();
DEREF(memberExp).loc = DEREF(dot).getLoc();
DEREF(memberExp).base = exp;
DEREF(memberExp).memberName = memberName;
exp = maybeParseGenericApp(parser, memberExp);
}
}
{
break;
}
default:
{
return exp;
}
}
}
}}
}
Exp parsePrefixExp(Parser* parser)
{
if(peekTokenCode(parser) == kTokenCode_PrefixOperator)
{
auto op = advanceToken(parser);
auto arg = parsePrefixExp(parser);
return createApp(parser, createObject<PrefixExp> (), op, arg);
}
else
{
return parsePostfixExp(parser);
}
}
Exp parseInfixExp(Parser* parser)
{
auto left = parsePrefixExp(parser);
{
for(;;)
{
{
switch(peekTokenCode(parser))
{
case kTokenCode_InfixOperator:
{
{
if(isInGenericClause(parser) && peekGenericClose(parser))
{
return left;
}
auto op = advanceToken(parser);
auto right = parseInfixExp(parser);
left = createApp(parser, createObject<InfixExp> (), op, left, right);
}
}
{
break;
}
case kTokenCode_Assign:
{
{
auto op = advanceToken(parser);
auto assign = createObject<AssignExp> ();
DEREF(assign).left = left;
DEREF(assign).right = parseInfixExp(parser);
left = assign;
}
}
{
break;
}
default:
{
return left;
}
}
}
}}
return left;
}
Exp parseExp(Parser* parser)
{
return parseInfixExp(parser);
}
TypeExp parseType(Parser* parser)
{
auto exp = parsePostfixExp(parser);
TypeExp typeExp;
DEREF(typeExp).exp = exp;
return typeExp;
}
Decl parseDecl(Parser* parser)
{
SyntaxListBuilder<Attr>  attrs;
{
for(;;)
{
{
switch(peekTokenCode(parser))
{
case kTokenCode_Identifier:
{
{
auto loc = peekLoc(parser);
auto name = expectIdentifier(parser);
auto result = lookup(parser, name);
if(auto syntax = getSyntaxDecl(result))
{
auto syntaxClass = DEREF(syntax).syntaxClass;
if(isSubClass(syntaxClass, getClass<Decl> ()))
{
auto result = DEREF(syntax).callback(parser);
auto resultDecl = as<Decl> (result);
if(auto genericDecl = as<GenericDecl> (resultDecl))
{
DEREF(DEREF(genericDecl).inner).attrs = attrs;
}
else
{
DEREF(resultDecl).attrs = attrs;
}
DEREF(resultDecl).loc = loc;
return resultDecl;
}
else
{
if(isSubClass(syntaxClass, getClass<Attr> ()))
{
auto result = DEREF(syntax).callback(parser);
auto resultAttr = as<Attr> (result);
DEREF(attrs).add(resultAttr);
continue;
}
}
}
else
{
diagnose(getSink(parser), peekLoc(parser), kDiagnostic_unexpectedDeclName, name);
assert(false);
return 0;
}
}
}
{
break;
}
default:
{
unexpected(parser);
}
{
return 0;
}
}
}
}}
}
ModuleDecl findOrImportModule(Session session, SourceLoc loc, Name* name)
{
{
auto mm = DEREF(session).loadedModules;
for(;mm;mm = cast<ModuleDecl>(DEREF(mm).next))
{
{
if(DEREF(mm).name == name)
{
return mm;
}
}
}}
auto nameText = getText(name);
FixedSizeArray<1024, Char>  path;
sprintf(path, "source/%.*s/%.*s.cog", (int)(DEREF(nameText).end - DEREF(nameText).begin), DEREF(nameText).begin, (int)(DEREF(nameText).end - DEREF(nameText).begin), DEREF(nameText).begin);
SourceFile* file = getSourceFile(session, TerminatedStringSpan(path));
if(!file)
{
sprintf(path, "../../source/%.*s/%.*s.cog", (int)(DEREF(nameText).end - DEREF(nameText).begin), DEREF(nameText).begin, (int)(DEREF(nameText).end - DEREF(nameText).begin), DEREF(nameText).begin);
file = getSourceFile(session, TerminatedStringSpan(path));
}
if(!file)
{
sprintf(path, "../../source/thetalib/%.*s.cog", (int)(DEREF(nameText).end - DEREF(nameText).begin), DEREF(nameText).begin);
file = getSourceFile(session, TerminatedStringSpan(path));
}
if(!file)
{
sprintf(path, "source/thetalib/%.*s.cog", (int)(DEREF(nameText).end - DEREF(nameText).begin), DEREF(nameText).begin);
file = getSourceFile(session, TerminatedStringSpan(path));
}
if(!file)
{
assert(!"unimplemented");
}
auto moduleDecl = createObject<ModuleDecl> ();
DEREF(moduleDecl).name = name;
parseFileIntoModule(session, file, moduleDecl);
DEREF(moduleDecl).next = DEREF(session).loadedModules;
DEREF(session).loadedModules = moduleDecl;
checkModule(session, moduleDecl);
return moduleDecl;
}
SyntaxList<Decl>  parseDeclsInBody(Parser* parser)
{
auto savedScope = DEREF(parser).scope;
SyntaxListBuilder<Decl>  decls;
while(!isAtEnd(parser))
{
{
switch(peekTokenCode(parser))
{
case kTokenCode_RParen:
case kTokenCode_RCurly:
case kTokenCode_EndOfFile:
{
return decls;
}
default:
{
break;
}
}
auto decl = parseDecl(parser);
if(decl)
{
DEREF(decl).parent = DEREF(DEREF(DEREF(parser).scope).directLink).container;
DEREF(decls).add(decl);
}
restoreScope(parser, savedScope);
tryRecover(parser);
}
}
return decls;
}
SyntaxList<Decl>  parseDeclBody(Parser* parser)
{
expect(parser, kTokenCode_LCurly);
auto decls = parseDeclsInBody(parser);
expect(parser, kTokenCode_RCurly);
return decls;
}
void parseDeclBody(Parser* parser, ContainerDecl decl)
{
pushScope(parser, decl);
DEREF(decl).getDecls() = parseDeclBody(parser);
for(auto dd : DEREF(decl).getDecls())
{
{
DEREF(dd).parent = decl;
}
}
popScope(parser);
}
Stmt parseExpStmt(Parser* parser)
{
auto exp = parseExp(parser);
expect(parser, kTokenCode_Semi);
return exp;
}
Stmt parseStmt(Parser* parser)
{
switch(peekTokenCode(parser))
{
case kTokenCode_Identifier:
{
{
auto loc = peekLoc(parser);
auto name = cast<Ptr<Name> >(DEREF(DEREF(parser).token).rawData);
auto result = lookup(parser, name);
if(auto syntax = getSyntaxDecl(result))
{
if(isSubClass(DEREF(syntax).syntaxClass, getClass<Exp> ()))
{
}
else
{
if(isSubClass(DEREF(syntax).syntaxClass, getClass<Stmt> ()))
{
advanceToken(parser);
auto result = DEREF(syntax).callback(parser);
auto resultStmt = as<Stmt> (result);
DEREF(resultStmt).loc = loc;
return resultStmt;
}
}
}
return parseExpStmt(parser);
}
}
{
break;
}
case kTokenCode_LCurly:
{
return parseStmtBody(parser);
}
case kTokenCode_PrefixOperator:
{
return parseExpStmt(parser);
}
default:
{
unexpected(parser);
}
{
return 0;
}
}
}
SyntaxListBuilder<Stmt>  parseStmtsInBody(Parser* parser)
{
SyntaxListBuilder<Stmt>  stmts;
while(!isAtEnd(parser))
{
{
switch(peekTokenCode(parser))
{
case kTokenCode_RParen:
case kTokenCode_RCurly:
case kTokenCode_EndOfFile:
{
return stmts;
}
default:
{
break;
}
}
auto stmt = parseStmt(parser);
if(stmt)
{
DEREF(stmts).add(stmt);
}
tryRecover(parser);
}
}
return stmts;
}
Stmt parseStmtBody(Parser* parser)
{
auto stmt = createObject<BlockStmt> ();
pushScope(parser, stmt);
expect(parser, kTokenCode_LCurly);
auto stmts = parseStmtsInBody(parser);
expect(parser, kTokenCode_RCurly);
popScope(parser);
DEREF(stmt).stmts = stmts;
return stmt;
}
Bool peekGenericClose(Parser* parser)
{
switch(peekTokenCode(parser))
{
default:
{
return false;
}
case kTokenCode_InfixOperator:
case kTokenCode_PrefixOperator:
case kTokenCode_PostfixOperator:
{
break;
}
}
auto name = cast<Ptr<Name> >(DEREF(DEREF(parser).token).rawData);
auto nameText = getText(name);
if(nameText != TerminatedStringSpan(">"))
{
return false;
}
return true;
}
Bool tryParseGenericClose(Parser* parser)
{
if(!peekGenericClose(parser))
{
return false;
}
advanceToken(parser);
return true;
}
void expectGenericClose(Parser* parser)
{
if(!tryParseGenericClose(parser))
{
unexpected(parser);
}
}
Decl parseGenericParam(Parser* parser)
{
auto loc = peekLoc(parser);
auto name = expectIdentifier(parser);
auto decl = createObject<GenericParamDecl> ();
DEREF(decl).loc = loc;
DEREF(decl).name = name;
return decl;
}
void parseGenericParams(Parser* parser, Ptr<SyntaxListBuilder<Decl> >  ioDecls)
{
ConstRef<SyntaxListBuilder<Decl> >  decls = *ioDecls;
if(peekGenericClose(parser))
{
return;
}
{
for(;;)
{
{
auto decl = parseGenericParam(parser);
if(decl)
{
DEREF(decls).add(decl);
}
if(peekGenericClose(parser))
{
return;
}
expect(parser, kTokenCode_Comma);
}
}}
}
Bool tryParseGenericOpen(Parser* parser)
{
switch(peekTokenCode(parser))
{
default:
{
return false;
}
case kTokenCode_InfixOperator:
case kTokenCode_PrefixOperator:
case kTokenCode_PostfixOperator:
{
break;
}
}
auto name = cast<Ptr<Name> >(DEREF(DEREF(parser).token).rawData);
auto nameText = getText(name);
if(nameText != TerminatedStringSpan("<"))
{
return false;
}
advanceToken(parser);
return true;
}
Decl maybeParseGenericParams(Parser* parser, Decl decl)
{
if(!tryParseGenericOpen(parser))
{
return decl;
}
auto genericDecl = createObject<GenericDecl> ();
SyntaxListBuilder<Decl>  decls;
parseGenericParams(parser, &decls);
DEREF(genericDecl).name = DEREF(decl).name;
DEREF(genericDecl).getDecls() = decls;
DEREF(genericDecl).inner = decl;
DEREF(decl).parent = genericDecl;
pushScope(parser, genericDecl);
expectGenericClose(parser);
return genericDecl;
}
Decl parseAggTypeDeclCommon(Parser* parser, AggTypeDecl decl)
{
DEREF(decl).name = expectIdentifier(parser);
auto result = maybeParseGenericParams(parser, decl);
if(result != decl)
{
}
if(advanceIf(parser, kTokenCode_Colon))
{
DEREF(decl).base = parseType(parser);
}
parseDeclBody(parser, decl);
if(result != decl)
{
}
return result;
}
Syntax parseClassDecl(Parser* parser)
{
auto decl = createObject<ClassDecl> ();
return parseAggTypeDeclCommon(parser, decl);
}
Syntax parseStructDecl(Parser* parser)
{
auto decl = createObject<StructDecl> ();
return parseAggTypeDeclCommon(parser, decl);
}
SyntaxList<Decl>  parseEnumTags(Parser* parser)
{
SyntaxListBuilder<Decl>  decls;
{
for(;;)
{
{
switch(peekTokenCode(parser))
{
case kTokenCode_RCurly:
case kTokenCode_RParen:
case kTokenCode_EndOfFile:
{
return decls;
}
default:
{
break;
}
}
auto tag = createObject<EnumTagDecl> ();
DEREF(tag).name = expectIdentifier(parser);
if(advanceIf(parser, kTokenCode_Assign))
{
DEREF(tag).init = parseExp(parser);
}
DEREF(decls).add(tag);
switch(peekTokenCode(parser))
{
case kTokenCode_RCurly:
case kTokenCode_RParen:
case kTokenCode_EndOfFile:
{
return decls;
}
default:
{
break;
}
}
expect(parser, kTokenCode_Comma);
}
}}
}
Syntax parseEnumDecl(Parser* parser)
{
auto decl = createObject<EnumDecl> ();
DEREF(decl).name = expectIdentifier(parser);
auto result = maybeParseGenericParams(parser, decl);
if(advanceIf(parser, kTokenCode_Colon))
{
DEREF(decl).base = parseType(parser);
}
expect(parser, kTokenCode_LCurly);
auto decls = parseEnumTags(parser);
expect(parser, kTokenCode_RCurly);
DEREF(decl).stmts = DEREF(decls).head;
return result;
}
Syntax parseImportDecl(Parser* parser)
{
auto decl = createObject<ImportDecl> ();
DEREF(decl).scope = DEREF(parser).scope;
DEREF(decl).name = expectIdentifier(parser);
expect(parser, kTokenCode_Semi);
return decl;
}
void parseVarDeclCommon(Parser* parser, VarDeclBase decl)
{
DEREF(decl).name = expectIdentifier(parser);
if(advanceIf(parser, kTokenCode_Colon))
{
DEREF(decl).type = parseType(parser);
}
if(advanceIf(parser, kTokenCode_Assign))
{
DEREF(decl).init = parseExp(parser);
}
}
Syntax parseVarDecl(Parser* parser)
{
auto decl = createObject<VarDecl> ();
parseVarDeclCommon(parser, decl);
expect(parser, kTokenCode_Semi);
return decl;
}
Syntax parseLetDecl(Parser* parser)
{
auto decl = createObject<LetDecl> ();
parseVarDeclCommon(parser, decl);
expect(parser, kTokenCode_Semi);
return decl;
}
void parseTypeVarDeclSuffixCommon(Parser* parser, TypeVarDecl decl)
{
if(advanceIf(parser, kTokenCode_Colon))
{
DEREF(decl).bound = parseType(parser);
}
if(advanceIf(parser, kTokenCode_Assign))
{
DEREF(decl).init = parseType(parser);
}
}
void parseTypeVarDeclCommon(Parser* parser, TypeVarDecl decl)
{
DEREF(decl).name = expectIdentifier(parser);
parseTypeVarDeclSuffixCommon(parser, decl);
}
Name* expectOperatorOrIdentifier(Parser* parser)
{
switch(peekTokenCode(parser))
{
default:
{
return expectIdentifier(parser);
}
case kTokenCode_Identifier:
case kTokenCode_InfixOperator:
case kTokenCode_PrefixOperator:
case kTokenCode_PostfixOperator:
{
return cast<Ptr<Name> >(DEREF(advanceToken(parser)).rawData);
}
}
}
Syntax parseTypeAliasDecl(Parser* parser)
{
auto decl = createObject<TypeAliasDecl> ();
DEREF(decl).name = expectOperatorOrIdentifier(parser);
auto result = maybeParseGenericParams(parser, decl);
parseTypeVarDeclSuffixCommon(parser, decl);
expect(parser, kTokenCode_Semi);
return result;
}
Syntax parseIfStmt(Parser* parser)
{
expect(parser, kTokenCode_LParen);
if(advanceIf(parser, TerminatedStringSpan("let")))
{
auto stmt = createObject<IfLetStmt> ();
DEREF(stmt).name = expectIdentifier(parser);
expect(parser, kTokenCode_Assign);
DEREF(stmt).init = parseExp(parser);
expect(parser, kTokenCode_RParen);
DEREF(stmt).thenStmt = parseStmt(parser);
if(advanceIf(parser, TerminatedStringSpan("else")))
{
DEREF(stmt).elseStmt = parseStmt(parser);
}
return stmt;
}
else
{
auto stmt = createObject<IfStmt> ();
DEREF(stmt).condition = parseExp(parser);
expect(parser, kTokenCode_RParen);
DEREF(stmt).thenStmt = parseStmt(parser);
if(advanceIf(parser, TerminatedStringSpan("else")))
{
DEREF(stmt).elseStmt = parseStmt(parser);
}
return stmt;
}
}
Syntax parseWhileStmt(Parser* parser)
{
auto stmt = createObject<WhileStmt> ();
expect(parser, kTokenCode_LParen);
DEREF(stmt).condition = parseExp(parser);
expect(parser, kTokenCode_RParen);
DEREF(stmt).body = parseStmt(parser);
return stmt;
}
Syntax parseForStmt(Parser* parser)
{
auto stmt = createObject<ForStmt> ();
expect(parser, kTokenCode_LParen);
switch(peekTokenCode(parser))
{
case kTokenCode_Semi:
{
advanceToken(parser);
}
{
break;
}
default:
{
DEREF(stmt).init = parseStmt(parser);
}
{
break;
}
}
switch(peekTokenCode(parser))
{
case kTokenCode_Semi:
{
advanceToken(parser);
}
{
break;
}
default:
{
DEREF(stmt).condition = parseExp(parser);
}
{
expect(parser, kTokenCode_Semi);
}
{
break;
}
}
switch(peekTokenCode(parser))
{
case kTokenCode_RParen:
{
break;
}
default:
{
DEREF(stmt).iter = parseExp(parser);
}
{
break;
}
}
expect(parser, kTokenCode_RParen);
DEREF(stmt).body = parseStmt(parser);
return stmt;
}
Syntax parseForEachStmt(Parser* parser)
{
auto stmt = createObject<ForEachStmt> ();
expect(parser, kTokenCode_LParen);
DEREF(stmt).name = expectIdentifier(parser);
if(!advanceIf(parser, TerminatedStringSpan("in")))
{
expect(parser, kTokenCode_Colon);
}
DEREF(stmt).exp = parseExp(parser);
expect(parser, kTokenCode_RParen);
DEREF(stmt).body = parseStmt(parser);
return stmt;
}
Syntax parseSwitchStmt(Parser* parser)
{
auto stmt = createObject<SwitchStmt> ();
expect(parser, kTokenCode_LParen);
DEREF(stmt).condition = parseExp(parser);
expect(parser, kTokenCode_RParen);
expect(parser, kTokenCode_LCurly);
auto caseLink = &DEREF(stmt).cases;
{
for(;;)
{
{
switch(peekTokenCode(parser))
{
case kTokenCode_RCurly:
case kTokenCode_RParen:
case kTokenCode_EndOfFile:
{
expect(parser, kTokenCode_RCurly);
}
{
return stmt;
}
default:
{
break;
}
}
auto caseStart = peekLoc(parser);
auto c = createObject<SwitchCase> ();
DEREF(c).loc = caseStart;
auto valueLink = &DEREF(c).values;
{
for(;;)
{
{
Arg arg = nullptr;
if(advanceIf(parser, TerminatedStringSpan("case")))
{
arg = createObject<Arg> ();
DEREF(arg).exp = parseExp(parser);
expect(parser, kTokenCode_Colon);
}
else
{
if(advanceIf(parser, TerminatedStringSpan("default")))
{
arg = createObject<Arg> ();
DEREF(arg).exp = nullptr;
expect(parser, kTokenCode_Colon);
}
else
{
break;
}
}
*valueLink = arg;
valueLink = &DEREF(arg).next;
}
}}
if(!*valueLink)
{
}
DEREF(c).body = parseStmt(parser);
*caseLink = c;
caseLink = &DEREF(c).next;
tryRecover(parser);
}
}}
}
Syntax parseReturnStmt(Parser* parser)
{
auto stmt = createObject<ReturnStmt> ();
if(peekTokenCode(parser) != kTokenCode_Semi)
{
DEREF(stmt).value = parseExp(parser);
}
expect(parser, kTokenCode_Semi);
return stmt;
}
Syntax parseBreakStmt(Parser* parser)
{
auto stmt = createObject<BreakStmt> ();
expect(parser, kTokenCode_Semi);
return stmt;
}
Syntax parseContinueStmt(Parser* parser)
{
auto stmt = createObject<ContinueStmt> ();
expect(parser, kTokenCode_Semi);
return stmt;
}
Syntax parseBuiltinAttr(Parser* parser)
{
auto attr = createObject<BuiltinAttr> ();
expect(parser, kTokenCode_LParen);
DEREF(attr).name = expectIdentifier(parser);
expect(parser, kTokenCode_RParen);
return attr;
}
ParamDecl parseParam(Parser* parser)
{
auto decl = createObject<ParamDecl> ();
parseVarDeclCommon(parser, decl);
return decl;
}
void parseParams(Parser* parser, ContainerDecl decl)
{
SyntaxListBuilder<Decl>  params;
switch(peekTokenCode(parser))
{
case kTokenCode_RCurly:
case kTokenCode_RParen:
case kTokenCode_EndOfFile:
{
return;
}
default:
{
break;
}
}
{
for(;;)
{
{
auto param = parseParam(parser);
if(param)
{
DEREF(params).add(param);
}
tryRecover(parser);
switch(peekTokenCode(parser))
{
case kTokenCode_RCurly:
case kTokenCode_RParen:
case kTokenCode_EndOfFile:
{
{
DEREF(decl).getDecls() = params;
}
}
{
return;
}
default:
{
break;
}
}
expect(parser, kTokenCode_Comma);
}
}}
DEREF(decl).getDecls() = params;
}
Syntax parseFuncDecl(Parser* parser)
{
auto decl = createObject<FuncDecl> ();
DEREF(decl).loc = peekLoc(parser);
DEREF(decl).name = expectOperatorOrIdentifier(parser);
auto result = maybeParseGenericParams(parser, decl);
pushScope(parser, decl);
if(expect(parser, kTokenCode_LParen))
{
parseParams(parser, decl);
}
expect(parser, kTokenCode_RParen);
if(advanceIf(parser, kTokenCode_Arrow))
{
DEREF(decl).resultType = parseType(parser);
}
if(peekTokenCode(parser, kTokenCode_LCurly))
{
DEREF(decl).body = parseStmtBody(parser);
}
else
{
expect(parser, kTokenCode_Semi);
}
popScope(parser);
return result;
}
Syntax parseSubscriptDecl(Parser* parser)
{
auto decl = createObject<SubscriptDecl> ();
pushScope(parser, decl);
if(expect(parser, kTokenCode_LParen))
{
parseParams(parser, decl);
}
expect(parser, kTokenCode_RParen);
if(advanceIf(parser, kTokenCode_Arrow))
{
DEREF(decl).resultType = parseType(parser);
}
if(peekTokenCode(parser, kTokenCode_LCurly))
{
DEREF(decl).body = parseStmtBody(parser);
}
else
{
expect(parser, kTokenCode_Semi);
}
popScope(parser);
return decl;
}
Syntax parseInitializerDecl(Parser* parser)
{
auto decl = createObject<InitializerDecl> ();
pushScope(parser, decl);
if(expect(parser, kTokenCode_LParen))
{
parseParams(parser, decl);
}
expect(parser, kTokenCode_RParen);
if(advanceIf(parser, kTokenCode_Arrow))
{
DEREF(decl).resultType = parseType(parser);
}
if(peekTokenCode(parser, kTokenCode_LCurly))
{
DEREF(decl).body = parseStmtBody(parser);
}
else
{
expect(parser, kTokenCode_Semi);
}
popScope(parser);
return decl;
}
Syntax parseThisExpr(Parser* parser)
{
auto expr = createObject<ThisExpr> ();
DEREF(expr).scope = DEREF(parser).scope;
return expr;
}
Syntax parseCastExpr(Parser* parser)
{
tryParseGenericOpen(parser);
auto args = parseGenericArgs(parser);
expectGenericClose(parser);
auto expr = createObject<CastExpr> ();
DEREF(DEREF(expr).toType).exp = DEREF(DEREF(args).head).exp;
expect(parser, kTokenCode_LParen);
DEREF(expr).arg = parseExp(parser);
expect(parser, kTokenCode_RParen);
return expr;
}
SyntaxDecl createSyntaxDecl(Session session, ConstPtr<Char>  name, SyntaxCallback callback, Class* syntaxClass)
{
auto syntaxDecl = createObject<SyntaxDecl> ();
DEREF(syntaxDecl).name = getName(session, UNCONST(name));
DEREF(syntaxDecl).syntaxClass = syntaxClass;
DEREF(syntaxDecl).callback = callback;
return syntaxDecl;
}
template<typename T > SyntaxDecl createSyntaxDecl(Session session, ConstPtr<Char>  name, SyntaxCallback callback)
{
return createSyntaxDecl(session, name, callback, getClass<T> ());
}
void parseFileIntoModule(Session session, SourceFile* file, ModuleDecl moduleDecl)
{
Parser parser;
initializeParser(&parser, session, file);
SyntaxListBuilder<Decl>  moduleDeclList;
DEREF(moduleDeclList).head = DEREF(DEREF(moduleDecl).getDecls()).head;
if(DEREF(moduleDeclList).head)
{
DEREF(moduleDeclList).link = cast<Ptr<Decl> >(DEREF(session).moduleDeclLink);
}
else
{
DEREF(moduleDeclList).link = &DEREF(moduleDeclList).head;
}
auto globals = createObject<ContainerDecl> ();
SyntaxListBuilder<Decl>  globalDecls;
DEREF(globalDecls).add(createSyntaxDecl<Decl> (session, "import", &parseImportDecl));
DEREF(globalDecls).add(createSyntaxDecl<Decl> (session, "class", &parseClassDecl));
DEREF(globalDecls).add(createSyntaxDecl<Decl> (session, "struct", &parseStructDecl));
DEREF(globalDecls).add(createSyntaxDecl<Decl> (session, "enum", &parseEnumDecl));
DEREF(globalDecls).add(createSyntaxDecl<Decl> (session, "var", &parseVarDecl));
DEREF(globalDecls).add(createSyntaxDecl<Decl> (session, "let", &parseLetDecl));
DEREF(globalDecls).add(createSyntaxDecl<Decl> (session, "func", &parseFuncDecl));
DEREF(globalDecls).add(createSyntaxDecl<Decl> (session, "subscript", &parseSubscriptDecl));
DEREF(globalDecls).add(createSyntaxDecl<Decl> (session, "init", &parseInitializerDecl));
DEREF(globalDecls).add(createSyntaxDecl<Decl> (session, "typealias", &parseTypeAliasDecl));
DEREF(globalDecls).add(createSyntaxDecl<Stmt> (session, "if", &parseIfStmt));
DEREF(globalDecls).add(createSyntaxDecl<Stmt> (session, "while", &parseWhileStmt));
DEREF(globalDecls).add(createSyntaxDecl<Stmt> (session, "for", &parseForStmt));
DEREF(globalDecls).add(createSyntaxDecl<Stmt> (session, "foreach", &parseForEachStmt));
DEREF(globalDecls).add(createSyntaxDecl<Stmt> (session, "return", &parseReturnStmt));
DEREF(globalDecls).add(createSyntaxDecl<Stmt> (session, "break", &parseBreakStmt));
DEREF(globalDecls).add(createSyntaxDecl<Stmt> (session, "continue", &parseContinueStmt));
DEREF(globalDecls).add(createSyntaxDecl<Stmt> (session, "switch", &parseSwitchStmt));
DEREF(globalDecls).add(createSyntaxDecl<Attr> (session, "@__builtin", &parseBuiltinAttr));
DEREF(globalDecls).add(createSyntaxDecl<Exp> (session, "this", &parseThisExpr));
DEREF(globalDecls).add(createSyntaxDecl<Exp> (session, "cast", &parseCastExpr));
DEREF(globals).getDecls() = globalDecls;
auto globalScope = alloc<Scope> ();
DEREF(globalScope).parent = 0;
DEREF(DEREF(globalScope).directLink).container = globals;
DEREF(parser).scope = globalScope;
pushScope(&parser, moduleDecl);
auto fileDecls = parseDeclsInBody(&parser);
for(auto dd : fileDecls)
{
DEREF(dd).parent = moduleDecl;
}
popScope(&parser);
expect(&parser, kTokenCode_EndOfFile);
DEREF(moduleDeclList).append(fileDecls);
DEREF(moduleDecl).getDecls() = moduleDeclList;
finalizeParser(&parser);
}
void parseFile(Session session, SourceFile* file)
{
auto moduleDecl = DEREF(session).moduleDecl;
if(!moduleDecl)
{
moduleDecl = createObject<ModuleDecl> ();
DEREF(moduleDecl).name = getModuleName(session);
DEREF(session).moduleDecl = moduleDecl;
DEREF(session).moduleDeclLink = &DEREF(DEREF(moduleDecl).getDecls()).head;
}
parseFileIntoModule(session, file, moduleDecl);
}
void lookupDirectImpl(ContainerStmt container, Ptr<Name>  name, Ptr<LookupResult>  ioResult)
{
for(auto dd : DEREF(container).getDecls())
{
{
if(DEREF(dd).name == name)
{
DEREF(DEREF(ioResult).items).append(LookupResultItem(dd));
}
}
}
}
LookupResult lookupDirect(ContainerStmt container, Ptr<Name>  name)
{
LookupResult result;
lookupDirectImpl(container, name, &result);
return result;
}
LookupResult lookupDirect(Ptr<Scope>  scope, Ptr<Name>  name)
{
LookupResult result;
{
auto ll = &DEREF(scope).directLink;
for(;ll;ll = DEREF(ll).next)
{
{
lookupDirectImpl(DEREF(ll).container, name, &result);
}
}}
return result;
}
LookupResult lookup(Ptr<Scope>  scope, Ptr<Name>  name)
{
{
auto ss = scope;
for(;ss;ss = DEREF(ss).parent)
{
{
auto result = lookupDirect(ss, name);
if(!DEREF(result).isEmpty())
{
return result;
}
}
}}
return LookupResult();
}
Session createSession()
{
auto session = createObject<Session> ();
DEREF(DEREF(session).sink).session = session;
return session;
}
void destroySession(Session session)
{
free(session);
}
void setModulePath(Session session, StringSpan path)
{
DEREF(session).modulePath2 = getName(session, path);
auto name = path;
name = DEREF(name).suffixAfterLast('/');
name = DEREF(name).suffixAfterLast('\\');
DEREF(session).moduleName2 = getName(session, name);
}
void setModulePath(Session session, TerminatedStringSpan path)
{
setModulePath(session, StringSpan(path));
}
Ptr<Name>  getModulePath(Session session)
{
return DEREF(session).modulePath2;
}
Ptr<Name>  getModuleName(Session session)
{
return DEREF(session).moduleName2;
}
void setEvaluate(Session session)
{
DEREF(session).eval = true;
}
void loadSourceFile(Session session, TerminatedStringSpan path)
{
auto file = getSourceFile(session, path);
if(!file)
{
return;
}
parseFile(session, file);
}
Int getErrorCount(Session session)
{
return DEREF(DEREF(session).sink).errorCount;
}
Ptr<SourceFile>  getSourceFile(Session session, TerminatedStringSpan path)
{
auto file = fopen(DEREF(path).begin, "rb");
if(!file)
{
diagnose(&DEREF(session).sink, SourceLoc(0), kDiagnostic_unimplemented, path);
return 0;
}
fseek(file, 0, SEEK_END);
auto fileSize = ftell(file);
fseek(file, 0, SEEK_SET);
auto pathSize = DEREF(path).end - DEREF(path).begin;
auto sourceFile = cast<Ptr<SourceFile> >(malloc(sizeOf<SourceFile> () + pathSize + 1 + fileSize + 1));
auto pathData = cast<Ptr<Char> >(sourceFile + 1);
auto fileData = pathData + pathSize + 1;
memcpy(pathData, DEREF(path).begin, pathSize);
pathData[pathSize] = 0;
fread(fileData, fileSize, 1, file);
fclose(file);
fileData[fileSize] = 0;
DEREF(sourceFile).path = TerminatedStringSpan(pathData, pathData + pathSize);
DEREF(sourceFile).text = TerminatedStringSpan(fileData, fileData + fileSize);
DEREF(DEREF(sourceFile).firstLoc).raw = DEREF(session).lastSourceLoc + 1;
DEREF(DEREF(sourceFile).lastLoc).raw = DEREF(DEREF(sourceFile).firstLoc).raw + fileSize + 1;
DEREF(session).lastSourceLoc = DEREF(DEREF(sourceFile).lastLoc).raw;
DEREF(sourceFile).next = DEREF(session).sourceFiles;
DEREF(session).sourceFiles = sourceFile;
return sourceFile;
}
ExpandedSourceLoc expandLoc(Session session, SourceLoc loc)
{
ExpandedSourceLoc expanded;
if(DEREF(loc).raw == 0)
{
DEREF(expanded).file = TerminatedStringSpan("");
DEREF(expanded).line = 0;
DEREF(expanded).column = 0;
return expanded;
}
{
auto f = DEREF(session).sourceFiles;
for(;f;f = DEREF(f).next)
{
{
if(DEREF(loc).raw < DEREF(DEREF(f).firstLoc).raw)
{
continue;
}
if(DEREF(loc).raw > DEREF(DEREF(f).lastLoc).raw)
{
continue;
}
auto line = 1;
auto column = 1;
auto cursor = DEREF(DEREF(f).text).begin;
auto offset = DEREF(loc).raw - DEREF(DEREF(f).firstLoc).raw;
{
auto ii = 0;
for(;ii < offset;++ii)
{
{
auto c = *cursor;
switch(c)
{
case '\r':
case '\n':
{
{
auto d = cursor[1];
if((c ^ d) == ('\r' ^ '\n'))
{
ii++;
cursor++;
}
line++;
column = 1;
}
}
{
break;
}
default:
{
column++;
}
{
break;
}
}
cursor++;
}
}}
DEREF(expanded).file = DEREF(f).path;
DEREF(expanded).line = line;
DEREF(expanded).column = column;
return expanded;
}
}}
assert(false);
return expanded;
}
Bool operator==(StringSpan left, StringSpan right)
{
auto leftSize = DEREF(left).getLength();
auto rightSize = DEREF(right).getLength();
if(leftSize != rightSize)
{
return false;
}
return memcmp(DEREF(left).begin, DEREF(right).begin, leftSize) == 0;
}
Bool operator!=(StringSpan left, StringSpan right)
{
return !(left == right);
}
Bool asBool(TypeExp typeExp)
{
return DEREF(typeExp).exp;
}
template<typename T > SyntaxListIterator<T > ::SyntaxListIterator(T current)
{
DEREF(this).current = current;
}
template<typename T > Bool SyntaxListIterator<T > ::operator!=(SyntaxListIterator<T>  other)
{
return current != DEREF(other).current;
}
template<typename T > T SyntaxListIterator<T > ::operator*()
{
return current;
}
template<typename T > void SyntaxListIterator<T > ::operator++()
{
current = cast<T>(DEREF(current).next);
}
template<typename T, typename U > FilteredSyntaxListIterator<T, U > ::FilteredSyntaxListIterator(U current)
{
DEREF(this).current = adjust(current);
}
template<typename T, typename U > Bool FilteredSyntaxListIterator<T, U > ::operator!=(FilteredSyntaxListIterator<T, U>  other)
{
return current != DEREF(other).current;
}
template<typename T, typename U > T FilteredSyntaxListIterator<T, U > ::operator*()
{
return current;
}
template<typename T, typename U > void FilteredSyntaxListIterator<T, U > ::operator++()
{
current = adjust(DEREF(current).next);
}
template<typename T, typename U > T FilteredSyntaxListIterator<T, U > ::adjust(U obj)
{
while(obj)
{
{
auto t = as<T> (obj);
if(t)
{
return t;
}
obj = DEREF(obj).next;
}
}
return nullptr;
}
template<typename T > DeclRefListIterator<T > ::DeclRefListIterator(Decl decl, Specializations specializations)
{
DEREF(this).decl = decl;
DEREF(this).specializations = specializations;
adjust();
}
template<typename T > void DeclRefListIterator<T > ::operator++()
{
if(!decl)
{
return;
}
decl = cast<Decl>(DEREF(decl).next);
adjust();
}
template<typename T > DeclRefValImpl<T>  DeclRefListIterator<T > ::operator*()
{
return DeclRefValImpl<T> (cast<T>(decl), specializations);
}
template<typename T > void DeclRefListIterator<T > ::adjust()
{
while(decl)
{
{
auto declAsT = as<T> (decl);
if(declAsT)
{
return;
}
decl = cast<Decl>(DEREF(decl).next);
}
}
}
template<typename T > DeclRefListIterator<T>  DeclRefList<T > ::begin()
{
return DeclRefListIterator<T> (decl, specializations);
}
template<typename T > DeclRefListIterator<T>  DeclRefList<T > ::end()
{
return DeclRefListIterator<T> (nullptr, nullptr);
}
template<typename T > DeclRefList<T > ::DeclRefList()
{
DEREF(this).decl = nullptr;
DEREF(this).specializations = nullptr;
}
template<typename T > DeclRefList<T > ::DeclRefList(Decl decl, Specializations specializations)
{
DEREF(this).decl = decl;
DEREF(this).specializations = specializations;
}
template<typename T > Bool operator!=(DeclRefListIterator<T>  left, DeclRefListIterator<T>  right)
{
return DEREF(left).decl != DEREF(right).decl;
}
DeclRefList<Decl>  getDecls(DeclRefValImpl<ContainerDecl>  container)
{
return DeclRefList<Decl> (DEREF(DEREF(DEREF(container).getDecl()).getDecls()).head, DEREF(container).specializations);
}
DeclRefVal getInner(DeclRefValImpl<GenericDecl>  declRef)
{
return DeclRefVal(DEREF(DEREF(declRef).getDecl()).inner, DEREF(declRef).specializations);
}
Type getResultType(DeclRefValImpl<FuncDeclBase>  declRef)
{
return specializeType(DEREF(DEREF(DEREF(declRef).getDecl()).resultType).type, DEREF(declRef).specializations);
}
Type getType(DeclRefValImpl<VarDeclBase>  declRef)
{
return specializeType(DEREF(DEREF(DEREF(declRef).getDecl()).type).type, DEREF(declRef).specializations);
}
COG_DEFINE_CLASS(Syntax, Object)
COG_DEFINE_CLASS(Attr, Syntax)
COG_DEFINE_CLASS(Stmt, Syntax)
COG_DEFINE_CLASS(Decl, Stmt)
COG_DEFINE_CLASS(ContainerStmt, Decl)
COG_DEFINE_CLASS(ContainerDecl, ContainerStmt)
COG_DEFINE_CLASS(ModuleDecl, ContainerDecl)
COG_DEFINE_CLASS(Session, cog::Object)
COG_DEFINE_CLASS(GenericDecl, ContainerDecl)
COG_DEFINE_CLASS(Val, Object)
COG_DEFINE_CLASS(Type, Val)
COG_DEFINE_CLASS(Exp, Stmt)
COG_DEFINE_CLASS(TypeVarDecl, Decl)
COG_DEFINE_CLASS(TypeAliasDecl, TypeVarDecl)
COG_DEFINE_CLASS(VarDeclBase, Decl)
COG_DEFINE_CLASS(PatternDecl, ContainerDecl)
COG_DEFINE_CLASS(FuncDeclBase, PatternDecl)
COG_DEFINE_CLASS(AggTypeDecl, PatternDecl)
COG_DEFINE_CLASS(ClassDecl, AggTypeDecl)
COG_DEFINE_CLASS(StructDecl, AggTypeDecl)
COG_DEFINE_CLASS(BlockStmt, ContainerDecl)
COG_DEFINE_CLASS(DeclRefExp, Exp)
COG_DEFINE_CLASS(MemberExp, DeclRefExp)
COG_DEFINE_CLASS(Arg, Syntax)
COG_DEFINE_CLASS(AppExpBase, Exp)
COG_DEFINE_CLASS(TypeType, Type)
COG_DEFINE_CLASS(SpecializationArg, Object)
COG_DEFINE_CLASS(Specializations, Object)
COG_DEFINE_CLASS(SubscriptDecl, FuncDeclBase)
COG_DEFINE_CLASS(InitializerDecl, FuncDeclBase)
COG_DEFINE_CLASS(GenericParamDecl, TypeVarDecl)
COG_DEFINE_CLASS(LetDecl, VarDeclBase)
COG_DEFINE_CLASS(ParamDecl, LetDecl)
COG_DEFINE_CLASS(FuncDecl, FuncDeclBase)
COG_DEFINE_CLASS(SyntaxDecl, Decl)
COG_DEFINE_CLASS(NameExp, DeclRefExp)
COG_DEFINE_CLASS(BuiltinAttr, Attr)
COG_DEFINE_CLASS(SpecializedDecl, Object)
COG_DEFINE_CLASS(ImportDecl, Decl)
COG_DEFINE_CLASS(VarDecl, VarDeclBase)
COG_DEFINE_CLASS(IfStmtBase, Stmt)
COG_DEFINE_CLASS(IfStmt, IfStmtBase)
COG_DEFINE_CLASS(IfLetStmt, IfStmtBase)
COG_DEFINE_CLASS(WhileStmt, Stmt)
COG_DEFINE_CLASS(ForStmt, Stmt)
COG_DEFINE_CLASS(ReturnStmt, Stmt)
COG_DEFINE_CLASS(BreakStmt, Stmt)
COG_DEFINE_CLASS(ContinueStmt, Stmt)
COG_DEFINE_CLASS(SwitchCase, Syntax)
COG_DEFINE_CLASS(SwitchStmt, Stmt)
COG_DEFINE_CLASS(PositionalArg, Arg)
COG_DEFINE_CLASS(LitExp, Exp)
COG_DEFINE_CLASS(IntLitExp, LitExp)
COG_DEFINE_CLASS(StringLitExp, LitExp)
COG_DEFINE_CLASS(CharacterLitExp, LitExp)
COG_DEFINE_CLASS(GenericAppExp, AppExpBase)
COG_DEFINE_CLASS(AppExp, AppExpBase)
COG_DEFINE_CLASS(IndexExp, AppExpBase)
COG_DEFINE_CLASS(OperatorAppExp, AppExp)
COG_DEFINE_CLASS(InfixExp, OperatorAppExp)
COG_DEFINE_CLASS(PrefixExp, OperatorAppExp)
COG_DEFINE_CLASS(PostfixExp, OperatorAppExp)
COG_DEFINE_CLASS(AssignExp, Exp)
COG_DEFINE_CLASS(ErrorExp, Exp)
COG_DEFINE_CLASS(OverloadedExpr, Exp)
COG_DEFINE_CLASS(DeclRefType, Type)
COG_DEFINE_CLASS(FuncType, Type)
COG_DEFINE_CLASS(ErrorType, Type)
COG_DEFINE_CLASS(OverloadGroupType, Type)
COG_DEFINE_CLASS(EnumDecl, AggTypeDecl)
COG_DEFINE_CLASS(EnumTagDecl, VarDeclBase)
COG_DEFINE_CLASS(ForEachStmt, Stmt)
COG_DEFINE_CLASS(ParenExp, Exp)
COG_DEFINE_CLASS(ThisExpr, Exp)
COG_DEFINE_CLASS(CastExpr, Exp)
}
