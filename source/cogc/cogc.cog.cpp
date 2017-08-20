#include "runtime/runtime.h"
namespace cogc {


#line 3 "check.cog"
 

#line 38 "diagnostic.cog"
 struct DiagnosticSink;


#line 5 "source.cog"
 struct SourceLoc;


#line 195 "syntax.cog"
 using Syntax = struct SyntaxImpl* ;
struct SyntaxImpl;


#line 48 "syntax.cog"
 template<typename T >
struct SyntaxList;


#line 200 "syntax.cog"
 using Attr = struct AttrImpl* ;
struct AttrImpl;


#line 210 "syntax.cog"
 using Stmt = struct StmtImpl* ;
struct StmtImpl;


#line 234 "syntax.cog"
 enum DeclCheckState : int;


#line 242 "syntax.cog"
 using Decl = struct DeclImpl* ;
struct DeclImpl;


#line 164 "syntax.cog"
 template<typename T, typename U >
struct FilteredSyntaxList;


#line 284 "syntax.cog"
 using ContainerStmt = struct ContainerStmtImpl* ;
struct ContainerStmtImpl;


#line 299 "syntax.cog"
 using ContainerDecl = struct ContainerDeclImpl* ;
struct ContainerDeclImpl;


#line 425 "syntax.cog"
 using ModuleDecl = struct ModuleDeclImpl* ;
struct ModuleDeclImpl;


#line 4 "session.cog"
 using Session = struct SessionImpl* ;
struct SessionImpl;


#line 5 "check.cog"
 

#line 12 "check.cog"
 

#line 25 "check.cog"
 struct SharedCheckContext;


#line 30 "check.cog"
 struct CheckContext;


#line 35 "check.cog"
 

#line 41 "check.cog"
 

#line 48 "check.cog"
 

#line 66 "check.cog"
 

#line 3 "scope.cog"
 struct ScopeLink;


#line 9 "scope.cog"
 struct Scope;


#line 78 "check.cog"
 

#line 90 "check.cog"
 

#line 110 "check.cog"
 

#line 390 "syntax.cog"
 using GenericDecl = struct GenericDeclImpl* ;
struct GenericDeclImpl;


#line 152 "check.cog"
 

#line 280 "syntax.cog"
 using Val = struct ValImpl* ;
struct ValImpl;


#line 730 "syntax.cog"
 using Type = struct TypeImpl* ;
struct TypeImpl;


#line 580 "syntax.cog"
 using Exp = struct ExpImpl* ;
struct ExpImpl;


#line 3 "syntax.cog"
 struct TypeExp;


#line 403 "syntax.cog"
 using TypeVarDecl = struct TypeVarDeclImpl* ;
struct TypeVarDeclImpl;


#line 421 "syntax.cog"
 using TypeAliasDecl = struct TypeAliasDeclImpl* ;
struct TypeAliasDeclImpl;


#line 167 "check.cog"
 

#line 473 "syntax.cog"
 using VarDeclBase = struct VarDeclBaseImpl* ;
struct VarDeclBaseImpl;


#line 174 "check.cog"
 

#line 429 "syntax.cog"
 using PatternDecl = struct PatternDeclImpl* ;
struct PatternDeclImpl;


#line 446 "syntax.cog"
 using FuncDeclBase = struct FuncDeclBaseImpl* ;
struct FuncDeclBaseImpl;


#line 215 "check.cog"
 

#line 433 "syntax.cog"
 using AggTypeDecl = struct AggTypeDeclImpl* ;
struct AggTypeDeclImpl;


#line 438 "syntax.cog"
 using ClassDecl = struct ClassDeclImpl* ;
struct ClassDeclImpl;


#line 237 "check.cog"
 

#line 442 "syntax.cog"
 using StructDecl = struct StructDeclImpl* ;
struct StructDeclImpl;


#line 244 "check.cog"
 

#line 251 "check.cog"
 

#line 269 "check.cog"
 

#line 278 "check.cog"
 

#line 723 "syntax.cog"
 using BlockStmt = struct BlockStmtImpl* ;
struct BlockStmtImpl;


#line 372 "check.cog"
 

#line 387 "check.cog"
 

#line 396 "check.cog"
 

#line 414 "check.cog"
 

#line 423 "check.cog"
 

#line 435 "check.cog"
 

#line 456 "check.cog"
 

#line 480 "check.cog"
 

#line 496 "check.cog"
 

#line 514 "check.cog"
 

#line 524 "check.cog"
 

#line 852 "check.cog"
 

#line 647 "syntax.cog"
 using DeclRefExp = struct DeclRefExpImpl* ;
struct DeclRefExpImpl;


#line 659 "syntax.cog"
 using MemberExp = struct MemberExpImpl* ;
struct MemberExpImpl;


#line 868 "check.cog"
 

#line 567 "syntax.cog"
 using Arg = struct ArgImpl* ;
struct ArgImpl;


#line 607 "syntax.cog"
 using AppExpBase = struct AppExpBaseImpl* ;
struct AppExpBaseImpl;


#line 1433 "check.cog"
 enum OverloadResolveMode : int;


#line 1416 "check.cog"
 enum OverloadCandidateState : int;


#line 1426 "check.cog"
 struct OverloadCandidate;


#line 1439 "check.cog"
 struct OverloadResolveContext;


#line 926 "check.cog"
 

#line 967 "check.cog"
 

#line 980 "check.cog"
 

#line 995 "check.cog"
 

#line 1024 "check.cog"
 

#line 1035 "check.cog"
 

#line 1045 "check.cog"
 

#line 741 "syntax.cog"
 using TypeType = struct TypeTypeImpl* ;
struct TypeTypeImpl;


#line 1055 "check.cog"
 

#line 1065 "check.cog"
 

#line 1078 "check.cog"
 

#line 1115 "check.cog"
 

#line 1128 "check.cog"
 

#line 1138 "check.cog"
 

#line 1145 "check.cog"
 

#line 1178 "check.cog"
 

#line 1206 "check.cog"
 

#line 1215 "check.cog"
 

#line 1225 "check.cog"
 

#line 254 "syntax.cog"
 using SpecializationArg = struct SpecializationArgImpl* ;
struct SpecializationArgImpl;


#line 262 "syntax.cog"
 using Specializations = struct SpecializationsImpl* ;
struct SpecializationsImpl;


#line 1245 "check.cog"
 

#line 1285 "check.cog"
 

#line 1298 "check.cog"
 

#line 1323 "check.cog"
 

#line 1359 "check.cog"
 

#line 1383 "check.cog"
 

#line 1403 "check.cog"
 

#line 1451 "check.cog"
 

#line 1457 "check.cog"
 

#line 1463 "check.cog"
 

#line 1535 "check.cog"
 

#line 1648 "check.cog"
 

#line 1656 "check.cog"
 

#line 1675 "check.cog"
 

#line 1683 "check.cog"
 

#line 1698 "check.cog"
 

#line 1753 "check.cog"
 

#line 465 "syntax.cog"
 using SubscriptDecl = struct SubscriptDeclImpl* ;
struct SubscriptDeclImpl;


#line 1761 "check.cog"
 

#line 1776 "check.cog"
 

#line 469 "syntax.cog"
 using InitializerDecl = struct InitializerDeclImpl* ;
struct InitializerDeclImpl;


#line 1789 "check.cog"
 

#line 1800 "check.cog"
 

#line 1825 "check.cog"
 

#line 1849 "check.cog"
 

#line 1858 "check.cog"
 

#line 1878 "check.cog"
 

#line 1938 "check.cog"
 

#line 2026 "check.cog"
 

#line 2033 "check.cog"
 

#line 2041 "check.cog"
 

#line 417 "syntax.cog"
 using GenericParamDecl = struct GenericParamDeclImpl* ;
struct GenericParamDeclImpl;


#line 2064 "check.cog"
 struct GenericInferenceArg;


#line 2070 "check.cog"
 struct GenericInferenceContext;


#line 2077 "check.cog"
 

#line 2095 "check.cog"
 

#line 2132 "check.cog"
 

#line 2153 "check.cog"
 

#line 2166 "check.cog"
 

#line 490 "syntax.cog"
 using LetDecl = struct LetDeclImpl* ;
struct LetDeclImpl;


#line 494 "syntax.cog"
 using ParamDecl = struct ParamDeclImpl* ;
struct ParamDeclImpl;


#line 2211 "check.cog"
 

#line 2223 "check.cog"
 

#line 2311 "check.cog"
 

#line 2342 "check.cog"
 

#line 2362 "check.cog"
 

#line 2378 "check.cog"
 

#line 2410 "check.cog"
 

#line 2437 "check.cog"
 

#line 2448 "check.cog"
 

#line 3 "diagnostic.cog"
 enum Severity : int;


#line 11 "diagnostic.cog"
 enum DiagnosticID : int;


#line 44 "diagnostic.cog"
 struct ArgTypeList;


#line 59 "diagnostic.cog"
 enum DiagnosticArgFlavor : int;


#line 12 "token.cog"
 enum TokenCode : int;


#line 5 "string.cog"
 struct StringSpan;


#line 70 "diagnostic.cog"
 struct DiagnosticArg;


#line 135 "diagnostic.cog"
 

#line 143 "diagnostic.cog"
 

#line 154 "diagnostic.cog"
 

#line 232 "diagnostic.cog"
 

#line 239 "diagnostic.cog"
 

#line 275 "diagnostic.cog"
 

#line 334 "diagnostic.cog"
 

#line 5 "emit.cog"
 struct EmitContext;


#line 12 "emit.cog"
 

#line 17 "emit.cog"
 enum DeclEmitMode : int;


#line 24 "emit.cog"
 

#line 31 "emit.cog"
 

#line 87 "string.cog"
 struct TerminatedStringSpan;


#line 3 "name.cog"
 struct Name;


#line 38 "emit.cog"
 

#line 45 "emit.cog"
 

#line 58 "emit.cog"
 

#line 68 "emit.cog"
 

#line 99 "emit.cog"
 

#line 144 "emit.cog"
 

#line 152 "emit.cog"
 

#line 187 "emit.cog"
 

#line 199 "emit.cog"
 

#line 210 "emit.cog"
 

#line 222 "emit.cog"
 

#line 252 "emit.cog"
 

#line 260 "emit.cog"
 

#line 388 "emit.cog"
 

#line 400 "emit.cog"
 

#line 416 "emit.cog"
 

#line 425 "emit.cog"
 

#line 453 "emit.cog"
 

#line 590 "emit.cog"
 

#line 660 "emit.cog"
 

#line 704 "emit.cog"
 

#line 729 "emit.cog"
 

#line 461 "syntax.cog"
 using FuncDecl = struct FuncDeclImpl* ;
struct FuncDeclImpl;


#line 736 "emit.cog"
 

#line 789 "emit.cog"
 

#line 846 "emit.cog"
 

#line 907 "emit.cog"
 

#line 1028 "emit.cog"
 

#line 83 "syntax.cog"
 template<typename T >
struct SyntaxListBuilder;


#line 1039 "emit.cog"
 struct DeclSortContext;


#line 1045 "emit.cog"
 

#line 1053 "emit.cog"
 

#line 1064 "emit.cog"
 

#line 1069 "emit.cog"
 

#line 1127 "emit.cog"
 

#line 1157 "emit.cog"
 

#line 1164 "emit.cog"
 

#line 1192 "emit.cog"
 

#line 1212 "emit.cog"
 

#line 1291 "emit.cog"
 

#line 5 "eval.cog"
 

#line 26 "source.cog"
 struct SourceFile;


#line 3 "token.cog"
 typedef 

#line 3 "token.cog"
                        UInt16 TokenFlags;


#line 3 "lexer.cog"
 struct Lexer;


#line 13 "lexer.cog"
 

#line 29 "lexer.cog"
 

#line 34 "lexer.cog"
 

#line 41 "lexer.cog"
 

#line 46 "lexer.cog"
 

#line 52 "lexer.cog"
 

#line 59 "lexer.cog"
 

#line 65 "lexer.cog"
 

#line 72 "lexer.cog"
 

#line 77 "lexer.cog"
 

#line 82 "lexer.cog"
 

#line 87 "lexer.cog"
 

#line 92 "lexer.cog"
 

#line 121 "lexer.cog"
 

#line 139 "lexer.cog"
 

#line 183 "lexer.cog"
 

#line 198 "lexer.cog"
 

#line 213 "lexer.cog"
 

#line 232 "lexer.cog"
 

#line 264 "lexer.cog"
 

#line 280 "lexer.cog"
 

#line 325 "lexer.cog"
 

#line 55 "token.cog"
 struct Token;


#line 506 "lexer.cog"
 

#line 553 "lexer.cog"
 

#line 603 "lexer.cog"
 

#line 611 "lexer.cog"
 

#line 70 "token.cog"
 struct TokenSpan;


#line 680 "lexer.cog"
 

#line 3 "main.cog"
 

#line 7 "main.cog"
 struct A;


#line 5 "main.cog"
 

#line 9 "main.cog"
 

#line 107 "main.cog"
 

#line 9 "name.cog"
 

#line 36 "name.cog"
 

#line 45 "name.cog"
 

#line 4 "parser.cog"
 typedef 

#line 4 "parser.cog"
                         UInt32 ParserFlags;


#line 6 "parser.cog"
 enum ParserFlag : int;


#line 12 "parser.cog"
 struct Parser;


#line 26 "parser.cog"
 

#line 40 "parser.cog"
 

#line 54 "parser.cog"
 

#line 69 "parser.cog"
 

#line 86 "parser.cog"
 

#line 90 "parser.cog"
 

#line 103 "parser.cog"
 

#line 111 "parser.cog"
 

#line 119 "parser.cog"
 

#line 125 "parser.cog"
 

#line 131 "parser.cog"
 

#line 137 "parser.cog"
 

#line 143 "parser.cog"
 

#line 149 "parser.cog"
 

#line 155 "parser.cog"
 

#line 164 "parser.cog"
 

#line 173 "parser.cog"
 

#line 189 "parser.cog"
 

#line 204 "parser.cog"
 

#line 260 "parser.cog"
 

#line 280 "parser.cog"
 

#line 293 "parser.cog"
 

#line 305 "parser.cog"
 

#line 324 "parser.cog"
 

#line 336 "parser.cog"
 

#line 348 "parser.cog"
 

#line 360 "parser.cog"
 

#line 377 "parser.cog"
 

#line 669 "syntax.cog"
 struct LookupResultItem;


#line 688 "syntax.cog"
 struct LookupResult;


#line 391 "parser.cog"
 

#line 498 "syntax.cog"
 using SyntaxDecl = struct SyntaxDeclImpl* ;
struct SyntaxDeclImpl;


#line 401 "parser.cog"
 

#line 652 "syntax.cog"
 using NameExp = struct NameExpImpl* ;
struct NameExpImpl;


#line 418 "parser.cog"
 

#line 431 "parser.cog"
 

#line 440 "parser.cog"
 

#line 447 "parser.cog"
 

#line 490 "parser.cog"
 

#line 500 "parser.cog"
 

#line 523 "parser.cog"
 

#line 568 "parser.cog"
 

#line 589 "syntax.cog"
 typedef 

#line 589 "syntax.cog"
                       Int64 IntLitVal;


#line 591 "parser.cog"
 

#line 635 "parser.cog"
 

#line 685 "parser.cog"
 

#line 774 "parser.cog"
 

#line 785 "parser.cog"
 

#line 801 "parser.cog"
 

#line 819 "parser.cog"
 

#line 826 "parser.cog"
 

#line 896 "parser.cog"
 

#line 913 "parser.cog"
 

#line 956 "parser.cog"
 

#line 963 "parser.cog"
 

#line 974 "parser.cog"
 

#line 1049 "parser.cog"
 

#line 1120 "parser.cog"
 

#line 1155 "parser.cog"
 

#line 1165 "parser.cog"
 

#line 1180 "parser.cog"
 

#line 1189 "parser.cog"
 

#line 1246 "parser.cog"
 

#line 1275 "parser.cog"
 

#line 1292 "parser.cog"
 

#line 1316 "parser.cog"
 

#line 1326 "parser.cog"
 

#line 1335 "parser.cog"
 

#line 1348 "parser.cog"
 

#line 1371 "parser.cog"
 

#line 1399 "parser.cog"
 

#line 1422 "parser.cog"
 

#line 1452 "parser.cog"
 

#line 1458 "parser.cog"
 

#line 1464 "parser.cog"
 

#line 1505 "parser.cog"
 

#line 1530 "parser.cog"
 

#line 1540 "parser.cog"
 

#line 1557 "parser.cog"
 

#line 1565 "parser.cog"
 

#line 1573 "parser.cog"
 

#line 1588 "parser.cog"
 

#line 1594 "parser.cog"
 

#line 1609 "parser.cog"
 

#line 1621 "parser.cog"
 

#line 1654 "parser.cog"
 

#line 1664 "parser.cog"
 

#line 1713 "parser.cog"
 

#line 1732 "parser.cog"
 

#line 1805 "parser.cog"
 

#line 1816 "parser.cog"
 

#line 1823 "parser.cog"
 

#line 1830 "parser.cog"
 

#line 1839 "parser.cog"
 

#line 1846 "parser.cog"
 

#line 1895 "parser.cog"
 

#line 1932 "parser.cog"
 

#line 1963 "parser.cog"
 

#line 1995 "parser.cog"
 

#line 2002 "parser.cog"
 

#line 2017 "parser.cog"
 

#line 2031 "parser.cog"
 

#line 2040 "parser.cog"
 

#line 2121 "parser.cog"
 

#line 15 "scope.cog"
 

#line 32 "scope.cog"
 

#line 42 "scope.cog"
 

#line 58 "scope.cog"
 

#line 2 "session.cog"
 

#line 22 "session.cog"
 

#line 29 "session.cog"
 

#line 34 "session.cog"
 

#line 46 "session.cog"
 

#line 53 "session.cog"
 

#line 60 "session.cog"
 

#line 67 "session.cog"
 

#line 73 "session.cog"
 

#line 83 "session.cog"
 

#line 3 "source.cog"
 

#line 17 "source.cog"
 struct Dummy;


#line 19 "source.cog"
 struct ExpandedSourceLoc;


#line 42 "source.cog"
 

#line 99 "source.cog"
 

#line 3 "string.cog"
 

#line 70 "string.cog"
 

#line 81 "string.cog"
 

#line 16 "syntax.cog"
 

#line 21 "syntax.cog"
 template<typename T >
struct SyntaxListIterator;


#line 128 "syntax.cog"
 template<typename T, typename U >
struct FilteredSyntaxListIterator;


#line 205 "syntax.cog"
 using BuiltinAttr = struct BuiltinAttrImpl* ;
struct BuiltinAttrImpl;


#line 269 "syntax.cog"
 using SpecializedDecl = struct SpecializedDeclImpl* ;
struct SpecializedDeclImpl;


#line 306 "syntax.cog"
 template<typename T >
struct DeclRefListIterator;


#line 347 "syntax.cog"
 template<typename T >
struct DeclRefList;


#line 375 "syntax.cog"
 

#line 382 "syntax.cog"
 

#line 395 "syntax.cog"
 

#line 409 "syntax.cog"
 using ImportDecl = struct ImportDeclImpl* ;
struct ImportDeclImpl;


#line 452 "syntax.cog"
 

#line 479 "syntax.cog"
 

#line 486 "syntax.cog"
 using VarDecl = struct VarDeclImpl* ;
struct VarDeclImpl;


#line 506 "syntax.cog"
 using IfStmtBase = struct IfStmtBaseImpl* ;
struct IfStmtBaseImpl;


#line 513 "syntax.cog"
 using IfStmt = struct IfStmtImpl* ;
struct IfStmtImpl;


#line 518 "syntax.cog"
 using IfLetStmt = struct IfLetStmtImpl* ;
struct IfLetStmtImpl;


#line 525 "syntax.cog"
 using WhileStmt = struct WhileStmtImpl* ;
struct WhileStmtImpl;


#line 531 "syntax.cog"
 using ForStmt = struct ForStmtImpl* ;
struct ForStmtImpl;


#line 539 "syntax.cog"
 using ReturnStmt = struct ReturnStmtImpl* ;
struct ReturnStmtImpl;


#line 544 "syntax.cog"
 using BreakStmt = struct BreakStmtImpl* ;
struct BreakStmtImpl;


#line 548 "syntax.cog"
 using ContinueStmt = struct ContinueStmtImpl* ;
struct ContinueStmtImpl;


#line 552 "syntax.cog"
 using SwitchCase = struct SwitchCaseImpl* ;
struct SwitchCaseImpl;


#line 559 "syntax.cog"
 using SwitchStmt = struct SwitchStmtImpl* ;
struct SwitchStmtImpl;


#line 573 "syntax.cog"
 using PositionalArg = struct PositionalArgImpl* ;
struct PositionalArgImpl;


#line 585 "syntax.cog"
 using LitExp = struct LitExpImpl* ;
struct LitExpImpl;


#line 591 "syntax.cog"
 using IntLitExp = struct IntLitExpImpl* ;
struct IntLitExpImpl;


#line 596 "syntax.cog"
 using StringLitExp = struct StringLitExpImpl* ;
struct StringLitExpImpl;


#line 601 "syntax.cog"
 using CharacterLitExp = struct CharacterLitExpImpl* ;
struct CharacterLitExpImpl;


#line 613 "syntax.cog"
 using GenericAppExp = struct GenericAppExpImpl* ;
struct GenericAppExpImpl;


#line 617 "syntax.cog"
 using AppExp = struct AppExpImpl* ;
struct AppExpImpl;


#line 621 "syntax.cog"
 using IndexExp = struct IndexExpImpl* ;
struct IndexExpImpl;


#line 625 "syntax.cog"
 using OperatorAppExp = struct OperatorAppExpImpl* ;
struct OperatorAppExpImpl;


#line 629 "syntax.cog"
 using InfixExp = struct InfixExpImpl* ;
struct InfixExpImpl;


#line 633 "syntax.cog"
 using PrefixExp = struct PrefixExpImpl* ;
struct PrefixExpImpl;


#line 637 "syntax.cog"
 using PostfixExp = struct PostfixExpImpl* ;
struct PostfixExpImpl;


#line 641 "syntax.cog"
 using AssignExp = struct AssignExpImpl* ;
struct AssignExpImpl;


#line 665 "syntax.cog"
 using ErrorExp = struct ErrorExpImpl* ;
struct ErrorExpImpl;


#line 715 "syntax.cog"
 using OverloadedExpr = struct OverloadedExprImpl* ;
struct OverloadedExprImpl;


#line 735 "syntax.cog"
 using DeclRefType = struct DeclRefTypeImpl* ;
struct DeclRefTypeImpl;


#line 747 "syntax.cog"
 using FuncType = struct FuncTypeImpl* ;
struct FuncTypeImpl;


#line 753 "syntax.cog"
 using ErrorType = struct ErrorTypeImpl* ;
struct ErrorTypeImpl;


#line 758 "syntax.cog"
 using OverloadGroupType = struct OverloadGroupTypeImpl* ;
struct OverloadGroupTypeImpl;


#line 765 "syntax.cog"
 using EnumDecl = struct EnumDeclImpl* ;
struct EnumDeclImpl;


#line 768 "syntax.cog"
 using EnumTagDecl = struct EnumTagDeclImpl* ;
struct EnumTagDeclImpl;


#line 771 "syntax.cog"
 using ForEachStmt = struct ForEachStmtImpl* ;
struct ForEachStmtImpl;


#line 778 "syntax.cog"
 using ParenExp = struct ParenExpImpl* ;
struct ParenExpImpl;


#line 785 "syntax.cog"
 using ThisExpr = struct ThisExprImpl* ;
struct ThisExprImpl;


#line 790 "syntax.cog"
 using CastExpr = struct CastExprImpl* ;
struct CastExprImpl;


#line 5 "token.cog"
 enum TokenFlag : int;


#line 3 "check.cog"
 

#line 38 "diagnostic.cog"
 struct DiagnosticSink
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 40 "diagnostic.cog"
  

#line 40 "diagnostic.cog"
                Session session;


#line 41 "diagnostic.cog"
  

#line 41 "diagnostic.cog"
                   Int errorCount;
};


#line 5 "source.cog"
 struct SourceLoc
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 7 "source.cog"
  

#line 7 "source.cog"
            USize raw;


#line 9 "source.cog"
  SourceLoc();


#line 11 "source.cog"
  SourceLoc(

#line 11 "source.cog"
            USize raw);
};


#line 195 "syntax.cog"
 using Syntax = struct SyntaxImpl* ;
struct SyntaxImpl : 

#line 195 "syntax.cog"
                ObjectImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 197 "syntax.cog"
  

#line 197 "syntax.cog"
            SourceLoc loc;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Syntax > { typedef cogc::SyntaxImpl Impl; };
} namespace cogc {


#line 48 "syntax.cog"
 template<typename T >
struct SyntaxList
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 50 "syntax.cog"
  

#line 50 "syntax.cog"
            T head;


#line 52 "syntax.cog"
  

#line 52 "syntax.cog"
                            T operator[](

#line 52 "syntax.cog"
                   Size index);


#line 62 "syntax.cog"
  

#line 62 "syntax.cog"
                  SyntaxListIterator<

#line 62 "syntax.cog"
                                     T>  begin();


#line 67 "syntax.cog"
  

#line 67 "syntax.cog"
                SyntaxListIterator<

#line 67 "syntax.cog"
                                   T>  end();


#line 72 "syntax.cog"
  SyntaxList();


#line 77 "syntax.cog"
  SyntaxList(

#line 77 "syntax.cog"
             T head);
};


#line 200 "syntax.cog"
 using Attr = struct AttrImpl* ;
struct AttrImpl : 

#line 200 "syntax.cog"
              SyntaxImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 202 "syntax.cog"
  

#line 202 "syntax.cog"
             Attr next;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Attr > { typedef cogc::AttrImpl Impl; };
} namespace cogc {


#line 210 "syntax.cog"
 using Stmt = struct StmtImpl* ;
struct StmtImpl : 

#line 210 "syntax.cog"
              SyntaxImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 212 "syntax.cog"
  

#line 212 "syntax.cog"
              SyntaxList<

#line 212 "syntax.cog"
                         Attr>  attrs;


#line 214 "syntax.cog"
  

#line 214 "syntax.cog"
             Stmt next;


#line 216 "syntax.cog"
  

#line 216 "syntax.cog"
                                              Attr findAttrImpl(

#line 216 "syntax.cog"
                               Ptr<

#line 216 "syntax.cog"
                                   Class>  attrClass);


#line 228 "syntax.cog"
  template<typename T >


#line 228 "syntax.cog"
       

#line 228 "syntax.cog"
                        T findAttr();
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Stmt > { typedef cogc::StmtImpl Impl; };
} namespace cogc {


#line 234 "syntax.cog"
 enum DeclCheckState : int
{
kDeclCheckState_Unchecked = 

#line 236 "syntax.cog"
                              0,
kDeclCheckState_CheckingHead,
kDeclCheckState_CheckedHead,
kDeclCheckState_Checked,
};


#line 242 "syntax.cog"
 using Decl = struct DeclImpl* ;
struct DeclImpl : 

#line 242 "syntax.cog"
              StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 244 "syntax.cog"
  

#line 244 "syntax.cog"
             Ptr<

#line 244 "syntax.cog"
                 Name>  name;


#line 245 "syntax.cog"
  

#line 245 "syntax.cog"
               ContainerStmt parent;


#line 246 "syntax.cog"
  

#line 246 "syntax.cog"
                   DeclCheckState checkState = 

#line 246 "syntax.cog"
                                    kDeclCheckState_Unchecked;


#line 248 "syntax.cog"
  

#line 248 "syntax.cog"
                      ContainerStmt getParent();
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Decl > { typedef cogc::DeclImpl Impl; };
} namespace cogc {


#line 164 "syntax.cog"
 template<typename T, typename U >
struct FilteredSyntaxList
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 166 "syntax.cog"
  

#line 166 "syntax.cog"
             U head;


#line 169 "syntax.cog"
  

#line 169 "syntax.cog"
                  FilteredSyntaxListIterator<

#line 169 "syntax.cog"
                                             T, 

#line 169 "syntax.cog"
                                               U>  begin();


#line 174 "syntax.cog"
  

#line 174 "syntax.cog"
                FilteredSyntaxListIterator<

#line 174 "syntax.cog"
                                           T, 

#line 174 "syntax.cog"
                                             U>  end();


#line 179 "syntax.cog"
  FilteredSyntaxList();


#line 184 "syntax.cog"
  FilteredSyntaxList(

#line 184 "syntax.cog"
             U head);


#line 189 "syntax.cog"
  FilteredSyntaxList(

#line 189 "syntax.cog"
             ConstRef<

#line 189 "syntax.cog"
                      SyntaxList<

#line 189 "syntax.cog"
                                 U> >  list);
};


#line 284 "syntax.cog"
 using ContainerStmt = struct ContainerStmtImpl* ;
struct ContainerStmtImpl : 

#line 284 "syntax.cog"
                       DeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 286 "syntax.cog"
  

#line 286 "syntax.cog"
              SyntaxList<

#line 286 "syntax.cog"
                         Stmt>  stmts;


#line 288 "syntax.cog"
  

#line 288 "syntax.cog"
                     SyntaxList<

#line 288 "syntax.cog"
                                Stmt>  getStmts();


#line 293 "syntax.cog"
  

#line 293 "syntax.cog"
                     FilteredSyntaxList<

#line 293 "syntax.cog"
                                        Decl, 

#line 293 "syntax.cog"
                                              Stmt>  getDecls();
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ContainerStmt > { typedef cogc::ContainerStmtImpl Impl; };
} namespace cogc {


#line 299 "syntax.cog"
 using ContainerDecl = struct ContainerDeclImpl* ;
struct ContainerDeclImpl : 

#line 299 "syntax.cog"
                       ContainerStmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 303 "syntax.cog"
  

#line 303 "syntax.cog"
                     Ref<

#line 303 "syntax.cog"
                         SyntaxList<

#line 303 "syntax.cog"
                                    Decl> >  getDecls();
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ContainerDecl > { typedef cogc::ContainerDeclImpl Impl; };
} namespace cogc {


#line 425 "syntax.cog"
 using ModuleDecl = struct ModuleDeclImpl* ;
struct ModuleDeclImpl : 

#line 425 "syntax.cog"
                    ContainerDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ModuleDecl > { typedef cogc::ModuleDeclImpl Impl; };
} namespace cogc {


#line 4 "session.cog"
 using Session = struct SessionImpl* ;
struct SessionImpl : cog::ObjectImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 6 "session.cog"
  

#line 6 "session.cog"
                    Ptr<

#line 6 "session.cog"
                        SourceFile>  sourceFiles;


#line 7 "session.cog"
  

#line 7 "session.cog"
              Ptr<

#line 7 "session.cog"
                  Name>  names;


#line 8 "session.cog"
  

#line 8 "session.cog"
                      USize lastSourceLoc;


#line 9 "session.cog"
  

#line 9 "session.cog"
             DiagnosticSink sink;


#line 10 "session.cog"
  

#line 10 "session.cog"
                   ModuleDecl moduleDecl;


#line 11 "session.cog"
  

#line 11 "session.cog"
                       Ptr<

#line 11 "session.cog"
                           Decl>  moduleDeclLink;


#line 13 "session.cog"
  

#line 13 "session.cog"
                    Ptr<

#line 13 "session.cog"
                        Name>  moduleName2;


#line 14 "session.cog"
  

#line 14 "session.cog"
                    Ptr<

#line 14 "session.cog"
                        Name>  modulePath2;


#line 16 "session.cog"
  

#line 16 "session.cog"
                      ModuleDecl loadedModules;


#line 19 "session.cog"
  

#line 19 "session.cog"
             Bool eval;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Session > { typedef cogc::SessionImpl Impl; };
} namespace cogc {


#line 5 "check.cog"
 void checkModule(

#line 6 "check.cog"
              Session session);


#line 12 "check.cog"
 void checkModule(

#line 13 "check.cog"
           Session session, 

#line 14 "check.cog"
              ModuleDecl moduleDecl);


#line 25 "check.cog"
 struct SharedCheckContext
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 27 "check.cog"
  

#line 27 "check.cog"
                Session session;
};


#line 30 "check.cog"
 struct CheckContext
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 32 "check.cog"
  

#line 32 "check.cog"
                                 

#line 32 "check.cog"
               SharedCheckContext

#line 32 "check.cog"
                                 * shared;
};


#line 35 "check.cog"
 

#line 36 "check.cog"
                                           

#line 36 "check.cog"
                             DiagnosticSink

#line 36 "check.cog"
                                           * getSink(

#line 36 "check.cog"
                       

#line 36 "check.cog"
           CheckContext

#line 36 "check.cog"
                       * context);


#line 41 "check.cog"
 void checkModule(

#line 42 "check.cog"
                       

#line 42 "check.cog"
           CheckContext

#line 42 "check.cog"
                       * context, 

#line 43 "check.cog"
              ModuleDecl moduleDecl);


#line 48 "check.cog"
 void checkImportDecls(

#line 49 "check.cog"
                       

#line 49 "check.cog"
           CheckContext

#line 49 "check.cog"
                       * context, 

#line 50 "check.cog"
                 ContainerDecl containerDecl);


#line 66 "check.cog"
 void checkDecls(

#line 67 "check.cog"
                         

#line 67 "check.cog"
             CheckContext

#line 67 "check.cog"
                         * context, 

#line 68 "check.cog"
                  ContainerDecl containerDecl);


#line 3 "scope.cog"
 struct ScopeLink
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 5 "scope.cog"
  

#line 5 "scope.cog"
                  ContainerStmt container;


#line 6 "scope.cog"
  

#line 6 "scope.cog"
             Ptr<

#line 6 "scope.cog"
                 ScopeLink>  next = 

#line 6 "scope.cog"
                              nullptr;
};


#line 9 "scope.cog"
 struct Scope
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 11 "scope.cog"
  

#line 11 "scope.cog"
               Ptr<

#line 11 "scope.cog"
                   Scope>  parent;


#line 12 "scope.cog"
  

#line 12 "scope.cog"
                   ScopeLink directLink;
};


#line 78 "check.cog"
 void attachToScope(

#line 79 "check.cog"
              

#line 79 "check.cog"
         Scope

#line 79 "check.cog"
              * scope, 

#line 80 "check.cog"
         ContainerDecl decl);


#line 90 "check.cog"
 void checkDecl(

#line 91 "check.cog"
                        

#line 91 "check.cog"
            CheckContext

#line 91 "check.cog"
                        * context, 

#line 92 "check.cog"
         Decl decl);


#line 110 "check.cog"
 void checkDeclImpl(

#line 111 "check.cog"
                        

#line 111 "check.cog"
            CheckContext

#line 111 "check.cog"
                        * context, 

#line 112 "check.cog"
         Decl decl);


#line 390 "syntax.cog"
 using GenericDecl = struct GenericDeclImpl* ;
struct GenericDeclImpl : 

#line 390 "syntax.cog"
                     ContainerDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 392 "syntax.cog"
  

#line 392 "syntax.cog"
              Decl inner;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::GenericDecl > { typedef cogc::GenericDeclImpl Impl; };
} namespace cogc {


#line 152 "check.cog"
 void checkGenericDecl(

#line 153 "check.cog"
                       

#line 153 "check.cog"
           CheckContext

#line 153 "check.cog"
                       * context, 

#line 154 "check.cog"
        GenericDecl decl);


#line 280 "syntax.cog"
 using Val = struct ValImpl* ;
struct ValImpl : 

#line 280 "syntax.cog"
             ObjectImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Val > { typedef cogc::ValImpl Impl; };
} namespace cogc {


#line 730 "syntax.cog"
 using Type = struct TypeImpl* ;
struct TypeImpl : 

#line 730 "syntax.cog"
              ValImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Type > { typedef cogc::TypeImpl Impl; };
} namespace cogc {


#line 580 "syntax.cog"
 using Exp = struct ExpImpl* ;
struct ExpImpl : 

#line 580 "syntax.cog"
             StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 582 "syntax.cog"
  

#line 582 "syntax.cog"
             Type type;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Exp > { typedef cogc::ExpImpl Impl; };
} namespace cogc {


#line 3 "syntax.cog"
 struct TypeExp
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 5 "syntax.cog"
  

#line 5 "syntax.cog"
            Exp exp = 

#line 5 "syntax.cog"
                  nullptr;


#line 6 "syntax.cog"
  

#line 6 "syntax.cog"
             Type type = 

#line 6 "syntax.cog"
                    nullptr;
};


#line 403 "syntax.cog"
 using TypeVarDecl = struct TypeVarDeclImpl* ;
struct TypeVarDeclImpl : 

#line 403 "syntax.cog"
                     DeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 405 "syntax.cog"
  

#line 405 "syntax.cog"
              TypeExp bound;


#line 406 "syntax.cog"
  

#line 406 "syntax.cog"
             TypeExp init;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::TypeVarDecl > { typedef cogc::TypeVarDeclImpl Impl; };
} namespace cogc {


#line 421 "syntax.cog"
 using TypeAliasDecl = struct TypeAliasDeclImpl* ;
struct TypeAliasDeclImpl : 

#line 421 "syntax.cog"
                       TypeVarDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::TypeAliasDecl > { typedef cogc::TypeAliasDeclImpl Impl; };
} namespace cogc {


#line 167 "check.cog"
 void checkTypeAliasDecl(

#line 168 "check.cog"
                       

#line 168 "check.cog"
           CheckContext

#line 168 "check.cog"
                       * context, 

#line 169 "check.cog"
        TypeAliasDecl decl);


#line 473 "syntax.cog"
 using VarDeclBase = struct VarDeclBaseImpl* ;
struct VarDeclBaseImpl : 

#line 473 "syntax.cog"
                     DeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 475 "syntax.cog"
  

#line 475 "syntax.cog"
             TypeExp type;


#line 476 "syntax.cog"
  

#line 476 "syntax.cog"
             Exp init;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::VarDeclBase > { typedef cogc::VarDeclBaseImpl Impl; };
} namespace cogc {


#line 174 "check.cog"
 void checkVarDecl(

#line 175 "check.cog"
                       

#line 175 "check.cog"
           CheckContext

#line 175 "check.cog"
                       * context, 

#line 176 "check.cog"
        VarDeclBase decl);


#line 429 "syntax.cog"
 using PatternDecl = struct PatternDeclImpl* ;
struct PatternDeclImpl : 

#line 429 "syntax.cog"
                     ContainerDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::PatternDecl > { typedef cogc::PatternDeclImpl Impl; };
} namespace cogc {


#line 446 "syntax.cog"
 using FuncDeclBase = struct FuncDeclBaseImpl* ;
struct FuncDeclBaseImpl : 

#line 446 "syntax.cog"
                      PatternDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 448 "syntax.cog"
  

#line 448 "syntax.cog"
                   TypeExp resultType;


#line 449 "syntax.cog"
  

#line 449 "syntax.cog"
             Stmt body;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::FuncDeclBase > { typedef cogc::FuncDeclBaseImpl Impl; };
} namespace cogc {


#line 215 "check.cog"
 void checkFuncDecl(

#line 216 "check.cog"
                       

#line 216 "check.cog"
           CheckContext

#line 216 "check.cog"
                       * context, 

#line 217 "check.cog"
        FuncDeclBase decl);


#line 433 "syntax.cog"
 using AggTypeDecl = struct AggTypeDeclImpl* ;
struct AggTypeDeclImpl : 

#line 433 "syntax.cog"
                     PatternDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 435 "syntax.cog"
  

#line 435 "syntax.cog"
             TypeExp base;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::AggTypeDecl > { typedef cogc::AggTypeDeclImpl Impl; };
} namespace cogc {


#line 438 "syntax.cog"
 using ClassDecl = struct ClassDeclImpl* ;
struct ClassDeclImpl : 

#line 438 "syntax.cog"
                   AggTypeDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ClassDecl > { typedef cogc::ClassDeclImpl Impl; };
} namespace cogc {


#line 237 "check.cog"
 void checkClassDecl(

#line 238 "check.cog"
                       

#line 238 "check.cog"
           CheckContext

#line 238 "check.cog"
                       * context, 

#line 239 "check.cog"
        ClassDecl decl);


#line 442 "syntax.cog"
 using StructDecl = struct StructDeclImpl* ;
struct StructDeclImpl : 

#line 442 "syntax.cog"
                    AggTypeDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::StructDecl > { typedef cogc::StructDeclImpl Impl; };
} namespace cogc {


#line 244 "check.cog"
 void checkStructDecl(

#line 245 "check.cog"
                       

#line 245 "check.cog"
           CheckContext

#line 245 "check.cog"
                       * context, 

#line 246 "check.cog"
        StructDecl decl);


#line 251 "check.cog"
 void checkAggTypeDeclCommon(

#line 252 "check.cog"
                       

#line 252 "check.cog"
           CheckContext

#line 252 "check.cog"
                       * context, 

#line 253 "check.cog"
        AggTypeDecl decl);


#line 269 "check.cog"
 

#line 272 "check.cog"
     Exp checkPrediateExpr(

#line 270 "check.cog"
                       

#line 270 "check.cog"
           CheckContext

#line 270 "check.cog"
                       * context, 

#line 271 "check.cog"
        Exp expr);


#line 278 "check.cog"
 

#line 281 "check.cog"
     Stmt checkStmt(

#line 279 "check.cog"
                       

#line 279 "check.cog"
           CheckContext

#line 279 "check.cog"
                       * context, 

#line 280 "check.cog"
        Stmt stmt);


#line 723 "syntax.cog"
 using BlockStmt = struct BlockStmtImpl* ;
struct BlockStmtImpl : 

#line 723 "syntax.cog"
                   ContainerDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::BlockStmt > { typedef cogc::BlockStmtImpl Impl; };
} namespace cogc {


#line 372 "check.cog"
 

#line 375 "check.cog"
     Stmt checkBlockStmt(

#line 373 "check.cog"
                       

#line 373 "check.cog"
           CheckContext

#line 373 "check.cog"
                       * context, 

#line 374 "check.cog"
        BlockStmt stmt);


#line 387 "check.cog"
 

#line 390 "check.cog"
     Exp checkExp(

#line 388 "check.cog"
                       

#line 388 "check.cog"
           CheckContext

#line 388 "check.cog"
                       * context, 

#line 389 "check.cog"
       Exp exp);


#line 396 "check.cog"
 

#line 399 "check.cog"
     Exp coerceToExp(

#line 397 "check.cog"
                       

#line 397 "check.cog"
           CheckContext

#line 397 "check.cog"
                       * context, 

#line 398 "check.cog"
        Syntax term);


#line 414 "check.cog"
 

#line 417 "check.cog"
     Type checkType(

#line 415 "check.cog"
                       

#line 415 "check.cog"
           CheckContext

#line 415 "check.cog"
                       * context, 

#line 416 "check.cog"
       Exp exp);


#line 423 "check.cog"
 void checkTypeExp(

#line 424 "check.cog"
                       

#line 424 "check.cog"
           CheckContext

#line 424 "check.cog"
                       * context, 

#line 425 "check.cog"
                  

#line 425 "check.cog"
           TypeExp

#line 425 "check.cog"
                  * typeExp);


#line 435 "check.cog"
 

#line 438 "check.cog"
     Exp tryCoerceToTypeExpr(

#line 436 "check.cog"
                       

#line 436 "check.cog"
           CheckContext

#line 436 "check.cog"
                       * context, 

#line 437 "check.cog"
       Exp exp);


#line 456 "check.cog"
 

#line 459 "check.cog"
     Type tryCoerceToType(

#line 457 "check.cog"
                       

#line 457 "check.cog"
           CheckContext

#line 457 "check.cog"
                       * context, 

#line 458 "check.cog"
       Exp exp);


#line 480 "check.cog"
 

#line 483 "check.cog"
     Type coerceToType(

#line 481 "check.cog"
                       

#line 481 "check.cog"
           CheckContext

#line 481 "check.cog"
                       * context, 

#line 482 "check.cog"
       Exp exp);


#line 496 "check.cog"
 

#line 499 "check.cog"
     Exp coerceToTypeExpr(

#line 497 "check.cog"
                       

#line 497 "check.cog"
           CheckContext

#line 497 "check.cog"
                       * context, 

#line 498 "check.cog"
       Exp exp);


#line 514 "check.cog"
 

#line 517 "check.cog"
     Exp makeErrorExpr(

#line 515 "check.cog"
                       

#line 515 "check.cog"
           CheckContext

#line 515 "check.cog"
                       * context, 

#line 516 "check.cog"
        Exp expr);


#line 524 "check.cog"
 

#line 527 "check.cog"
     Exp checkTerm(

#line 525 "check.cog"
                       

#line 525 "check.cog"
           CheckContext

#line 525 "check.cog"
                       * context, 

#line 526 "check.cog"
       Exp exp);


#line 852 "check.cog"
 

#line 854 "check.cog"
        Val extractVal(

#line 853 "check.cog"
       Exp exp);


#line 647 "syntax.cog"
 using DeclRefExp = struct DeclRefExpImpl* ;
struct DeclRefExpImpl : 

#line 647 "syntax.cog"
                    ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 649 "syntax.cog"
  

#line 649 "syntax.cog"
                CompactDeclRef declRef;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::DeclRefExp > { typedef cogc::DeclRefExpImpl Impl; };
} namespace cogc {


#line 659 "syntax.cog"
 using MemberExp = struct MemberExpImpl* ;
struct MemberExpImpl : 

#line 659 "syntax.cog"
                   DeclRefExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 661 "syntax.cog"
  

#line 661 "syntax.cog"
             Exp base;


#line 662 "syntax.cog"
  

#line 662 "syntax.cog"
                   Ptr<

#line 662 "syntax.cog"
                       Name>  memberName;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::MemberExp > { typedef cogc::MemberExpImpl Impl; };
} namespace cogc {


#line 868 "check.cog"
 

#line 871 "check.cog"
        Exp checkMemberExp(

#line 869 "check.cog"
                       

#line 869 "check.cog"
           CheckContext

#line 869 "check.cog"
                       * context, 

#line 870 "check.cog"
       MemberExp exp);


#line 567 "syntax.cog"
 using Arg = struct ArgImpl* ;
struct ArgImpl : 

#line 567 "syntax.cog"
             SyntaxImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 569 "syntax.cog"
  

#line 569 "syntax.cog"
            Exp exp;


#line 570 "syntax.cog"
  

#line 570 "syntax.cog"
             Arg next;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Arg > { typedef cogc::ArgImpl Impl; };
} namespace cogc {


#line 607 "syntax.cog"
 using AppExpBase = struct AppExpBaseImpl* ;
struct AppExpBaseImpl : 

#line 607 "syntax.cog"
                    ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 609 "syntax.cog"
  

#line 609 "syntax.cog"
             Exp base;


#line 610 "syntax.cog"
  

#line 610 "syntax.cog"
             SyntaxList<

#line 610 "syntax.cog"
                        Arg>  args;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::AppExpBase > { typedef cogc::AppExpBaseImpl Impl; };
} namespace cogc {


#line 1433 "check.cog"
 enum OverloadResolveMode : int
{
kOverloadResolveMode_justTrying,
kOverloadResolveMode_forReal,
};


#line 1416 "check.cog"
 enum OverloadCandidateState : int
{
kOverloadCandidateState_Unchecked,
kOverloadCandidateState_GenericArgumentInferenceFailed,
kOverloadCandidateState_CheckedArity,
kOverloadCandidateState_CheckedTypes,
kOverloadCandidateState_Applicable,
};


#line 1426 "check.cog"
 struct OverloadCandidate
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 1428 "check.cog"
  

#line 1428 "check.cog"
                OverloadCandidateState state;


#line 1429 "check.cog"
  

#line 1429 "check.cog"
                 DeclRefVal declRef;


#line 1430 "check.cog"
  

#line 1430 "check.cog"
                    Type resultType;
};


#line 1439 "check.cog"
 struct OverloadResolveContext
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 1441 "check.cog"
  

#line 1441 "check.cog"
                                  

#line 1441 "check.cog"
                      CheckContext

#line 1441 "check.cog"
                                  * checkContext;


#line 1442 "check.cog"
     

#line 1442 "check.cog"
                     AppExpBase appExp;


#line 1443 "check.cog"
     

#line 1443 "check.cog"
                     Exp baseExp = 

#line 1443 "check.cog"
                           nullptr;


#line 1445 "check.cog"
     

#line 1445 "check.cog"
                OverloadResolveMode mode = 

#line 1445 "check.cog"
                                      kOverloadResolveMode_justTrying;


#line 1448 "check.cog"
     

#line 1448 "check.cog"
                      Array<

#line 1448 "check.cog"
                            OverloadCandidate>  candidates;
};


#line 926 "check.cog"
 void addAppOverloadCandidates(

#line 927 "check.cog"
                                 

#line 927 "check.cog"
           OverloadResolveContext

#line 927 "check.cog"
                                 * context, 

#line 928 "check.cog"
           Exp baseExp);


#line 967 "check.cog"
 void addGenericGenericOverloadCandidate(

#line 968 "check.cog"
                                    

#line 968 "check.cog"
              OverloadResolveContext

#line 968 "check.cog"
                                    * context, 

#line 969 "check.cog"
                  DeclRefValImpl<

#line 969 "check.cog"
                                 GenericDecl>  genericDeclRef);


#line 980 "check.cog"
 void addDeclRefGenericOverloadCandidates(

#line 981 "check.cog"
                                    

#line 981 "check.cog"
              OverloadResolveContext

#line 981 "check.cog"
                                    * context, 

#line 982 "check.cog"
          DeclRefVal val);


#line 995 "check.cog"
 void addGenericAppOverloadCandidates(

#line 996 "check.cog"
                                 

#line 996 "check.cog"
           OverloadResolveContext

#line 996 "check.cog"
                                 * context, 

#line 997 "check.cog"
           Exp baseExp);


#line 1024 "check.cog"
 

#line 1027 "check.cog"
        Type createFuncType(

#line 1025 "check.cog"
                       

#line 1025 "check.cog"
           CheckContext

#line 1025 "check.cog"
                       * context, 

#line 1026 "check.cog"
               DeclRefValImpl<

#line 1026 "check.cog"
                              FuncDeclBase>  funcDeclRef);


#line 1035 "check.cog"
 

#line 1038 "check.cog"
     Type createDeclRefType(

#line 1036 "check.cog"
                       

#line 1036 "check.cog"
           CheckContext

#line 1036 "check.cog"
                       * context, 

#line 1037 "check.cog"
           DeclRefVal declRef);


#line 1045 "check.cog"
 

#line 1048 "check.cog"
     Type createDeclRefTypeType(

#line 1046 "check.cog"
                       

#line 1046 "check.cog"
           CheckContext

#line 1046 "check.cog"
                       * context, 

#line 1047 "check.cog"
           DeclRefVal declRef);


#line 741 "syntax.cog"
 using TypeType = struct TypeTypeImpl* ;
struct TypeTypeImpl : 

#line 741 "syntax.cog"
                  TypeImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 743 "syntax.cog"
  

#line 743 "syntax.cog"
             Type type;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::TypeType > { typedef cogc::TypeTypeImpl Impl; };
} namespace cogc {


#line 1055 "check.cog"
 

#line 1058 "check.cog"
     TypeType createTypeType(

#line 1056 "check.cog"
                       

#line 1056 "check.cog"
           CheckContext

#line 1056 "check.cog"
                       * context, 

#line 1057 "check.cog"
        Type type);


#line 1065 "check.cog"
 

#line 1069 "check.cog"
     Type specializeTypeForDeclRef(

#line 1066 "check.cog"
                        

#line 1066 "check.cog"
            CheckContext

#line 1066 "check.cog"
                        * context, 

#line 1067 "check.cog"
         Type type, 

#line 1068 "check.cog"
           DeclRefVal declRef);


#line 1078 "check.cog"
 

#line 1081 "check.cog"
     Type getTypeForDeclRefImpl(

#line 1079 "check.cog"
                       

#line 1079 "check.cog"
           CheckContext

#line 1079 "check.cog"
                       * context, 

#line 1080 "check.cog"
           DeclRefVal declRef);


#line 1115 "check.cog"
 

#line 1118 "check.cog"
     Type getTypeForDeclRef(

#line 1116 "check.cog"
                       

#line 1116 "check.cog"
           CheckContext

#line 1116 "check.cog"
                       * context, 

#line 1117 "check.cog"
           DeclRefVal declRef);


#line 1128 "check.cog"
 

#line 1131 "check.cog"
     Type getTypeForDeclRef(

#line 1129 "check.cog"
                       

#line 1129 "check.cog"
           CheckContext

#line 1129 "check.cog"
                       * context, 

#line 1130 "check.cog"
           CompactDeclRef declRef);


#line 1138 "check.cog"
 

#line 1140 "check.cog"
     Type createErrorType(

#line 1139 "check.cog"
                       

#line 1139 "check.cog"
           CheckContext

#line 1139 "check.cog"
                       * context);


#line 1145 "check.cog"
 

#line 1149 "check.cog"
        Type getBuiltinType(

#line 1146 "check.cog"
                       

#line 1146 "check.cog"
           CheckContext

#line 1146 "check.cog"
                       * context, 

#line 1147 "check.cog"
       SourceLoc loc, 

#line 1148 "check.cog"
        ConstPtr<

#line 1148 "check.cog"
                 Char>  name);


#line 1178 "check.cog"
 

#line 1181 "check.cog"
     Type getResultType(

#line 1179 "check.cog"
                       

#line 1179 "check.cog"
           CheckContext

#line 1179 "check.cog"
                       * context, 

#line 1180 "check.cog"
        DeclRefValImpl<

#line 1180 "check.cog"
                       PatternDecl>  decl);


#line 1206 "check.cog"
 

#line 1209 "check.cog"
        Exp createErrorExp(

#line 1207 "check.cog"
                       

#line 1207 "check.cog"
           CheckContext

#line 1207 "check.cog"
                       * context, 

#line 1208 "check.cog"
       Exp exp);


#line 1215 "check.cog"
 

#line 1218 "check.cog"
        Exp createErrorExp(

#line 1216 "check.cog"
                       

#line 1216 "check.cog"
           CheckContext

#line 1216 "check.cog"
                       * context, 

#line 1217 "check.cog"
       SourceLoc loc);


#line 1225 "check.cog"
 

#line 1228 "check.cog"
        Bool isSameVal(

#line 1226 "check.cog"
        Val left, 

#line 1227 "check.cog"
         Val right);


#line 254 "syntax.cog"
 using SpecializationArg = struct SpecializationArgImpl* ;
struct SpecializationArgImpl : 

#line 254 "syntax.cog"
                           ObjectImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 256 "syntax.cog"
  

#line 256 "syntax.cog"
             SpecializationArg next;


#line 258 "syntax.cog"
  

#line 258 "syntax.cog"
              Decl param;


#line 259 "syntax.cog"
  

#line 259 "syntax.cog"
              Val value;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::SpecializationArg > { typedef cogc::SpecializationArgImpl Impl; };
} namespace cogc {


#line 262 "syntax.cog"
 using Specializations = struct SpecializationsImpl* ;
struct SpecializationsImpl : 

#line 262 "syntax.cog"
                         ObjectImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 264 "syntax.cog"
  

#line 264 "syntax.cog"
                       DeclRefValImpl<

#line 264 "syntax.cog"
                                      GenericDecl>  genericDeclRef;


#line 265 "syntax.cog"
  

#line 265 "syntax.cog"
             SyntaxList<

#line 265 "syntax.cog"
                        SpecializationArg>  args;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::Specializations > { typedef cogc::SpecializationsImpl Impl; };
} namespace cogc {


#line 1245 "check.cog"
 

#line 1248 "check.cog"
        Bool isSameSpecializations(

#line 1246 "check.cog"
        Specializations left, 

#line 1247 "check.cog"
            Specializations right);


#line 1285 "check.cog"
 

#line 1288 "check.cog"
        Bool isSameDeclRef(

#line 1286 "check.cog"
        ConstRef<

#line 1286 "check.cog"
                 DeclRefVal>  left, 

#line 1287 "check.cog"
         ConstRef<

#line 1287 "check.cog"
                  DeclRefVal>  right);


#line 1298 "check.cog"
 

#line 1301 "check.cog"
        Bool isSameType(

#line 1299 "check.cog"
        Type left, 

#line 1300 "check.cog"
         Type right);


#line 1323 "check.cog"
 

#line 1329 "check.cog"
        Bool tryCoerceImpl(

#line 1324 "check.cog"
                        

#line 1324 "check.cog"
            CheckContext

#line 1324 "check.cog"
                        * context, 

#line 1325 "check.cog"
               Exp fromExp, 

#line 1326 "check.cog"
                Type fromType, 

#line 1327 "check.cog"
                 

#line 1327 "check.cog"
              Exp

#line 1327 "check.cog"
                 * toExp, 

#line 1328 "check.cog"
              Type toType);


#line 1359 "check.cog"
 

#line 1364 "check.cog"
        Bool tryCoerceImpl(

#line 1360 "check.cog"
                        

#line 1360 "check.cog"
            CheckContext

#line 1360 "check.cog"
                        * context, 

#line 1361 "check.cog"
               Exp fromExp, 

#line 1362 "check.cog"
                 

#line 1362 "check.cog"
              Exp

#line 1362 "check.cog"
                 * toExp, 

#line 1363 "check.cog"
              Type toType);


#line 1383 "check.cog"
 

#line 1387 "check.cog"
        Exp coerce(

#line 1384 "check.cog"
                        

#line 1384 "check.cog"
            CheckContext

#line 1384 "check.cog"
                        * context, 

#line 1385 "check.cog"
            Exp exp, 

#line 1386 "check.cog"
             Type type);


#line 1403 "check.cog"
 

#line 1407 "check.cog"
        Bool canCoerce(

#line 1404 "check.cog"
                        

#line 1404 "check.cog"
            CheckContext

#line 1404 "check.cog"
                        * context, 

#line 1405 "check.cog"
            Exp exp, 

#line 1406 "check.cog"
             Type type);


#line 1451 "check.cog"
 void issueTooFewArgsError(

#line 1452 "check.cog"
                                 

#line 1452 "check.cog"
           OverloadResolveContext

#line 1452 "check.cog"
                                 * context);


#line 1457 "check.cog"
 void issueTooManyArgsError(

#line 1458 "check.cog"
                                 

#line 1458 "check.cog"
           OverloadResolveContext

#line 1458 "check.cog"
                                 * context);


#line 1463 "check.cog"
 

#line 1466 "check.cog"
        Bool checkOverloadCandidateArity(

#line 1464 "check.cog"
                                 

#line 1464 "check.cog"
           OverloadResolveContext

#line 1464 "check.cog"
                                 * context, 

#line 1465 "check.cog"
                Ref<

#line 1465 "check.cog"
                    OverloadCandidate>  candidate);


#line 1535 "check.cog"
 

#line 1538 "check.cog"
        Bool checkOverloadCandidateTypes(

#line 1536 "check.cog"
                                 

#line 1536 "check.cog"
           OverloadResolveContext

#line 1536 "check.cog"
                                 * context, 

#line 1537 "check.cog"
                Ref<

#line 1537 "check.cog"
                    OverloadCandidate>  candidate);


#line 1648 "check.cog"
 

#line 1651 "check.cog"
        Bool checkOverloadCandidateDirections(

#line 1649 "check.cog"
                                    

#line 1649 "check.cog"
              OverloadResolveContext

#line 1649 "check.cog"
                                    * context, 

#line 1650 "check.cog"
                Ref<

#line 1650 "check.cog"
                    OverloadCandidate>  candidate);


#line 1656 "check.cog"
 void checkOverloadCandidateImpl(

#line 1657 "check.cog"
                                    

#line 1657 "check.cog"
              OverloadResolveContext

#line 1657 "check.cog"
                                    * context, 

#line 1658 "check.cog"
                Ref<

#line 1658 "check.cog"
                    OverloadCandidate>  candidate);


#line 1675 "check.cog"
 void checkOverloadCandidate(

#line 1676 "check.cog"
                                    

#line 1676 "check.cog"
              OverloadResolveContext

#line 1676 "check.cog"
                                    * context, 

#line 1677 "check.cog"
                Ref<

#line 1677 "check.cog"
                    OverloadCandidate>  candidate);


#line 1683 "check.cog"
 

#line 1686 "check.cog"
        Int compareCandidates(

#line 1684 "check.cog"
        Ref<

#line 1684 "check.cog"
            OverloadCandidate>  left, 

#line 1685 "check.cog"
         Ref<

#line 1685 "check.cog"
             OverloadCandidate>  right);


#line 1698 "check.cog"
 void addCheckedOverloadCandidate(

#line 1699 "check.cog"
                                    

#line 1699 "check.cog"
              OverloadResolveContext

#line 1699 "check.cog"
                                    * context, 

#line 1700 "check.cog"
                Ref<

#line 1700 "check.cog"
                    OverloadCandidate>  candidate);


#line 1753 "check.cog"
 void addOverloadCandidate(

#line 1754 "check.cog"
                                    

#line 1754 "check.cog"
              OverloadResolveContext

#line 1754 "check.cog"
                                    * context, 

#line 1755 "check.cog"
                Ref<

#line 1755 "check.cog"
                    OverloadCandidate>  candidate);


#line 465 "syntax.cog"
 using SubscriptDecl = struct SubscriptDeclImpl* ;
struct SubscriptDeclImpl : 

#line 465 "syntax.cog"
                       FuncDeclBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::SubscriptDecl > { typedef cogc::SubscriptDeclImpl Impl; };
} namespace cogc {


#line 1761 "check.cog"
 void addSubscriptOverloadCandidate(

#line 1762 "check.cog"
                                    

#line 1762 "check.cog"
              OverloadResolveContext

#line 1762 "check.cog"
                                    * context, 

#line 1763 "check.cog"
              DeclRefValImpl<

#line 1763 "check.cog"
                             SubscriptDecl>  declRef);


#line 1776 "check.cog"
 void addFuncOverloadCandidate(

#line 1777 "check.cog"
                                    

#line 1777 "check.cog"
              OverloadResolveContext

#line 1777 "check.cog"
                                    * context, 

#line 1778 "check.cog"
              DeclRefValImpl<

#line 1778 "check.cog"
                             FuncDeclBase>  declRef);


#line 469 "syntax.cog"
 using InitializerDecl = struct InitializerDeclImpl* ;
struct InitializerDeclImpl : 

#line 469 "syntax.cog"
                         FuncDeclBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::InitializerDecl > { typedef cogc::InitializerDeclImpl Impl; };
} namespace cogc {


#line 1789 "check.cog"
 void addInitializerOverloadCandidate(

#line 1790 "check.cog"
                                     

#line 1790 "check.cog"
               OverloadResolveContext

#line 1790 "check.cog"
                                     * context, 

#line 1791 "check.cog"
             Type type, 

#line 1792 "check.cog"
               DeclRefValImpl<

#line 1792 "check.cog"
                              InitializerDecl>  declRef);


#line 1800 "check.cog"
 

#line 1805 "check.cog"
        Exp createDeclRefExp(

#line 1801 "check.cog"
                       

#line 1801 "check.cog"
           CheckContext

#line 1801 "check.cog"
                       * context, 

#line 1802 "check.cog"
           CompactDeclRef declRef, 

#line 1803 "check.cog"
       SourceLoc loc, 

#line 1804 "check.cog"
           Exp baseExp);


#line 1825 "check.cog"
 

#line 1830 "check.cog"
        Exp createDeclRefExp(

#line 1826 "check.cog"
                       

#line 1826 "check.cog"
           CheckContext

#line 1826 "check.cog"
                       * context, 

#line 1827 "check.cog"
           DeclRefVal declRef, 

#line 1828 "check.cog"
       SourceLoc loc, 

#line 1829 "check.cog"
           Exp baseExp);


#line 1849 "check.cog"
 

#line 1853 "check.cog"
        Exp createDeclRefExp(

#line 1850 "check.cog"
                       

#line 1850 "check.cog"
           CheckContext

#line 1850 "check.cog"
                       * context, 

#line 1851 "check.cog"
           DeclRefVal declRef, 

#line 1852 "check.cog"
       SourceLoc loc);


#line 1858 "check.cog"
 

#line 1861 "check.cog"
     Val getGenericArgVal(

#line 1859 "check.cog"
                       

#line 1859 "check.cog"
           CheckContext

#line 1859 "check.cog"
                       * context, 

#line 1860 "check.cog"
        Exp expr);


#line 1878 "check.cog"
 

#line 1881 "check.cog"
     Exp completeOverloadCandidate(

#line 1879 "check.cog"
                                         

#line 1879 "check.cog"
                   OverloadResolveContext

#line 1879 "check.cog"
                                         * overloadContext, 

#line 1880 "check.cog"
                              

#line 1880 "check.cog"
             OverloadCandidate

#line 1880 "check.cog"
                              * candidate);


#line 1938 "check.cog"
 

#line 1940 "check.cog"
        Exp completeOverload(

#line 1939 "check.cog"
                                            

#line 1939 "check.cog"
                      OverloadResolveContext

#line 1939 "check.cog"
                                            * overloadContext);


#line 2026 "check.cog"
 

#line 2028 "check.cog"
        Bool isError(

#line 2027 "check.cog"
        Type type);


#line 2033 "check.cog"
 

#line 2036 "check.cog"
        Bool isError(

#line 2034 "check.cog"
                       

#line 2034 "check.cog"
           CheckContext

#line 2034 "check.cog"
                       * context, 

#line 2035 "check.cog"
       Exp exp);


#line 2041 "check.cog"
 void addTypeOverloadCandidates(

#line 2042 "check.cog"
                                 

#line 2042 "check.cog"
           OverloadResolveContext

#line 2042 "check.cog"
                                 * context, 

#line 2043 "check.cog"
           Exp typeExp, 

#line 2044 "check.cog"
        Type type);


#line 417 "syntax.cog"
 using GenericParamDecl = struct GenericParamDeclImpl* ;
struct GenericParamDeclImpl : 

#line 417 "syntax.cog"
                          TypeVarDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::GenericParamDecl > { typedef cogc::GenericParamDeclImpl Impl; };
} namespace cogc {


#line 2064 "check.cog"
 struct GenericInferenceArg
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 2066 "check.cog"
  

#line 2066 "check.cog"
                    DeclRefValImpl<

#line 2066 "check.cog"
                                   GenericParamDecl>  paramDeclRef;


#line 2067 "check.cog"
  

#line 2067 "check.cog"
           Val val = 

#line 2067 "check.cog"
                 nullptr;
};


#line 2070 "check.cog"
 struct GenericInferenceContext
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 2072 "check.cog"
  

#line 2072 "check.cog"
                                

#line 2072 "check.cog"
                    CheckContext

#line 2072 "check.cog"
                                * checkContext;


#line 2073 "check.cog"
  

#line 2073 "check.cog"
                               

#line 2073 "check.cog"
            GenericInferenceArg

#line 2073 "check.cog"
                               * args;


#line 2074 "check.cog"
  

#line 2074 "check.cog"
                Int argCount;
};


#line 2077 "check.cog"
 

#line 2081 "check.cog"
        Bool doInferenceForVals(

#line 2078 "check.cog"
                                  

#line 2078 "check.cog"
           GenericInferenceContext

#line 2078 "check.cog"
                                  * context, 

#line 2079 "check.cog"
          Val argVal, 

#line 2080 "check.cog"
            Val paramVal);


#line 2095 "check.cog"
 

#line 2099 "check.cog"
        Bool doInferenceForSpecializations(

#line 2096 "check.cog"
                                  

#line 2096 "check.cog"
           GenericInferenceContext

#line 2096 "check.cog"
                                  * context, 

#line 2097 "check.cog"
              Specializations argSpec, 

#line 2098 "check.cog"
                Specializations paramSpec);


#line 2132 "check.cog"
 

#line 2136 "check.cog"
        Bool doInferenceForDeclRefs(

#line 2133 "check.cog"
                                    

#line 2133 "check.cog"
             GenericInferenceContext

#line 2133 "check.cog"
                                    * context, 

#line 2134 "check.cog"
                  DeclRefVal argDeclRef, 

#line 2135 "check.cog"
                    DeclRefVal paramDeclRef);


#line 2153 "check.cog"
 

#line 2156 "check.cog"
                        

#line 2156 "check.cog"
     GenericInferenceArg

#line 2156 "check.cog"
                        * findGenericInferenceArg(

#line 2154 "check.cog"
                                  

#line 2154 "check.cog"
           GenericInferenceContext

#line 2154 "check.cog"
                                  * context, 

#line 2155 "check.cog"
                DeclRefValImpl<

#line 2155 "check.cog"
                               GenericParamDecl>  paramDeclRef);


#line 2166 "check.cog"
 

#line 2170 "check.cog"
        Bool doInferenceForTypes(

#line 2167 "check.cog"
                                     

#line 2167 "check.cog"
              GenericInferenceContext

#line 2167 "check.cog"
                                     * context, 

#line 2168 "check.cog"
              Type argType, 

#line 2169 "check.cog"
                Type paramType);


#line 490 "syntax.cog"
 using LetDecl = struct LetDeclImpl* ;
struct LetDeclImpl : 

#line 490 "syntax.cog"
                 VarDeclBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::LetDecl > { typedef cogc::LetDeclImpl Impl; };
} namespace cogc {


#line 494 "syntax.cog"
 using ParamDecl = struct ParamDeclImpl* ;
struct ParamDeclImpl : 

#line 494 "syntax.cog"
                   LetDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ParamDecl > { typedef cogc::ParamDeclImpl Impl; };
} namespace cogc {


#line 2211 "check.cog"
 

#line 2215 "check.cog"
        Bool doInferenceForArgAndParam(

#line 2212 "check.cog"
                                     

#line 2212 "check.cog"
              GenericInferenceContext

#line 2212 "check.cog"
                                     * context, 

#line 2213 "check.cog"
              Exp argExpr, 

#line 2214 "check.cog"
                   DeclRefValImpl<

#line 2214 "check.cog"
                                  ParamDecl>  paramDeclRef);


#line 2223 "check.cog"
 

#line 2227 "check.cog"
        Specializations inferGenericArgsForApp(

#line 2224 "check.cog"
                          

#line 2224 "check.cog"
              CheckContext

#line 2224 "check.cog"
                          * context, 

#line 2225 "check.cog"
                     DeclRefValImpl<

#line 2225 "check.cog"
                                    GenericDecl>  genericDeclRef, 

#line 2226 "check.cog"
              AppExpBase appExpr);


#line 2311 "check.cog"
 void addGenericOverloadCandidate(

#line 2312 "check.cog"
                                    

#line 2312 "check.cog"
              OverloadResolveContext

#line 2312 "check.cog"
                                    * context, 

#line 2313 "check.cog"
                     DeclRefValImpl<

#line 2313 "check.cog"
                                    GenericDecl>  genericDeclRef);


#line 2342 "check.cog"
 void addDeclRefOverloadCandidates(

#line 2343 "check.cog"
                                    

#line 2343 "check.cog"
              OverloadResolveContext

#line 2343 "check.cog"
                                    * context, 

#line 2344 "check.cog"
          DeclRefVal val);


#line 2362 "check.cog"
 

#line 2365 "check.cog"
     Val findSpecialization(

#line 2363 "check.cog"
                   Specializations specializations, 

#line 2364 "check.cog"
           Decl decl);


#line 2378 "check.cog"
 

#line 2381 "check.cog"
     DeclRefVal specializeDeclRef(

#line 2379 "check.cog"
           DeclRefVal declRef, 

#line 2380 "check.cog"
                   Specializations specializations);


#line 2410 "check.cog"
 

#line 2413 "check.cog"
     Type specializeType(

#line 2411 "check.cog"
        Type type, 

#line 2412 "check.cog"
                   Specializations specializations);


#line 2437 "check.cog"
 void ensureDecl(

#line 2438 "check.cog"
                       

#line 2438 "check.cog"
           CheckContext

#line 2438 "check.cog"
                       * context, 

#line 2439 "check.cog"
        Decl decl, 

#line 2440 "check.cog"
         DeclCheckState state);


#line 2448 "check.cog"
 void ensureDecl(

#line 2449 "check.cog"
                       

#line 2449 "check.cog"
           CheckContext

#line 2449 "check.cog"
                       * context, 

#line 2450 "check.cog"
        Decl decl);


#line 3 "diagnostic.cog"
 enum Severity : int
{
kSeverity_Note,
kSeverity_Warning,
kSeverity_Error,
kSeverity_Fatal,
};


#line 11 "diagnostic.cog"
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
kDiagnostic_tooFewArgs,
kDiagnostic_tooManyArgs,
};


#line 44 "diagnostic.cog"
 struct ArgTypeList
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 46 "diagnostic.cog"
  

#line 46 "diagnostic.cog"
             Arg args;


#line 48 "diagnostic.cog"
  ArgTypeList();


#line 53 "diagnostic.cog"
  ArgTypeList(

#line 53 "diagnostic.cog"
             Arg args);
};


#line 59 "diagnostic.cog"
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


#line 12 "token.cog"
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


#line 5 "string.cog"
 struct StringSpan
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 7 "string.cog"
  

#line 7 "string.cog"
              Ptr<

#line 7 "string.cog"
                  Char>  begin;


#line 8 "string.cog"
  

#line 8 "string.cog"
            Ptr<

#line 8 "string.cog"
                Char>  end;


#line 10 "string.cog"
  StringSpan();


#line 13 "string.cog"
  StringSpan(

#line 14 "string.cog"
          Ptr<

#line 14 "string.cog"
              Char>  begin, 

#line 15 "string.cog"
        Ptr<

#line 15 "string.cog"
            Char>  end);


#line 21 "string.cog"
  StringSpan(

#line 22 "string.cog"
          ConstPtr<

#line 22 "string.cog"
                   Char>  begin, 

#line 23 "string.cog"
        ConstPtr<

#line 23 "string.cog"
                 Char>  end);


#line 29 "string.cog"
  

#line 29 "string.cog"
                      Size getLength();


#line 34 "string.cog"
  

#line 34 "string.cog"
                                       Bool endsWith(

#line 34 "string.cog"
                        StringSpan suffix);


#line 44 "string.cog"
  

#line 44 "string.cog"
                                          Bool trimFromEnd(

#line 44 "string.cog"
                           StringSpan suffix);


#line 54 "string.cog"
  

#line 54 "string.cog"
                                   StringSpan suffixAfterLast(

#line 54 "string.cog"
                          Char c);
};


#line 70 "diagnostic.cog"
 struct DiagnosticArg
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 72 "diagnostic.cog"
  DiagnosticArg(

#line 72 "diagnostic.cog"
            Int val);


#line 78 "diagnostic.cog"
  DiagnosticArg(

#line 78 "diagnostic.cog"
            TokenCode val);


#line 84 "diagnostic.cog"
  DiagnosticArg(

#line 84 "diagnostic.cog"
            Ptr<

#line 84 "diagnostic.cog"
                Name>  val);


#line 90 "diagnostic.cog"
  DiagnosticArg(

#line 90 "diagnostic.cog"
            StringSpan val);


#line 98 "diagnostic.cog"
  DiagnosticArg(

#line 98 "diagnostic.cog"
            ConstPtr<

#line 98 "diagnostic.cog"
                     Char>  val);


#line 104 "diagnostic.cog"
  DiagnosticArg(

#line 104 "diagnostic.cog"
            Type val);


#line 110 "diagnostic.cog"
  DiagnosticArg(

#line 110 "diagnostic.cog"
            DeclRefVal val);


#line 116 "diagnostic.cog"
  DiagnosticArg(

#line 116 "diagnostic.cog"
            ConstRef<

#line 116 "diagnostic.cog"
                     ArgTypeList>  val);


#line 122 "diagnostic.cog"
  

#line 122 "diagnostic.cog"
              DiagnosticArgFlavor flavor;


#line 124 "diagnostic.cog"
   

#line 124 "diagnostic.cog"
               Int intVal;


#line 125 "diagnostic.cog"
   

#line 125 "diagnostic.cog"
                     TokenCode tokenCodeVal;


#line 126 "diagnostic.cog"
   

#line 126 "diagnostic.cog"
                 Ptr<

#line 126 "diagnostic.cog"
                     Name>  nameVal;


#line 127 "diagnostic.cog"
   

#line 127 "diagnostic.cog"
                       StringSpan stringSpanVal;


#line 128 "diagnostic.cog"
   

#line 128 "diagnostic.cog"
                 Type typeVal;


#line 130 "diagnostic.cog"
   

#line 130 "diagnostic.cog"
                    DeclRefVal declRefVal;


#line 131 "diagnostic.cog"
   

#line 131 "diagnostic.cog"
                        ArgTypeList argTypeListVal;
};


#line 135 "diagnostic.cog"
 void diagnose(

#line 136 "diagnostic.cog"
        Ptr<

#line 136 "diagnostic.cog"
            DiagnosticSink>  sink, 

#line 137 "diagnostic.cog"
       SourceLoc loc, 

#line 138 "diagnostic.cog"
      DiagnosticID id);


#line 143 "diagnostic.cog"
 void diagnose(

#line 144 "diagnostic.cog"
        Ptr<

#line 144 "diagnostic.cog"
            DiagnosticSink>  sink, 

#line 145 "diagnostic.cog"
       SourceLoc loc, 

#line 146 "diagnostic.cog"
      DiagnosticID id, 

#line 147 "diagnostic.cog"
        DiagnosticArg arg0);


#line 154 "diagnostic.cog"
 void diagnose(

#line 155 "diagnostic.cog"
        Ptr<

#line 155 "diagnostic.cog"
            DiagnosticSink>  sink, 

#line 156 "diagnostic.cog"
       SourceLoc loc, 

#line 157 "diagnostic.cog"
      DiagnosticID id, 

#line 158 "diagnostic.cog"
        DiagnosticArg arg0, 

#line 159 "diagnostic.cog"
        DiagnosticArg arg1);


#line 232 "diagnostic.cog"
 void printDeclRef(

#line 233 "diagnostic.cog"
              

#line 233 "diagnostic.cog"
          FILE

#line 233 "diagnostic.cog"
              * stream, 

#line 234 "diagnostic.cog"
           DeclRefVal declRef);


#line 239 "diagnostic.cog"
 void printType(

#line 240 "diagnostic.cog"
              

#line 240 "diagnostic.cog"
          FILE

#line 240 "diagnostic.cog"
              * stream, 

#line 241 "diagnostic.cog"
        Type type);


#line 275 "diagnostic.cog"
 void printDiagnosticArg(

#line 276 "diagnostic.cog"
       ConstPtr<

#line 276 "diagnostic.cog"
                DiagnosticArg>  arg);


#line 334 "diagnostic.cog"
 void diagnoseImpl(

#line 335 "diagnostic.cog"
        Ptr<

#line 335 "diagnostic.cog"
            DiagnosticSink>  sink, 

#line 336 "diagnostic.cog"
       SourceLoc loc, 

#line 337 "diagnostic.cog"
      DiagnosticID id, 

#line 338 "diagnostic.cog"
            int argCount, 

#line 339 "diagnostic.cog"
        Ptr<

#line 339 "diagnostic.cog"
            Ptr<

#line 339 "diagnostic.cog"
                DiagnosticArg> >  args);


#line 5 "emit.cog"
 struct EmitContext
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 7 "emit.cog"
  

#line 7 "emit.cog"
               Session session;


#line 8 "emit.cog"
  

#line 8 "emit.cog"
                  

#line 8 "emit.cog"
              FILE

#line 8 "emit.cog"
                  * stream;


#line 9 "emit.cog"
  

#line 9 "emit.cog"
                              Int suppressLineDirective;
};


#line 12 "emit.cog"
 

#line 12 "emit.cog"
                                                      

#line 12 "emit.cog"
                                        DiagnosticSink

#line 12 "emit.cog"
                                                      * getSink(

#line 12 "emit.cog"
                                  

#line 12 "emit.cog"
                       EmitContext

#line 12 "emit.cog"
                                  * context);


#line 17 "emit.cog"
 enum DeclEmitMode : int
{
kDeclEmitMode_MinimalForward,
kDeclEmitMode_Forward,
kDeclEmitMode_Full,
};


#line 24 "emit.cog"
 void emit(

#line 25 "emit.cog"
                      

#line 25 "emit.cog"
           EmitContext

#line 25 "emit.cog"
                      * context, 

#line 26 "emit.cog"
        StringSpan text);


#line 31 "emit.cog"
 void emit(

#line 32 "emit.cog"
                      

#line 32 "emit.cog"
           EmitContext

#line 32 "emit.cog"
                      * context, 

#line 33 "emit.cog"
            

#line 33 "emit.cog"
        Char

#line 33 "emit.cog"
            * text);


#line 87 "string.cog"
 struct TerminatedStringSpan : 

#line 87 "string.cog"
                               StringSpan
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 92 "string.cog"
  TerminatedStringSpan(

#line 92 "string.cog"
             ConstPtr<

#line 92 "string.cog"
                      Char>  text);


#line 99 "string.cog"
  TerminatedStringSpan();


#line 102 "string.cog"
  TerminatedStringSpan(

#line 103 "string.cog"
          Ptr<

#line 103 "string.cog"
              Char>  begin, 

#line 104 "string.cog"
        Ptr<

#line 104 "string.cog"
            Char>  end);


#line 110 "string.cog"
  

#line 110 "string.cog"
                         StringSpan asStringSpan();
};


#line 3 "name.cog"
 struct Name
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 5 "name.cog"
  

#line 5 "name.cog"
            TerminatedStringSpan text;


#line 6 "name.cog"
  

#line 6 "name.cog"
            Ptr<

#line 6 "name.cog"
                Name>  next;
};


#line 38 "emit.cog"
 void emit(

#line 39 "emit.cog"
                      

#line 39 "emit.cog"
           EmitContext

#line 39 "emit.cog"
                      * context, 

#line 40 "emit.cog"
            

#line 40 "emit.cog"
        Name

#line 40 "emit.cog"
            * name);


#line 45 "emit.cog"
 void emitType(

#line 46 "emit.cog"
                      

#line 46 "emit.cog"
           EmitContext

#line 46 "emit.cog"
                      * context, 

#line 47 "emit.cog"
        Exp type);


#line 58 "emit.cog"
 void emitVal(

#line 59 "emit.cog"
                         

#line 59 "emit.cog"
              EmitContext

#line 59 "emit.cog"
                         * context, 

#line 60 "emit.cog"
          Val val);


#line 68 "emit.cog"
 void emitGenericQuals(

#line 69 "emit.cog"
                      

#line 69 "emit.cog"
           EmitContext

#line 69 "emit.cog"
                      * context, 

#line 70 "emit.cog"
        Decl decl);


#line 99 "emit.cog"
 void emitDeclName(

#line 100 "emit.cog"
                      

#line 100 "emit.cog"
           EmitContext

#line 100 "emit.cog"
                      * context, 

#line 101 "emit.cog"
        Decl decl, 

#line 102 "emit.cog"
        DeclEmitMode mode, 

#line 103 "emit.cog"
                 Bool includeModule);


#line 144 "emit.cog"
 void emitDeclName(

#line 145 "emit.cog"
                      

#line 145 "emit.cog"
           EmitContext

#line 145 "emit.cog"
                      * context, 

#line 146 "emit.cog"
        Decl decl, 

#line 147 "emit.cog"
        DeclEmitMode mode);


#line 152 "emit.cog"
 void emitDeclNameAndGenericArgs(

#line 153 "emit.cog"
                      

#line 153 "emit.cog"
           EmitContext

#line 153 "emit.cog"
                      * context, 

#line 154 "emit.cog"
        Decl decl, 

#line 155 "emit.cog"
        DeclEmitMode mode);


#line 187 "emit.cog"
 void emitDeclarator(

#line 188 "emit.cog"
                      

#line 188 "emit.cog"
           EmitContext

#line 188 "emit.cog"
                      * context, 

#line 189 "emit.cog"
        Exp type, 

#line 190 "emit.cog"
        Decl decl, 

#line 191 "emit.cog"
        DeclEmitMode mode);


#line 199 "emit.cog"
 void emitDeclarator(

#line 200 "emit.cog"
                      

#line 200 "emit.cog"
           EmitContext

#line 200 "emit.cog"
                      * context, 

#line 201 "emit.cog"
        TypeExp type, 

#line 202 "emit.cog"
        Decl decl, 

#line 203 "emit.cog"
        DeclEmitMode mode);


#line 210 "emit.cog"
 void emitBinaryExp(

#line 211 "emit.cog"
                         

#line 211 "emit.cog"
              EmitContext

#line 211 "emit.cog"
                         * context, 

#line 212 "emit.cog"
          AppExpBase exp, 

#line 213 "emit.cog"
             

#line 213 "emit.cog"
         Char

#line 213 "emit.cog"
             * op);


#line 222 "emit.cog"
 void emitStringVal(

#line 223 "emit.cog"
                         

#line 223 "emit.cog"
              EmitContext

#line 223 "emit.cog"
                         * context, 

#line 224 "emit.cog"
          StringSpan str);


#line 252 "emit.cog"
 void emitStringVal(

#line 253 "emit.cog"
                         

#line 253 "emit.cog"
              EmitContext

#line 253 "emit.cog"
                         * context, 

#line 254 "emit.cog"
          String str);


#line 260 "emit.cog"
 void emitExp(

#line 261 "emit.cog"
                         

#line 261 "emit.cog"
              EmitContext

#line 261 "emit.cog"
                         * context, 

#line 262 "emit.cog"
       Exp exp);


#line 388 "emit.cog"
 void emitBlockStmt(

#line 389 "emit.cog"
                      

#line 389 "emit.cog"
           EmitContext

#line 389 "emit.cog"
                      * context, 

#line 390 "emit.cog"
        BlockStmt stmt);


#line 400 "emit.cog"
 void emitBlockStmt(

#line 401 "emit.cog"
                         

#line 401 "emit.cog"
              EmitContext

#line 401 "emit.cog"
                         * context, 

#line 402 "emit.cog"
        Stmt stmt);


#line 416 "emit.cog"
 void emit(

#line 417 "emit.cog"
                      

#line 417 "emit.cog"
           EmitContext

#line 417 "emit.cog"
                      * context, 

#line 418 "emit.cog"
         Int value);


#line 425 "emit.cog"
 void emitLineDirective(

#line 426 "emit.cog"
                      

#line 426 "emit.cog"
           EmitContext

#line 426 "emit.cog"
                      * context, 

#line 427 "emit.cog"
       Syntax syn);


#line 453 "emit.cog"
 void emitStmt(

#line 454 "emit.cog"
                      

#line 454 "emit.cog"
           EmitContext

#line 454 "emit.cog"
                      * context, 

#line 455 "emit.cog"
        Stmt stmt);


#line 590 "emit.cog"
 void emitClassDecl(

#line 591 "emit.cog"
                      

#line 591 "emit.cog"
           EmitContext

#line 591 "emit.cog"
                      * context, 

#line 592 "emit.cog"
              ClassDecl aggDecl, 

#line 593 "emit.cog"
        DeclEmitMode mode);


#line 660 "emit.cog"
 void emitStructDecl(

#line 661 "emit.cog"
                      

#line 661 "emit.cog"
           EmitContext

#line 661 "emit.cog"
                      * context, 

#line 662 "emit.cog"
              StructDecl aggDecl, 

#line 663 "emit.cog"
        DeclEmitMode mode);


#line 704 "emit.cog"
 void emitVarDecl(

#line 705 "emit.cog"
                      

#line 705 "emit.cog"
           EmitContext

#line 705 "emit.cog"
                      * context, 

#line 706 "emit.cog"
           VarDeclBase varDecl, 

#line 707 "emit.cog"
        DeclEmitMode mode);


#line 729 "emit.cog"
 void emitParamDecl(

#line 730 "emit.cog"
                      

#line 730 "emit.cog"
           EmitContext

#line 730 "emit.cog"
                      * context, 

#line 731 "emit.cog"
             ParamDecl paramDecl);


#line 461 "syntax.cog"
 using FuncDecl = struct FuncDeclImpl* ;
struct FuncDeclImpl : 

#line 461 "syntax.cog"
                  FuncDeclBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::FuncDecl > { typedef cogc::FuncDeclImpl Impl; };
} namespace cogc {


#line 736 "emit.cog"
 void emitFuncDecl(

#line 737 "emit.cog"
                      

#line 737 "emit.cog"
           EmitContext

#line 737 "emit.cog"
                      * context, 

#line 738 "emit.cog"
            FuncDecl funcDecl, 

#line 739 "emit.cog"
        DeclEmitMode mode);


#line 789 "emit.cog"
 void emitInitializerDecl(

#line 790 "emit.cog"
                         

#line 790 "emit.cog"
              EmitContext

#line 790 "emit.cog"
                         * context, 

#line 791 "emit.cog"
               InitializerDecl initDecl, 

#line 792 "emit.cog"
        DeclEmitMode mode);


#line 846 "emit.cog"
 void emitSubscriptDecl(

#line 847 "emit.cog"
                      

#line 847 "emit.cog"
           EmitContext

#line 847 "emit.cog"
                      * context, 

#line 848 "emit.cog"
        SubscriptDecl decl, 

#line 849 "emit.cog"
        DeclEmitMode mode);


#line 907 "emit.cog"
 void emitDecl(

#line 908 "emit.cog"
                      

#line 908 "emit.cog"
           EmitContext

#line 908 "emit.cog"
                      * context, 

#line 909 "emit.cog"
        Decl decl, 

#line 910 "emit.cog"
        DeclEmitMode mode);


#line 1028 "emit.cog"
 void emitDecls(

#line 1029 "emit.cog"
                      

#line 1029 "emit.cog"
           EmitContext

#line 1029 "emit.cog"
                      * context, 

#line 1030 "emit.cog"
                 ContainerDecl containerDecl, 

#line 1031 "emit.cog"
        DeclEmitMode mode);


#line 83 "syntax.cog"
 template<typename T >
struct SyntaxListBuilder : 

#line 83 "syntax.cog"
                               SyntaxList<

#line 83 "syntax.cog"
                                          T> 
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 85 "syntax.cog"
  

#line 85 "syntax.cog"
             Ptr<

#line 85 "syntax.cog"
                 T>  link;


#line 87 "syntax.cog"
  SyntaxListBuilder();


#line 92 "syntax.cog"
  SyntaxListBuilder(

#line 92 "syntax.cog"
              SyntaxList<

#line 92 "syntax.cog"
                         T>  other);


#line 100 "syntax.cog"
  void adjust();


#line 108 "syntax.cog"
  void add(

#line 108 "syntax.cog"
                    T element);


#line 116 "syntax.cog"
  void append(

#line 116 "syntax.cog"
                     SyntaxListBuilder<

#line 116 "syntax.cog"
                                       T>  other);
};


#line 1039 "emit.cog"
 struct DeclSortContext
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 1041 "emit.cog"
  

#line 1041 "emit.cog"
                   SyntaxListBuilder<

#line 1041 "emit.cog"
                                     Decl>  sortedDecls;


#line 1042 "emit.cog"
  

#line 1042 "emit.cog"
                     Decl unsortedDecls;
};


#line 1045 "emit.cog"
 void addDecl(

#line 1046 "emit.cog"
                          

#line 1046 "emit.cog"
           DeclSortContext

#line 1046 "emit.cog"
                          * context, 

#line 1047 "emit.cog"
        Decl decl);


#line 1053 "emit.cog"
 void addDecl(

#line 1054 "emit.cog"
                          

#line 1054 "emit.cog"
           DeclSortContext

#line 1054 "emit.cog"
                          * context, 

#line 1055 "emit.cog"
               

#line 1055 "emit.cog"
           Decl

#line 1055 "emit.cog"
               * declPtr);


#line 1064 "emit.cog"
 void addDependencies(

#line 1065 "emit.cog"
                          

#line 1065 "emit.cog"
           DeclSortContext

#line 1065 "emit.cog"
                          * context, 

#line 1066 "emit.cog"
        Decl decl);


#line 1069 "emit.cog"
 void addDependencies(

#line 1070 "emit.cog"
                          

#line 1070 "emit.cog"
           DeclSortContext

#line 1070 "emit.cog"
                          * context, 

#line 1071 "emit.cog"
            

#line 1071 "emit.cog"
        Name

#line 1071 "emit.cog"
            * name);


#line 1127 "emit.cog"
 void addDependencies(

#line 1128 "emit.cog"
                          

#line 1128 "emit.cog"
           DeclSortContext

#line 1128 "emit.cog"
                          * context, 

#line 1129 "emit.cog"
       Exp exp);


#line 1157 "emit.cog"
 void addDependencies(

#line 1158 "emit.cog"
                          

#line 1158 "emit.cog"
           DeclSortContext

#line 1158 "emit.cog"
                          * context, 

#line 1159 "emit.cog"
           TypeExp typeExp);


#line 1164 "emit.cog"
 void addDependencies(

#line 1165 "emit.cog"
                          

#line 1165 "emit.cog"
           DeclSortContext

#line 1165 "emit.cog"
                          * context, 

#line 1166 "emit.cog"
        Decl decl);


#line 1192 "emit.cog"
 void sortDecls(

#line 1193 "emit.cog"
                      

#line 1193 "emit.cog"
           EmitContext

#line 1193 "emit.cog"
                      * context, 

#line 1194 "emit.cog"
             ContainerDecl container);


#line 1212 "emit.cog"
 void emitModuleInner(

#line 1213 "emit.cog"
             Session session, 

#line 1214 "emit.cog"
                  TerminatedStringSpan moduleNameText, 

#line 1215 "emit.cog"
               Ptr<

#line 1215 "emit.cog"
                   Char>  outputPath, 

#line 1216 "emit.cog"
           Ptr<

#line 1216 "emit.cog"
               Char>  extra);


#line 1291 "emit.cog"
 void emitModule(

#line 1292 "emit.cog"
           Session session);


#line 5 "eval.cog"
 void evalModule(

#line 6 "eval.cog"
           Session session);


#line 26 "source.cog"
 struct SourceFile
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 29 "source.cog"
  

#line 29 "source.cog"
             Ptr<

#line 29 "source.cog"
                 SourceFile>  next;


#line 32 "source.cog"
  

#line 32 "source.cog"
             TerminatedStringSpan path;


#line 35 "source.cog"
  

#line 35 "source.cog"
             TerminatedStringSpan text;


#line 38 "source.cog"
  

#line 38 "source.cog"
                 SourceLoc firstLoc;


#line 39 "source.cog"
  

#line 39 "source.cog"
                SourceLoc lastLoc;
};


#line 3 "token.cog"
 typedef 

#line 3 "token.cog"
                        UInt16 TokenFlags;


#line 3 "lexer.cog"
 struct Lexer
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 5 "lexer.cog"
  

#line 5 "lexer.cog"
               Session session;


#line 6 "lexer.cog"
  

#line 6 "lexer.cog"
                      

#line 6 "lexer.cog"
            SourceFile

#line 6 "lexer.cog"
                      * file;


#line 8 "lexer.cog"
  

#line 8 "lexer.cog"
              ConstPtr<

#line 8 "lexer.cog"
                       Char>  cursor;


#line 9 "lexer.cog"
  

#line 9 "lexer.cog"
                   UIntPtr rawStartPtr;


#line 10 "lexer.cog"
  

#line 10 "lexer.cog"
                  TokenFlags tokenFlags;
};


#line 13 "lexer.cog"
 void initializeLexer(

#line 14 "lexer.cog"
              

#line 14 "lexer.cog"
         Lexer

#line 14 "lexer.cog"
              * lexer, 

#line 15 "lexer.cog"
           Session session, 

#line 16 "lexer.cog"
                  

#line 16 "lexer.cog"
        SourceFile

#line 16 "lexer.cog"
                  * file);


#line 29 "lexer.cog"
 void finalizeLexer(

#line 30 "lexer.cog"
              

#line 30 "lexer.cog"
         Lexer

#line 30 "lexer.cog"
              * lexer);


#line 34 "lexer.cog"
 

#line 36 "lexer.cog"
                   

#line 36 "lexer.cog"
     DiagnosticSink

#line 36 "lexer.cog"
                   * getSink(

#line 35 "lexer.cog"
              

#line 35 "lexer.cog"
         Lexer

#line 35 "lexer.cog"
              * lexer);


#line 41 "lexer.cog"
 

#line 41 "lexer.cog"
                                 Int peekByte(

#line 41 "lexer.cog"
                           

#line 41 "lexer.cog"
                      Lexer

#line 41 "lexer.cog"
                           * lexer);


#line 46 "lexer.cog"
 

#line 46 "lexer.cog"
                                      Int peekCodePoint(

#line 46 "lexer.cog"
                                

#line 46 "lexer.cog"
                           Lexer

#line 46 "lexer.cog"
                                * lexer);


#line 52 "lexer.cog"
 

#line 52 "lexer.cog"
                                SourceLoc peekLoc(

#line 52 "lexer.cog"
                          

#line 52 "lexer.cog"
                     Lexer

#line 52 "lexer.cog"
                          * lexer);


#line 59 "lexer.cog"
 void advanceByte(

#line 59 "lexer.cog"
                              

#line 59 "lexer.cog"
                         Lexer

#line 59 "lexer.cog"
                              * lexer);


#line 65 "lexer.cog"
 

#line 65 "lexer.cog"
                         Bool isAlpha(

#line 65 "lexer.cog"
                 Int c);


#line 72 "lexer.cog"
 

#line 72 "lexer.cog"
                         Bool isDigit(

#line 72 "lexer.cog"
                 Int c);


#line 77 "lexer.cog"
 

#line 77 "lexer.cog"
                            Bool isAlphaNum(

#line 77 "lexer.cog"
                    Int c);


#line 82 "lexer.cog"
 

#line 82 "lexer.cog"
                                Bool isOperatorChar(

#line 82 "lexer.cog"
                        Int c);


#line 87 "lexer.cog"
 

#line 87 "lexer.cog"
                              Bool isWhiteSpace(

#line 87 "lexer.cog"
                      Int c);


#line 92 "lexer.cog"
 void lexDigits(

#line 93 "lexer.cog"
                 

#line 93 "lexer.cog"
            Lexer

#line 93 "lexer.cog"
                 * lexer, 

#line 94 "lexer.cog"
           Int base);


#line 121 "lexer.cog"
 

#line 124 "lexer.cog"
     Bool peekNumberExponentMarker(

#line 122 "lexer.cog"
                 

#line 122 "lexer.cog"
            Lexer

#line 122 "lexer.cog"
                 * lexer, 

#line 123 "lexer.cog"
        Int base);


#line 139 "lexer.cog"
 

#line 142 "lexer.cog"
     TokenCode lexNumber(

#line 140 "lexer.cog"
                 

#line 140 "lexer.cog"
            Lexer

#line 140 "lexer.cog"
                 * lexer, 

#line 141 "lexer.cog"
           Int base);


#line 183 "lexer.cog"
 

#line 185 "lexer.cog"
     TokenCode lexIdentifier(

#line 184 "lexer.cog"
              

#line 184 "lexer.cog"
         Lexer

#line 184 "lexer.cog"
              * lexer);


#line 198 "lexer.cog"
 

#line 200 "lexer.cog"
     TokenCode lexOperator(

#line 199 "lexer.cog"
              

#line 199 "lexer.cog"
         Lexer

#line 199 "lexer.cog"
              * lexer);


#line 213 "lexer.cog"
 

#line 215 "lexer.cog"
     TokenCode lexLineComment(

#line 214 "lexer.cog"
              

#line 214 "lexer.cog"
         Lexer

#line 214 "lexer.cog"
              * lexer);


#line 232 "lexer.cog"
 

#line 234 "lexer.cog"
     TokenCode lexBlockComment(

#line 233 "lexer.cog"
              

#line 233 "lexer.cog"
         Lexer

#line 233 "lexer.cog"
              * lexer);


#line 264 "lexer.cog"
 

#line 266 "lexer.cog"
     TokenCode lexWhiteSpace(

#line 265 "lexer.cog"
              

#line 265 "lexer.cog"
         Lexer

#line 265 "lexer.cog"
              * lexer);


#line 280 "lexer.cog"
 void lexStringLiteral(

#line 281 "lexer.cog"
              

#line 281 "lexer.cog"
         Lexer

#line 281 "lexer.cog"
              * lexer, 

#line 282 "lexer.cog"
             Int delimeter);


#line 325 "lexer.cog"
 

#line 327 "lexer.cog"
     TokenCode lexTokenImpl(

#line 326 "lexer.cog"
              

#line 326 "lexer.cog"
         Lexer

#line 326 "lexer.cog"
              * lexer);


#line 55 "token.cog"
 struct Token
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 57 "token.cog"
  

#line 57 "token.cog"
               UIntPtr rawLoc;


#line 58 "token.cog"
  

#line 58 "token.cog"
                UIntPtr rawSize;


#line 59 "token.cog"
  

#line 59 "token.cog"
                Ptr<

#line 59 "token.cog"
                    Void>  rawData;


#line 60 "token.cog"
  

#line 60 "token.cog"
             TokenCode code;


#line 61 "token.cog"
  

#line 61 "token.cog"
              TokenFlags flags;


#line 62 "token.cog"
  

#line 62 "token.cog"
                UInt32 advance;


#line 64 "token.cog"
  

#line 64 "token.cog"
                   SourceLoc getLoc();
};


#line 506 "lexer.cog"
 

#line 508 "lexer.cog"
     Token lexToken(

#line 507 "lexer.cog"
              

#line 507 "lexer.cog"
         Lexer

#line 507 "lexer.cog"
              * lexer);


#line 553 "lexer.cog"
 

#line 559 "lexer.cog"
          

#line 559 "lexer.cog"
     Token

#line 559 "lexer.cog"
          * matchDelimeter(

#line 554 "lexer.cog"
              

#line 554 "lexer.cog"
         Lexer

#line 554 "lexer.cog"
              * lexer, 

#line 555 "lexer.cog"
             

#line 555 "lexer.cog"
        Token

#line 555 "lexer.cog"
             * open, 

#line 556 "lexer.cog"
              

#line 556 "lexer.cog"
         Token

#line 556 "lexer.cog"
              * begin, 

#line 557 "lexer.cog"
       ConstPtr<

#line 557 "lexer.cog"
                Token>  end, 

#line 558 "lexer.cog"
                    TokenCode closingTokenCode);


#line 603 "lexer.cog"
 void matchDelimeters(

#line 604 "lexer.cog"
              

#line 604 "lexer.cog"
         Lexer

#line 604 "lexer.cog"
              * lexer, 

#line 605 "lexer.cog"
              

#line 605 "lexer.cog"
         Token

#line 605 "lexer.cog"
              * begin, 

#line 606 "lexer.cog"
       ConstPtr<

#line 606 "lexer.cog"
                Token>  end);


#line 611 "lexer.cog"
 void markUpOperators(

#line 612 "lexer.cog"
              

#line 612 "lexer.cog"
         Lexer

#line 612 "lexer.cog"
              * lexer, 

#line 613 "lexer.cog"
              

#line 613 "lexer.cog"
         Token

#line 613 "lexer.cog"
              * begin, 

#line 614 "lexer.cog"
       ConstPtr<

#line 614 "lexer.cog"
                Token>  end);


#line 70 "token.cog"
 struct TokenSpan
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 72 "token.cog"
  

#line 72 "token.cog"
               ConstPtr<

#line 72 "token.cog"
                        Token>  begin_;


#line 73 "token.cog"
  

#line 73 "token.cog"
             ConstPtr<

#line 73 "token.cog"
                      Token>  end_;


#line 75 "token.cog"
  TokenSpan();


#line 81 "token.cog"
  TokenSpan(

#line 81 "token.cog"
              ConstPtr<

#line 81 "token.cog"
                       Token>  begin, 

#line 81 "token.cog"
                                    ConstPtr<

#line 81 "token.cog"
                                             Token>  end);
};


#line 680 "lexer.cog"
 

#line 683 "lexer.cog"
     TokenSpan lexTokens(

#line 681 "lexer.cog"
           Session session, 

#line 682 "lexer.cog"
                  

#line 682 "lexer.cog"
        SourceFile

#line 682 "lexer.cog"
                  * file);


#line 3 "main.cog"
 

#line 7 "main.cog"
 struct A
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};


#line 5 "main.cog"
 void B(

#line 5 "main.cog"
           A a);


#line 9 "main.cog"
 void parseCommandLine(

#line 10 "main.cog"
           Session session, 

#line 11 "main.cog"
          Ptr<

#line 11 "main.cog"
              Int>  ioArgc, 

#line 12 "main.cog"
        Ptr<

#line 12 "main.cog"
            Ptr<

#line 12 "main.cog"
                Char> >  argv);


#line 107 "main.cog"
 

#line 107 "main.cog"
                                                   Int main(

#line 107 "main.cog"
                   Int argc, 

#line 107 "main.cog"
                               Ptr<

#line 107 "main.cog"
                                   Ptr<

#line 107 "main.cog"
                                       Char> >  argv);


#line 9 "name.cog"
 

#line 12 "name.cog"
     Ptr<

#line 12 "name.cog"
         Name>  getName(

#line 10 "name.cog"
           Session session, 

#line 11 "name.cog"
        StringSpan text);


#line 36 "name.cog"
 

#line 38 "name.cog"
     TerminatedStringSpan getText(

#line 37 "name.cog"
        Ptr<

#line 37 "name.cog"
            Name>  name);


#line 45 "name.cog"
 

#line 48 "name.cog"
     Ptr<

#line 48 "name.cog"
         Name>  getName(

#line 46 "name.cog"
           Session session, 

#line 47 "name.cog"
        Ptr<

#line 47 "name.cog"
            Char>  text);


#line 4 "parser.cog"
 typedef 

#line 4 "parser.cog"
                         UInt32 ParserFlags;


#line 6 "parser.cog"
 enum ParserFlag : int
{
kParserFlag_Recovering = 

#line 8 "parser.cog"
                                         

#line 8 "parser.cog"
                                       1 

#line 8 "parser.cog"
                                         << 

#line 8 "parser.cog"
                                            0,
kParserFlag_InsideGenericClause = 

#line 9 "parser.cog"
                                         

#line 9 "parser.cog"
                                       1 

#line 9 "parser.cog"
                                         << 

#line 9 "parser.cog"
                                            1,
};


#line 12 "parser.cog"
 struct Parser
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 14 "parser.cog"
     

#line 14 "parser.cog"
                  Session session;


#line 15 "parser.cog"
     

#line 15 "parser.cog"
                     

#line 15 "parser.cog"
                Scope

#line 15 "parser.cog"
                     * scope;


#line 17 "parser.cog"
     

#line 17 "parser.cog"
                ConstPtr<

#line 17 "parser.cog"
                         Token>  begin;


#line 18 "parser.cog"
     

#line 18 "parser.cog"
                 ConstPtr<

#line 18 "parser.cog"
                          Token>  cursor;


#line 19 "parser.cog"
     

#line 19 "parser.cog"
              ConstPtr<

#line 19 "parser.cog"
                       Token>  end;


#line 21 "parser.cog"
     

#line 21 "parser.cog"
                ConstPtr<

#line 21 "parser.cog"
                         Token>  token;


#line 23 "parser.cog"
     

#line 23 "parser.cog"
                ParserFlags flags;
};


#line 26 "parser.cog"
 void debugState(

#line 26 "parser.cog"
                               

#line 26 "parser.cog"
                         Parser

#line 26 "parser.cog"
                               * parser);


#line 40 "parser.cog"
 

#line 42 "parser.cog"
        ConstPtr<

#line 42 "parser.cog"
                 Token>  advanceToken(

#line 41 "parser.cog"
                   

#line 41 "parser.cog"
             Parser

#line 41 "parser.cog"
                   * parser);


#line 54 "parser.cog"
 

#line 56 "parser.cog"
        ConstPtr<

#line 56 "parser.cog"
                 Token>  advanceFragment(

#line 55 "parser.cog"
                   

#line 55 "parser.cog"
             Parser

#line 55 "parser.cog"
                   * parser);


#line 69 "parser.cog"
 void initializeParser(

#line 70 "parser.cog"
                   

#line 70 "parser.cog"
             Parser

#line 70 "parser.cog"
                   * parser, 

#line 71 "parser.cog"
              Session session, 

#line 72 "parser.cog"
                     

#line 72 "parser.cog"
           SourceFile

#line 72 "parser.cog"
                     * file);


#line 86 "parser.cog"
 void finalizeParser(

#line 87 "parser.cog"
                   

#line 87 "parser.cog"
             Parser

#line 87 "parser.cog"
                   * parser);


#line 90 "parser.cog"
 void pushScope(

#line 91 "parser.cog"
                   

#line 91 "parser.cog"
             Parser

#line 91 "parser.cog"
                   * parser, 

#line 92 "parser.cog"
                ContainerDecl container);


#line 103 "parser.cog"
 void restoreScope(

#line 104 "parser.cog"
                   

#line 104 "parser.cog"
             Parser

#line 104 "parser.cog"
                   * parser, 

#line 105 "parser.cog"
                 

#line 105 "parser.cog"
            Scope

#line 105 "parser.cog"
                 * scope);


#line 111 "parser.cog"
 void popScope(

#line 112 "parser.cog"
                   

#line 112 "parser.cog"
             Parser

#line 112 "parser.cog"
                   * parser);


#line 119 "parser.cog"
 

#line 120 "parser.cog"
                      

#line 120 "parser.cog"
        DiagnosticSink

#line 120 "parser.cog"
                      * getSink(

#line 119 "parser.cog"
                            

#line 119 "parser.cog"
                      Parser

#line 119 "parser.cog"
                            * parser);


#line 125 "parser.cog"
 

#line 126 "parser.cog"
        SourceLoc peekLoc(

#line 125 "parser.cog"
                            

#line 125 "parser.cog"
                      Parser

#line 125 "parser.cog"
                            * parser);


#line 131 "parser.cog"
 

#line 132 "parser.cog"
        TokenCode peekTokenCode(

#line 131 "parser.cog"
                                  

#line 131 "parser.cog"
                            Parser

#line 131 "parser.cog"
                                  * parser);


#line 137 "parser.cog"
 

#line 138 "parser.cog"
        Bool peekTokenCode(

#line 137 "parser.cog"
                                  

#line 137 "parser.cog"
                            Parser

#line 137 "parser.cog"
                                  * parser, 

#line 137 "parser.cog"
                                           TokenCode code);


#line 143 "parser.cog"
 

#line 144 "parser.cog"
        Bool isAtEnd(

#line 143 "parser.cog"
                            

#line 143 "parser.cog"
                      Parser

#line 143 "parser.cog"
                            * parser);


#line 149 "parser.cog"
 

#line 150 "parser.cog"
        Bool isRecovering(

#line 149 "parser.cog"
                                 

#line 149 "parser.cog"
                           Parser

#line 149 "parser.cog"
                                 * parser);


#line 155 "parser.cog"
 void unexpected(

#line 155 "parser.cog"
                               

#line 155 "parser.cog"
                         Parser

#line 155 "parser.cog"
                               * parser);


#line 164 "parser.cog"
 void unexpected(

#line 164 "parser.cog"
                               

#line 164 "parser.cog"
                         Parser

#line 164 "parser.cog"
                               * parser, 

#line 164 "parser.cog"
                                            TokenCode expected);


#line 173 "parser.cog"
 

#line 177 "parser.cog"
        Bool tokenIsInSet(

#line 174 "parser.cog"
             TokenCode needle, 

#line 175 "parser.cog"
            Int count, 

#line 176 "parser.cog"
               ConstPtr<

#line 176 "parser.cog"
                        TokenCode>  haystack);


#line 189 "parser.cog"
 

#line 194 "parser.cog"
        Bool recoverIfTokenIsInSet(

#line 190 "parser.cog"
                   

#line 190 "parser.cog"
             Parser

#line 190 "parser.cog"
                   * parser, 

#line 191 "parser.cog"
             TokenCode needle, 

#line 192 "parser.cog"
            Int count, 

#line 193 "parser.cog"
               ConstPtr<

#line 193 "parser.cog"
                        TokenCode>  haystack);


#line 204 "parser.cog"
 void tryRecover(

#line 205 "parser.cog"
                   

#line 205 "parser.cog"
             Parser

#line 205 "parser.cog"
                   * parser, 

#line 206 "parser.cog"
                         Int recoverBeforeCount, 

#line 207 "parser.cog"
                    ConstPtr<

#line 207 "parser.cog"
                             TokenCode>  recoverBefore, 

#line 208 "parser.cog"
                        Int recoverAfterCount, 

#line 209 "parser.cog"
                   ConstPtr<

#line 209 "parser.cog"
                            TokenCode>  recoverAfter);


#line 260 "parser.cog"
 void tryRecover(

#line 260 "parser.cog"
                               

#line 260 "parser.cog"
                         Parser

#line 260 "parser.cog"
                               * parser);


#line 280 "parser.cog"
 void tryRecoverBefore(

#line 280 "parser.cog"
                                     

#line 280 "parser.cog"
                               Parser

#line 280 "parser.cog"
                                     * parser, 

#line 280 "parser.cog"
                                              TokenCode code);


#line 293 "parser.cog"
 

#line 296 "parser.cog"
        ConstPtr<

#line 296 "parser.cog"
                 Token>  advanceIf(

#line 294 "parser.cog"
                   

#line 294 "parser.cog"
             Parser

#line 294 "parser.cog"
                   * parser, 

#line 295 "parser.cog"
               TokenCode expected);


#line 305 "parser.cog"
 

#line 308 "parser.cog"
        ConstPtr<

#line 308 "parser.cog"
                 Token>  advanceIf(

#line 306 "parser.cog"
                   

#line 306 "parser.cog"
             Parser

#line 306 "parser.cog"
                   * parser, 

#line 307 "parser.cog"
               StringSpan expected);


#line 324 "parser.cog"
 

#line 327 "parser.cog"
        ConstPtr<

#line 327 "parser.cog"
                 Token>  advanceIfFragment(

#line 325 "parser.cog"
                   

#line 325 "parser.cog"
             Parser

#line 325 "parser.cog"
                   * parser, 

#line 326 "parser.cog"
               TokenCode expected);


#line 336 "parser.cog"
 

#line 339 "parser.cog"
        ConstPtr<

#line 339 "parser.cog"
                 Token>  expect(

#line 337 "parser.cog"
                   

#line 337 "parser.cog"
             Parser

#line 337 "parser.cog"
                   * parser, 

#line 338 "parser.cog"
               TokenCode expected);


#line 348 "parser.cog"
 

#line 351 "parser.cog"
        ConstPtr<

#line 351 "parser.cog"
                 Token>  expectFragment(

#line 349 "parser.cog"
                   

#line 349 "parser.cog"
             Parser

#line 349 "parser.cog"
                   * parser, 

#line 350 "parser.cog"
               TokenCode expected);


#line 360 "parser.cog"
 

#line 362 "parser.cog"
            

#line 362 "parser.cog"
        Name

#line 362 "parser.cog"
            * expectIdentifier(

#line 361 "parser.cog"
                   

#line 361 "parser.cog"
             Parser

#line 361 "parser.cog"
                   * parser);


#line 377 "parser.cog"
 

#line 380 "parser.cog"
        ConstPtr<

#line 380 "parser.cog"
                 Token>  advanceIfEnd(

#line 378 "parser.cog"
                   

#line 378 "parser.cog"
             Parser

#line 378 "parser.cog"
                   * parser, 

#line 379 "parser.cog"
               TokenCode expected);


#line 669 "syntax.cog"
 struct LookupResultItem
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 672 "syntax.cog"
  

#line 672 "syntax.cog"
             Decl decl;


#line 674 "syntax.cog"
  LookupResultItem();


#line 682 "syntax.cog"
  LookupResultItem(

#line 682 "syntax.cog"
             Decl decl);
};


#line 688 "syntax.cog"
 struct LookupResult
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 690 "syntax.cog"
  

#line 690 "syntax.cog"
              Array<

#line 690 "syntax.cog"
                    LookupResultItem>  items;


#line 692 "syntax.cog"
  

#line 692 "syntax.cog"
                  Ptr<

#line 692 "syntax.cog"
                      LookupResultItem>  begin();


#line 693 "syntax.cog"
  

#line 693 "syntax.cog"
                Ptr<

#line 693 "syntax.cog"
                    LookupResultItem>  end();


#line 696 "syntax.cog"
  

#line 696 "syntax.cog"
                    Bool isEmpty();


#line 697 "syntax.cog"
     

#line 697 "syntax.cog"
                        Bool isUnique();


#line 698 "syntax.cog"
     

#line 698 "syntax.cog"
                            Bool isOverloaded();


#line 700 "syntax.cog"
     

#line 700 "syntax.cog"
                       Decl getDecl();
};


#line 391 "parser.cog"
 

#line 394 "parser.cog"
        LookupResult lookup(

#line 392 "parser.cog"
                   

#line 392 "parser.cog"
             Parser

#line 392 "parser.cog"
                   * parser, 

#line 393 "parser.cog"
               

#line 393 "parser.cog"
           Name

#line 393 "parser.cog"
               * name);


#line 498 "syntax.cog"
 using SyntaxDecl = struct SyntaxDeclImpl* ;
struct SyntaxDeclImpl : 

#line 498 "syntax.cog"
                    DeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 500 "syntax.cog"
  

#line 500 "syntax.cog"
                    Ptr<

#line 500 "syntax.cog"
                        Class>  syntaxClass;


#line 501 "syntax.cog"
  

#line 501 "syntax.cog"
                 SyntaxCallback callback;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::SyntaxDecl > { typedef cogc::SyntaxDeclImpl Impl; };
} namespace cogc {


#line 401 "parser.cog"
 

#line 403 "parser.cog"
        SyntaxDecl getSyntaxDecl(

#line 402 "parser.cog"
             ConstRef<

#line 402 "parser.cog"
                      LookupResult>  result);


#line 652 "syntax.cog"
 using NameExp = struct NameExpImpl* ;
struct NameExpImpl : 

#line 652 "syntax.cog"
                 DeclRefExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 654 "syntax.cog"
  

#line 654 "syntax.cog"
             Ptr<

#line 654 "syntax.cog"
                 Name>  name;


#line 655 "syntax.cog"
  

#line 655 "syntax.cog"
              Ptr<

#line 655 "syntax.cog"
                  Scope>  scope;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::NameExp > { typedef cogc::NameExpImpl Impl; };
} namespace cogc {


#line 418 "parser.cog"
 

#line 421 "parser.cog"
        NameExp createNameExp(

#line 419 "parser.cog"
                   

#line 419 "parser.cog"
             Parser

#line 419 "parser.cog"
                   * parser, 

#line 420 "parser.cog"
            ConstPtr<

#line 420 "parser.cog"
                     Token>  token);


#line 431 "parser.cog"
 

#line 433 "parser.cog"
        Exp createErrorExp(

#line 432 "parser.cog"
                   

#line 432 "parser.cog"
             Parser

#line 432 "parser.cog"
                   * parser);


#line 440 "parser.cog"
 

#line 441 "parser.cog"
    Arg parseArg(

#line 440 "parser.cog"
                             

#line 440 "parser.cog"
                       Parser

#line 440 "parser.cog"
                             * parser);


#line 447 "parser.cog"
 

#line 449 "parser.cog"
        SyntaxList<

#line 449 "parser.cog"
                   Arg>  parseArgs(

#line 448 "parser.cog"
                   

#line 448 "parser.cog"
             Parser

#line 448 "parser.cog"
                   * parser);


#line 490 "parser.cog"
 

#line 491 "parser.cog"
        Arg parseGenericArg(

#line 490 "parser.cog"
                                    

#line 490 "parser.cog"
                              Parser

#line 490 "parser.cog"
                                    * parser);


#line 500 "parser.cog"
 

#line 502 "parser.cog"
        SyntaxList<

#line 502 "parser.cog"
                   Arg>  parseGenericArgs(

#line 501 "parser.cog"
                   

#line 501 "parser.cog"
             Parser

#line 501 "parser.cog"
                   * parser);


#line 523 "parser.cog"
 

#line 525 "parser.cog"
        Bool peekGenericApp(

#line 524 "parser.cog"
                     

#line 524 "parser.cog"
               Parser

#line 524 "parser.cog"
                     * inParser);


#line 568 "parser.cog"
 

#line 571 "parser.cog"
        Exp maybeParseGenericApp(

#line 569 "parser.cog"
                   

#line 569 "parser.cog"
             Parser

#line 569 "parser.cog"
                   * parser, 

#line 570 "parser.cog"
           Exp base);


#line 589 "syntax.cog"
 typedef 

#line 589 "syntax.cog"
                       Int64 IntLitVal;


#line 591 "parser.cog"
 

#line 593 "parser.cog"
        IntLitVal getIntegerLiteralVal(

#line 592 "parser.cog"
            ConstRef<

#line 592 "parser.cog"
                     Token>  token);


#line 635 "parser.cog"
 

#line 637 "parser.cog"
        String getStringLiteralVal(

#line 636 "parser.cog"
            ConstRef<

#line 636 "parser.cog"
                     Token>  token);


#line 685 "parser.cog"
 

#line 687 "parser.cog"
        Exp parseAtomicExp(

#line 686 "parser.cog"
                   

#line 686 "parser.cog"
             Parser

#line 686 "parser.cog"
                   * parser);


#line 774 "parser.cog"
 

#line 777 "parser.cog"
        Arg createPositionalArg(

#line 775 "parser.cog"
                   

#line 775 "parser.cog"
             Parser

#line 775 "parser.cog"
                   * parser, 

#line 776 "parser.cog"
          Exp exp);


#line 785 "parser.cog"
 

#line 790 "parser.cog"
        AppExpBase createApp(

#line 786 "parser.cog"
                   

#line 786 "parser.cog"
             Parser

#line 786 "parser.cog"
                   * parser, 

#line 787 "parser.cog"
          AppExpBase exp, 

#line 788 "parser.cog"
         ConstPtr<

#line 788 "parser.cog"
                  Token>  op, 

#line 789 "parser.cog"
             Exp argExp);


#line 801 "parser.cog"
 

#line 807 "parser.cog"
        AppExpBase createApp(

#line 802 "parser.cog"
                   

#line 802 "parser.cog"
             Parser

#line 802 "parser.cog"
                   * parser, 

#line 803 "parser.cog"
          AppExpBase exp, 

#line 804 "parser.cog"
         ConstPtr<

#line 804 "parser.cog"
                  Token>  op, 

#line 805 "parser.cog"
              Exp argExp0, 

#line 806 "parser.cog"
              Exp argExp1);


#line 819 "parser.cog"
 

#line 821 "parser.cog"
        Bool isInGenericClause(

#line 820 "parser.cog"
                   

#line 820 "parser.cog"
             Parser

#line 820 "parser.cog"
                   * parser);


#line 826 "parser.cog"
 

#line 828 "parser.cog"
        Exp parsePostfixExp(

#line 827 "parser.cog"
                   

#line 827 "parser.cog"
             Parser

#line 827 "parser.cog"
                   * parser);


#line 896 "parser.cog"
 

#line 898 "parser.cog"
        Exp parsePrefixExp(

#line 897 "parser.cog"
                   

#line 897 "parser.cog"
             Parser

#line 897 "parser.cog"
                   * parser);


#line 913 "parser.cog"
 

#line 915 "parser.cog"
        Exp parseInfixExp(

#line 914 "parser.cog"
                   

#line 914 "parser.cog"
             Parser

#line 914 "parser.cog"
                   * parser);


#line 956 "parser.cog"
 

#line 958 "parser.cog"
        Exp parseExp(

#line 957 "parser.cog"
                   

#line 957 "parser.cog"
             Parser

#line 957 "parser.cog"
                   * parser);


#line 963 "parser.cog"
 

#line 965 "parser.cog"
        TypeExp parseType(

#line 964 "parser.cog"
                   

#line 964 "parser.cog"
             Parser

#line 964 "parser.cog"
                   * parser);


#line 974 "parser.cog"
 

#line 976 "parser.cog"
        Decl parseDecl(

#line 975 "parser.cog"
                   

#line 975 "parser.cog"
             Parser

#line 975 "parser.cog"
                   * parser);


#line 1049 "parser.cog"
 

#line 1053 "parser.cog"
        ModuleDecl findOrImportModule(

#line 1050 "parser.cog"
              Session session, 

#line 1051 "parser.cog"
          SourceLoc loc, 

#line 1052 "parser.cog"
               

#line 1052 "parser.cog"
           Name

#line 1052 "parser.cog"
               * name);


#line 1120 "parser.cog"
 

#line 1122 "parser.cog"
        SyntaxList<

#line 1122 "parser.cog"
                   Decl>  parseDeclsInBody(

#line 1121 "parser.cog"
                   

#line 1121 "parser.cog"
             Parser

#line 1121 "parser.cog"
                   * parser);


#line 1155 "parser.cog"
 

#line 1157 "parser.cog"
        SyntaxList<

#line 1157 "parser.cog"
                   Decl>  parseDeclBody(

#line 1156 "parser.cog"
                   

#line 1156 "parser.cog"
             Parser

#line 1156 "parser.cog"
                   * parser);


#line 1165 "parser.cog"
 void parseDeclBody(

#line 1166 "parser.cog"
                   

#line 1166 "parser.cog"
             Parser

#line 1166 "parser.cog"
                   * parser, 

#line 1167 "parser.cog"
           ContainerDecl decl);


#line 1180 "parser.cog"
 

#line 1182 "parser.cog"
        Stmt parseExpStmt(

#line 1181 "parser.cog"
                   

#line 1181 "parser.cog"
             Parser

#line 1181 "parser.cog"
                   * parser);


#line 1189 "parser.cog"
 

#line 1191 "parser.cog"
        Stmt parseStmt(

#line 1190 "parser.cog"
                   

#line 1190 "parser.cog"
             Parser

#line 1190 "parser.cog"
                   * parser);


#line 1246 "parser.cog"
 

#line 1248 "parser.cog"
        SyntaxListBuilder<

#line 1248 "parser.cog"
                          Stmt>  parseStmtsInBody(

#line 1247 "parser.cog"
                   

#line 1247 "parser.cog"
             Parser

#line 1247 "parser.cog"
                   * parser);


#line 1275 "parser.cog"
 

#line 1277 "parser.cog"
        Stmt parseStmtBody(

#line 1276 "parser.cog"
                   

#line 1276 "parser.cog"
             Parser

#line 1276 "parser.cog"
                   * parser);


#line 1292 "parser.cog"
 

#line 1292 "parser.cog"
                                           Bool peekGenericClose(

#line 1292 "parser.cog"
                                     

#line 1292 "parser.cog"
                               Parser

#line 1292 "parser.cog"
                                     * parser);


#line 1316 "parser.cog"
 

#line 1316 "parser.cog"
                                               Bool tryParseGenericClose(

#line 1316 "parser.cog"
                                         

#line 1316 "parser.cog"
                                   Parser

#line 1316 "parser.cog"
                                         * parser);


#line 1326 "parser.cog"
 void expectGenericClose(

#line 1326 "parser.cog"
                                       

#line 1326 "parser.cog"
                                 Parser

#line 1326 "parser.cog"
                                       * parser);


#line 1335 "parser.cog"
 

#line 1335 "parser.cog"
                                            Decl parseGenericParam(

#line 1335 "parser.cog"
                                      

#line 1335 "parser.cog"
                                Parser

#line 1335 "parser.cog"
                                      * parser);


#line 1348 "parser.cog"
 void parseGenericParams(

#line 1348 "parser.cog"
                                       

#line 1348 "parser.cog"
                                 Parser

#line 1348 "parser.cog"
                                       * parser, 

#line 1348 "parser.cog"
                                                   Ptr<

#line 1348 "parser.cog"
                                                       SyntaxListBuilder<

#line 1348 "parser.cog"
                                                                         Decl> >  ioDecls);


#line 1371 "parser.cog"
 

#line 1371 "parser.cog"
                                              Bool tryParseGenericOpen(

#line 1371 "parser.cog"
                                        

#line 1371 "parser.cog"
                                  Parser

#line 1371 "parser.cog"
                                        * parser);


#line 1399 "parser.cog"
 

#line 1399 "parser.cog"
                                                             Decl maybeParseGenericParams(

#line 1399 "parser.cog"
                                            

#line 1399 "parser.cog"
                                      Parser

#line 1399 "parser.cog"
                                            * parser, 

#line 1399 "parser.cog"
                                                    Decl decl);


#line 1422 "parser.cog"
 

#line 1422 "parser.cog"
                                                                    Decl parseAggTypeDeclCommon(

#line 1422 "parser.cog"
                                           

#line 1422 "parser.cog"
                                     Parser

#line 1422 "parser.cog"
                                           * parser, 

#line 1422 "parser.cog"
                                                    AggTypeDecl decl);


#line 1452 "parser.cog"
 

#line 1452 "parser.cog"
                                         Syntax parseClassDecl(

#line 1452 "parser.cog"
                                   

#line 1452 "parser.cog"
                             Parser

#line 1452 "parser.cog"
                                   * parser);


#line 1458 "parser.cog"
 

#line 1458 "parser.cog"
                                          Syntax parseStructDecl(

#line 1458 "parser.cog"
                                    

#line 1458 "parser.cog"
                              Parser

#line 1458 "parser.cog"
                                    * parser);


#line 1464 "parser.cog"
 

#line 1464 "parser.cog"
                                        SyntaxList<

#line 1464 "parser.cog"
                                                   Decl>  parseEnumTags(

#line 1464 "parser.cog"
                                  

#line 1464 "parser.cog"
                            Parser

#line 1464 "parser.cog"
                                  * parser);


#line 1505 "parser.cog"
 

#line 1505 "parser.cog"
                                        Syntax parseEnumDecl(

#line 1505 "parser.cog"
                                  

#line 1505 "parser.cog"
                            Parser

#line 1505 "parser.cog"
                                  * parser);


#line 1530 "parser.cog"
 

#line 1530 "parser.cog"
                                          Syntax parseImportDecl(

#line 1530 "parser.cog"
                                    

#line 1530 "parser.cog"
                              Parser

#line 1530 "parser.cog"
                                    * parser);


#line 1540 "parser.cog"
 void parseVarDeclCommon(

#line 1540 "parser.cog"
                                       

#line 1540 "parser.cog"
                                 Parser

#line 1540 "parser.cog"
                                       * parser, 

#line 1540 "parser.cog"
                                                VarDeclBase decl);


#line 1557 "parser.cog"
 

#line 1557 "parser.cog"
                                       Syntax parseVarDecl(

#line 1557 "parser.cog"
                                 

#line 1557 "parser.cog"
                           Parser

#line 1557 "parser.cog"
                                 * parser);


#line 1565 "parser.cog"
 

#line 1565 "parser.cog"
                                       Syntax parseLetDecl(

#line 1565 "parser.cog"
                                 

#line 1565 "parser.cog"
                           Parser

#line 1565 "parser.cog"
                                 * parser);


#line 1573 "parser.cog"
 void parseTypeVarDeclSuffixCommon(

#line 1573 "parser.cog"
                                                 

#line 1573 "parser.cog"
                                           Parser

#line 1573 "parser.cog"
                                                 * parser, 

#line 1573 "parser.cog"
                                                          TypeVarDecl decl);


#line 1588 "parser.cog"
 void parseTypeVarDeclCommon(

#line 1588 "parser.cog"
                                           

#line 1588 "parser.cog"
                                     Parser

#line 1588 "parser.cog"
                                           * parser, 

#line 1588 "parser.cog"
                                                    TypeVarDecl decl);


#line 1594 "parser.cog"
 

#line 1594 "parser.cog"
                                                         

#line 1594 "parser.cog"
                                                     Name

#line 1594 "parser.cog"
                                                         * expectOperatorOrIdentifier(

#line 1594 "parser.cog"
                                               

#line 1594 "parser.cog"
                                         Parser

#line 1594 "parser.cog"
                                               * parser);


#line 1609 "parser.cog"
 

#line 1609 "parser.cog"
                                             Syntax parseTypeAliasDecl(

#line 1609 "parser.cog"
                                       

#line 1609 "parser.cog"
                                 Parser

#line 1609 "parser.cog"
                                       * parser);


#line 1621 "parser.cog"
 

#line 1621 "parser.cog"
                                      Syntax parseIfStmt(

#line 1621 "parser.cog"
                                

#line 1621 "parser.cog"
                          Parser

#line 1621 "parser.cog"
                                * parser);


#line 1654 "parser.cog"
 

#line 1654 "parser.cog"
                                         Syntax parseWhileStmt(

#line 1654 "parser.cog"
                                   

#line 1654 "parser.cog"
                             Parser

#line 1654 "parser.cog"
                                   * parser);


#line 1664 "parser.cog"
 

#line 1664 "parser.cog"
                                       Syntax parseForStmt(

#line 1664 "parser.cog"
                                 

#line 1664 "parser.cog"
                           Parser

#line 1664 "parser.cog"
                                 * parser);


#line 1713 "parser.cog"
 

#line 1713 "parser.cog"
                                           Syntax parseForEachStmt(

#line 1713 "parser.cog"
                                     

#line 1713 "parser.cog"
                               Parser

#line 1713 "parser.cog"
                                     * parser);


#line 1732 "parser.cog"
 

#line 1732 "parser.cog"
                                          Syntax parseSwitchStmt(

#line 1732 "parser.cog"
                                    

#line 1732 "parser.cog"
                              Parser

#line 1732 "parser.cog"
                                    * parser);


#line 1805 "parser.cog"
 

#line 1805 "parser.cog"
                                          Syntax parseReturnStmt(

#line 1805 "parser.cog"
                                    

#line 1805 "parser.cog"
                              Parser

#line 1805 "parser.cog"
                                    * parser);


#line 1816 "parser.cog"
 

#line 1816 "parser.cog"
                                         Syntax parseBreakStmt(

#line 1816 "parser.cog"
                                   

#line 1816 "parser.cog"
                             Parser

#line 1816 "parser.cog"
                                   * parser);


#line 1823 "parser.cog"
 

#line 1823 "parser.cog"
                                            Syntax parseContinueStmt(

#line 1823 "parser.cog"
                                      

#line 1823 "parser.cog"
                                Parser

#line 1823 "parser.cog"
                                      * parser);


#line 1830 "parser.cog"
 

#line 1830 "parser.cog"
                                           Syntax parseBuiltinAttr(

#line 1830 "parser.cog"
                                     

#line 1830 "parser.cog"
                               Parser

#line 1830 "parser.cog"
                                     * parser);


#line 1839 "parser.cog"
 

#line 1839 "parser.cog"
                                     ParamDecl parseParam(

#line 1839 "parser.cog"
                               

#line 1839 "parser.cog"
                         Parser

#line 1839 "parser.cog"
                               * parser);


#line 1846 "parser.cog"
 void parseParams(

#line 1846 "parser.cog"
                                

#line 1846 "parser.cog"
                          Parser

#line 1846 "parser.cog"
                                * parser, 

#line 1846 "parser.cog"
                                         ContainerDecl decl);


#line 1895 "parser.cog"
 

#line 1895 "parser.cog"
                                        Syntax parseFuncDecl(

#line 1895 "parser.cog"
                                  

#line 1895 "parser.cog"
                            Parser

#line 1895 "parser.cog"
                                  * parser);


#line 1932 "parser.cog"
 

#line 1932 "parser.cog"
                                             Syntax parseSubscriptDecl(

#line 1932 "parser.cog"
                                       

#line 1932 "parser.cog"
                                 Parser

#line 1932 "parser.cog"
                                       * parser);


#line 1963 "parser.cog"
 

#line 1963 "parser.cog"
                                               Syntax parseInitializerDecl(

#line 1963 "parser.cog"
                                         

#line 1963 "parser.cog"
                                   Parser

#line 1963 "parser.cog"
                                         * parser);


#line 1995 "parser.cog"
 

#line 1995 "parser.cog"
                                        Syntax parseThisExpr(

#line 1995 "parser.cog"
                                  

#line 1995 "parser.cog"
                            Parser

#line 1995 "parser.cog"
                                  * parser);


#line 2002 "parser.cog"
 

#line 2002 "parser.cog"
                                        Syntax parseCastExpr(

#line 2002 "parser.cog"
                                  

#line 2002 "parser.cog"
                            Parser

#line 2002 "parser.cog"
                                  * parser);


#line 2017 "parser.cog"
 

#line 2022 "parser.cog"
        SyntaxDecl createSyntaxDecl(

#line 2018 "parser.cog"
              Session session, 

#line 2019 "parser.cog"
           ConstPtr<

#line 2019 "parser.cog"
                    Char>  name, 

#line 2020 "parser.cog"
               SyntaxCallback callback, 

#line 2021 "parser.cog"
                       

#line 2021 "parser.cog"
                  Class

#line 2021 "parser.cog"
                       * syntaxClass);


#line 2031 "parser.cog"
 template<typename T >


#line 2031 "parser.cog"
      

#line 2035 "parser.cog"
        SyntaxDecl createSyntaxDecl(

#line 2032 "parser.cog"
              Session session, 

#line 2033 "parser.cog"
           ConstPtr<

#line 2033 "parser.cog"
                    Char>  name, 

#line 2034 "parser.cog"
               SyntaxCallback callback);


#line 2040 "parser.cog"
 void parseFileIntoModule(

#line 2041 "parser.cog"
              Session session, 

#line 2042 "parser.cog"
                     

#line 2042 "parser.cog"
           SourceFile

#line 2042 "parser.cog"
                     * file, 

#line 2043 "parser.cog"
                 ModuleDecl moduleDecl);


#line 2121 "parser.cog"
 void parseFile(

#line 2122 "parser.cog"
              Session session, 

#line 2123 "parser.cog"
                     

#line 2123 "parser.cog"
           SourceFile

#line 2123 "parser.cog"
                     * file);


#line 15 "scope.cog"
 void lookupDirectImpl(

#line 16 "scope.cog"
             ContainerStmt container, 

#line 17 "scope.cog"
        Ptr<

#line 17 "scope.cog"
            Name>  name, 

#line 18 "scope.cog"
            Ptr<

#line 18 "scope.cog"
                LookupResult>  ioResult);


#line 32 "scope.cog"
 

#line 35 "scope.cog"
     LookupResult lookupDirect(

#line 33 "scope.cog"
             ContainerStmt container, 

#line 34 "scope.cog"
        Ptr<

#line 34 "scope.cog"
            Name>  name);


#line 42 "scope.cog"
 

#line 45 "scope.cog"
     LookupResult lookupDirect(

#line 43 "scope.cog"
         Ptr<

#line 43 "scope.cog"
             Scope>  scope, 

#line 44 "scope.cog"
        Ptr<

#line 44 "scope.cog"
            Name>  name);


#line 58 "scope.cog"
 

#line 61 "scope.cog"
     LookupResult lookup(

#line 59 "scope.cog"
         Ptr<

#line 59 "scope.cog"
             Scope>  scope, 

#line 60 "scope.cog"
        Ptr<

#line 60 "scope.cog"
            Name>  name);


#line 2 "session.cog"
 

#line 22 "session.cog"
 

#line 22 "session.cog"
                         Session createSession();


#line 29 "session.cog"
 void destroySession(

#line 29 "session.cog"
                              Session session);


#line 34 "session.cog"
 void setModulePath(

#line 35 "session.cog"
           Session session, 

#line 36 "session.cog"
         StringSpan path);


#line 46 "session.cog"
 void setModulePath(

#line 47 "session.cog"
           Session session, 

#line 48 "session.cog"
        TerminatedStringSpan path);


#line 53 "session.cog"
 

#line 55 "session.cog"
     Ptr<

#line 55 "session.cog"
         Name>  getModulePath(

#line 54 "session.cog"
           Session session);


#line 60 "session.cog"
 

#line 62 "session.cog"
     Ptr<

#line 62 "session.cog"
         Name>  getModuleName(

#line 61 "session.cog"
           Session session);


#line 67 "session.cog"
 void setEvaluate(

#line 68 "session.cog"
           Session session);


#line 73 "session.cog"
 void loadSourceFile(

#line 74 "session.cog"
           Session session, 

#line 75 "session.cog"
        TerminatedStringSpan path);


#line 83 "session.cog"
 

#line 85 "session.cog"
     Int getErrorCount(

#line 84 "session.cog"
           Session session);


#line 3 "source.cog"
 

#line 17 "source.cog"
 struct Dummy
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};


#line 19 "source.cog"
 struct ExpandedSourceLoc
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 21 "source.cog"
  

#line 21 "source.cog"
             TerminatedStringSpan file;


#line 22 "source.cog"
  

#line 22 "source.cog"
             Int line;


#line 23 "source.cog"
  

#line 23 "source.cog"
               Int column;
};


#line 42 "source.cog"
 

#line 45 "source.cog"
     Ptr<

#line 45 "source.cog"
         SourceFile>  getSourceFile(

#line 43 "source.cog"
           Session session, 

#line 44 "source.cog"
        TerminatedStringSpan path);


#line 99 "source.cog"
 

#line 102 "source.cog"
     ExpandedSourceLoc expandLoc(

#line 100 "source.cog"
           Session session, 

#line 101 "source.cog"
       SourceLoc loc);


#line 3 "string.cog"
 

#line 70 "string.cog"
 

#line 70 "string.cog"
                                                 Bool operator==(

#line 70 "string.cog"
               StringSpan left, 

#line 70 "string.cog"
                                  StringSpan right);


#line 81 "string.cog"
 

#line 81 "string.cog"
                                                 Bool operator!=(

#line 81 "string.cog"
               StringSpan left, 

#line 81 "string.cog"
                                  StringSpan right);


#line 16 "syntax.cog"
 

#line 16 "syntax.cog"
                                  Bool asBool(

#line 16 "syntax.cog"
                      TypeExp typeExp);


#line 21 "syntax.cog"
 template<typename T >
struct SyntaxListIterator
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 23 "syntax.cog"
  

#line 23 "syntax.cog"
                T current;


#line 25 "syntax.cog"
  SyntaxListIterator(

#line 26 "syntax.cog"
            T current);


#line 31 "syntax.cog"
  

#line 31 "syntax.cog"
                                           Bool operator!=(

#line 31 "syntax.cog"
                 SyntaxListIterator<

#line 31 "syntax.cog"
                                    T>  other);


#line 36 "syntax.cog"
  

#line 36 "syntax.cog"
              T operator*();


#line 41 "syntax.cog"
  void operator++();
};


#line 128 "syntax.cog"
 template<typename T, typename U >
struct FilteredSyntaxListIterator
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 130 "syntax.cog"
  

#line 130 "syntax.cog"
                T current;


#line 132 "syntax.cog"
  FilteredSyntaxListIterator(

#line 132 "syntax.cog"
                U current);


#line 137 "syntax.cog"
  

#line 137 "syntax.cog"
                                                     Bool operator!=(

#line 137 "syntax.cog"
                 FilteredSyntaxListIterator<

#line 137 "syntax.cog"
                                            T, 

#line 137 "syntax.cog"
                                              U>  other);


#line 142 "syntax.cog"
     

#line 142 "syntax.cog"
                 T operator*();


#line 144 "syntax.cog"
  void operator++();


#line 149 "syntax.cog"
  

#line 149 "syntax.cog"
                         T adjust(

#line 149 "syntax.cog"
                   U obj);
};


#line 205 "syntax.cog"
 using BuiltinAttr = struct BuiltinAttrImpl* ;
struct BuiltinAttrImpl : 

#line 205 "syntax.cog"
                     AttrImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 207 "syntax.cog"
  

#line 207 "syntax.cog"
             Ptr<

#line 207 "syntax.cog"
                 Name>  name;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::BuiltinAttr > { typedef cogc::BuiltinAttrImpl Impl; };
} namespace cogc {


#line 269 "syntax.cog"
 using SpecializedDecl = struct SpecializedDeclImpl* ;
struct SpecializedDeclImpl : 

#line 269 "syntax.cog"
                         ObjectImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 271 "syntax.cog"
  

#line 271 "syntax.cog"
             Decl decl;


#line 272 "syntax.cog"
  

#line 272 "syntax.cog"
                       Specializations specializations;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::SpecializedDecl > { typedef cogc::SpecializedDeclImpl Impl; };
} namespace cogc {


#line 306 "syntax.cog"
 template<typename T >
struct DeclRefListIterator
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 308 "syntax.cog"
  

#line 308 "syntax.cog"
             Decl decl;


#line 309 "syntax.cog"
  

#line 309 "syntax.cog"
                        Specializations specializations;


#line 311 "syntax.cog"
  DeclRefListIterator(

#line 311 "syntax.cog"
             Decl decl, 

#line 311 "syntax.cog"
                                    Specializations specializations);


#line 319 "syntax.cog"
  void operator++();


#line 327 "syntax.cog"
  

#line 327 "syntax.cog"
              DeclRefValImpl<

#line 327 "syntax.cog"
                             T>  operator*();


#line 334 "syntax.cog"
  void adjust();
};


#line 347 "syntax.cog"
 template<typename T >
struct DeclRefList
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 349 "syntax.cog"
  

#line 349 "syntax.cog"
             Decl decl;


#line 350 "syntax.cog"
  

#line 350 "syntax.cog"
                        Specializations specializations;


#line 352 "syntax.cog"
  

#line 352 "syntax.cog"
                  DeclRefListIterator<

#line 352 "syntax.cog"
                                      T>  begin();


#line 357 "syntax.cog"
  

#line 357 "syntax.cog"
                DeclRefListIterator<

#line 357 "syntax.cog"
                                    T>  end();


#line 362 "syntax.cog"
  DeclRefList();


#line 368 "syntax.cog"
  DeclRefList(

#line 368 "syntax.cog"
             Decl decl, 

#line 368 "syntax.cog"
                                    Specializations specializations);
};


#line 375 "syntax.cog"
 template<typename T >


#line 375 "syntax.cog"
      

#line 377 "syntax.cog"
                                    Bool operator!=(

#line 376 "syntax.cog"
        DeclRefListIterator<

#line 376 "syntax.cog"
                            T>  left, 

#line 377 "syntax.cog"
         DeclRefListIterator<

#line 377 "syntax.cog"
                             T>  right);


#line 382 "syntax.cog"
 

#line 383 "syntax.cog"
     DeclRefList<

#line 383 "syntax.cog"
                 Decl>  getDecls(

#line 382 "syntax.cog"
                          DeclRefValImpl<

#line 382 "syntax.cog"
                                         ContainerDecl>  container);


#line 395 "syntax.cog"
 

#line 396 "syntax.cog"
     DeclRefVal getInner(

#line 395 "syntax.cog"
                        DeclRefValImpl<

#line 395 "syntax.cog"
                                       GenericDecl>  declRef);


#line 409 "syntax.cog"
 using ImportDecl = struct ImportDeclImpl* ;
struct ImportDeclImpl : 

#line 409 "syntax.cog"
                    DeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 412 "syntax.cog"
  

#line 412 "syntax.cog"
              Ptr<

#line 412 "syntax.cog"
                  Scope>  scope;


#line 414 "syntax.cog"
  

#line 414 "syntax.cog"
             Ptr<

#line 414 "syntax.cog"
                 Name>  name;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ImportDecl > { typedef cogc::ImportDeclImpl Impl; };
} namespace cogc {


#line 452 "syntax.cog"
 

#line 454 "syntax.cog"
     Type getResultType(

#line 453 "syntax.cog"
           DeclRefValImpl<

#line 453 "syntax.cog"
                          FuncDeclBase>  declRef);


#line 479 "syntax.cog"
 

#line 479 "syntax.cog"
                                                       Type getType(

#line 479 "syntax.cog"
                       DeclRefValImpl<

#line 479 "syntax.cog"
                                      VarDeclBase>  declRef);


#line 486 "syntax.cog"
 using VarDecl = struct VarDeclImpl* ;
struct VarDeclImpl : 

#line 486 "syntax.cog"
                 VarDeclBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::VarDecl > { typedef cogc::VarDeclImpl Impl; };
} namespace cogc {


#line 506 "syntax.cog"
 using IfStmtBase = struct IfStmtBaseImpl* ;
struct IfStmtBaseImpl : 

#line 506 "syntax.cog"
                    StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 508 "syntax.cog"
  

#line 508 "syntax.cog"
                 Stmt thenStmt;


#line 509 "syntax.cog"
  

#line 509 "syntax.cog"
                 Stmt elseStmt;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::IfStmtBase > { typedef cogc::IfStmtBaseImpl Impl; };
} namespace cogc {


#line 513 "syntax.cog"
 using IfStmt = struct IfStmtImpl* ;
struct IfStmtImpl : 

#line 513 "syntax.cog"
                IfStmtBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 515 "syntax.cog"
  

#line 515 "syntax.cog"
                  Exp condition;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::IfStmt > { typedef cogc::IfStmtImpl Impl; };
} namespace cogc {


#line 518 "syntax.cog"
 using IfLetStmt = struct IfLetStmtImpl* ;
struct IfLetStmtImpl : 

#line 518 "syntax.cog"
                   IfStmtBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 520 "syntax.cog"
  

#line 520 "syntax.cog"
                 

#line 520 "syntax.cog"
             Name

#line 520 "syntax.cog"
                 * name;


#line 521 "syntax.cog"
  

#line 521 "syntax.cog"
             Exp init;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::IfLetStmt > { typedef cogc::IfLetStmtImpl Impl; };
} namespace cogc {


#line 525 "syntax.cog"
 using WhileStmt = struct WhileStmtImpl* ;
struct WhileStmtImpl : 

#line 525 "syntax.cog"
                   StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 527 "syntax.cog"
  

#line 527 "syntax.cog"
                  Exp condition;


#line 528 "syntax.cog"
  

#line 528 "syntax.cog"
             Stmt body;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::WhileStmt > { typedef cogc::WhileStmtImpl Impl; };
} namespace cogc {


#line 531 "syntax.cog"
 using ForStmt = struct ForStmtImpl* ;
struct ForStmtImpl : 

#line 531 "syntax.cog"
                 StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 533 "syntax.cog"
  

#line 533 "syntax.cog"
             Stmt init;


#line 534 "syntax.cog"
  

#line 534 "syntax.cog"
                  Exp condition;


#line 535 "syntax.cog"
  

#line 535 "syntax.cog"
             Exp iter;


#line 536 "syntax.cog"
  

#line 536 "syntax.cog"
             Stmt body;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ForStmt > { typedef cogc::ForStmtImpl Impl; };
} namespace cogc {


#line 539 "syntax.cog"
 using ReturnStmt = struct ReturnStmtImpl* ;
struct ReturnStmtImpl : 

#line 539 "syntax.cog"
                    StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 541 "syntax.cog"
  

#line 541 "syntax.cog"
              Exp value;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ReturnStmt > { typedef cogc::ReturnStmtImpl Impl; };
} namespace cogc {


#line 544 "syntax.cog"
 using BreakStmt = struct BreakStmtImpl* ;
struct BreakStmtImpl : 

#line 544 "syntax.cog"
                   StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::BreakStmt > { typedef cogc::BreakStmtImpl Impl; };
} namespace cogc {


#line 548 "syntax.cog"
 using ContinueStmt = struct ContinueStmtImpl* ;
struct ContinueStmtImpl : 

#line 548 "syntax.cog"
                      StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ContinueStmt > { typedef cogc::ContinueStmtImpl Impl; };
} namespace cogc {


#line 552 "syntax.cog"
 using SwitchCase = struct SwitchCaseImpl* ;
struct SwitchCaseImpl : 

#line 552 "syntax.cog"
                    SyntaxImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 554 "syntax.cog"
  

#line 554 "syntax.cog"
               Arg values;


#line 555 "syntax.cog"
  

#line 555 "syntax.cog"
             Stmt body;


#line 556 "syntax.cog"
  

#line 556 "syntax.cog"
             SwitchCase next;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::SwitchCase > { typedef cogc::SwitchCaseImpl Impl; };
} namespace cogc {


#line 559 "syntax.cog"
 using SwitchStmt = struct SwitchStmtImpl* ;
struct SwitchStmtImpl : 

#line 559 "syntax.cog"
                    StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 561 "syntax.cog"
  

#line 561 "syntax.cog"
                  Exp condition;


#line 562 "syntax.cog"
  

#line 562 "syntax.cog"
              SwitchCase cases;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::SwitchStmt > { typedef cogc::SwitchStmtImpl Impl; };
} namespace cogc {


#line 573 "syntax.cog"
 using PositionalArg = struct PositionalArgImpl* ;
struct PositionalArgImpl : 

#line 573 "syntax.cog"
                       ArgImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::PositionalArg > { typedef cogc::PositionalArgImpl Impl; };
} namespace cogc {


#line 585 "syntax.cog"
 using LitExp = struct LitExpImpl* ;
struct LitExpImpl : 

#line 585 "syntax.cog"
                ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::LitExp > { typedef cogc::LitExpImpl Impl; };
} namespace cogc {


#line 591 "syntax.cog"
 using IntLitExp = struct IntLitExpImpl* ;
struct IntLitExpImpl : 

#line 591 "syntax.cog"
                   LitExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 593 "syntax.cog"
  

#line 593 "syntax.cog"
            IntLitVal val;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::IntLitExp > { typedef cogc::IntLitExpImpl Impl; };
} namespace cogc {


#line 596 "syntax.cog"
 using StringLitExp = struct StringLitExpImpl* ;
struct StringLitExpImpl : 

#line 596 "syntax.cog"
                      LitExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 598 "syntax.cog"
  

#line 598 "syntax.cog"
            String val;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::StringLitExp > { typedef cogc::StringLitExpImpl Impl; };
} namespace cogc {


#line 601 "syntax.cog"
 using CharacterLitExp = struct CharacterLitExpImpl* ;
struct CharacterLitExpImpl : 

#line 601 "syntax.cog"
                         LitExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 603 "syntax.cog"
  

#line 603 "syntax.cog"
            String val;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::CharacterLitExp > { typedef cogc::CharacterLitExpImpl Impl; };
} namespace cogc {


#line 613 "syntax.cog"
 using GenericAppExp = struct GenericAppExpImpl* ;
struct GenericAppExpImpl : 

#line 613 "syntax.cog"
                       AppExpBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::GenericAppExp > { typedef cogc::GenericAppExpImpl Impl; };
} namespace cogc {


#line 617 "syntax.cog"
 using AppExp = struct AppExpImpl* ;
struct AppExpImpl : 

#line 617 "syntax.cog"
                AppExpBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::AppExp > { typedef cogc::AppExpImpl Impl; };
} namespace cogc {


#line 621 "syntax.cog"
 using IndexExp = struct IndexExpImpl* ;
struct IndexExpImpl : 

#line 621 "syntax.cog"
                  AppExpBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::IndexExp > { typedef cogc::IndexExpImpl Impl; };
} namespace cogc {


#line 625 "syntax.cog"
 using OperatorAppExp = struct OperatorAppExpImpl* ;
struct OperatorAppExpImpl : 

#line 625 "syntax.cog"
                        AppExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::OperatorAppExp > { typedef cogc::OperatorAppExpImpl Impl; };
} namespace cogc {


#line 629 "syntax.cog"
 using InfixExp = struct InfixExpImpl* ;
struct InfixExpImpl : 

#line 629 "syntax.cog"
                  OperatorAppExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::InfixExp > { typedef cogc::InfixExpImpl Impl; };
} namespace cogc {


#line 633 "syntax.cog"
 using PrefixExp = struct PrefixExpImpl* ;
struct PrefixExpImpl : 

#line 633 "syntax.cog"
                   OperatorAppExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::PrefixExp > { typedef cogc::PrefixExpImpl Impl; };
} namespace cogc {


#line 637 "syntax.cog"
 using PostfixExp = struct PostfixExpImpl* ;
struct PostfixExpImpl : 

#line 637 "syntax.cog"
                    OperatorAppExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::PostfixExp > { typedef cogc::PostfixExpImpl Impl; };
} namespace cogc {


#line 641 "syntax.cog"
 using AssignExp = struct AssignExpImpl* ;
struct AssignExpImpl : 

#line 641 "syntax.cog"
                   ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 643 "syntax.cog"
  

#line 643 "syntax.cog"
             Exp left;


#line 644 "syntax.cog"
  

#line 644 "syntax.cog"
              Exp right;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::AssignExp > { typedef cogc::AssignExpImpl Impl; };
} namespace cogc {


#line 665 "syntax.cog"
 using ErrorExp = struct ErrorExpImpl* ;
struct ErrorExpImpl : 

#line 665 "syntax.cog"
                  ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ErrorExp > { typedef cogc::ErrorExpImpl Impl; };
} namespace cogc {


#line 715 "syntax.cog"
 using OverloadedExpr = struct OverloadedExprImpl* ;
struct OverloadedExprImpl : 

#line 715 "syntax.cog"
                        ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 717 "syntax.cog"
  

#line 717 "syntax.cog"
                     LookupResult lookupResult;


#line 718 "syntax.cog"
  

#line 718 "syntax.cog"
             Exp base;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::OverloadedExpr > { typedef cogc::OverloadedExprImpl Impl; };
} namespace cogc {


#line 735 "syntax.cog"
 using DeclRefType = struct DeclRefTypeImpl* ;
struct DeclRefTypeImpl : 

#line 735 "syntax.cog"
                     TypeImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 737 "syntax.cog"
  

#line 737 "syntax.cog"
                CompactDeclRef declRef;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::DeclRefType > { typedef cogc::DeclRefTypeImpl Impl; };
} namespace cogc {


#line 747 "syntax.cog"
 using FuncType = struct FuncTypeImpl* ;
struct FuncTypeImpl : 

#line 747 "syntax.cog"
                  TypeImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::FuncType > { typedef cogc::FuncTypeImpl Impl; };
} namespace cogc {


#line 753 "syntax.cog"
 using ErrorType = struct ErrorTypeImpl* ;
struct ErrorTypeImpl : 

#line 753 "syntax.cog"
                   TypeImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ErrorType > { typedef cogc::ErrorTypeImpl Impl; };
} namespace cogc {


#line 758 "syntax.cog"
 using OverloadGroupType = struct OverloadGroupTypeImpl* ;
struct OverloadGroupTypeImpl : 

#line 758 "syntax.cog"
                           TypeImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::OverloadGroupType > { typedef cogc::OverloadGroupTypeImpl Impl; };
} namespace cogc {


#line 765 "syntax.cog"
 using EnumDecl = struct EnumDeclImpl* ;
struct EnumDeclImpl : 

#line 765 "syntax.cog"
                  AggTypeDeclImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::EnumDecl > { typedef cogc::EnumDeclImpl Impl; };
} namespace cogc {


#line 768 "syntax.cog"
 using EnumTagDecl = struct EnumTagDeclImpl* ;
struct EnumTagDeclImpl : 

#line 768 "syntax.cog"
                     VarDeclBaseImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::EnumTagDecl > { typedef cogc::EnumTagDeclImpl Impl; };
} namespace cogc {


#line 771 "syntax.cog"
 using ForEachStmt = struct ForEachStmtImpl* ;
struct ForEachStmtImpl : 

#line 771 "syntax.cog"
                     StmtImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 773 "syntax.cog"
  

#line 773 "syntax.cog"
                 

#line 773 "syntax.cog"
             Name

#line 773 "syntax.cog"
                 * name;


#line 774 "syntax.cog"
  

#line 774 "syntax.cog"
           Exp exp;


#line 775 "syntax.cog"
  

#line 775 "syntax.cog"
            Stmt body;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ForEachStmt > { typedef cogc::ForEachStmtImpl Impl; };
} namespace cogc {


#line 778 "syntax.cog"
 using ParenExp = struct ParenExpImpl* ;
struct ParenExpImpl : 

#line 778 "syntax.cog"
                  ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 780 "syntax.cog"
  

#line 780 "syntax.cog"
            Exp base;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ParenExp > { typedef cogc::ParenExpImpl Impl; };
} namespace cogc {


#line 785 "syntax.cog"
 using ThisExpr = struct ThisExprImpl* ;
struct ThisExprImpl : 

#line 785 "syntax.cog"
                  ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 787 "syntax.cog"
  

#line 787 "syntax.cog"
                   

#line 787 "syntax.cog"
              Scope

#line 787 "syntax.cog"
                   * scope;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::ThisExpr > { typedef cogc::ThisExprImpl Impl; };
} namespace cogc {


#line 790 "syntax.cog"
 using CastExpr = struct CastExprImpl* ;
struct CastExprImpl : 

#line 790 "syntax.cog"
                  ExpImpl
{
typedef cog::Class StaticClass;
static StaticClass staticClass;


#line 792 "syntax.cog"
  

#line 792 "syntax.cog"
               TypeExp toType;


#line 793 "syntax.cog"
  

#line 793 "syntax.cog"
            Exp arg;
};
} namespace cog {
template<> struct ObjectClassImpl<cogc::CastExpr > { typedef cogc::CastExprImpl Impl; };
} namespace cogc {


#line 5 "token.cog"
 enum TokenFlag : int
{
kTokenFlag_AtStartOfLine = 

#line 7 "token.cog"
                                

#line 7 "token.cog"
                              1 

#line 7 "token.cog"
                                << 

#line 7 "token.cog"
                                   0,
kTokenFlag_AfterSpace = 

#line 8 "token.cog"
                              

#line 8 "token.cog"
                            1 

#line 8 "token.cog"
                              << 

#line 8 "token.cog"
                                 1,
};


#line 3 "check.cog"
 

#line 38 "diagnostic.cog"
 

#line 5 "source.cog"
 

#line 9 "source.cog"
  SourceLoc::SourceLoc()
{


#line 9 "source.cog"
               DEREF(

#line 9 "source.cog"
           this).raw = 

#line 9 "source.cog"
                      0;
}


#line 11 "source.cog"
  SourceLoc::SourceLoc(

#line 11 "source.cog"
            USize raw)
{


#line 13 "source.cog"
       DEREF(

#line 13 "source.cog"
   this).raw = 

#line 13 "source.cog"
              raw;
}


#line 195 "syntax.cog"
 

#line 48 "syntax.cog"
 

#line 52 "syntax.cog"
  template<typename T > 

#line 52 "syntax.cog"
                            T SyntaxList<T > ::operator[](

#line 52 "syntax.cog"
                   Size index)
{


#line 54 "syntax.cog"
         

#line 54 "syntax.cog"
         auto item = 

#line 54 "syntax.cog"
                    head;


#line 55 "syntax.cog"
         {


#line 55 "syntax.cog"
             

#line 55 "syntax.cog"
             

#line 55 "syntax.cog"
                      Size ii = 

#line 55 "syntax.cog"
                             0;
for(;

#line 55 "syntax.cog"
                                   

#line 55 "syntax.cog"
                                ii 

#line 55 "syntax.cog"
                                   < 

#line 55 "syntax.cog"
                                     index;

#line 55 "syntax.cog"
                                            

#line 55 "syntax.cog"
                                            ++

#line 55 "syntax.cog"
                                              ii)
{
{


#line 57 "syntax.cog"
             item = 

#line 57 "syntax.cog"
                    cast<

#line 57 "syntax.cog"
                         T>(

#line 57 "syntax.cog"
                                DEREF(

#line 57 "syntax.cog"
                            item).next);
}
}}


#line 59 "syntax.cog"
         return 

#line 59 "syntax.cog"
                item;
}


#line 62 "syntax.cog"
  template<typename T > 

#line 62 "syntax.cog"
                  SyntaxListIterator<

#line 62 "syntax.cog"
                                     T>  SyntaxList<T > ::begin()
{


#line 64 "syntax.cog"
   return 

#line 64 "syntax.cog"
                               

#line 64 "syntax.cog"
          SyntaxListIterator<

#line 64 "syntax.cog"
                             T> (

#line 64 "syntax.cog"
                                head);
}


#line 67 "syntax.cog"
  template<typename T > 

#line 67 "syntax.cog"
                SyntaxListIterator<

#line 67 "syntax.cog"
                                   T>  SyntaxList<T > ::end()
{


#line 69 "syntax.cog"
   return 

#line 69 "syntax.cog"
                               

#line 69 "syntax.cog"
          SyntaxListIterator<

#line 69 "syntax.cog"
                             T> (

#line 69 "syntax.cog"
                                0);
}


#line 72 "syntax.cog"
  template<typename T > SyntaxList<T > ::SyntaxList()
{


#line 74 "syntax.cog"
       DEREF(

#line 74 "syntax.cog"
   this).head = 

#line 74 "syntax.cog"
               0;
}


#line 77 "syntax.cog"
  template<typename T > SyntaxList<T > ::SyntaxList(

#line 77 "syntax.cog"
             T head)
{


#line 79 "syntax.cog"
       DEREF(

#line 79 "syntax.cog"
   this).head = 

#line 79 "syntax.cog"
               head;
}


#line 200 "syntax.cog"
 

#line 210 "syntax.cog"
 

#line 216 "syntax.cog"
  

#line 216 "syntax.cog"
                                              Attr StmtImpl::findAttrImpl(

#line 216 "syntax.cog"
                               Ptr<

#line 216 "syntax.cog"
                                   Class>  attrClass)
{


#line 218 "syntax.cog"
   for(auto a : 

#line 218 "syntax.cog"
                attrs)
{
{


#line 221 "syntax.cog"
    

#line 221 "syntax.cog"
    auto match = 

#line 221 "syntax.cog"
                  

#line 221 "syntax.cog"
                as(

#line 221 "syntax.cog"
                   a, 

#line 221 "syntax.cog"
                      attrClass);


#line 222 "syntax.cog"
    if(

#line 222 "syntax.cog"
       match)
{


#line 223 "syntax.cog"
     return 

#line 223 "syntax.cog"
            cast<

#line 223 "syntax.cog"
                 Attr>(

#line 223 "syntax.cog"
                       match);
}
}
}


#line 225 "syntax.cog"
   return 

#line 225 "syntax.cog"
          nullptr;
}


#line 228 "syntax.cog"
  

#line 228 "syntax.cog"
       template<typename T > 

#line 228 "syntax.cog"
                        T StmtImpl::findAttr()
{


#line 230 "syntax.cog"
   return 

#line 230 "syntax.cog"
          cast<

#line 230 "syntax.cog"
               T>(

#line 230 "syntax.cog"
                              

#line 230 "syntax.cog"
                  findAttrImpl(

#line 230 "syntax.cog"
                                          

#line 230 "syntax.cog"
                               getClass<

#line 230 "syntax.cog"
                                        T> ()));
}


#line 234 "syntax.cog"
 

#line 242 "syntax.cog"
 

#line 248 "syntax.cog"
  

#line 248 "syntax.cog"
                      ContainerStmt DeclImpl::getParent()
{


#line 250 "syntax.cog"
   return 

#line 250 "syntax.cog"
          parent;
}


#line 164 "syntax.cog"
 

#line 169 "syntax.cog"
  template<typename T, typename U > 

#line 169 "syntax.cog"
                  FilteredSyntaxListIterator<

#line 169 "syntax.cog"
                                             T, 

#line 169 "syntax.cog"
                                               U>  FilteredSyntaxList<T, U > ::begin()
{


#line 171 "syntax.cog"
   return 

#line 171 "syntax.cog"
                                         

#line 171 "syntax.cog"
          FilteredSyntaxListIterator<

#line 171 "syntax.cog"
                                     T, 

#line 171 "syntax.cog"
                                       U> (

#line 171 "syntax.cog"
                                          head);
}


#line 174 "syntax.cog"
  template<typename T, typename U > 

#line 174 "syntax.cog"
                FilteredSyntaxListIterator<

#line 174 "syntax.cog"
                                           T, 

#line 174 "syntax.cog"
                                             U>  FilteredSyntaxList<T, U > ::end()
{


#line 176 "syntax.cog"
   return 

#line 176 "syntax.cog"
                                         

#line 176 "syntax.cog"
          FilteredSyntaxListIterator<

#line 176 "syntax.cog"
                                     T, 

#line 176 "syntax.cog"
                                       U> (

#line 176 "syntax.cog"
                                          nullptr);
}


#line 179 "syntax.cog"
  template<typename T, typename U > FilteredSyntaxList<T, U > ::FilteredSyntaxList()
{


#line 181 "syntax.cog"
       DEREF(

#line 181 "syntax.cog"
   this).head = 

#line 181 "syntax.cog"
               nullptr;
}


#line 184 "syntax.cog"
  template<typename T, typename U > FilteredSyntaxList<T, U > ::FilteredSyntaxList(

#line 184 "syntax.cog"
             U head)
{


#line 186 "syntax.cog"
       DEREF(

#line 186 "syntax.cog"
   this).head = 

#line 186 "syntax.cog"
               head;
}


#line 189 "syntax.cog"
  template<typename T, typename U > FilteredSyntaxList<T, U > ::FilteredSyntaxList(

#line 189 "syntax.cog"
             ConstRef<

#line 189 "syntax.cog"
                      SyntaxList<

#line 189 "syntax.cog"
                                 U> >  list)
{


#line 191 "syntax.cog"
       DEREF(

#line 191 "syntax.cog"
   this).head = 

#line 191 "syntax.cog"
                   DEREF(

#line 191 "syntax.cog"
               list).head;
}


#line 284 "syntax.cog"
 

#line 288 "syntax.cog"
  

#line 288 "syntax.cog"
                     SyntaxList<

#line 288 "syntax.cog"
                                Stmt>  ContainerStmtImpl::getStmts()
{


#line 290 "syntax.cog"
   return 

#line 290 "syntax.cog"
          stmts;
}


#line 293 "syntax.cog"
  

#line 293 "syntax.cog"
                     FilteredSyntaxList<

#line 293 "syntax.cog"
                                        Decl, 

#line 293 "syntax.cog"
                                              Stmt>  ContainerStmtImpl::getDecls()
{


#line 295 "syntax.cog"
   return 

#line 295 "syntax.cog"
                                        

#line 295 "syntax.cog"
          FilteredSyntaxList<

#line 295 "syntax.cog"
                             Decl, 

#line 295 "syntax.cog"
                                   Stmt> (

#line 295 "syntax.cog"
                                         stmts);
}


#line 299 "syntax.cog"
 

#line 303 "syntax.cog"
  

#line 303 "syntax.cog"
                     Ref<

#line 303 "syntax.cog"
                         SyntaxList<

#line 303 "syntax.cog"
                                    Decl> >  ContainerDeclImpl::getDecls()
{


#line 303 "syntax.cog"
                                              return 

#line 303 "syntax.cog"
                                                     

#line 303 "syntax.cog"
                                                     *

#line 303 "syntax.cog"
                                                      cast<

#line 303 "syntax.cog"
                                                           Ptr<

#line 303 "syntax.cog"
                                                               SyntaxList<

#line 303 "syntax.cog"
                                                                          Decl> > >(

#line 303 "syntax.cog"
                                                                                    

#line 303 "syntax.cog"
                                                                                    &

#line 303 "syntax.cog"
                                                                                     stmts);
}


#line 425 "syntax.cog"
 

#line 4 "session.cog"
 

#line 5 "check.cog"
 void checkModule(

#line 6 "check.cog"
              Session session)
{


#line 8 "check.cog"
             

#line 8 "check.cog"
             

#line 8 "check.cog"
  checkModule(

#line 8 "check.cog"
              session, 

#line 8 "check.cog"
                              DEREF(

#line 8 "check.cog"
                       session).moduleDecl);
}


#line 12 "check.cog"
 void checkModule(

#line 13 "check.cog"
           Session session, 

#line 14 "check.cog"
              ModuleDecl moduleDecl)
{


#line 16 "check.cog"
  

#line 16 "check.cog"
  

#line 16 "check.cog"
                      SharedCheckContext sharedContext;


#line 17 "check.cog"
               DEREF(

#line 17 "check.cog"
  sharedContext).session = 

#line 17 "check.cog"
                          session;


#line 19 "check.cog"
  

#line 19 "check.cog"
  

#line 19 "check.cog"
                CheckContext context;


#line 20 "check.cog"
         DEREF(

#line 20 "check.cog"
  context).shared = 

#line 20 "check.cog"
                   

#line 20 "check.cog"
                   &

#line 20 "check.cog"
                    sharedContext;


#line 22 "check.cog"
             

#line 22 "check.cog"
             

#line 22 "check.cog"
  checkModule(

#line 22 "check.cog"
              

#line 22 "check.cog"
              &

#line 22 "check.cog"
               context, 

#line 22 "check.cog"
                        moduleDecl);
}


#line 25 "check.cog"
 

#line 30 "check.cog"
 

#line 35 "check.cog"
 

#line 36 "check.cog"
                                           

#line 36 "check.cog"
                             DiagnosticSink

#line 36 "check.cog"
                                           * getSink(

#line 36 "check.cog"
                       

#line 36 "check.cog"
           CheckContext

#line 36 "check.cog"
                       * context)
{


#line 38 "check.cog"
  return 

#line 38 "check.cog"
         

#line 38 "check.cog"
         &

#line 38 "check.cog"
                                DEREF(

#line 38 "check.cog"
                        DEREF(

#line 38 "check.cog"
                 DEREF(

#line 38 "check.cog"
          context).shared).session).sink;
}


#line 41 "check.cog"
 void checkModule(

#line 42 "check.cog"
                       

#line 42 "check.cog"
           CheckContext

#line 42 "check.cog"
                       * context, 

#line 43 "check.cog"
              ModuleDecl moduleDecl)
{


#line 45 "check.cog"
            

#line 45 "check.cog"
            

#line 45 "check.cog"
  checkDecls(

#line 45 "check.cog"
             context, 

#line 45 "check.cog"
                      moduleDecl);
}


#line 48 "check.cog"
 void checkImportDecls(

#line 49 "check.cog"
                       

#line 49 "check.cog"
           CheckContext

#line 49 "check.cog"
                       * context, 

#line 50 "check.cog"
                 ContainerDecl containerDecl)
{


#line 52 "check.cog"
  for(auto decl : 

#line 52 "check.cog"
                                        

#line 52 "check.cog"
                               DEREF(

#line 52 "check.cog"
                  containerDecl).getDecls())
{
{


#line 54 "check.cog"
   if(auto importDecl = 

#line 54 "check.cog"
                                     

#line 54 "check.cog"
                       as<

#line 54 "check.cog"
                          ImportDecl> (

#line 54 "check.cog"
                                      decl))
{


#line 58 "check.cog"
       

#line 58 "check.cog"
       auto module = 

#line 58 "check.cog"
                                      

#line 58 "check.cog"
                    findOrImportModule(

#line 58 "check.cog"
                                                     DEREF(

#line 58 "check.cog"
                                              DEREF(

#line 58 "check.cog"
                                       context).shared).session, 

#line 58 "check.cog"
                                                                         DEREF(

#line 58 "check.cog"
                                                               importDecl).loc, 

#line 58 "check.cog"
                                                                                         DEREF(

#line 58 "check.cog"
                                                                               importDecl).name);


#line 60 "check.cog"
                    

#line 60 "check.cog"
                    

#line 60 "check.cog"
       attachToScope(

#line 60 "check.cog"
                               DEREF(

#line 60 "check.cog"
                     importDecl).scope, 

#line 60 "check.cog"
                                       module);
}
}
}
}


#line 66 "check.cog"
 void checkDecls(

#line 67 "check.cog"
                         

#line 67 "check.cog"
             CheckContext

#line 67 "check.cog"
                         * context, 

#line 68 "check.cog"
                  ContainerDecl containerDecl)
{


#line 70 "check.cog"
                  

#line 70 "check.cog"
                  

#line 70 "check.cog"
  checkImportDecls(

#line 70 "check.cog"
                   context, 

#line 70 "check.cog"
                            containerDecl);


#line 72 "check.cog"
  for(auto decl : 

#line 72 "check.cog"
                                        

#line 72 "check.cog"
                               DEREF(

#line 72 "check.cog"
                  containerDecl).getDecls())
{
{


#line 74 "check.cog"
            

#line 74 "check.cog"
            

#line 74 "check.cog"
   checkDecl(

#line 74 "check.cog"
             context, 

#line 74 "check.cog"
                      decl);
}
}
}


#line 3 "scope.cog"
 

#line 9 "scope.cog"
 

#line 78 "check.cog"
 void attachToScope(

#line 79 "check.cog"
              

#line 79 "check.cog"
         Scope

#line 79 "check.cog"
              * scope, 

#line 80 "check.cog"
         ContainerDecl decl)
{


#line 82 "check.cog"
     

#line 82 "check.cog"
     auto link = 

#line 82 "check.cog"
                cast<

#line 82 "check.cog"
                     Ptr<

#line 82 "check.cog"
                         ScopeLink> >(

#line 82 "check.cog"
                                            

#line 82 "check.cog"
                                      malloc(

#line 82 "check.cog"
                                                   

#line 82 "check.cog"
                                             sizeof(

#line 82 "check.cog"
                                                    ScopeLink)));


#line 83 "check.cog"
      DEREF(

#line 83 "check.cog"
  link).container = 

#line 83 "check.cog"
                   decl;


#line 84 "check.cog"
      DEREF(

#line 84 "check.cog"
  link).next = 

#line 84 "check.cog"
              nullptr;


#line 86 "check.cog"
      DEREF(

#line 86 "check.cog"
  link).next = 

#line 86 "check.cog"
                              DEREF(

#line 86 "check.cog"
                   DEREF(

#line 86 "check.cog"
              scope).directLink).next;


#line 87 "check.cog"
                  DEREF(

#line 87 "check.cog"
       DEREF(

#line 87 "check.cog"
  scope).directLink).next = 

#line 87 "check.cog"
                          link;
}


#line 90 "check.cog"
 void checkDecl(

#line 91 "check.cog"
                        

#line 91 "check.cog"
            CheckContext

#line 91 "check.cog"
                        * context, 

#line 92 "check.cog"
         Decl decl)
{


#line 95 "check.cog"
  if(

#line 95 "check.cog"
                     

#line 95 "check.cog"
         DEREF(

#line 95 "check.cog"
     decl).checkState 

#line 95 "check.cog"
                     == 

#line 95 "check.cog"
                        kDeclCheckState_Checked)
{


#line 96 "check.cog"
   return;
}


#line 98 "check.cog"
  if(

#line 98 "check.cog"
                     

#line 98 "check.cog"
         DEREF(

#line 98 "check.cog"
     decl).checkState 

#line 98 "check.cog"
                     != 

#line 98 "check.cog"
                        kDeclCheckState_Unchecked)
{


#line 101 "check.cog"
           

#line 101 "check.cog"
           

#line 101 "check.cog"
   diagnose(

#line 101 "check.cog"
                   

#line 101 "check.cog"
            getSink(

#line 101 "check.cog"
                    context), 

#line 101 "check.cog"
                                  DEREF(

#line 101 "check.cog"
                              decl).loc, 

#line 101 "check.cog"
                                        kDiagnostic_unimplemented, 

#line 101 "check.cog"
                                                                   "circularity");


#line 102 "check.cog"
   return;
}


#line 105 "check.cog"
      DEREF(

#line 105 "check.cog"
  decl).checkState = 

#line 105 "check.cog"
                    kDeclCheckState_CheckingHead;


#line 106 "check.cog"
               

#line 106 "check.cog"
               

#line 106 "check.cog"
  checkDeclImpl(

#line 106 "check.cog"
                context, 

#line 106 "check.cog"
                         decl);


#line 107 "check.cog"
      DEREF(

#line 107 "check.cog"
  decl).checkState = 

#line 107 "check.cog"
                    kDeclCheckState_Checked;
}


#line 110 "check.cog"
 void checkDeclImpl(

#line 111 "check.cog"
                        

#line 111 "check.cog"
            CheckContext

#line 111 "check.cog"
                        * context, 

#line 112 "check.cog"
         Decl decl)
{


#line 114 "check.cog"
  if(auto classDecl = 

#line 114 "check.cog"
                                  

#line 114 "check.cog"
                     as<

#line 114 "check.cog"
                        ClassDecl> (

#line 114 "check.cog"
                                   decl))
{


#line 116 "check.cog"
                 

#line 116 "check.cog"
                 

#line 116 "check.cog"
   checkClassDecl(

#line 116 "check.cog"
                  context, 

#line 116 "check.cog"
                           classDecl);
}
else
{


#line 118 "check.cog"
       if(auto structDecl = 

#line 118 "check.cog"
                                         

#line 118 "check.cog"
                           as<

#line 118 "check.cog"
                              StructDecl> (

#line 118 "check.cog"
                                          decl))
{


#line 120 "check.cog"
                  

#line 120 "check.cog"
                  

#line 120 "check.cog"
   checkStructDecl(

#line 120 "check.cog"
                   context, 

#line 120 "check.cog"
                            structDecl);
}
else
{


#line 122 "check.cog"
       if(auto funcDecl = 

#line 122 "check.cog"
                                         

#line 122 "check.cog"
                         as<

#line 122 "check.cog"
                            FuncDeclBase> (

#line 122 "check.cog"
                                          decl))
{


#line 124 "check.cog"
                

#line 124 "check.cog"
                

#line 124 "check.cog"
   checkFuncDecl(

#line 124 "check.cog"
                 context, 

#line 124 "check.cog"
                          funcDecl);
}
else
{


#line 126 "check.cog"
       if(auto varDecl = 

#line 126 "check.cog"
                                       

#line 126 "check.cog"
                        as<

#line 126 "check.cog"
                           VarDeclBase> (

#line 126 "check.cog"
                                        decl))
{


#line 128 "check.cog"
               

#line 128 "check.cog"
               

#line 128 "check.cog"
   checkVarDecl(

#line 128 "check.cog"
                context, 

#line 128 "check.cog"
                         varDecl);
}
else
{


#line 130 "check.cog"
       if(auto genericDecl = 

#line 130 "check.cog"
                                           

#line 130 "check.cog"
                            as<

#line 130 "check.cog"
                               GenericDecl> (

#line 130 "check.cog"
                                            decl))
{


#line 132 "check.cog"
                   

#line 132 "check.cog"
                   

#line 132 "check.cog"
   checkGenericDecl(

#line 132 "check.cog"
                    context, 

#line 132 "check.cog"
                             genericDecl);
}
else
{


#line 134 "check.cog"
       if(auto typeAliasDecl = 

#line 134 "check.cog"
                                               

#line 134 "check.cog"
                              as<

#line 134 "check.cog"
                                 TypeAliasDecl> (

#line 134 "check.cog"
                                                decl))
{


#line 136 "check.cog"
                     

#line 136 "check.cog"
                     

#line 136 "check.cog"
   checkTypeAliasDecl(

#line 136 "check.cog"
                      context, 

#line 136 "check.cog"
                               typeAliasDecl);
}
else
{


#line 138 "check.cog"
       if(auto genericParamDecl = 

#line 138 "check.cog"
                                                     

#line 138 "check.cog"
                                 as<

#line 138 "check.cog"
                                    GenericParamDecl> (

#line 138 "check.cog"
                                                      decl))
{
}
else
{


#line 142 "check.cog"
          if(auto importDecl = 

#line 142 "check.cog"
                                            

#line 142 "check.cog"
                              as<

#line 142 "check.cog"
                                 ImportDecl> (

#line 142 "check.cog"
                                             decl))
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


#line 390 "syntax.cog"
 

#line 152 "check.cog"
 void checkGenericDecl(

#line 153 "check.cog"
                       

#line 153 "check.cog"
           CheckContext

#line 153 "check.cog"
                       * context, 

#line 154 "check.cog"
        GenericDecl decl)
{


#line 159 "check.cog"
            

#line 159 "check.cog"
            

#line 159 "check.cog"
  checkDecls(

#line 159 "check.cog"
             context, 

#line 159 "check.cog"
                      decl);


#line 161 "check.cog"
      DEREF(

#line 161 "check.cog"
  decl).checkState = 

#line 161 "check.cog"
                    kDeclCheckState_CheckedHead;


#line 164 "check.cog"
           

#line 164 "check.cog"
           

#line 164 "check.cog"
  checkDecl(

#line 164 "check.cog"
            context, 

#line 164 "check.cog"
                         DEREF(

#line 164 "check.cog"
                     decl).inner);
}


#line 280 "syntax.cog"
 

#line 730 "syntax.cog"
 

#line 580 "syntax.cog"
 

#line 3 "syntax.cog"
 

#line 403 "syntax.cog"
 

#line 421 "syntax.cog"
 

#line 167 "check.cog"
 void checkTypeAliasDecl(

#line 168 "check.cog"
                       

#line 168 "check.cog"
           CheckContext

#line 168 "check.cog"
                       * context, 

#line 169 "check.cog"
        TypeAliasDecl decl)
{
}


#line 473 "syntax.cog"
 

#line 174 "check.cog"
 void checkVarDecl(

#line 175 "check.cog"
                       

#line 175 "check.cog"
           CheckContext

#line 175 "check.cog"
                       * context, 

#line 176 "check.cog"
        VarDeclBase decl)
{


#line 179 "check.cog"
              

#line 179 "check.cog"
              

#line 179 "check.cog"
  checkTypeExp(

#line 179 "check.cog"
               context, 

#line 179 "check.cog"
                        

#line 179 "check.cog"
                        &

#line 179 "check.cog"
                             DEREF(

#line 179 "check.cog"
                         decl).type);


#line 180 "check.cog"
     

#line 180 "check.cog"
     auto type = 

#line 180 "check.cog"
                         DEREF(

#line 180 "check.cog"
                    DEREF(

#line 180 "check.cog"
                decl).type).type;


#line 182 "check.cog"
     

#line 182 "check.cog"
     auto initExpr = 

#line 182 "check.cog"
                        DEREF(

#line 182 "check.cog"
                    decl).init;


#line 183 "check.cog"
     if(

#line 183 "check.cog"
        initExpr)
{


#line 185 "check.cog"
         initExpr = 

#line 185 "check.cog"
                             

#line 185 "check.cog"
                    checkTerm(

#line 185 "check.cog"
                              context, 

#line 185 "check.cog"
                                       initExpr);


#line 186 "check.cog"
         if(

#line 186 "check.cog"
            type)
{


#line 188 "check.cog"
             initExpr = 

#line 188 "check.cog"
                              

#line 188 "check.cog"
                        coerce(

#line 188 "check.cog"
                               context, 

#line 188 "check.cog"
                                        initExpr, 

#line 188 "check.cog"
                                                  type);
}
else
{


#line 194 "check.cog"
             type = 

#line 194 "check.cog"
                            DEREF(

#line 194 "check.cog"
                    initExpr).type;
}
}
else
{


#line 199 "check.cog"
         if(

#line 199 "check.cog"
            

#line 199 "check.cog"
            !

#line 199 "check.cog"
             type)
{


#line 201 "check.cog"
                     

#line 201 "check.cog"
                     

#line 201 "check.cog"
             diagnose(

#line 201 "check.cog"
                             

#line 201 "check.cog"
                      getSink(

#line 201 "check.cog"
                              context), 

#line 201 "check.cog"
                                            DEREF(

#line 201 "check.cog"
                                        decl).loc, 

#line 201 "check.cog"
                                                  kDiagnostic_unimplemented, 

#line 201 "check.cog"
                                                                             "decl without init must have type");


#line 202 "check.cog"
             type = 

#line 202 "check.cog"
                                   

#line 202 "check.cog"
                    createErrorType(

#line 202 "check.cog"
                                    context);
}
}


#line 211 "check.cog"
         DEREF(

#line 211 "check.cog"
     decl).init = 

#line 211 "check.cog"
                 initExpr;


#line 212 "check.cog"
              DEREF(

#line 212 "check.cog"
         DEREF(

#line 212 "check.cog"
     decl).type).type = 

#line 212 "check.cog"
                      type;
}


#line 429 "syntax.cog"
 

#line 446 "syntax.cog"
 

#line 215 "check.cog"
 void checkFuncDecl(

#line 216 "check.cog"
                       

#line 216 "check.cog"
           CheckContext

#line 216 "check.cog"
                       * context, 

#line 217 "check.cog"
        FuncDeclBase decl)
{


#line 220 "check.cog"
            

#line 220 "check.cog"
            

#line 220 "check.cog"
  checkDecls(

#line 220 "check.cog"
             context, 

#line 220 "check.cog"
                      decl);


#line 223 "check.cog"
              

#line 223 "check.cog"
              

#line 223 "check.cog"
  checkTypeExp(

#line 223 "check.cog"
               context, 

#line 223 "check.cog"
                        

#line 223 "check.cog"
                        &

#line 223 "check.cog"
                             DEREF(

#line 223 "check.cog"
                         decl).resultType);


#line 224 "check.cog"
     if(

#line 224 "check.cog"
        

#line 224 "check.cog"
        !

#line 224 "check.cog"
               

#line 224 "check.cog"
         asBool(

#line 224 "check.cog"
                    DEREF(

#line 224 "check.cog"
                decl).resultType))
{


#line 226 "check.cog"
                        DEREF(

#line 226 "check.cog"
             DEREF(

#line 226 "check.cog"
         decl).resultType).type = 

#line 226 "check.cog"
                                              

#line 226 "check.cog"
                                getBuiltinType(

#line 226 "check.cog"
                                               context, 

#line 226 "check.cog"
                                                            DEREF(

#line 226 "check.cog"
                                                        decl).loc, 

#line 226 "check.cog"
                                                                  "Void");
}


#line 229 "check.cog"
      DEREF(

#line 229 "check.cog"
  decl).checkState = 

#line 229 "check.cog"
                    kDeclCheckState_CheckedHead;


#line 231 "check.cog"
  if(auto body = 

#line 231 "check.cog"
                    DEREF(

#line 231 "check.cog"
                decl).body)
{


#line 233 "check.cog"
       DEREF(

#line 233 "check.cog"
   decl).body = 

#line 233 "check.cog"
                        

#line 233 "check.cog"
               checkStmt(

#line 233 "check.cog"
                         context, 

#line 233 "check.cog"
                                  body);
}
}


#line 433 "syntax.cog"
 

#line 438 "syntax.cog"
 

#line 237 "check.cog"
 void checkClassDecl(

#line 238 "check.cog"
                       

#line 238 "check.cog"
           CheckContext

#line 238 "check.cog"
                       * context, 

#line 239 "check.cog"
        ClassDecl decl)
{


#line 241 "check.cog"
                        

#line 241 "check.cog"
                        

#line 241 "check.cog"
  checkAggTypeDeclCommon(

#line 241 "check.cog"
                         context, 

#line 241 "check.cog"
                                  decl);
}


#line 442 "syntax.cog"
 

#line 244 "check.cog"
 void checkStructDecl(

#line 245 "check.cog"
                       

#line 245 "check.cog"
           CheckContext

#line 245 "check.cog"
                       * context, 

#line 246 "check.cog"
        StructDecl decl)
{


#line 248 "check.cog"
                        

#line 248 "check.cog"
                        

#line 248 "check.cog"
  checkAggTypeDeclCommon(

#line 248 "check.cog"
                         context, 

#line 248 "check.cog"
                                  decl);
}


#line 251 "check.cog"
 void checkAggTypeDeclCommon(

#line 252 "check.cog"
                       

#line 252 "check.cog"
           CheckContext

#line 252 "check.cog"
                       * context, 

#line 253 "check.cog"
        AggTypeDecl decl)
{


#line 256 "check.cog"
              

#line 256 "check.cog"
              

#line 256 "check.cog"
  checkTypeExp(

#line 256 "check.cog"
               context, 

#line 256 "check.cog"
                        

#line 256 "check.cog"
                        &

#line 256 "check.cog"
                             DEREF(

#line 256 "check.cog"
                         decl).base);


#line 258 "check.cog"
      DEREF(

#line 258 "check.cog"
  decl).checkState = 

#line 258 "check.cog"
                    kDeclCheckState_CheckedHead;


#line 264 "check.cog"
            

#line 264 "check.cog"
            

#line 264 "check.cog"
  checkDecls(

#line 264 "check.cog"
             context, 

#line 264 "check.cog"
                      decl);
}


#line 269 "check.cog"
 

#line 272 "check.cog"
     Exp checkPrediateExpr(

#line 270 "check.cog"
                       

#line 270 "check.cog"
           CheckContext

#line 270 "check.cog"
                       * context, 

#line 271 "check.cog"
        Exp expr)
{


#line 275 "check.cog"
  return 

#line 275 "check.cog"
                 

#line 275 "check.cog"
         checkExp(

#line 275 "check.cog"
                  context, 

#line 275 "check.cog"
                           expr);
}


#line 278 "check.cog"
 

#line 281 "check.cog"
     Stmt checkStmt(

#line 279 "check.cog"
                       

#line 279 "check.cog"
           CheckContext

#line 279 "check.cog"
                       * context, 

#line 280 "check.cog"
        Stmt stmt)
{


#line 283 "check.cog"
     if(

#line 283 "check.cog"
        

#line 283 "check.cog"
        !

#line 283 "check.cog"
         stmt)
{


#line 284 "check.cog"
         return 

#line 284 "check.cog"
                nullptr;
}


#line 286 "check.cog"
  if(auto blockStmt = 

#line 286 "check.cog"
                                  

#line 286 "check.cog"
                     as<

#line 286 "check.cog"
                        BlockStmt> (

#line 286 "check.cog"
                                   stmt))
{


#line 288 "check.cog"
   return 

#line 288 "check.cog"
                        

#line 288 "check.cog"
          checkBlockStmt(

#line 288 "check.cog"
                         context, 

#line 288 "check.cog"
                                  blockStmt);
}
else
{


#line 290 "check.cog"
          if(auto decl = 

#line 290 "check.cog"
                                

#line 290 "check.cog"
                        as<

#line 290 "check.cog"
                           Decl> (

#line 290 "check.cog"
                                 stmt))
{


#line 292 "check.cog"
                  

#line 292 "check.cog"
                  

#line 292 "check.cog"
         checkDecl(

#line 292 "check.cog"
                   context, 

#line 292 "check.cog"
                            decl);


#line 293 "check.cog"
         return 

#line 293 "check.cog"
                decl;
}
else
{


#line 295 "check.cog"
          if(auto exp = 

#line 295 "check.cog"
                              

#line 295 "check.cog"
                       as<

#line 295 "check.cog"
                          Exp> (

#line 295 "check.cog"
                               stmt))
{


#line 297 "check.cog"
         return 

#line 297 "check.cog"
                        

#line 297 "check.cog"
                checkExp(

#line 297 "check.cog"
                         context, 

#line 297 "check.cog"
                                  exp);
}
else
{


#line 299 "check.cog"
          if(auto ifStmt = 

#line 299 "check.cog"
                                    

#line 299 "check.cog"
                          as<

#line 299 "check.cog"
                             IfStmt> (

#line 299 "check.cog"
                                     stmt))
{


#line 301 "check.cog"
               DEREF(

#line 301 "check.cog"
         ifStmt).condition = 

#line 301 "check.cog"
                                             

#line 301 "check.cog"
                            checkPrediateExpr(

#line 301 "check.cog"
                                              context, 

#line 301 "check.cog"
                                                             DEREF(

#line 301 "check.cog"
                                                       ifStmt).condition);


#line 302 "check.cog"
               DEREF(

#line 302 "check.cog"
         ifStmt).thenStmt = 

#line 302 "check.cog"
                                    

#line 302 "check.cog"
                           checkStmt(

#line 302 "check.cog"
                                     context, 

#line 302 "check.cog"
                                                    DEREF(

#line 302 "check.cog"
                                              ifStmt).thenStmt);


#line 303 "check.cog"
               DEREF(

#line 303 "check.cog"
         ifStmt).elseStmt = 

#line 303 "check.cog"
                                    

#line 303 "check.cog"
                           checkStmt(

#line 303 "check.cog"
                                     context, 

#line 303 "check.cog"
                                                    DEREF(

#line 303 "check.cog"
                                              ifStmt).elseStmt);


#line 304 "check.cog"
         return 

#line 304 "check.cog"
                ifStmt;
}
else
{


#line 306 "check.cog"
          if(auto ifLetStmt = 

#line 306 "check.cog"
                                          

#line 306 "check.cog"
                             as<

#line 306 "check.cog"
                                IfLetStmt> (

#line 306 "check.cog"
                                           stmt))
{


#line 308 "check.cog"
                  DEREF(

#line 308 "check.cog"
         ifLetStmt).init = 

#line 308 "check.cog"
                                       

#line 308 "check.cog"
                              checkExp(

#line 308 "check.cog"
                                        context, 

#line 308 "check.cog"
                                                          DEREF(

#line 308 "check.cog"
                                                 ifLetStmt).init);


#line 309 "check.cog"
                  DEREF(

#line 309 "check.cog"
         ifLetStmt).thenStmt = 

#line 309 "check.cog"
                                       

#line 309 "check.cog"
                              checkStmt(

#line 309 "check.cog"
                                        context, 

#line 309 "check.cog"
                                                          DEREF(

#line 309 "check.cog"
                                                 ifLetStmt).thenStmt);


#line 310 "check.cog"
                  DEREF(

#line 310 "check.cog"
         ifLetStmt).elseStmt = 

#line 310 "check.cog"
                                       

#line 310 "check.cog"
                              checkStmt(

#line 310 "check.cog"
                                        context, 

#line 310 "check.cog"
                                                          DEREF(

#line 310 "check.cog"
                                                 ifLetStmt).elseStmt);


#line 311 "check.cog"
         return 

#line 311 "check.cog"
                ifLetStmt;
}
else
{


#line 313 "check.cog"
          if(auto whileStmt = 

#line 313 "check.cog"
                                          

#line 313 "check.cog"
                             as<

#line 313 "check.cog"
                                WhileStmt> (

#line 313 "check.cog"
                                           stmt))
{


#line 315 "check.cog"
                  DEREF(

#line 315 "check.cog"
         whileStmt).condition = 

#line 315 "check.cog"
                                                

#line 315 "check.cog"
                               checkPrediateExpr(

#line 315 "check.cog"
                                                 context, 

#line 315 "check.cog"
                                                                   DEREF(

#line 315 "check.cog"
                                                          whileStmt).condition);


#line 316 "check.cog"
                  DEREF(

#line 316 "check.cog"
         whileStmt).body = 

#line 316 "check.cog"
                                   

#line 316 "check.cog"
                          checkStmt(

#line 316 "check.cog"
                                    context, 

#line 316 "check.cog"
                                                      DEREF(

#line 316 "check.cog"
                                             whileStmt).body);


#line 317 "check.cog"
         return 

#line 317 "check.cog"
                whileStmt;
}
else
{


#line 319 "check.cog"
          if(auto forStmt = 

#line 319 "check.cog"
                                      

#line 319 "check.cog"
                           as<

#line 319 "check.cog"
                              ForStmt> (

#line 319 "check.cog"
                                       stmt))
{


#line 321 "check.cog"
                DEREF(

#line 321 "check.cog"
         forStmt).init = 

#line 321 "check.cog"
                                 

#line 321 "check.cog"
                        checkStmt(

#line 321 "check.cog"
                                  context, 

#line 321 "check.cog"
                                                  DEREF(

#line 321 "check.cog"
                                           forStmt).init);


#line 322 "check.cog"
                DEREF(

#line 322 "check.cog"
         forStmt).condition = 

#line 322 "check.cog"
                                              

#line 322 "check.cog"
                             checkPrediateExpr(

#line 322 "check.cog"
                                               context, 

#line 322 "check.cog"
                                                               DEREF(

#line 322 "check.cog"
                                                        forStmt).condition);


#line 323 "check.cog"
                DEREF(

#line 323 "check.cog"
         forStmt).iter = 

#line 323 "check.cog"
                                

#line 323 "check.cog"
                        checkExp(

#line 323 "check.cog"
                                 context, 

#line 323 "check.cog"
                                                 DEREF(

#line 323 "check.cog"
                                          forStmt).iter);


#line 324 "check.cog"
                DEREF(

#line 324 "check.cog"
         forStmt).body = 

#line 324 "check.cog"
                                 

#line 324 "check.cog"
                        checkStmt(

#line 324 "check.cog"
                                  context, 

#line 324 "check.cog"
                                                  DEREF(

#line 324 "check.cog"
                                           forStmt).body);


#line 325 "check.cog"
         return 

#line 325 "check.cog"
                forStmt;
}
else
{


#line 327 "check.cog"
          if(auto forEachStmt = 

#line 327 "check.cog"
                                              

#line 327 "check.cog"
                               as<

#line 327 "check.cog"
                                  ForEachStmt> (

#line 327 "check.cog"
                                               stmt))
{


#line 330 "check.cog"
                    DEREF(

#line 330 "check.cog"
         forEachStmt).exp = 

#line 330 "check.cog"
                                   

#line 330 "check.cog"
                           checkExp(

#line 330 "check.cog"
                                    context, 

#line 330 "check.cog"
                                                        DEREF(

#line 330 "check.cog"
                                             forEachStmt).exp);


#line 331 "check.cog"
                    DEREF(

#line 331 "check.cog"
         forEachStmt).body = 

#line 331 "check.cog"
                                     

#line 331 "check.cog"
                            checkStmt(

#line 331 "check.cog"
                                      context, 

#line 331 "check.cog"
                                                          DEREF(

#line 331 "check.cog"
                                               forEachStmt).body);


#line 332 "check.cog"
         return 

#line 332 "check.cog"
                forEachStmt;
}
else
{


#line 334 "check.cog"
          if(auto returnStmt = 

#line 334 "check.cog"
                                            

#line 334 "check.cog"
                              as<

#line 334 "check.cog"
                                 ReturnStmt> (

#line 334 "check.cog"
                                             stmt))
{


#line 337 "check.cog"
                   DEREF(

#line 337 "check.cog"
         returnStmt).value = 

#line 337 "check.cog"
                                    

#line 337 "check.cog"
                            checkExp(

#line 337 "check.cog"
                                     context, 

#line 337 "check.cog"
                                                        DEREF(

#line 337 "check.cog"
                                              returnStmt).value);


#line 338 "check.cog"
         return 

#line 338 "check.cog"
                returnStmt;
}
else
{


#line 340 "check.cog"
          if(auto breakStmt = 

#line 340 "check.cog"
                                          

#line 340 "check.cog"
                             as<

#line 340 "check.cog"
                                BreakStmt> (

#line 340 "check.cog"
                                           stmt))
{


#line 343 "check.cog"
         return 

#line 343 "check.cog"
                breakStmt;
}
else
{


#line 345 "check.cog"
          if(auto continueStmt = 

#line 345 "check.cog"
                                                

#line 345 "check.cog"
                                as<

#line 345 "check.cog"
                                   ContinueStmt> (

#line 345 "check.cog"
                                                 stmt))
{


#line 348 "check.cog"
         return 

#line 348 "check.cog"
                continueStmt;
}
else
{


#line 350 "check.cog"
          if(auto switchStmt = 

#line 350 "check.cog"
                                            

#line 350 "check.cog"
                              as<

#line 350 "check.cog"
                                 SwitchStmt> (

#line 350 "check.cog"
                                             stmt))
{


#line 352 "check.cog"
                   DEREF(

#line 352 "check.cog"
         switchStmt).condition = 

#line 352 "check.cog"
                                        

#line 352 "check.cog"
                                checkExp(

#line 352 "check.cog"
                                         context, 

#line 352 "check.cog"
                                                            DEREF(

#line 352 "check.cog"
                                                  switchStmt).condition);


#line 353 "check.cog"
   {


#line 353 "check.cog"
       

#line 353 "check.cog"
       auto c = 

#line 353 "check.cog"
                         DEREF(

#line 353 "check.cog"
               switchStmt).cases;
for(;

#line 353 "check.cog"
                                 c;

#line 353 "check.cog"
                                    c = 

#line 353 "check.cog"
                                         DEREF(

#line 353 "check.cog"
                                        c).next)
{
{


#line 355 "check.cog"
    {


#line 355 "check.cog"
        

#line 355 "check.cog"
        auto a = 

#line 355 "check.cog"
                 DEREF(

#line 355 "check.cog"
                c).values;
for(;

#line 355 "check.cog"
                          a;

#line 355 "check.cog"
                             a = 

#line 355 "check.cog"
                                  DEREF(

#line 355 "check.cog"
                                 a).next)
{
{


#line 357 "check.cog"
      DEREF(

#line 357 "check.cog"
     a).exp = 

#line 357 "check.cog"
                     

#line 357 "check.cog"
             checkExp(

#line 357 "check.cog"
                      context, 

#line 357 "check.cog"
                                DEREF(

#line 357 "check.cog"
                               a).exp);
}
}}


#line 360 "check.cog"
     DEREF(

#line 360 "check.cog"
    c).body = 

#line 360 "check.cog"
                      

#line 360 "check.cog"
             checkStmt(

#line 360 "check.cog"
                       context, 

#line 360 "check.cog"
                                 DEREF(

#line 360 "check.cog"
                                c).body);
}
}}


#line 363 "check.cog"
         return 

#line 363 "check.cog"
                switchStmt;
}
else
{


#line 367 "check.cog"
                 

#line 367 "check.cog"
                 

#line 367 "check.cog"
         diagnose(

#line 367 "check.cog"
                         

#line 367 "check.cog"
                  getSink(

#line 367 "check.cog"
                          context), 

#line 367 "check.cog"
                                        DEREF(

#line 367 "check.cog"
                                    stmt).loc, 

#line 367 "check.cog"
                                              kDiagnostic_unimplemented, 

#line 367 "check.cog"
                                                                                         DEREF(

#line 367 "check.cog"
                                                                             DEREF(

#line 367 "check.cog"
                                                                         stmt).directClass).name);


#line 368 "check.cog"
            

#line 368 "check.cog"
            

#line 368 "check.cog"
   cogAssert(

#line 368 "check.cog"
             

#line 368 "check.cog"
             !

#line 368 "check.cog"
              "unimplemented");
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


#line 723 "syntax.cog"
 

#line 372 "check.cog"
 

#line 375 "check.cog"
     Stmt checkBlockStmt(

#line 373 "check.cog"
                       

#line 373 "check.cog"
           CheckContext

#line 373 "check.cog"
                       * context, 

#line 374 "check.cog"
        BlockStmt stmt)
{


#line 377 "check.cog"
  for(auto stmt : 

#line 377 "check.cog"
                      DEREF(

#line 377 "check.cog"
                  stmt).stmts)
{
{


#line 379 "check.cog"
            

#line 379 "check.cog"
            

#line 379 "check.cog"
   checkStmt(

#line 379 "check.cog"
             context, 

#line 379 "check.cog"
                      stmt);
}
}


#line 382 "check.cog"
  return 

#line 382 "check.cog"
         stmt;
}


#line 387 "check.cog"
 

#line 390 "check.cog"
     Exp checkExp(

#line 388 "check.cog"
                       

#line 388 "check.cog"
           CheckContext

#line 388 "check.cog"
                       * context, 

#line 389 "check.cog"
       Exp exp)
{


#line 393 "check.cog"
  return 

#line 393 "check.cog"
                    

#line 393 "check.cog"
         coerceToExp(

#line 393 "check.cog"
                     context, 

#line 393 "check.cog"
                                       

#line 393 "check.cog"
                              checkTerm(

#line 393 "check.cog"
                                        context, 

#line 393 "check.cog"
                                                 exp));
}


#line 396 "check.cog"
 

#line 399 "check.cog"
     Exp coerceToExp(

#line 397 "check.cog"
                       

#line 397 "check.cog"
           CheckContext

#line 397 "check.cog"
                       * context, 

#line 398 "check.cog"
        Syntax term)
{


#line 401 "check.cog"
  if(

#line 401 "check.cog"
     

#line 401 "check.cog"
     !

#line 401 "check.cog"
      term)
{


#line 402 "check.cog"
   return 

#line 402 "check.cog"
          nullptr;
}


#line 404 "check.cog"
     if(auto exp = 

#line 404 "check.cog"
                         

#line 404 "check.cog"
                  as<

#line 404 "check.cog"
                     Exp> (

#line 404 "check.cog"
                          term))
{


#line 406 "check.cog"
         return 

#line 406 "check.cog"
                exp;
}


#line 409 "check.cog"
              

#line 409 "check.cog"
              

#line 409 "check.cog"
     cogAssert(

#line 409 "check.cog"
               

#line 409 "check.cog"
               !

#line 409 "check.cog"
                "need an exp");
}


#line 414 "check.cog"
 

#line 417 "check.cog"
     Type checkType(

#line 415 "check.cog"
                       

#line 415 "check.cog"
           CheckContext

#line 415 "check.cog"
                       * context, 

#line 416 "check.cog"
       Exp exp)
{


#line 420 "check.cog"
  return 

#line 420 "check.cog"
                     

#line 420 "check.cog"
         coerceToType(

#line 420 "check.cog"
                      context, 

#line 420 "check.cog"
                                        

#line 420 "check.cog"
                               checkTerm(

#line 420 "check.cog"
                                         context, 

#line 420 "check.cog"
                                                  exp));
}


#line 423 "check.cog"
 void checkTypeExp(

#line 424 "check.cog"
                       

#line 424 "check.cog"
           CheckContext

#line 424 "check.cog"
                       * context, 

#line 425 "check.cog"
                  

#line 425 "check.cog"
           TypeExp

#line 425 "check.cog"
                  * typeExp)
{


#line 427 "check.cog"
  

#line 427 "check.cog"
  auto exp = 

#line 427 "check.cog"
                   DEREF(

#line 427 "check.cog"
            typeExp).exp;


#line 428 "check.cog"
  if(

#line 428 "check.cog"
     

#line 428 "check.cog"
     !

#line 428 "check.cog"
      exp)
{


#line 429 "check.cog"
   return;
}


#line 431 "check.cog"
  

#line 431 "check.cog"
  auto type = 

#line 431 "check.cog"
                      

#line 431 "check.cog"
             checkType(

#line 431 "check.cog"
                       context, 

#line 431 "check.cog"
                                exp);


#line 432 "check.cog"
         DEREF(

#line 432 "check.cog"
  typeExp).type = 

#line 432 "check.cog"
                 type;
}


#line 435 "check.cog"
 

#line 438 "check.cog"
     Exp tryCoerceToTypeExpr(

#line 436 "check.cog"
                       

#line 436 "check.cog"
           CheckContext

#line 436 "check.cog"
                       * context, 

#line 437 "check.cog"
       Exp exp)
{


#line 440 "check.cog"
  

#line 440 "check.cog"
  auto expType = 

#line 440 "check.cog"
                   DEREF(

#line 440 "check.cog"
                exp).type;


#line 441 "check.cog"
  if(auto typeType = 

#line 441 "check.cog"
                                

#line 441 "check.cog"
                    as<

#line 441 "check.cog"
                       TypeType> (

#line 441 "check.cog"
                                 expType))
{


#line 443 "check.cog"
   return 

#line 443 "check.cog"
          exp;
}
else
{


#line 445 "check.cog"
          if(auto errorType = 

#line 445 "check.cog"
                                          

#line 445 "check.cog"
                             as<

#line 445 "check.cog"
                                ErrorType> (

#line 445 "check.cog"
                                           expType))
{


#line 447 "check.cog"
         return 

#line 447 "check.cog"
                exp;
}
else
{


#line 451 "check.cog"
   return 

#line 451 "check.cog"
          nullptr;
}
}
}


#line 456 "check.cog"
 

#line 459 "check.cog"
     Type tryCoerceToType(

#line 457 "check.cog"
                       

#line 457 "check.cog"
           CheckContext

#line 457 "check.cog"
                       * context, 

#line 458 "check.cog"
       Exp exp)
{


#line 461 "check.cog"
  

#line 461 "check.cog"
  auto typeExpr = 

#line 461 "check.cog"
                                    

#line 461 "check.cog"
                 tryCoerceToTypeExpr(

#line 461 "check.cog"
                                     context, 

#line 461 "check.cog"
                                              exp);


#line 462 "check.cog"
  if(

#line 462 "check.cog"
     

#line 462 "check.cog"
     !

#line 462 "check.cog"
      typeExpr)
{


#line 463 "check.cog"
   return 

#line 463 "check.cog"
          nullptr;
}


#line 465 "check.cog"
  

#line 465 "check.cog"
  auto exprType = 

#line 465 "check.cog"
                         DEREF(

#line 465 "check.cog"
                 typeExpr).type;


#line 466 "check.cog"
  if(auto typeType = 

#line 466 "check.cog"
                                

#line 466 "check.cog"
                    as<

#line 466 "check.cog"
                       TypeType> (

#line 466 "check.cog"
                                 exprType))
{


#line 468 "check.cog"
   return 

#line 468 "check.cog"
                  DEREF(

#line 468 "check.cog"
          typeType).type;
}
else
{


#line 470 "check.cog"
          if(auto errorType = 

#line 470 "check.cog"
                                          

#line 470 "check.cog"
                             as<

#line 470 "check.cog"
                                ErrorType> (

#line 470 "check.cog"
                                           exprType))
{


#line 472 "check.cog"
         return 

#line 472 "check.cog"
                errorType;
}
else
{


#line 476 "check.cog"
   return 

#line 476 "check.cog"
          nullptr;
}
}
}


#line 480 "check.cog"
 

#line 483 "check.cog"
     Type coerceToType(

#line 481 "check.cog"
                       

#line 481 "check.cog"
           CheckContext

#line 481 "check.cog"
                       * context, 

#line 482 "check.cog"
       Exp exp)
{


#line 485 "check.cog"
  if(auto type = 

#line 485 "check.cog"
                               

#line 485 "check.cog"
                tryCoerceToType(

#line 485 "check.cog"
                                context, 

#line 485 "check.cog"
                                         exp))
{


#line 487 "check.cog"
   return 

#line 487 "check.cog"
          type;
}
else
{


#line 491 "check.cog"
                 

#line 491 "check.cog"
                 

#line 491 "check.cog"
         diagnose(

#line 491 "check.cog"
                         

#line 491 "check.cog"
                  getSink(

#line 491 "check.cog"
                          context), 

#line 491 "check.cog"
                                       DEREF(

#line 491 "check.cog"
                                    exp).loc, 

#line 491 "check.cog"
                                             kDiagnostic_unimplemented, 

#line 491 "check.cog"
                                                                                            DEREF(

#line 491 "check.cog"
                                                                                DEREF(

#line 491 "check.cog"
                                                                           DEREF(

#line 491 "check.cog"
                                                                        exp).type).directClass).name);


#line 492 "check.cog"
   return 

#line 492 "check.cog"
                         

#line 492 "check.cog"
          createErrorType(

#line 492 "check.cog"
                          context);
}
}


#line 496 "check.cog"
 

#line 499 "check.cog"
     Exp coerceToTypeExpr(

#line 497 "check.cog"
                       

#line 497 "check.cog"
           CheckContext

#line 497 "check.cog"
                       * context, 

#line 498 "check.cog"
       Exp exp)
{


#line 501 "check.cog"
  if(auto typeExpr = 

#line 501 "check.cog"
                                       

#line 501 "check.cog"
                    tryCoerceToTypeExpr(

#line 501 "check.cog"
                                        context, 

#line 501 "check.cog"
                                                 exp))
{


#line 503 "check.cog"
   return 

#line 503 "check.cog"
          typeExpr;
}
else
{


#line 507 "check.cog"
                 

#line 507 "check.cog"
                 

#line 507 "check.cog"
         diagnose(

#line 507 "check.cog"
                         

#line 507 "check.cog"
                  getSink(

#line 507 "check.cog"
                          context), 

#line 507 "check.cog"
                                       DEREF(

#line 507 "check.cog"
                                    exp).loc, 

#line 507 "check.cog"
                                             kDiagnostic_unimplemented, 

#line 507 "check.cog"
                                                                                            DEREF(

#line 507 "check.cog"
                                                                                DEREF(

#line 507 "check.cog"
                                                                           DEREF(

#line 507 "check.cog"
                                                                        exp).type).directClass).name);


#line 508 "check.cog"
   return 

#line 508 "check.cog"
                        

#line 508 "check.cog"
          createErrorExp(

#line 508 "check.cog"
                         context, 

#line 508 "check.cog"
                                  exp);
}
}


#line 514 "check.cog"
 

#line 517 "check.cog"
     Exp makeErrorExpr(

#line 515 "check.cog"
                       

#line 515 "check.cog"
           CheckContext

#line 515 "check.cog"
                       * context, 

#line 516 "check.cog"
        Exp expr)
{


#line 519 "check.cog"
  

#line 519 "check.cog"
  auto errorType = 

#line 519 "check.cog"
                                         

#line 519 "check.cog"
                  createObject<

#line 519 "check.cog"
                               ErrorType> ();


#line 520 "check.cog"
      DEREF(

#line 520 "check.cog"
  expr).type = 

#line 520 "check.cog"
              errorType;


#line 521 "check.cog"
  return 

#line 521 "check.cog"
         expr;
}


#line 524 "check.cog"
 

#line 527 "check.cog"
     Exp checkTerm(

#line 525 "check.cog"
                       

#line 525 "check.cog"
           CheckContext

#line 525 "check.cog"
                       * context, 

#line 526 "check.cog"
       Exp exp)
{


#line 529 "check.cog"
  if(

#line 529 "check.cog"
     

#line 529 "check.cog"
     !

#line 529 "check.cog"
      exp)
{


#line 529 "check.cog"
           return 

#line 529 "check.cog"
                  nullptr;
}


#line 531 "check.cog"
  if(auto nameExp = 

#line 531 "check.cog"
                              

#line 531 "check.cog"
                   as<

#line 531 "check.cog"
                      NameExp> (

#line 531 "check.cog"
                               exp))
{


#line 533 "check.cog"
   

#line 533 "check.cog"
   auto scope = 

#line 533 "check.cog"
                      DEREF(

#line 533 "check.cog"
               nameExp).scope;


#line 534 "check.cog"
         

#line 534 "check.cog"
         auto result = 

#line 534 "check.cog"
                            

#line 534 "check.cog"
                      lookup(

#line 534 "check.cog"
                             scope, 

#line 534 "check.cog"
                                           DEREF(

#line 534 "check.cog"
                                    nameExp).name);


#line 535 "check.cog"
         if(

#line 535 "check.cog"
                          

#line 535 "check.cog"
                  DEREF(

#line 535 "check.cog"
            result).isEmpty())
{


#line 538 "check.cog"
            

#line 538 "check.cog"
            

#line 538 "check.cog"
    diagnose(

#line 538 "check.cog"
                    

#line 538 "check.cog"
             getSink(

#line 538 "check.cog"
                     context), 

#line 538 "check.cog"
                                      DEREF(

#line 538 "check.cog"
                               nameExp).loc, 

#line 538 "check.cog"
                                            kDiagnostic_undefinedIdentifier, 

#line 538 "check.cog"
                                                                                    DEREF(

#line 538 "check.cog"
                                                                             nameExp).name);


#line 539 "check.cog"
             return 

#line 539 "check.cog"
                                  

#line 539 "check.cog"
                    createErrorExp(

#line 539 "check.cog"
                                   context, 

#line 539 "check.cog"
                                                   DEREF(

#line 539 "check.cog"
                                            nameExp).loc);
}
else
{


#line 541 "check.cog"
              if(

#line 541 "check.cog"
                 

#line 541 "check.cog"
                 !

#line 541 "check.cog"
                                     

#line 541 "check.cog"
                        DEREF(

#line 541 "check.cog"
                  result).isOverloaded())
{


#line 544 "check.cog"
             

#line 544 "check.cog"
             auto declRef = 

#line 544 "check.cog"
                                         

#line 544 "check.cog"
                           CompactDeclRef(

#line 544 "check.cog"
                                                        

#line 544 "check.cog"
                                                DEREF(

#line 544 "check.cog"
                                          result).getDecl());


#line 545 "check.cog"
             

#line 545 "check.cog"
             auto declRefExp = 

#line 545 "check.cog"
                                                      

#line 545 "check.cog"
                              createObject<

#line 545 "check.cog"
                                           DeclRefExp> ();


#line 546 "check.cog"
                       DEREF(

#line 546 "check.cog"
             declRefExp).loc = 

#line 546 "check.cog"
                                 DEREF(

#line 546 "check.cog"
                              exp).loc;


#line 547 "check.cog"
                       DEREF(

#line 547 "check.cog"
             declRefExp).declRef = 

#line 547 "check.cog"
                                  declRef;


#line 548 "check.cog"
                       DEREF(

#line 548 "check.cog"
             declRefExp).type = 

#line 548 "check.cog"
                                                

#line 548 "check.cog"
                               getTypeForDeclRef(

#line 548 "check.cog"
                                                 context, 

#line 548 "check.cog"
                                                          declRef);


#line 549 "check.cog"
             return 

#line 549 "check.cog"
                    declRefExp;
}
else
{


#line 553 "check.cog"
             

#line 553 "check.cog"
             auto overloadedExpr = 

#line 553 "check.cog"
                                                              

#line 553 "check.cog"
                                  createObject<

#line 553 "check.cog"
                                               OverloadedExpr> ();


#line 554 "check.cog"
                           DEREF(

#line 554 "check.cog"
             overloadedExpr).loc = 

#line 554 "check.cog"
                                     DEREF(

#line 554 "check.cog"
                                  exp).loc;


#line 555 "check.cog"
                           DEREF(

#line 555 "check.cog"
             overloadedExpr).lookupResult = 

#line 555 "check.cog"
                                           result;


#line 556 "check.cog"
                           DEREF(

#line 556 "check.cog"
             overloadedExpr).type = 

#line 556 "check.cog"
                                                                   

#line 556 "check.cog"
                                    createObject<

#line 556 "check.cog"
                                                 OverloadGroupType> ();


#line 557 "check.cog"
             return 

#line 557 "check.cog"
                    overloadedExpr;
}
}
}
else
{


#line 560 "check.cog"
          if(auto memberExp = 

#line 560 "check.cog"
                                          

#line 560 "check.cog"
                             as<

#line 560 "check.cog"
                                MemberExp> (

#line 560 "check.cog"
                                           exp))
{


#line 562 "check.cog"
         return 

#line 562 "check.cog"
                              

#line 562 "check.cog"
                checkMemberExp(

#line 562 "check.cog"
                               context, 

#line 562 "check.cog"
                                        memberExp);
}
else
{


#line 565 "check.cog"
          if(auto intLitExp = 

#line 565 "check.cog"
                                          

#line 565 "check.cog"
                             as<

#line 565 "check.cog"
                                IntLitExp> (

#line 565 "check.cog"
                                           exp))
{


#line 568 "check.cog"
                  DEREF(

#line 568 "check.cog"
         intLitExp).type = 

#line 568 "check.cog"
                                        

#line 568 "check.cog"
                          getBuiltinType(

#line 568 "check.cog"
                                         context, 

#line 568 "check.cog"
                                                           DEREF(

#line 568 "check.cog"
                                                  intLitExp).loc, 

#line 568 "check.cog"
                                                                 "Int");


#line 569 "check.cog"
         return 

#line 569 "check.cog"
                intLitExp;
}
else
{


#line 571 "check.cog"
          if(auto stringLitExp = 

#line 571 "check.cog"
                                                

#line 571 "check.cog"
                                as<

#line 571 "check.cog"
                                   StringLitExp> (

#line 571 "check.cog"
                                                 exp))
{


#line 574 "check.cog"
                     DEREF(

#line 574 "check.cog"
         stringLitExp).type = 

#line 574 "check.cog"
                                           

#line 574 "check.cog"
                             getBuiltinType(

#line 574 "check.cog"
                                            context, 

#line 574 "check.cog"
                                                                 DEREF(

#line 574 "check.cog"
                                                     stringLitExp).loc, 

#line 574 "check.cog"
                                                                       "String");


#line 575 "check.cog"
         return 

#line 575 "check.cog"
                stringLitExp;
}
else
{


#line 577 "check.cog"
          if(auto charLitExp = 

#line 577 "check.cog"
                                                 

#line 577 "check.cog"
                              as<

#line 577 "check.cog"
                                 CharacterLitExp> (

#line 577 "check.cog"
                                                  exp))
{


#line 580 "check.cog"
                   DEREF(

#line 580 "check.cog"
         charLitExp).type = 

#line 580 "check.cog"
                                         

#line 580 "check.cog"
                           getBuiltinType(

#line 580 "check.cog"
                                          context, 

#line 580 "check.cog"
                                                             DEREF(

#line 580 "check.cog"
                                                   charLitExp).loc, 

#line 580 "check.cog"
                                                                   "Char");


#line 581 "check.cog"
         return 

#line 581 "check.cog"
                charLitExp;
}
else
{


#line 583 "check.cog"
          if(auto assignExp = 

#line 583 "check.cog"
                                          

#line 583 "check.cog"
                             as<

#line 583 "check.cog"
                                AssignExp> (

#line 583 "check.cog"
                                           exp))
{


#line 585 "check.cog"
         

#line 585 "check.cog"
         auto left = 

#line 585 "check.cog"
                            

#line 585 "check.cog"
                    checkExp(

#line 585 "check.cog"
                             context, 

#line 585 "check.cog"
                                               DEREF(

#line 585 "check.cog"
                                      assignExp).left);


#line 586 "check.cog"
         

#line 586 "check.cog"
         auto right = 

#line 586 "check.cog"
                              

#line 586 "check.cog"
                     checkTerm(

#line 586 "check.cog"
                               context, 

#line 586 "check.cog"
                                                 DEREF(

#line 586 "check.cog"
                                        assignExp).right);


#line 587 "check.cog"
         right = 

#line 587 "check.cog"
                       

#line 587 "check.cog"
                 coerce(

#line 587 "check.cog"
                        context, 

#line 587 "check.cog"
                                 right, 

#line 587 "check.cog"
                                            DEREF(

#line 587 "check.cog"
                                        left).type);


#line 589 "check.cog"
                  DEREF(

#line 589 "check.cog"
         assignExp).left = 

#line 589 "check.cog"
                          left;


#line 590 "check.cog"
                  DEREF(

#line 590 "check.cog"
         assignExp).right = 

#line 590 "check.cog"
                           right;


#line 591 "check.cog"
                  DEREF(

#line 591 "check.cog"
         assignExp).type = 

#line 591 "check.cog"
                              DEREF(

#line 591 "check.cog"
                          left).type;


#line 592 "check.cog"
         return 

#line 592 "check.cog"
                assignExp;
}
else
{


#line 594 "check.cog"
          if(auto indexExp = 

#line 594 "check.cog"
                                        

#line 594 "check.cog"
                            as<

#line 594 "check.cog"
                               IndexExp> (

#line 594 "check.cog"
                                         exp))
{


#line 596 "check.cog"
         

#line 596 "check.cog"
         auto base = 

#line 596 "check.cog"
                             

#line 596 "check.cog"
                    checkTerm(

#line 596 "check.cog"
                              context, 

#line 596 "check.cog"
                                               DEREF(

#line 596 "check.cog"
                                       indexExp).base);


#line 597 "check.cog"
                 DEREF(

#line 597 "check.cog"
         indexExp).base = 

#line 597 "check.cog"
                         base;


#line 598 "check.cog"
         for(auto arg : 

#line 598 "check.cog"
                                DEREF(

#line 598 "check.cog"
                        indexExp).args)
{
{


#line 600 "check.cog"
                DEREF(

#line 600 "check.cog"
             arg).exp = 

#line 600 "check.cog"
                                

#line 600 "check.cog"
                       checkTerm(

#line 600 "check.cog"
                                 context, 

#line 600 "check.cog"
                                             DEREF(

#line 600 "check.cog"
                                          arg).exp);
}
}


#line 605 "check.cog"
         if(

#line 605 "check.cog"
                               

#line 605 "check.cog"
                        

#line 605 "check.cog"
            as<

#line 605 "check.cog"
               ErrorExp> (

#line 605 "check.cog"
                         base) 

#line 605 "check.cog"
                               || 

#line 605 "check.cog"
                                               

#line 605 "check.cog"
                                  as<

#line 605 "check.cog"
                                     ErrorType> (

#line 605 "check.cog"
                                                    DEREF(

#line 605 "check.cog"
                                                base).type))
{


#line 607 "check.cog"
             return 

#line 607 "check.cog"
                                  

#line 607 "check.cog"
                    createErrorExp(

#line 607 "check.cog"
                                   context, 

#line 607 "check.cog"
                                                    DEREF(

#line 607 "check.cog"
                                            indexExp).loc);
}


#line 610 "check.cog"
         

#line 610 "check.cog"
         

#line 610 "check.cog"
                               OverloadResolveContext overloadContext;


#line 611 "check.cog"
                        DEREF(

#line 611 "check.cog"
         overloadContext).checkContext = 

#line 611 "check.cog"
                                        context;


#line 612 "check.cog"
                        DEREF(

#line 612 "check.cog"
         overloadContext).appExp = 

#line 612 "check.cog"
                                  indexExp;


#line 613 "check.cog"
                        DEREF(

#line 613 "check.cog"
         overloadContext).baseExp = 

#line 613 "check.cog"
                                   base;


#line 615 "check.cog"
         

#line 615 "check.cog"
         auto baseType = 

#line 615 "check.cog"
                            DEREF(

#line 615 "check.cog"
                        base).type;


#line 616 "check.cog"
         if(auto baseDeclRefType = 

#line 616 "check.cog"
                                                 

#line 616 "check.cog"
                                  as<

#line 616 "check.cog"
                                     DeclRefType> (

#line 616 "check.cog"
                                                  baseType))
{


#line 618 "check.cog"
             

#line 618 "check.cog"
             auto baseDeclRef = 

#line 618 "check.cog"
                                              DEREF(

#line 618 "check.cog"
                               baseDeclRefType).declRef;


#line 619 "check.cog"
             if(auto aggTypeDeclRef = 

#line 619 "check.cog"
                                                    

#line 619 "check.cog"
                                     as<

#line 619 "check.cog"
                                        AggTypeDecl> (

#line 619 "check.cog"
                                                     baseDeclRef))
{


#line 623 "check.cog"
                 for(auto memberDeclRef : 

#line 623 "check.cog"
                                                  

#line 623 "check.cog"
                                          getDecls(

#line 623 "check.cog"
                                                   aggTypeDeclRef))
{
{


#line 625 "check.cog"
                     if(auto memberSubscriptDeclRef = 

#line 625 "check.cog"
                                                                      

#line 625 "check.cog"
                                                     as<

#line 625 "check.cog"
                                                        SubscriptDecl> (

#line 625 "check.cog"
                                                                       memberDeclRef))
{


#line 627 "check.cog"
                                                      

#line 627 "check.cog"
                                                      

#line 627 "check.cog"
                         addSubscriptOverloadCandidate(

#line 627 "check.cog"
                                                       

#line 627 "check.cog"
                                                       &

#line 627 "check.cog"
                                                        overloadContext, 

#line 627 "check.cog"
                                                                         memberSubscriptDeclRef);
}
}
}
}
}


#line 634 "check.cog"
         return 

#line 634 "check.cog"
                                

#line 634 "check.cog"
                completeOverload(

#line 634 "check.cog"
                                 

#line 634 "check.cog"
                                 &

#line 634 "check.cog"
                                  overloadContext);
}
else
{


#line 636 "check.cog"
          if(auto appExp = 

#line 636 "check.cog"
                                    

#line 636 "check.cog"
                          as<

#line 636 "check.cog"
                             AppExp> (

#line 636 "check.cog"
                                     exp))
{


#line 638 "check.cog"
         

#line 638 "check.cog"
         auto base = 

#line 638 "check.cog"
                             

#line 638 "check.cog"
                    checkTerm(

#line 638 "check.cog"
                              context, 

#line 638 "check.cog"
                                             DEREF(

#line 638 "check.cog"
                                       appExp).base);


#line 639 "check.cog"
               DEREF(

#line 639 "check.cog"
         appExp).base = 

#line 639 "check.cog"
                       base;


#line 640 "check.cog"
         for(auto arg : 

#line 640 "check.cog"
                              DEREF(

#line 640 "check.cog"
                        appExp).args)
{
{


#line 642 "check.cog"
                DEREF(

#line 642 "check.cog"
             arg).exp = 

#line 642 "check.cog"
                                

#line 642 "check.cog"
                       checkTerm(

#line 642 "check.cog"
                                 context, 

#line 642 "check.cog"
                                             DEREF(

#line 642 "check.cog"
                                          arg).exp);
}
}


#line 647 "check.cog"
         if(

#line 647 "check.cog"
                   

#line 647 "check.cog"
            isError(

#line 647 "check.cog"
                    context, 

#line 647 "check.cog"
                             base))
{


#line 649 "check.cog"
             return 

#line 649 "check.cog"
                                  

#line 649 "check.cog"
                    createErrorExp(

#line 649 "check.cog"
                                   context, 

#line 649 "check.cog"
                                            appExp);
}


#line 652 "check.cog"
         

#line 652 "check.cog"
         

#line 652 "check.cog"
                               OverloadResolveContext overloadContext;


#line 653 "check.cog"
                        DEREF(

#line 653 "check.cog"
         overloadContext).checkContext = 

#line 653 "check.cog"
                                        context;


#line 654 "check.cog"
                        DEREF(

#line 654 "check.cog"
         overloadContext).appExp = 

#line 654 "check.cog"
                                  appExp;


#line 655 "check.cog"
                        DEREF(

#line 655 "check.cog"
         overloadContext).baseExp = 

#line 655 "check.cog"
                                   nullptr;


#line 658 "check.cog"
         if(auto baseMemberRef = 

#line 658 "check.cog"
                                             

#line 658 "check.cog"
                                as<

#line 658 "check.cog"
                                   MemberExp> (

#line 658 "check.cog"
                                              base))
{


#line 660 "check.cog"
                            DEREF(

#line 660 "check.cog"
             overloadContext).baseExp = 

#line 660 "check.cog"
                                                    DEREF(

#line 660 "check.cog"
                                       baseMemberRef).base;
}


#line 663 "check.cog"
                                 

#line 663 "check.cog"
                                 

#line 663 "check.cog"
         addAppOverloadCandidates(

#line 664 "check.cog"
             

#line 664 "check.cog"
             &

#line 664 "check.cog"
              overloadContext, 

#line 665 "check.cog"
             base);


#line 667 "check.cog"
         return 

#line 667 "check.cog"
                                

#line 667 "check.cog"
                completeOverload(

#line 667 "check.cog"
                                 

#line 667 "check.cog"
                                 &

#line 667 "check.cog"
                                  overloadContext);
}
else
{


#line 669 "check.cog"
       if(auto subscriptExpr = 

#line 669 "check.cog"
                                          

#line 669 "check.cog"
                              as<

#line 669 "check.cog"
                                 IndexExp> (

#line 669 "check.cog"
                                           exp))
{


#line 671 "check.cog"
           

#line 671 "check.cog"
           

#line 671 "check.cog"
   diagnose(

#line 671 "check.cog"
                   

#line 671 "check.cog"
            getSink(

#line 671 "check.cog"
                    context), 

#line 671 "check.cog"
                                 DEREF(

#line 671 "check.cog"
                              exp).loc, 

#line 671 "check.cog"
                                       kDiagnostic_unimplemented, 

#line 671 "check.cog"
                                                                                 DEREF(

#line 671 "check.cog"
                                                                     DEREF(

#line 671 "check.cog"
                                                                  exp).directClass).name);


#line 672 "check.cog"
   return 

#line 672 "check.cog"
                       

#line 672 "check.cog"
          makeErrorExpr(

#line 672 "check.cog"
                        context, 

#line 672 "check.cog"
                                 exp);
}
else
{


#line 674 "check.cog"
       if(auto genericAppExpr = 

#line 674 "check.cog"
                                                

#line 674 "check.cog"
                               as<

#line 674 "check.cog"
                                  GenericAppExp> (

#line 674 "check.cog"
                                                 exp))
{


#line 676 "check.cog"
         

#line 676 "check.cog"
         auto base = 

#line 676 "check.cog"
                             

#line 676 "check.cog"
                    checkTerm(

#line 676 "check.cog"
                              context, 

#line 676 "check.cog"
                                                     DEREF(

#line 676 "check.cog"
                                       genericAppExpr).base);


#line 677 "check.cog"
                       DEREF(

#line 677 "check.cog"
         genericAppExpr).base = 

#line 677 "check.cog"
                               base;


#line 678 "check.cog"
         for(auto arg : 

#line 678 "check.cog"
                                      DEREF(

#line 678 "check.cog"
                        genericAppExpr).args)
{
{


#line 680 "check.cog"
                DEREF(

#line 680 "check.cog"
             arg).exp = 

#line 680 "check.cog"
                                

#line 680 "check.cog"
                       checkTerm(

#line 680 "check.cog"
                                 context, 

#line 680 "check.cog"
                                             DEREF(

#line 680 "check.cog"
                                          arg).exp);
}
}


#line 685 "check.cog"
         if(

#line 685 "check.cog"
                   

#line 685 "check.cog"
            isError(

#line 685 "check.cog"
                    context, 

#line 685 "check.cog"
                             base))
{


#line 687 "check.cog"
             return 

#line 687 "check.cog"
                                  

#line 687 "check.cog"
                    createErrorExp(

#line 687 "check.cog"
                                   context, 

#line 687 "check.cog"
                                            exp);
}


#line 690 "check.cog"
         

#line 690 "check.cog"
         

#line 690 "check.cog"
                               OverloadResolveContext overloadContext;


#line 691 "check.cog"
                        DEREF(

#line 691 "check.cog"
         overloadContext).checkContext = 

#line 691 "check.cog"
                                        context;


#line 692 "check.cog"
                        DEREF(

#line 692 "check.cog"
         overloadContext).appExp = 

#line 692 "check.cog"
                                  genericAppExpr;


#line 693 "check.cog"
                        DEREF(

#line 693 "check.cog"
         overloadContext).baseExp = 

#line 693 "check.cog"
                                   nullptr;


#line 695 "check.cog"
         if(auto baseMemberRef = 

#line 695 "check.cog"
                                             

#line 695 "check.cog"
                                as<

#line 695 "check.cog"
                                   MemberExp> (

#line 695 "check.cog"
                                              base))
{


#line 697 "check.cog"
                            DEREF(

#line 697 "check.cog"
             overloadContext).baseExp = 

#line 697 "check.cog"
                                                    DEREF(

#line 697 "check.cog"
                                       baseMemberRef).base;
}


#line 700 "check.cog"
                                        

#line 700 "check.cog"
                                        

#line 700 "check.cog"
         addGenericAppOverloadCandidates(

#line 701 "check.cog"
             

#line 701 "check.cog"
             &

#line 701 "check.cog"
              overloadContext, 

#line 702 "check.cog"
             base);


#line 704 "check.cog"
         return 

#line 704 "check.cog"
                                

#line 704 "check.cog"
                completeOverload(

#line 704 "check.cog"
                                 

#line 704 "check.cog"
                                 &

#line 704 "check.cog"
                                  overloadContext);
}
else
{


#line 801 "check.cog"
       if(auto thisExpr = 

#line 801 "check.cog"
                                     

#line 801 "check.cog"
                         as<

#line 801 "check.cog"
                            ThisExpr> (

#line 801 "check.cog"
                                      exp))
{


#line 803 "check.cog"
   

#line 803 "check.cog"
   auto scope = 

#line 803 "check.cog"
                       DEREF(

#line 803 "check.cog"
               thisExpr).scope;


#line 804 "check.cog"
   while(

#line 804 "check.cog"
         scope)
{
{


#line 806 "check.cog"
    

#line 806 "check.cog"
    auto containerDecl = 

#line 806 "check.cog"
                                        DEREF(

#line 806 "check.cog"
                             DEREF(

#line 806 "check.cog"
                        scope).directLink).container;


#line 807 "check.cog"
    

#line 807 "check.cog"
    auto aggTypeDecl = 

#line 807 "check.cog"
                                     

#line 807 "check.cog"
                      as<

#line 807 "check.cog"
                         AggTypeDecl> (

#line 807 "check.cog"
                                      containerDecl);


#line 808 "check.cog"
    if(

#line 808 "check.cog"
       aggTypeDecl)
{


#line 810 "check.cog"
             DEREF(

#line 810 "check.cog"
     thisExpr).type = 

#line 810 "check.cog"
                                      

#line 810 "check.cog"
                     createDeclRefType(

#line 811 "check.cog"
      context, 

#line 812 "check.cog"
                

#line 812 "check.cog"
      DeclRefVal(

#line 812 "check.cog"
                 aggTypeDecl));


#line 813 "check.cog"
     return 

#line 813 "check.cog"
            thisExpr;
}


#line 816 "check.cog"
    scope = 

#line 816 "check.cog"
                 DEREF(

#line 816 "check.cog"
            scope).parent;
}
}


#line 821 "check.cog"
           

#line 821 "check.cog"
           

#line 821 "check.cog"
   diagnose(

#line 821 "check.cog"
                   

#line 821 "check.cog"
            getSink(

#line 821 "check.cog"
                    context), 

#line 821 "check.cog"
                                 DEREF(

#line 821 "check.cog"
                              exp).loc, 

#line 821 "check.cog"
                                       kDiagnostic_unimplemented, 

#line 821 "check.cog"
                                                                  "this expression type");


#line 823 "check.cog"
   return 

#line 823 "check.cog"
                        

#line 823 "check.cog"
          createErrorExp(

#line 823 "check.cog"
                         context, 

#line 823 "check.cog"
                                  exp);
}
else
{


#line 825 "check.cog"
       if(auto castExpr = 

#line 825 "check.cog"
                                     

#line 825 "check.cog"
                         as<

#line 825 "check.cog"
                            CastExpr> (

#line 825 "check.cog"
                                      exp))
{


#line 827 "check.cog"
               

#line 827 "check.cog"
               

#line 827 "check.cog"
   checkTypeExp(

#line 827 "check.cog"
                context, 

#line 827 "check.cog"
                         

#line 827 "check.cog"
                         &

#line 827 "check.cog"
                                  DEREF(

#line 827 "check.cog"
                          castExpr).toType);


#line 828 "check.cog"
           DEREF(

#line 828 "check.cog"
   castExpr).arg = 

#line 828 "check.cog"
                           

#line 828 "check.cog"
                  checkTerm(

#line 828 "check.cog"
                            context, 

#line 828 "check.cog"
                                             DEREF(

#line 828 "check.cog"
                                     castExpr).arg);


#line 832 "check.cog"
           DEREF(

#line 832 "check.cog"
   castExpr).type = 

#line 832 "check.cog"
                                  DEREF(

#line 832 "check.cog"
                           DEREF(

#line 832 "check.cog"
                   castExpr).toType).type;


#line 833 "check.cog"
   return 

#line 833 "check.cog"
          castExpr;
}
else
{


#line 835 "check.cog"
       if(auto parenExpr = 

#line 835 "check.cog"
                                      

#line 835 "check.cog"
                          as<

#line 835 "check.cog"
                             ParenExp> (

#line 835 "check.cog"
                                       exp))
{


#line 837 "check.cog"
   

#line 837 "check.cog"
   auto base = 

#line 837 "check.cog"
                       

#line 837 "check.cog"
              checkTerm(

#line 837 "check.cog"
                        context, 

#line 837 "check.cog"
                                          DEREF(

#line 837 "check.cog"
                                 parenExpr).base);


#line 838 "check.cog"
            DEREF(

#line 838 "check.cog"
   parenExpr).base = 

#line 838 "check.cog"
                    base;


#line 839 "check.cog"
            DEREF(

#line 839 "check.cog"
   parenExpr).type = 

#line 839 "check.cog"
                        DEREF(

#line 839 "check.cog"
                    base).type;


#line 840 "check.cog"
   return 

#line 840 "check.cog"
          parenExpr;
}
else
{


#line 844 "check.cog"
           

#line 844 "check.cog"
           

#line 844 "check.cog"
   diagnose(

#line 844 "check.cog"
                   

#line 844 "check.cog"
            getSink(

#line 844 "check.cog"
                    context), 

#line 844 "check.cog"
                                 DEREF(

#line 844 "check.cog"
                              exp).loc, 

#line 844 "check.cog"
                                       kDiagnostic_unimplemented, 

#line 844 "check.cog"
                                                                                 DEREF(

#line 844 "check.cog"
                                                                     DEREF(

#line 844 "check.cog"
                                                                  exp).directClass).name);


#line 845 "check.cog"
            

#line 845 "check.cog"
            

#line 845 "check.cog"
   cogAssert(

#line 845 "check.cog"
             

#line 845 "check.cog"
             !

#line 845 "check.cog"
              "unimplemented");


#line 846 "check.cog"
   return 

#line 846 "check.cog"
          0;
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


#line 852 "check.cog"
 

#line 854 "check.cog"
        Val extractVal(

#line 853 "check.cog"
       Exp exp)
{


#line 856 "check.cog"
     if(auto typeType = 

#line 856 "check.cog"
                                   

#line 856 "check.cog"
                       as<

#line 856 "check.cog"
                          TypeType> (

#line 856 "check.cog"
                                       DEREF(

#line 856 "check.cog"
                                    exp).type))
{


#line 858 "check.cog"
         return 

#line 858 "check.cog"
                        DEREF(

#line 858 "check.cog"
                typeType).type;
}
else
{


#line 862 "check.cog"
                  

#line 862 "check.cog"
                  

#line 862 "check.cog"
         cogAssert(

#line 862 "check.cog"
                   

#line 862 "check.cog"
                   !

#line 862 "check.cog"
                    "unimplemented");
}
}


#line 647 "syntax.cog"
 

#line 659 "syntax.cog"
 

#line 868 "check.cog"
 

#line 871 "check.cog"
        Exp checkMemberExp(

#line 869 "check.cog"
                       

#line 869 "check.cog"
           CheckContext

#line 869 "check.cog"
                       * context, 

#line 870 "check.cog"
       MemberExp exp)
{


#line 873 "check.cog"
     

#line 873 "check.cog"
     auto base = 

#line 873 "check.cog"
                   DEREF(

#line 873 "check.cog"
                exp).base;


#line 874 "check.cog"
     base = 

#line 874 "check.cog"
                     

#line 874 "check.cog"
            checkTerm(

#line 874 "check.cog"
                      context, 

#line 874 "check.cog"
                               base);


#line 876 "check.cog"
     

#line 876 "check.cog"
     auto memberName = 

#line 876 "check.cog"
                         DEREF(

#line 876 "check.cog"
                      exp).memberName;


#line 880 "check.cog"
     if(

#line 880 "check.cog"
               

#line 880 "check.cog"
        isError(

#line 880 "check.cog"
                context, 

#line 880 "check.cog"
                         base))
{


#line 882 "check.cog"
         return 

#line 882 "check.cog"
                              

#line 882 "check.cog"
                createErrorExp(

#line 882 "check.cog"
                               context, 

#line 882 "check.cog"
                                        exp);
}


#line 885 "check.cog"
     

#line 885 "check.cog"
     auto baseType = 

#line 885 "check.cog"
                        DEREF(

#line 885 "check.cog"
                    base).type;


#line 886 "check.cog"
     if(auto baseDeclRefType = 

#line 886 "check.cog"
                                             

#line 886 "check.cog"
                              as<

#line 886 "check.cog"
                                 DeclRefType> (

#line 886 "check.cog"
                                              baseType))
{


#line 888 "check.cog"
         

#line 888 "check.cog"
         auto baseDeclRef = 

#line 888 "check.cog"
                                          DEREF(

#line 888 "check.cog"
                           baseDeclRefType).declRef;


#line 889 "check.cog"
         if(auto aggTypeDeclRef = 

#line 889 "check.cog"
                                                

#line 889 "check.cog"
                                 as<

#line 889 "check.cog"
                                    AggTypeDecl> (

#line 889 "check.cog"
                                                 baseDeclRef))
{


#line 895 "check.cog"
             

#line 895 "check.cog"
             auto lookupResult = 

#line 895 "check.cog"
                                            

#line 895 "check.cog"
                                lookupDirect(

#line 896 "check.cog"
                 aggTypeDeclRef, 

#line 897 "check.cog"
                 memberName);


#line 899 "check.cog"
             if(

#line 899 "check.cog"
                                     

#line 899 "check.cog"
                            DEREF(

#line 899 "check.cog"
                lookupResult).isUnique())
{


#line 901 "check.cog"
                 return 

#line 901 "check.cog"
                                        

#line 901 "check.cog"
                        createDeclRefExp(

#line 902 "check.cog"
                     context, 

#line 903 "check.cog"
                                   

#line 903 "check.cog"
                     CompactDeclRef(

#line 903 "check.cog"
                                                        

#line 903 "check.cog"
                                                DEREF(

#line 903 "check.cog"
                                    lookupResult).getDecl()), 

#line 904 "check.cog"
                        DEREF(

#line 904 "check.cog"
                     exp).loc, 

#line 905 "check.cog"
                     base);
}
else
{


#line 907 "check.cog"
                  if(

#line 907 "check.cog"
                                              

#line 907 "check.cog"
                                 DEREF(

#line 907 "check.cog"
                     lookupResult).isOverloaded())
{


#line 909 "check.cog"
                 

#line 909 "check.cog"
                 auto overloadedExpr = 

#line 909 "check.cog"
                                                                  

#line 909 "check.cog"
                                      createObject<

#line 909 "check.cog"
                                                   OverloadedExpr> ();


#line 910 "check.cog"
                               DEREF(

#line 910 "check.cog"
                 overloadedExpr).loc = 

#line 910 "check.cog"
                                         DEREF(

#line 910 "check.cog"
                                      exp).loc;


#line 911 "check.cog"
                               DEREF(

#line 911 "check.cog"
                 overloadedExpr).lookupResult = 

#line 911 "check.cog"
                                               lookupResult;


#line 912 "check.cog"
                               DEREF(

#line 912 "check.cog"
                 overloadedExpr).type = 

#line 912 "check.cog"
                                                                       

#line 912 "check.cog"
                                        createObject<

#line 912 "check.cog"
                                                     OverloadGroupType> ();


#line 913 "check.cog"
                               DEREF(

#line 913 "check.cog"
                 overloadedExpr).base = 

#line 913 "check.cog"
                                       base;


#line 914 "check.cog"
                 return 

#line 914 "check.cog"
                        overloadedExpr;
}
}
}
}


#line 920 "check.cog"
             

#line 920 "check.cog"
             

#line 920 "check.cog"
     diagnose(

#line 920 "check.cog"
                     

#line 920 "check.cog"
              getSink(

#line 920 "check.cog"
                      context), 

#line 920 "check.cog"
                                   DEREF(

#line 920 "check.cog"
                                exp).loc, 

#line 920 "check.cog"
                                         kDiagnostic_noMemberOfNameInType, 

#line 920 "check.cog"
                                                                           memberName, 

#line 920 "check.cog"
                                                                                       baseType);


#line 921 "check.cog"
     return 

#line 921 "check.cog"
                          

#line 921 "check.cog"
            createErrorExp(

#line 921 "check.cog"
                           context, 

#line 921 "check.cog"
                                    exp);
}


#line 567 "syntax.cog"
 

#line 607 "syntax.cog"
 

#line 1433 "check.cog"
 

#line 1416 "check.cog"
 

#line 1426 "check.cog"
 

#line 1439 "check.cog"
 

#line 926 "check.cog"
 void addAppOverloadCandidates(

#line 927 "check.cog"
                                 

#line 927 "check.cog"
           OverloadResolveContext

#line 927 "check.cog"
                                 * context, 

#line 928 "check.cog"
           Exp baseExp)
{


#line 931 "check.cog"
     if(auto typeType = 

#line 931 "check.cog"
                                   

#line 931 "check.cog"
                       as<

#line 931 "check.cog"
                          TypeType> (

#line 931 "check.cog"
                                           DEREF(

#line 931 "check.cog"
                                    baseExp).type))
{


#line 935 "check.cog"
                                  

#line 935 "check.cog"
                                  

#line 935 "check.cog"
         addTypeOverloadCandidates(

#line 935 "check.cog"
                                   context, 

#line 935 "check.cog"
                                            baseExp, 

#line 935 "check.cog"
                                                             DEREF(

#line 935 "check.cog"
                                                     typeType).type);
}
else
{


#line 937 "check.cog"
          if(auto declRefExp = 

#line 937 "check.cog"
                                            

#line 937 "check.cog"
                              as<

#line 937 "check.cog"
                                 DeclRefExp> (

#line 937 "check.cog"
                                             baseExp))
{


#line 941 "check.cog"
                                     

#line 941 "check.cog"
                                     

#line 941 "check.cog"
         addDeclRefOverloadCandidates(

#line 941 "check.cog"
                                      context, 

#line 941 "check.cog"
                                                         DEREF(

#line 941 "check.cog"
                                               declRefExp).declRef);
}
else
{


#line 943 "check.cog"
          if(auto overloadedExpr = 

#line 943 "check.cog"
                                                    

#line 943 "check.cog"
                                  as<

#line 943 "check.cog"
                                     OverloadedExpr> (

#line 943 "check.cog"
                                                     baseExp))
{


#line 945 "check.cog"
                  

#line 945 "check.cog"
                  

#line 945 "check.cog"
         cogAssert(

#line 945 "check.cog"
                   

#line 945 "check.cog"
                   !

#line 945 "check.cog"
                           DEREF(

#line 945 "check.cog"
                    context).baseExp);


#line 946 "check.cog"
                DEREF(

#line 946 "check.cog"
         context).baseExp = 

#line 946 "check.cog"
                                         DEREF(

#line 946 "check.cog"
                           overloadedExpr).base;


#line 949 "check.cog"
                  

#line 949 "check.cog"
                  

#line 949 "check.cog"
         cogAssert(

#line 949 "check.cog"
                                                                

#line 949 "check.cog"
                                                             

#line 949 "check.cog"
                                                    DEREF(

#line 949 "check.cog"
                                              DEREF(

#line 949 "check.cog"
                                 DEREF(

#line 949 "check.cog"
                   overloadedExpr).lookupResult).items).getCount() 

#line 949 "check.cog"
                                                                != 

#line 949 "check.cog"
                                                                   0);


#line 950 "check.cog"
         for(auto item : 

#line 950 "check.cog"
                                       DEREF(

#line 950 "check.cog"
                         overloadedExpr).lookupResult)
{
{


#line 953 "check.cog"
                                         

#line 953 "check.cog"
                                         

#line 953 "check.cog"
             addDeclRefOverloadCandidates(

#line 954 "check.cog"
                 context, 

#line 955 "check.cog"
                           

#line 955 "check.cog"
                 DeclRefVal(

#line 955 "check.cog"
                                DEREF(

#line 955 "check.cog"
                            item).decl));
}
}
}
else
{
}
}
}
}


#line 967 "check.cog"
 void addGenericGenericOverloadCandidate(

#line 968 "check.cog"
                                    

#line 968 "check.cog"
              OverloadResolveContext

#line 968 "check.cog"
                                    * context, 

#line 969 "check.cog"
                  DeclRefValImpl<

#line 969 "check.cog"
                                 GenericDecl>  genericDeclRef)
{


#line 971 "check.cog"
            

#line 971 "check.cog"
            

#line 971 "check.cog"
  ensureDecl(

#line 971 "check.cog"
                    DEREF(

#line 971 "check.cog"
             context).checkContext, 

#line 971 "check.cog"
                                                         

#line 971 "check.cog"
                                                 DEREF(

#line 971 "check.cog"
                                   genericDeclRef).getDecl());


#line 973 "check.cog"
     

#line 973 "check.cog"
     

#line 973 "check.cog"
                    OverloadCandidate candidate;


#line 974 "check.cog"
              DEREF(

#line 974 "check.cog"
     candidate).declRef = 

#line 974 "check.cog"
                         genericDeclRef;


#line 975 "check.cog"
              DEREF(

#line 975 "check.cog"
     candidate).resultType = 

#line 975 "check.cog"
                            nullptr;


#line 977 "check.cog"
                         

#line 977 "check.cog"
                         

#line 977 "check.cog"
     addOverloadCandidate(

#line 977 "check.cog"
                          context, 

#line 977 "check.cog"
                                   candidate);
}


#line 980 "check.cog"
 void addDeclRefGenericOverloadCandidates(

#line 981 "check.cog"
                                    

#line 981 "check.cog"
              OverloadResolveContext

#line 981 "check.cog"
                                    * context, 

#line 982 "check.cog"
          DeclRefVal val)
{


#line 984 "check.cog"
     if(auto genericDeclRef = 

#line 984 "check.cog"
                                            

#line 984 "check.cog"
                             as<

#line 984 "check.cog"
                                GenericDecl> (

#line 984 "check.cog"
                                             val))
{


#line 986 "check.cog"
                                           

#line 986 "check.cog"
                                           

#line 986 "check.cog"
         addGenericGenericOverloadCandidate(

#line 986 "check.cog"
                                            context, 

#line 986 "check.cog"
                                                     genericDeclRef);
}
else
{
}
}


#line 995 "check.cog"
 void addGenericAppOverloadCandidates(

#line 996 "check.cog"
                                 

#line 996 "check.cog"
           OverloadResolveContext

#line 996 "check.cog"
                                 * context, 

#line 997 "check.cog"
           Exp baseExp)
{


#line 999 "check.cog"
  if(auto declRefExp = 

#line 999 "check.cog"
                                    

#line 999 "check.cog"
                      as<

#line 999 "check.cog"
                         DeclRefExp> (

#line 999 "check.cog"
                                     baseExp))
{


#line 1001 "check.cog"
                                            

#line 1001 "check.cog"
                                            

#line 1001 "check.cog"
         addDeclRefGenericOverloadCandidates(

#line 1001 "check.cog"
                                             context, 

#line 1001 "check.cog"
                                                                DEREF(

#line 1001 "check.cog"
                                                      declRefExp).declRef);
}
else
{


#line 1003 "check.cog"
          if(auto overloadedExpr = 

#line 1003 "check.cog"
                                                    

#line 1003 "check.cog"
                                  as<

#line 1003 "check.cog"
                                     OverloadedExpr> (

#line 1003 "check.cog"
                                                     baseExp))
{


#line 1005 "check.cog"
                  

#line 1005 "check.cog"
                  

#line 1005 "check.cog"
         cogAssert(

#line 1005 "check.cog"
                   

#line 1005 "check.cog"
                   !

#line 1005 "check.cog"
                           DEREF(

#line 1005 "check.cog"
                    context).baseExp);


#line 1006 "check.cog"
                DEREF(

#line 1006 "check.cog"
         context).baseExp = 

#line 1006 "check.cog"
                                         DEREF(

#line 1006 "check.cog"
                           overloadedExpr).base;


#line 1008 "check.cog"
                  

#line 1008 "check.cog"
                  

#line 1008 "check.cog"
         cogAssert(

#line 1008 "check.cog"
                                                                

#line 1008 "check.cog"
                                                             

#line 1008 "check.cog"
                                                    DEREF(

#line 1008 "check.cog"
                                              DEREF(

#line 1008 "check.cog"
                                 DEREF(

#line 1008 "check.cog"
                   overloadedExpr).lookupResult).items).getCount() 

#line 1008 "check.cog"
                                                                != 

#line 1008 "check.cog"
                                                                   0);


#line 1009 "check.cog"
         for(auto item : 

#line 1009 "check.cog"
                                       DEREF(

#line 1009 "check.cog"
                         overloadedExpr).lookupResult)
{
{


#line 1011 "check.cog"
                                                

#line 1011 "check.cog"
                                                

#line 1011 "check.cog"
             addDeclRefGenericOverloadCandidates(

#line 1012 "check.cog"
                 context, 

#line 1013 "check.cog"
                           

#line 1013 "check.cog"
                 DeclRefVal(

#line 1013 "check.cog"
                                DEREF(

#line 1013 "check.cog"
                            item).decl));
}
}
}
else
{
}
}
}


#line 1024 "check.cog"
 

#line 1027 "check.cog"
        Type createFuncType(

#line 1025 "check.cog"
                       

#line 1025 "check.cog"
           CheckContext

#line 1025 "check.cog"
                       * context, 

#line 1026 "check.cog"
               DeclRefValImpl<

#line 1026 "check.cog"
                              FuncDeclBase>  funcDeclRef)
{


#line 1029 "check.cog"
     

#line 1029 "check.cog"
     auto funcType = 

#line 1029 "check.cog"
                                          

#line 1029 "check.cog"
                    createObject<

#line 1029 "check.cog"
                                 FuncType> ();


#line 1030 "check.cog"
     return 

#line 1030 "check.cog"
            funcType;
}


#line 1035 "check.cog"
 

#line 1038 "check.cog"
     Type createDeclRefType(

#line 1036 "check.cog"
                       

#line 1036 "check.cog"
           CheckContext

#line 1036 "check.cog"
                       * context, 

#line 1037 "check.cog"
           DeclRefVal declRef)
{


#line 1040 "check.cog"
  

#line 1040 "check.cog"
  auto type = 

#line 1040 "check.cog"
                                      

#line 1040 "check.cog"
             createObject<

#line 1040 "check.cog"
                          DeclRefType> ();


#line 1041 "check.cog"
      DEREF(

#line 1041 "check.cog"
  type).declRef = 

#line 1041 "check.cog"
                               

#line 1041 "check.cog"
                 CompactDeclRef(

#line 1041 "check.cog"
                                declRef);


#line 1042 "check.cog"
  return 

#line 1042 "check.cog"
         type;
}


#line 1045 "check.cog"
 

#line 1048 "check.cog"
     Type createDeclRefTypeType(

#line 1046 "check.cog"
                       

#line 1046 "check.cog"
           CheckContext

#line 1046 "check.cog"
                       * context, 

#line 1047 "check.cog"
           DeclRefVal declRef)
{


#line 1050 "check.cog"
  

#line 1050 "check.cog"
  auto type = 

#line 1050 "check.cog"
                              

#line 1050 "check.cog"
             createDeclRefType(

#line 1050 "check.cog"
                               context, 

#line 1050 "check.cog"
                                        declRef);


#line 1051 "check.cog"
  

#line 1051 "check.cog"
  auto typeType = 

#line 1051 "check.cog"
                               

#line 1051 "check.cog"
                 createTypeType(

#line 1051 "check.cog"
                                context, 

#line 1051 "check.cog"
                                         type);


#line 1052 "check.cog"
  return 

#line 1052 "check.cog"
         typeType;
}


#line 741 "syntax.cog"
 

#line 1055 "check.cog"
 

#line 1058 "check.cog"
     TypeType createTypeType(

#line 1056 "check.cog"
                       

#line 1056 "check.cog"
           CheckContext

#line 1056 "check.cog"
                       * context, 

#line 1057 "check.cog"
        Type type)
{


#line 1060 "check.cog"
  

#line 1060 "check.cog"
  auto typeType = 

#line 1060 "check.cog"
                                       

#line 1060 "check.cog"
                 createObject<

#line 1060 "check.cog"
                              TypeType> ();


#line 1061 "check.cog"
          DEREF(

#line 1061 "check.cog"
  typeType).type = 

#line 1061 "check.cog"
                  type;


#line 1062 "check.cog"
  return 

#line 1062 "check.cog"
         typeType;
}


#line 1065 "check.cog"
 

#line 1069 "check.cog"
     Type specializeTypeForDeclRef(

#line 1066 "check.cog"
                        

#line 1066 "check.cog"
            CheckContext

#line 1066 "check.cog"
                        * context, 

#line 1067 "check.cog"
         Type type, 

#line 1068 "check.cog"
           DeclRefVal declRef)
{


#line 1071 "check.cog"
  return 

#line 1071 "check.cog"
                       

#line 1071 "check.cog"
         specializeType(

#line 1072 "check.cog"
   type, 

#line 1073 "check.cog"
          DEREF(

#line 1073 "check.cog"
   declRef).specializations);
}


#line 1078 "check.cog"
 

#line 1081 "check.cog"
     Type getTypeForDeclRefImpl(

#line 1079 "check.cog"
                       

#line 1079 "check.cog"
           CheckContext

#line 1079 "check.cog"
                       * context, 

#line 1080 "check.cog"
           DeclRefVal declRef)
{


#line 1083 "check.cog"
     

#line 1083 "check.cog"
     auto decl = 

#line 1083 "check.cog"
                               

#line 1083 "check.cog"
                       DEREF(

#line 1083 "check.cog"
                declRef).getDecl();


#line 1085 "check.cog"
               

#line 1085 "check.cog"
               

#line 1085 "check.cog"
     ensureDecl(

#line 1085 "check.cog"
                context, 

#line 1085 "check.cog"
                         decl);


#line 1087 "check.cog"
     if(auto varDecl = 

#line 1087 "check.cog"
                                     

#line 1087 "check.cog"
                      as<

#line 1087 "check.cog"
                         VarDeclBase> (

#line 1087 "check.cog"
                                      decl))
{


#line 1090 "check.cog"
   return 

#line 1090 "check.cog"
                                  

#line 1090 "check.cog"
          specializeTypeForDeclRef(

#line 1090 "check.cog"
                                   context, 

#line 1090 "check.cog"
                                                        DEREF(

#line 1090 "check.cog"
                                                   DEREF(

#line 1090 "check.cog"
                                            varDecl).type).type, 

#line 1090 "check.cog"
                                                               declRef);
}
else
{


#line 1092 "check.cog"
       if(auto aggTypeDecl = 

#line 1092 "check.cog"
                                           

#line 1092 "check.cog"
                            as<

#line 1092 "check.cog"
                               AggTypeDecl> (

#line 1092 "check.cog"
                                            decl))
{


#line 1094 "check.cog"
         return 

#line 1094 "check.cog"
                                     

#line 1094 "check.cog"
                createDeclRefTypeType(

#line 1094 "check.cog"
                                      context, 

#line 1094 "check.cog"
                                               declRef);
}
else
{


#line 1096 "check.cog"
          if(auto typeVarDecl = 

#line 1096 "check.cog"
                                              

#line 1096 "check.cog"
                               as<

#line 1096 "check.cog"
                                  TypeVarDecl> (

#line 1096 "check.cog"
                                               decl))
{


#line 1098 "check.cog"
         return 

#line 1098 "check.cog"
                                     

#line 1098 "check.cog"
                createDeclRefTypeType(

#line 1098 "check.cog"
                                      context, 

#line 1098 "check.cog"
                                               declRef);
}
else
{


#line 1100 "check.cog"
          if(auto genericDecl = 

#line 1100 "check.cog"
                                              

#line 1100 "check.cog"
                               as<

#line 1100 "check.cog"
                                  GenericDecl> (

#line 1100 "check.cog"
                                               decl))
{


#line 1102 "check.cog"
         return 

#line 1102 "check.cog"
                                     

#line 1102 "check.cog"
                createDeclRefTypeType(

#line 1102 "check.cog"
                                      context, 

#line 1102 "check.cog"
                                               declRef);
}
else
{


#line 1104 "check.cog"
          if(auto funcDeclRef = 

#line 1104 "check.cog"
                                               

#line 1104 "check.cog"
                               as<

#line 1104 "check.cog"
                                  FuncDeclBase> (

#line 1104 "check.cog"
                                                declRef))
{


#line 1106 "check.cog"
         return 

#line 1106 "check.cog"
                              

#line 1106 "check.cog"
                createFuncType(

#line 1106 "check.cog"
                               context, 

#line 1106 "check.cog"
                                        funcDeclRef);
}
else
{


#line 1110 "check.cog"
            

#line 1110 "check.cog"
            

#line 1110 "check.cog"
   cogAssert(

#line 1110 "check.cog"
             

#line 1110 "check.cog"
             !

#line 1110 "check.cog"
              "unimplemented");


#line 1111 "check.cog"
         return 

#line 1111 "check.cog"
                0;
}
}
}
}
}
}


#line 1115 "check.cog"
 

#line 1118 "check.cog"
     Type getTypeForDeclRef(

#line 1116 "check.cog"
                       

#line 1116 "check.cog"
           CheckContext

#line 1116 "check.cog"
                       * context, 

#line 1117 "check.cog"
           DeclRefVal declRef)
{


#line 1120 "check.cog"
     

#line 1120 "check.cog"
     auto result = 

#line 1120 "check.cog"
                                       

#line 1120 "check.cog"
                  getTypeForDeclRefImpl(

#line 1120 "check.cog"
                                        context, 

#line 1120 "check.cog"
                                                 declRef);


#line 1125 "check.cog"
     return 

#line 1125 "check.cog"
            result;
}


#line 1128 "check.cog"
 

#line 1131 "check.cog"
     Type getTypeForDeclRef(

#line 1129 "check.cog"
                       

#line 1129 "check.cog"
           CheckContext

#line 1129 "check.cog"
                       * context, 

#line 1130 "check.cog"
           CompactDeclRef declRef)
{


#line 1133 "check.cog"
  return 

#line 1133 "check.cog"
                          

#line 1133 "check.cog"
         getTypeForDeclRef(

#line 1134 "check.cog"
   context, 

#line 1135 "check.cog"
             

#line 1135 "check.cog"
   DeclRefVal(

#line 1135 "check.cog"
              declRef));
}


#line 1138 "check.cog"
 

#line 1140 "check.cog"
     Type createErrorType(

#line 1139 "check.cog"
                       

#line 1139 "check.cog"
           CheckContext

#line 1139 "check.cog"
                       * context)
{


#line 1142 "check.cog"
     return 

#line 1142 "check.cog"
                                   

#line 1142 "check.cog"
            createObject<

#line 1142 "check.cog"
                         ErrorType> ();
}


#line 1145 "check.cog"
 

#line 1149 "check.cog"
        Type getBuiltinType(

#line 1146 "check.cog"
                       

#line 1146 "check.cog"
           CheckContext

#line 1146 "check.cog"
                       * context, 

#line 1147 "check.cog"
       SourceLoc loc, 

#line 1148 "check.cog"
        ConstPtr<

#line 1148 "check.cog"
                 Char>  name)
{


#line 1151 "check.cog"
     

#line 1151 "check.cog"
     auto cogModuleName = 

#line 1151 "check.cog"
                                

#line 1151 "check.cog"
                         getName(

#line 1151 "check.cog"
                                               DEREF(

#line 1151 "check.cog"
                                        DEREF(

#line 1151 "check.cog"
                                 context).shared).session, 

#line 1151 "check.cog"
                                                         "cog");


#line 1152 "check.cog"
     

#line 1152 "check.cog"
     

#line 1152 "check.cog"
                     ModuleDecl cogModule = 

#line 1152 "check.cog"
                                  nullptr;


#line 1153 "check.cog"
     if(

#line 1153 "check.cog"
                                               

#line 1153 "check.cog"
                                         DEREF(

#line 1153 "check.cog"
                              DEREF(

#line 1153 "check.cog"
                      DEREF(

#line 1153 "check.cog"
               DEREF(

#line 1153 "check.cog"
        context).shared).session).moduleDecl).name 

#line 1153 "check.cog"
                                               == 

#line 1153 "check.cog"
                                                  cogModuleName)
{


#line 1155 "check.cog"
         cogModule = 

#line 1155 "check.cog"
                                           DEREF(

#line 1155 "check.cog"
                                   DEREF(

#line 1155 "check.cog"
                            DEREF(

#line 1155 "check.cog"
                     context).shared).session).moduleDecl;
}
else
{


#line 1159 "check.cog"
         cogModule = 

#line 1159 "check.cog"
                                       

#line 1159 "check.cog"
                     findOrImportModule(

#line 1159 "check.cog"
                                                      DEREF(

#line 1159 "check.cog"
                                               DEREF(

#line 1159 "check.cog"
                                        context).shared).session, 

#line 1159 "check.cog"
                                                                loc, 

#line 1159 "check.cog"
                                                                     cogModuleName);
}


#line 1162 "check.cog"
     

#line 1162 "check.cog"
     auto nameSpan = 

#line 1162 "check.cog"
                                        

#line 1162 "check.cog"
                    TerminatedStringSpan(

#line 1162 "check.cog"
                                         name);


#line 1163 "check.cog"
     for(auto decl : 

#line 1163 "check.cog"
                                       

#line 1163 "check.cog"
                              DEREF(

#line 1163 "check.cog"
                     cogModule).getDecls())
{
{


#line 1165 "check.cog"
         if(

#line 1165 "check.cog"
                      

#line 1165 "check.cog"
                DEREF(

#line 1165 "check.cog"
            decl).name 

#line 1165 "check.cog"
                      && 

#line 1165 "check.cog"
                                            

#line 1165 "check.cog"
                                

#line 1165 "check.cog"
                         getText(

#line 1165 "check.cog"
                                     DEREF(

#line 1165 "check.cog"
                                 decl).name) 

#line 1165 "check.cog"
                                            == 

#line 1165 "check.cog"
                                               nameSpan)
{


#line 1167 "check.cog"
             

#line 1167 "check.cog"
             auto type = 

#line 1167 "check.cog"
                                                 

#line 1167 "check.cog"
                        createObject<

#line 1167 "check.cog"
                                     DeclRefType> ();


#line 1168 "check.cog"
                 DEREF(

#line 1168 "check.cog"
             type).declRef = 

#line 1168 "check.cog"
                                          

#line 1168 "check.cog"
                            CompactDeclRef(

#line 1168 "check.cog"
                                           decl);


#line 1170 "check.cog"
             return 

#line 1170 "check.cog"
                    type;
}
}
}


#line 1174 "check.cog"
             

#line 1174 "check.cog"
             

#line 1174 "check.cog"
     diagnose(

#line 1174 "check.cog"
                     

#line 1174 "check.cog"
              getSink(

#line 1174 "check.cog"
                      context), 

#line 1174 "check.cog"
                                loc, 

#line 1174 "check.cog"
                                     kDiagnostic_failedToFindBuiltinType, 

#line 1174 "check.cog"
                                                                          name);


#line 1175 "check.cog"
     return 

#line 1175 "check.cog"
                           

#line 1175 "check.cog"
            createErrorType(

#line 1175 "check.cog"
                            context);
}


#line 1178 "check.cog"
 

#line 1181 "check.cog"
     Type getResultType(

#line 1179 "check.cog"
                       

#line 1179 "check.cog"
           CheckContext

#line 1179 "check.cog"
                       * context, 

#line 1180 "check.cog"
        DeclRefValImpl<

#line 1180 "check.cog"
                       PatternDecl>  decl)
{


#line 1185 "check.cog"
  if(auto funcDeclRef = 

#line 1185 "check.cog"
                                   

#line 1185 "check.cog"
                       as<

#line 1185 "check.cog"
                          FuncDecl> (

#line 1185 "check.cog"
                                    decl))
{


#line 1187 "check.cog"
   return 

#line 1187 "check.cog"
                       

#line 1187 "check.cog"
          getResultType(

#line 1187 "check.cog"
                        funcDeclRef);
}
else
{


#line 1189 "check.cog"
          if(auto subscriptDeclRef = 

#line 1189 "check.cog"
                                                     

#line 1189 "check.cog"
                                    as<

#line 1189 "check.cog"
                                       SubscriptDecl> (

#line 1189 "check.cog"
                                                      decl))
{


#line 1191 "check.cog"
         return 

#line 1191 "check.cog"
                             

#line 1191 "check.cog"
                getResultType(

#line 1191 "check.cog"
                              subscriptDeclRef);
}
else
{


#line 1193 "check.cog"
          if(auto typeDeclRef = 

#line 1193 "check.cog"
                                              

#line 1193 "check.cog"
                               as<

#line 1193 "check.cog"
                                  AggTypeDecl> (

#line 1193 "check.cog"
                                               decl))
{


#line 1195 "check.cog"
         return 

#line 1195 "check.cog"
                                 

#line 1195 "check.cog"
                createDeclRefType(

#line 1195 "check.cog"
                                  context, 

#line 1196 "check.cog"
                           

#line 1196 "check.cog"
             CompactDeclRef(

#line 1196 "check.cog"
                            typeDeclRef));
}
else
{


#line 1201 "check.cog"
                 

#line 1201 "check.cog"
                 

#line 1201 "check.cog"
         diagnose(

#line 1201 "check.cog"
                         

#line 1201 "check.cog"
                  getSink(

#line 1201 "check.cog"
                          context), 

#line 1201 "check.cog"
                                             DEREF(

#line 1201 "check.cog"
                                        DEREF(

#line 1201 "check.cog"
                                    decl).decl).loc, 

#line 1201 "check.cog"
                                                   kDiagnostic_unimplemented, 

#line 1201 "check.cog"
                                                                              "result type");


#line 1202 "check.cog"
   return 

#line 1202 "check.cog"
          0;
}
}
}
}


#line 1206 "check.cog"
 

#line 1209 "check.cog"
        Exp createErrorExp(

#line 1207 "check.cog"
                       

#line 1207 "check.cog"
           CheckContext

#line 1207 "check.cog"
                       * context, 

#line 1208 "check.cog"
       Exp exp)
{


#line 1211 "check.cog"
        DEREF(

#line 1211 "check.cog"
     exp).type = 

#line 1211 "check.cog"
                               

#line 1211 "check.cog"
                createErrorType(

#line 1211 "check.cog"
                                context);


#line 1212 "check.cog"
     return 

#line 1212 "check.cog"
            exp;
}


#line 1215 "check.cog"
 

#line 1218 "check.cog"
        Exp createErrorExp(

#line 1216 "check.cog"
                       

#line 1216 "check.cog"
           CheckContext

#line 1216 "check.cog"
                       * context, 

#line 1217 "check.cog"
       SourceLoc loc)
{


#line 1220 "check.cog"
     

#line 1220 "check.cog"
     auto exp = 

#line 1220 "check.cog"
                                     

#line 1220 "check.cog"
               createObject<

#line 1220 "check.cog"
                            ErrorExp> ();


#line 1221 "check.cog"
        DEREF(

#line 1221 "check.cog"
     exp).loc = 

#line 1221 "check.cog"
               loc;


#line 1222 "check.cog"
     return 

#line 1222 "check.cog"
                          

#line 1222 "check.cog"
            createErrorExp(

#line 1222 "check.cog"
                           context, 

#line 1222 "check.cog"
                                    exp);
}


#line 1225 "check.cog"
 

#line 1228 "check.cog"
        Bool isSameVal(

#line 1226 "check.cog"
        Val left, 

#line 1227 "check.cog"
         Val right)
{


#line 1230 "check.cog"
     if(auto leftType = 

#line 1230 "check.cog"
                               

#line 1230 "check.cog"
                       as<

#line 1230 "check.cog"
                          Type> (

#line 1230 "check.cog"
                                left))
{


#line 1232 "check.cog"
         if(auto rightType = 

#line 1232 "check.cog"
                                    

#line 1232 "check.cog"
                            as<

#line 1232 "check.cog"
                               Type> (

#line 1232 "check.cog"
                                     right))
{


#line 1234 "check.cog"
             return 

#line 1234 "check.cog"
                              

#line 1234 "check.cog"
                    isSameType(

#line 1234 "check.cog"
                               leftType, 

#line 1234 "check.cog"
                                         rightType);
}
}


#line 1241 "check.cog"
              

#line 1241 "check.cog"
              

#line 1241 "check.cog"
     cogAssert(

#line 1241 "check.cog"
               

#line 1241 "check.cog"
               !

#line 1241 "check.cog"
                "unimplemented");


#line 1242 "check.cog"
     return 

#line 1242 "check.cog"
            false;
}


#line 254 "syntax.cog"
 

#line 262 "syntax.cog"
 

#line 1245 "check.cog"
 

#line 1248 "check.cog"
        Bool isSameSpecializations(

#line 1246 "check.cog"
        Specializations left, 

#line 1247 "check.cog"
            Specializations right)
{


#line 1251 "check.cog"
     if(

#line 1251 "check.cog"
              

#line 1251 "check.cog"
        

#line 1251 "check.cog"
        !

#line 1251 "check.cog"
         left 

#line 1251 "check.cog"
              || 

#line 1251 "check.cog"
                 

#line 1251 "check.cog"
                 !

#line 1251 "check.cog"
                  right)
{


#line 1252 "check.cog"
         return 

#line 1252 "check.cog"
                     

#line 1252 "check.cog"
                left 

#line 1252 "check.cog"
                     == 

#line 1252 "check.cog"
                        right;
}


#line 1254 "check.cog"
     if(

#line 1254 "check.cog"
        

#line 1254 "check.cog"
        !

#line 1254 "check.cog"
                      

#line 1254 "check.cog"
         isSameDeclRef(

#line 1255 "check.cog"
             DEREF(

#line 1255 "check.cog"
         left).genericDeclRef, 

#line 1256 "check.cog"
              DEREF(

#line 1256 "check.cog"
         right).genericDeclRef))
{


#line 1258 "check.cog"
         return 

#line 1258 "check.cog"
                false;
}


#line 1261 "check.cog"
     

#line 1261 "check.cog"
     auto leftCursor = 

#line 1261 "check.cog"
                                     

#line 1261 "check.cog"
                               DEREF(

#line 1261 "check.cog"
                          DEREF(

#line 1261 "check.cog"
                      left).args).begin();


#line 1262 "check.cog"
     

#line 1262 "check.cog"
     auto rightCursor = 

#line 1262 "check.cog"
                                       

#line 1262 "check.cog"
                                 DEREF(

#line 1262 "check.cog"
                            DEREF(

#line 1262 "check.cog"
                       right).args).begin();


#line 1264 "check.cog"
     while(

#line 1264 "check.cog"
                      

#line 1264 "check.cog"
           leftCursor 

#line 1264 "check.cog"
                      != 

#line 1264 "check.cog"
                                      

#line 1264 "check.cog"
                                  DEREF(

#line 1264 "check.cog"
                             DEREF(

#line 1264 "check.cog"
                         left).args).end())
{
{


#line 1266 "check.cog"
         

#line 1266 "check.cog"
         auto leftArg = 

#line 1266 "check.cog"
                       

#line 1266 "check.cog"
                       *

#line 1266 "check.cog"
                        leftCursor;


#line 1267 "check.cog"
         

#line 1267 "check.cog"
         auto rightArg = 

#line 1267 "check.cog"
                        

#line 1267 "check.cog"
                        *

#line 1267 "check.cog"
                         rightCursor;


#line 1269 "check.cog"
         if(

#line 1269 "check.cog"
            

#line 1269 "check.cog"
            !

#line 1269 "check.cog"
                      

#line 1269 "check.cog"
             isSameVal(

#line 1270 "check.cog"
                    DEREF(

#line 1270 "check.cog"
             leftArg).value, 

#line 1271 "check.cog"
                     DEREF(

#line 1271 "check.cog"
             rightArg).value))
{


#line 1273 "check.cog"
             return 

#line 1273 "check.cog"
                    false;
}


#line 1277 "check.cog"
         

#line 1277 "check.cog"
         

#line 1277 "check.cog"
         ++

#line 1277 "check.cog"
           leftCursor;


#line 1278 "check.cog"
         

#line 1278 "check.cog"
         

#line 1278 "check.cog"
         ++

#line 1278 "check.cog"
           rightCursor;
}
}


#line 1281 "check.cog"
     return 

#line 1281 "check.cog"
            true;
}


#line 1285 "check.cog"
 

#line 1288 "check.cog"
        Bool isSameDeclRef(

#line 1286 "check.cog"
        ConstRef<

#line 1286 "check.cog"
                 DeclRefVal>  left, 

#line 1287 "check.cog"
         ConstRef<

#line 1287 "check.cog"
                  DeclRefVal>  right)
{


#line 1290 "check.cog"
     if(

#line 1290 "check.cog"
                  

#line 1290 "check.cog"
            DEREF(

#line 1290 "check.cog"
        left).decl 

#line 1290 "check.cog"
                  != 

#line 1290 "check.cog"
                          DEREF(

#line 1290 "check.cog"
                     right).decl)
{


#line 1291 "check.cog"
         return 

#line 1291 "check.cog"
                false;
}


#line 1293 "check.cog"
     return 

#line 1293 "check.cog"
                                 

#line 1293 "check.cog"
            isSameSpecializations(

#line 1294 "check.cog"
             DEREF(

#line 1294 "check.cog"
         left).specializations, 

#line 1295 "check.cog"
              DEREF(

#line 1295 "check.cog"
         right).specializations);
}


#line 1298 "check.cog"
 

#line 1301 "check.cog"
        Bool isSameType(

#line 1299 "check.cog"
        Type left, 

#line 1300 "check.cog"
         Type right)
{


#line 1303 "check.cog"
     if(

#line 1303 "check.cog"
                         

#line 1303 "check.cog"
            DEREF(

#line 1303 "check.cog"
        left).directClass 

#line 1303 "check.cog"
                         != 

#line 1303 "check.cog"
                                 DEREF(

#line 1303 "check.cog"
                            right).directClass)
{


#line 1304 "check.cog"
         return 

#line 1304 "check.cog"
                false;
}


#line 1306 "check.cog"
     if(auto leftDeclRefType = 

#line 1306 "check.cog"
                                             

#line 1306 "check.cog"
                              as<

#line 1306 "check.cog"
                                 DeclRefType> (

#line 1306 "check.cog"
                                              left))
{


#line 1308 "check.cog"
         if(auto rightDeclRefType = 

#line 1308 "check.cog"
                                                  

#line 1308 "check.cog"
                                   as<

#line 1308 "check.cog"
                                      DeclRefType> (

#line 1308 "check.cog"
                                                   right))
{


#line 1311 "check.cog"
             if(

#line 1311 "check.cog"
                             

#line 1311 "check.cog"
                isSameDeclRef(

#line 1312 "check.cog"
                                DEREF(

#line 1312 "check.cog"
                 leftDeclRefType).declRef, 

#line 1313 "check.cog"
                                 DEREF(

#line 1313 "check.cog"
                 rightDeclRefType).declRef))
{


#line 1315 "check.cog"
                 return 

#line 1315 "check.cog"
                        true;
}
}
}


#line 1320 "check.cog"
     return 

#line 1320 "check.cog"
            false;
}


#line 1323 "check.cog"
 

#line 1329 "check.cog"
        Bool tryCoerceImpl(

#line 1324 "check.cog"
                        

#line 1324 "check.cog"
            CheckContext

#line 1324 "check.cog"
                        * context, 

#line 1325 "check.cog"
               Exp fromExp, 

#line 1326 "check.cog"
                Type fromType, 

#line 1327 "check.cog"
                 

#line 1327 "check.cog"
              Exp

#line 1327 "check.cog"
                 * toExp, 

#line 1328 "check.cog"
              Type toType)
{


#line 1331 "check.cog"
     if(

#line 1331 "check.cog"
                  

#line 1331 "check.cog"
        isSameType(

#line 1331 "check.cog"
                   fromType, 

#line 1331 "check.cog"
                             toType))
{


#line 1333 "check.cog"
         if(

#line 1333 "check.cog"
            toExp)
{


#line 1335 "check.cog"
             

#line 1335 "check.cog"
             *

#line 1335 "check.cog"
              toExp = 

#line 1335 "check.cog"
                      fromExp;
}


#line 1338 "check.cog"
         return 

#line 1338 "check.cog"
                true;
}


#line 1341 "check.cog"
     if(

#line 1341 "check.cog"
                          

#line 1341 "check.cog"
               

#line 1341 "check.cog"
        isError(

#line 1341 "check.cog"
                fromType) 

#line 1341 "check.cog"
                          || 

#line 1341 "check.cog"
                                    

#line 1341 "check.cog"
                             isError(

#line 1341 "check.cog"
                                     toType))
{


#line 1343 "check.cog"
         if(

#line 1343 "check.cog"
            toExp)
{


#line 1345 "check.cog"
             

#line 1345 "check.cog"
             *

#line 1345 "check.cog"
              toExp = 

#line 1345 "check.cog"
                      fromExp;
}


#line 1347 "check.cog"
         return 

#line 1347 "check.cog"
                true;
}


#line 1356 "check.cog"
     return 

#line 1356 "check.cog"
            false;
}


#line 1359 "check.cog"
 

#line 1364 "check.cog"
        Bool tryCoerceImpl(

#line 1360 "check.cog"
                        

#line 1360 "check.cog"
            CheckContext

#line 1360 "check.cog"
                        * context, 

#line 1361 "check.cog"
               Exp fromExp, 

#line 1362 "check.cog"
                 

#line 1362 "check.cog"
              Exp

#line 1362 "check.cog"
                 * toExp, 

#line 1363 "check.cog"
              Type toType)
{


#line 1366 "check.cog"
     if(auto fromOverloadedExpr = 

#line 1366 "check.cog"
                                                   

#line 1366 "check.cog"
                                 as<

#line 1366 "check.cog"
                                    OverloadedExpr> (

#line 1366 "check.cog"
                                                    fromExp))
{


#line 1370 "check.cog"
                  

#line 1370 "check.cog"
                  

#line 1370 "check.cog"
         cogAssert(

#line 1370 "check.cog"
                   

#line 1370 "check.cog"
                   !

#line 1370 "check.cog"
                    "unimplemented");
}
else
{


#line 1374 "check.cog"
         return 

#line 1374 "check.cog"
                             

#line 1374 "check.cog"
                tryCoerceImpl(

#line 1375 "check.cog"
             context, 

#line 1376 "check.cog"
             fromExp, 

#line 1377 "check.cog"
                    DEREF(

#line 1377 "check.cog"
             fromExp).type, 

#line 1378 "check.cog"
             toExp, 

#line 1379 "check.cog"
             toType);
}
}


#line 1383 "check.cog"
 

#line 1387 "check.cog"
        Exp coerce(

#line 1384 "check.cog"
                        

#line 1384 "check.cog"
            CheckContext

#line 1384 "check.cog"
                        * context, 

#line 1385 "check.cog"
            Exp exp, 

#line 1386 "check.cog"
             Type type)
{


#line 1389 "check.cog"
     

#line 1389 "check.cog"
     

#line 1389 "check.cog"
                  Exp result = 

#line 1389 "check.cog"
                        nullptr;


#line 1390 "check.cog"
     if(

#line 1390 "check.cog"
                     

#line 1390 "check.cog"
        tryCoerceImpl(

#line 1391 "check.cog"
         context, 

#line 1392 "check.cog"
         exp, 

#line 1393 "check.cog"
         

#line 1393 "check.cog"
         &

#line 1393 "check.cog"
          result, 

#line 1394 "check.cog"
         type))
{


#line 1396 "check.cog"
         return 

#line 1396 "check.cog"
                result;
}


#line 1399 "check.cog"
             

#line 1399 "check.cog"
             

#line 1399 "check.cog"
     diagnose(

#line 1399 "check.cog"
                     

#line 1399 "check.cog"
              getSink(

#line 1399 "check.cog"
                      context), 

#line 1399 "check.cog"
                                   DEREF(

#line 1399 "check.cog"
                                exp).loc, 

#line 1399 "check.cog"
                                         kDiagnostic_cannotConvertType, 

#line 1399 "check.cog"
                                                                        type, 

#line 1399 "check.cog"
                                                                                 DEREF(

#line 1399 "check.cog"
                                                                              exp).type);


#line 1400 "check.cog"
     return 

#line 1400 "check.cog"
                          

#line 1400 "check.cog"
            createErrorExp(

#line 1400 "check.cog"
                           context, 

#line 1400 "check.cog"
                                    exp);
}


#line 1403 "check.cog"
 

#line 1407 "check.cog"
        Bool canCoerce(

#line 1404 "check.cog"
                        

#line 1404 "check.cog"
            CheckContext

#line 1404 "check.cog"
                        * context, 

#line 1405 "check.cog"
            Exp exp, 

#line 1406 "check.cog"
             Type type)
{


#line 1409 "check.cog"
     return 

#line 1409 "check.cog"
                         

#line 1409 "check.cog"
            tryCoerceImpl(

#line 1410 "check.cog"
         context, 

#line 1411 "check.cog"
         exp, 

#line 1412 "check.cog"
         nullptr, 

#line 1413 "check.cog"
         type);
}


#line 1451 "check.cog"
 void issueTooFewArgsError(

#line 1452 "check.cog"
                                 

#line 1452 "check.cog"
           OverloadResolveContext

#line 1452 "check.cog"
                                 * context)
{


#line 1454 "check.cog"
          

#line 1454 "check.cog"
          

#line 1454 "check.cog"
  diagnose(

#line 1454 "check.cog"
                  

#line 1454 "check.cog"
           getSink(

#line 1454 "check.cog"
                          DEREF(

#line 1454 "check.cog"
                   context).checkContext), 

#line 1454 "check.cog"
                                                        DEREF(

#line 1454 "check.cog"
                                                 DEREF(

#line 1454 "check.cog"
                                          context).appExp).loc, 

#line 1454 "check.cog"
                                                              kDiagnostic_tooFewArgs);
}


#line 1457 "check.cog"
 void issueTooManyArgsError(

#line 1458 "check.cog"
                                 

#line 1458 "check.cog"
           OverloadResolveContext

#line 1458 "check.cog"
                                 * context)
{


#line 1460 "check.cog"
          

#line 1460 "check.cog"
          

#line 1460 "check.cog"
  diagnose(

#line 1460 "check.cog"
                  

#line 1460 "check.cog"
           getSink(

#line 1460 "check.cog"
                          DEREF(

#line 1460 "check.cog"
                   context).checkContext), 

#line 1460 "check.cog"
                                                        DEREF(

#line 1460 "check.cog"
                                                 DEREF(

#line 1460 "check.cog"
                                          context).appExp).loc, 

#line 1460 "check.cog"
                                                              kDiagnostic_tooManyArgs);
}


#line 1463 "check.cog"
 

#line 1466 "check.cog"
        Bool checkOverloadCandidateArity(

#line 1464 "check.cog"
                                 

#line 1464 "check.cog"
           OverloadResolveContext

#line 1464 "check.cog"
                                 * context, 

#line 1465 "check.cog"
                Ref<

#line 1465 "check.cog"
                    OverloadCandidate>  candidate)
{


#line 1468 "check.cog"
     

#line 1468 "check.cog"
     auto args = 

#line 1468 "check.cog"
                

#line 1468 "check.cog"
                &

#line 1468 "check.cog"
                               DEREF(

#line 1468 "check.cog"
                        DEREF(

#line 1468 "check.cog"
                 context).appExp).args;


#line 1469 "check.cog"
     

#line 1469 "check.cog"
     auto argCursor = 

#line 1469 "check.cog"
                               

#line 1469 "check.cog"
                         DEREF(

#line 1469 "check.cog"
                     args).begin();


#line 1470 "check.cog"
     

#line 1470 "check.cog"
     auto argEnd = 

#line 1470 "check.cog"
                          

#line 1470 "check.cog"
                      DEREF(

#line 1470 "check.cog"
                  args).end();


#line 1472 "check.cog"
     if(auto funcDeclRef = 

#line 1472 "check.cog"
                                          

#line 1472 "check.cog"
                          as<

#line 1472 "check.cog"
                             FuncDeclBase> (

#line 1472 "check.cog"
                                                    DEREF(

#line 1472 "check.cog"
                                           candidate).declRef))
{


#line 1474 "check.cog"
         for(auto dd : 

#line 1474 "check.cog"
                               

#line 1474 "check.cog"
                       getDecls(

#line 1474 "check.cog"
                                funcDeclRef))
{
{


#line 1476 "check.cog"
             if(auto paramDeclRef = 

#line 1476 "check.cog"
                                                

#line 1476 "check.cog"
                                   as<

#line 1476 "check.cog"
                                      ParamDecl> (

#line 1476 "check.cog"
                                                 dd))
{


#line 1478 "check.cog"
                 if(

#line 1478 "check.cog"
                    

#line 1478 "check.cog"
                    !

#line 1478 "check.cog"
                     (

#line 1478 "check.cog"
                                

#line 1478 "check.cog"
                      argCursor 

#line 1478 "check.cog"
                                != 

#line 1478 "check.cog"
                                   argEnd))
{


#line 1481 "check.cog"
                          

#line 1481 "check.cog"
                          

#line 1481 "check.cog"
      issueTooFewArgsError(

#line 1481 "check.cog"
                           context);


#line 1482 "check.cog"
                     return 

#line 1482 "check.cog"
                            false;
}


#line 1485 "check.cog"
                 

#line 1485 "check.cog"
                 

#line 1485 "check.cog"
                 ++

#line 1485 "check.cog"
                   argCursor;
}
else
{
}
}
}


#line 1491 "check.cog"
         if(

#line 1491 "check.cog"
                      

#line 1491 "check.cog"
            argCursor 

#line 1491 "check.cog"
                      != 

#line 1491 "check.cog"
                         argEnd)
{


#line 1494 "check.cog"
                         

#line 1494 "check.cog"
                         

#line 1494 "check.cog"
    issueTooManyArgsError(

#line 1494 "check.cog"
                          context);


#line 1495 "check.cog"
             return 

#line 1495 "check.cog"
                    false;
}


#line 1498 "check.cog"
         return 

#line 1498 "check.cog"
                true;
}
else
{


#line 1500 "check.cog"
       if(auto genericDeclRef = 

#line 1500 "check.cog"
                                              

#line 1500 "check.cog"
                               as<

#line 1500 "check.cog"
                                  GenericDecl> (

#line 1500 "check.cog"
                                                        DEREF(

#line 1500 "check.cog"
                                               candidate).declRef))
{


#line 1502 "check.cog"
   for(auto dd : 

#line 1502 "check.cog"
                         

#line 1502 "check.cog"
                 getDecls(

#line 1502 "check.cog"
                          genericDeclRef))
{
{


#line 1504 "check.cog"
    if(auto genericParamDeclRef = 

#line 1504 "check.cog"
                                                     

#line 1504 "check.cog"
                                 as<

#line 1504 "check.cog"
                                    GenericParamDecl> (

#line 1504 "check.cog"
                                                      dd))
{


#line 1506 "check.cog"
     if(

#line 1506 "check.cog"
        

#line 1506 "check.cog"
        !

#line 1506 "check.cog"
         (

#line 1506 "check.cog"
                    

#line 1506 "check.cog"
          argCursor 

#line 1506 "check.cog"
                    != 

#line 1506 "check.cog"
                       argEnd))
{


#line 1509 "check.cog"
                          

#line 1509 "check.cog"
                          

#line 1509 "check.cog"
      issueTooFewArgsError(

#line 1509 "check.cog"
                           context);


#line 1510 "check.cog"
      return 

#line 1510 "check.cog"
             false;
}


#line 1513 "check.cog"
     

#line 1513 "check.cog"
     

#line 1513 "check.cog"
     ++

#line 1513 "check.cog"
       argCursor;
}
else
{
}
}
}


#line 1519 "check.cog"
         if(

#line 1519 "check.cog"
                      

#line 1519 "check.cog"
            argCursor 

#line 1519 "check.cog"
                      != 

#line 1519 "check.cog"
                         argEnd)
{


#line 1522 "check.cog"
                         

#line 1522 "check.cog"
                         

#line 1522 "check.cog"
    issueTooManyArgsError(

#line 1522 "check.cog"
                          context);


#line 1523 "check.cog"
             return 

#line 1523 "check.cog"
                    false;
}


#line 1526 "check.cog"
         return 

#line 1526 "check.cog"
                true;
}
else
{


#line 1531 "check.cog"
         return 

#line 1531 "check.cog"
                false;
}
}
}


#line 1535 "check.cog"
 

#line 1538 "check.cog"
        Bool checkOverloadCandidateTypes(

#line 1536 "check.cog"
                                 

#line 1536 "check.cog"
           OverloadResolveContext

#line 1536 "check.cog"
                                 * context, 

#line 1537 "check.cog"
                Ref<

#line 1537 "check.cog"
                    OverloadCandidate>  candidate)
{


#line 1540 "check.cog"
     

#line 1540 "check.cog"
     auto args = 

#line 1540 "check.cog"
                

#line 1540 "check.cog"
                &

#line 1540 "check.cog"
                               DEREF(

#line 1540 "check.cog"
                        DEREF(

#line 1540 "check.cog"
                 context).appExp).args;


#line 1541 "check.cog"
     

#line 1541 "check.cog"
     auto argCursor = 

#line 1541 "check.cog"
                               

#line 1541 "check.cog"
                         DEREF(

#line 1541 "check.cog"
                     args).begin();


#line 1542 "check.cog"
     

#line 1542 "check.cog"
     auto argEnd = 

#line 1542 "check.cog"
                          

#line 1542 "check.cog"
                      DEREF(

#line 1542 "check.cog"
                  args).end();


#line 1544 "check.cog"
     if(auto funcDeclRef = 

#line 1544 "check.cog"
                                          

#line 1544 "check.cog"
                          as<

#line 1544 "check.cog"
                             FuncDeclBase> (

#line 1544 "check.cog"
                                                    DEREF(

#line 1544 "check.cog"
                                           candidate).declRef))
{


#line 1546 "check.cog"
         for(auto dd : 

#line 1546 "check.cog"
                               

#line 1546 "check.cog"
                       getDecls(

#line 1546 "check.cog"
                                funcDeclRef))
{
{


#line 1548 "check.cog"
             if(auto paramDeclRef = 

#line 1548 "check.cog"
                                                

#line 1548 "check.cog"
                                   as<

#line 1548 "check.cog"
                                      ParamDecl> (

#line 1548 "check.cog"
                                                 dd))
{


#line 1550 "check.cog"
                 if(

#line 1550 "check.cog"
                    

#line 1550 "check.cog"
                    !

#line 1550 "check.cog"
                     (

#line 1550 "check.cog"
                                

#line 1550 "check.cog"
                      argCursor 

#line 1550 "check.cog"
                                != 

#line 1550 "check.cog"
                                   argEnd))
{


#line 1552 "check.cog"
                              

#line 1552 "check.cog"
                              

#line 1552 "check.cog"
                     cogAssert(

#line 1552 "check.cog"
                               false);


#line 1554 "check.cog"
                     return 

#line 1554 "check.cog"
                            false;
}


#line 1557 "check.cog"
                 

#line 1557 "check.cog"
                 auto arg = 

#line 1557 "check.cog"
                           

#line 1557 "check.cog"
                           *

#line 1557 "check.cog"
                            argCursor;


#line 1558 "check.cog"
                 

#line 1558 "check.cog"
                 auto argExpr = 

#line 1558 "check.cog"
                               

#line 1558 "check.cog"
                               &

#line 1558 "check.cog"
                                   DEREF(

#line 1558 "check.cog"
                                arg).exp;


#line 1560 "check.cog"
                 

#line 1560 "check.cog"
                 auto paramType = 

#line 1560 "check.cog"
                                        

#line 1560 "check.cog"
                                 getType(

#line 1560 "check.cog"
                                         paramDeclRef);


#line 1562 "check.cog"
                 if(

#line 1562 "check.cog"
                                 

#line 1562 "check.cog"
                           DEREF(

#line 1562 "check.cog"
                    context).mode 

#line 1562 "check.cog"
                                 == 

#line 1562 "check.cog"
                                    kOverloadResolveMode_justTrying)
{


#line 1564 "check.cog"
                     if(

#line 1564 "check.cog"
                        

#line 1564 "check.cog"
                        !

#line 1564 "check.cog"
                                  

#line 1564 "check.cog"
                         canCoerce(

#line 1565 "check.cog"
                                DEREF(

#line 1565 "check.cog"
                         context).checkContext, 

#line 1566 "check.cog"
                         

#line 1566 "check.cog"
                         *

#line 1566 "check.cog"
                          argExpr, 

#line 1567 "check.cog"
                         paramType))
{


#line 1569 "check.cog"
                         return 

#line 1569 "check.cog"
                                false;
}
}
else
{


#line 1574 "check.cog"
                     

#line 1574 "check.cog"
                     *

#line 1574 "check.cog"
                      argExpr = 

#line 1574 "check.cog"
                                      

#line 1574 "check.cog"
                                coerce(

#line 1575 "check.cog"
                                DEREF(

#line 1575 "check.cog"
                         context).checkContext, 

#line 1576 "check.cog"
                         

#line 1576 "check.cog"
                         *

#line 1576 "check.cog"
                          argExpr, 

#line 1577 "check.cog"
                         paramType);
}


#line 1580 "check.cog"
                 

#line 1580 "check.cog"
                 

#line 1580 "check.cog"
                 ++

#line 1580 "check.cog"
                   argCursor;
}
else
{
}
}
}


#line 1586 "check.cog"
         if(

#line 1586 "check.cog"
                      

#line 1586 "check.cog"
            argCursor 

#line 1586 "check.cog"
                      != 

#line 1586 "check.cog"
                         argEnd)
{


#line 1588 "check.cog"
                      

#line 1588 "check.cog"
                      

#line 1588 "check.cog"
             cogAssert(

#line 1588 "check.cog"
                       false);


#line 1590 "check.cog"
             return 

#line 1590 "check.cog"
                    false;
}


#line 1593 "check.cog"
         return 

#line 1593 "check.cog"
                true;
}
else
{


#line 1595 "check.cog"
       if(auto genericDeclRef = 

#line 1595 "check.cog"
                                              

#line 1595 "check.cog"
                               as<

#line 1595 "check.cog"
                                  GenericDecl> (

#line 1595 "check.cog"
                                                        DEREF(

#line 1595 "check.cog"
                                               candidate).declRef))
{


#line 1597 "check.cog"
         for(auto dd : 

#line 1597 "check.cog"
                               

#line 1597 "check.cog"
                       getDecls(

#line 1597 "check.cog"
                                genericDeclRef))
{
{


#line 1599 "check.cog"
             if(auto paramDeclRef = 

#line 1599 "check.cog"
                                                       

#line 1599 "check.cog"
                                   as<

#line 1599 "check.cog"
                                      GenericParamDecl> (

#line 1599 "check.cog"
                                                        dd))
{


#line 1601 "check.cog"
                 if(

#line 1601 "check.cog"
                    

#line 1601 "check.cog"
                    !

#line 1601 "check.cog"
                     (

#line 1601 "check.cog"
                                

#line 1601 "check.cog"
                      argCursor 

#line 1601 "check.cog"
                                != 

#line 1601 "check.cog"
                                   argEnd))
{


#line 1603 "check.cog"
                              

#line 1603 "check.cog"
                              

#line 1603 "check.cog"
                     cogAssert(

#line 1603 "check.cog"
                               false);


#line 1605 "check.cog"
                     return 

#line 1605 "check.cog"
                            false;
}


#line 1608 "check.cog"
                 

#line 1608 "check.cog"
                 auto arg = 

#line 1608 "check.cog"
                           

#line 1608 "check.cog"
                           *

#line 1608 "check.cog"
                            argCursor;


#line 1609 "check.cog"
                 

#line 1609 "check.cog"
                 auto argExpr = 

#line 1609 "check.cog"
                               

#line 1609 "check.cog"
                               &

#line 1609 "check.cog"
                                   DEREF(

#line 1609 "check.cog"
                                arg).exp;


#line 1611 "check.cog"
                 if(

#line 1611 "check.cog"
                                 

#line 1611 "check.cog"
                           DEREF(

#line 1611 "check.cog"
                    context).mode 

#line 1611 "check.cog"
                                 == 

#line 1611 "check.cog"
                                    kOverloadResolveMode_justTrying)
{


#line 1613 "check.cog"
      if(auto type = 

#line 1613 "check.cog"
                                   

#line 1613 "check.cog"
                    tryCoerceToType(

#line 1613 "check.cog"
                                           DEREF(

#line 1613 "check.cog"
                                    context).checkContext, 

#line 1613 "check.cog"
                                                          

#line 1613 "check.cog"
                                                          *

#line 1613 "check.cog"
                                                           argExpr))
{
}
else
{


#line 1617 "check.cog"
       return 

#line 1617 "check.cog"
              false;
}
}
else
{


#line 1622 "check.cog"
      

#line 1622 "check.cog"
      *

#line 1622 "check.cog"
       argExpr = 

#line 1622 "check.cog"
                                 

#line 1622 "check.cog"
                 coerceToTypeExpr(

#line 1622 "check.cog"
                                         DEREF(

#line 1622 "check.cog"
                                  context).checkContext, 

#line 1622 "check.cog"
                                                        

#line 1622 "check.cog"
                                                        *

#line 1622 "check.cog"
                                                         argExpr);
}


#line 1625 "check.cog"
                 

#line 1625 "check.cog"
                 

#line 1625 "check.cog"
                 ++

#line 1625 "check.cog"
                   argCursor;
}
else
{
}
}
}


#line 1631 "check.cog"
         if(

#line 1631 "check.cog"
                      

#line 1631 "check.cog"
            argCursor 

#line 1631 "check.cog"
                      != 

#line 1631 "check.cog"
                         argEnd)
{


#line 1633 "check.cog"
                      

#line 1633 "check.cog"
                      

#line 1633 "check.cog"
             cogAssert(

#line 1633 "check.cog"
                       false);


#line 1635 "check.cog"
             return 

#line 1635 "check.cog"
                    false;
}


#line 1638 "check.cog"
         return 

#line 1638 "check.cog"
                true;
}
else
{


#line 1644 "check.cog"
         return 

#line 1644 "check.cog"
                false;
}
}
}


#line 1648 "check.cog"
 

#line 1651 "check.cog"
        Bool checkOverloadCandidateDirections(

#line 1649 "check.cog"
                                    

#line 1649 "check.cog"
              OverloadResolveContext

#line 1649 "check.cog"
                                    * context, 

#line 1650 "check.cog"
                Ref<

#line 1650 "check.cog"
                    OverloadCandidate>  candidate)
{


#line 1653 "check.cog"
     return 

#line 1653 "check.cog"
            true;
}


#line 1656 "check.cog"
 void checkOverloadCandidateImpl(

#line 1657 "check.cog"
                                    

#line 1657 "check.cog"
              OverloadResolveContext

#line 1657 "check.cog"
                                    * context, 

#line 1658 "check.cog"
                Ref<

#line 1658 "check.cog"
                    OverloadCandidate>  candidate)
{


#line 1661 "check.cog"
              DEREF(

#line 1661 "check.cog"
     candidate).state = 

#line 1661 "check.cog"
                       kOverloadCandidateState_Unchecked;


#line 1662 "check.cog"
     if(

#line 1662 "check.cog"
        

#line 1662 "check.cog"
        !

#line 1662 "check.cog"
                                    

#line 1662 "check.cog"
         checkOverloadCandidateArity(

#line 1662 "check.cog"
                                     context, 

#line 1662 "check.cog"
                                              candidate))
{


#line 1663 "check.cog"
         return;
}


#line 1664 "check.cog"
              DEREF(

#line 1664 "check.cog"
     candidate).state = 

#line 1664 "check.cog"
                       kOverloadCandidateState_CheckedArity;


#line 1665 "check.cog"
     if(

#line 1665 "check.cog"
        

#line 1665 "check.cog"
        !

#line 1665 "check.cog"
                                    

#line 1665 "check.cog"
         checkOverloadCandidateTypes(

#line 1665 "check.cog"
                                     context, 

#line 1665 "check.cog"
                                              candidate))
{


#line 1666 "check.cog"
         return;
}


#line 1667 "check.cog"
              DEREF(

#line 1667 "check.cog"
     candidate).state = 

#line 1667 "check.cog"
                       kOverloadCandidateState_CheckedTypes;


#line 1668 "check.cog"
     if(

#line 1668 "check.cog"
        

#line 1668 "check.cog"
        !

#line 1668 "check.cog"
                                         

#line 1668 "check.cog"
         checkOverloadCandidateDirections(

#line 1668 "check.cog"
                                          context, 

#line 1668 "check.cog"
                                                   candidate))
{


#line 1669 "check.cog"
         return;
}


#line 1670 "check.cog"
              DEREF(

#line 1670 "check.cog"
     candidate).state = 

#line 1670 "check.cog"
                       kOverloadCandidateState_Applicable;
}


#line 1675 "check.cog"
 void checkOverloadCandidate(

#line 1676 "check.cog"
                                    

#line 1676 "check.cog"
              OverloadResolveContext

#line 1676 "check.cog"
                                    * context, 

#line 1677 "check.cog"
                Ref<

#line 1677 "check.cog"
                    OverloadCandidate>  candidate)
{


#line 1679 "check.cog"
                               

#line 1679 "check.cog"
                               

#line 1679 "check.cog"
     checkOverloadCandidateImpl(

#line 1679 "check.cog"
                                context, 

#line 1679 "check.cog"
                                         candidate);
}


#line 1683 "check.cog"
 

#line 1686 "check.cog"
        Int compareCandidates(

#line 1684 "check.cog"
        Ref<

#line 1684 "check.cog"
            OverloadCandidate>  left, 

#line 1685 "check.cog"
         Ref<

#line 1685 "check.cog"
             OverloadCandidate>  right)
{


#line 1689 "check.cog"
     if(

#line 1689 "check.cog"
                   

#line 1689 "check.cog"
            DEREF(

#line 1689 "check.cog"
        left).state 

#line 1689 "check.cog"
                   != 

#line 1689 "check.cog"
                           DEREF(

#line 1689 "check.cog"
                      right).state)
{


#line 1690 "check.cog"
         return 

#line 1690 "check.cog"
                                 

#line 1690 "check.cog"
                   

#line 1690 "check.cog"
                int(

#line 1690 "check.cog"
                         DEREF(

#line 1690 "check.cog"
                    right).state) 

#line 1690 "check.cog"
                                 - 

#line 1690 "check.cog"
                                      

#line 1690 "check.cog"
                                   int(

#line 1690 "check.cog"
                                           DEREF(

#line 1690 "check.cog"
                                       left).state);
}


#line 1695 "check.cog"
     return 

#line 1695 "check.cog"
            0;
}


#line 1698 "check.cog"
 void addCheckedOverloadCandidate(

#line 1699 "check.cog"
                                    

#line 1699 "check.cog"
              OverloadResolveContext

#line 1699 "check.cog"
                                    * context, 

#line 1700 "check.cog"
                Ref<

#line 1700 "check.cog"
                    OverloadCandidate>  candidate)
{


#line 1707 "check.cog"
     

#line 1707 "check.cog"
     

#line 1707 "check.cog"
                     Bool anyBetter = 

#line 1707 "check.cog"
                            false;


#line 1708 "check.cog"
     

#line 1708 "check.cog"
     

#line 1708 "check.cog"
                    Bool anyWorse = 

#line 1708 "check.cog"
                           false;


#line 1712 "check.cog"
     {


#line 1712 "check.cog"
         

#line 1712 "check.cog"
         

#line 1712 "check.cog"
                  UInt ii = 

#line 1712 "check.cog"
                         0;
for(;

#line 1712 "check.cog"
                               

#line 1712 "check.cog"
                            ii 

#line 1712 "check.cog"
                               < 

#line 1712 "check.cog"
                                                            

#line 1712 "check.cog"
                                                   DEREF(

#line 1712 "check.cog"
                                        DEREF(

#line 1712 "check.cog"
                                 context).candidates).getCount();

#line 1712 "check.cog"
                                                                

#line 1712 "check.cog"
                                                                ++

#line 1712 "check.cog"
                                                                  ii)
{
{


#line 1714 "check.cog"
         

#line 1714 "check.cog"
         auto compareResult = 

#line 1714 "check.cog"
                                              

#line 1714 "check.cog"
                             compareCandidates(

#line 1715 "check.cog"
             candidate, 

#line 1716 "check.cog"
                               

#line 1716 "check.cog"
                    DEREF(

#line 1716 "check.cog"
             context).candidates[

#line 1716 "check.cog"
                                ii]);


#line 1720 "check.cog"
         if(

#line 1720 "check.cog"
                          

#line 1720 "check.cog"
            compareResult 

#line 1720 "check.cog"
                          < 

#line 1720 "check.cog"
                            0)
{


#line 1724 "check.cog"
                                            

#line 1724 "check.cog"
                                            

#line 1724 "check.cog"
                               DEREF(

#line 1724 "check.cog"
                    DEREF(

#line 1724 "check.cog"
             context).candidates).fastRemoveAt(

#line 1724 "check.cog"
                                             ii);


#line 1726 "check.cog"
             anyBetter = 

#line 1726 "check.cog"
                         true;


#line 1729 "check.cog"
             

#line 1729 "check.cog"
             

#line 1729 "check.cog"
             --

#line 1729 "check.cog"
               ii;
}
else
{


#line 1731 "check.cog"
              if(

#line 1731 "check.cog"
                               

#line 1731 "check.cog"
                 compareResult 

#line 1731 "check.cog"
                               > 

#line 1731 "check.cog"
                                 0)
{


#line 1735 "check.cog"
             anyWorse = 

#line 1735 "check.cog"
                        true;
}
}
}
}}


#line 1739 "check.cog"
     if(

#line 1739 "check.cog"
        anyWorse)
{


#line 1741 "check.cog"
                  

#line 1741 "check.cog"
                  

#line 1741 "check.cog"
         cogAssert(

#line 1741 "check.cog"
                   

#line 1741 "check.cog"
                   !

#line 1741 "check.cog"
                    anyBetter);


#line 1746 "check.cog"
         return;
}


#line 1750 "check.cog"
                              

#line 1750 "check.cog"
                              

#line 1750 "check.cog"
                       DEREF(

#line 1750 "check.cog"
            DEREF(

#line 1750 "check.cog"
     context).candidates).append(

#line 1750 "check.cog"
                               candidate);
}


#line 1753 "check.cog"
 void addOverloadCandidate(

#line 1754 "check.cog"
                                    

#line 1754 "check.cog"
              OverloadResolveContext

#line 1754 "check.cog"
                                    * context, 

#line 1755 "check.cog"
                Ref<

#line 1755 "check.cog"
                    OverloadCandidate>  candidate)
{


#line 1757 "check.cog"
                           

#line 1757 "check.cog"
                           

#line 1757 "check.cog"
     checkOverloadCandidate(

#line 1757 "check.cog"
                            context, 

#line 1757 "check.cog"
                                     candidate);


#line 1758 "check.cog"
                                

#line 1758 "check.cog"
                                

#line 1758 "check.cog"
     addCheckedOverloadCandidate(

#line 1758 "check.cog"
                                 context, 

#line 1758 "check.cog"
                                          candidate);
}


#line 465 "syntax.cog"
 

#line 1761 "check.cog"
 void addSubscriptOverloadCandidate(

#line 1762 "check.cog"
                                    

#line 1762 "check.cog"
              OverloadResolveContext

#line 1762 "check.cog"
                                    * context, 

#line 1763 "check.cog"
              DeclRefValImpl<

#line 1763 "check.cog"
                             SubscriptDecl>  declRef)
{


#line 1767 "check.cog"
            

#line 1767 "check.cog"
            

#line 1767 "check.cog"
  ensureDecl(

#line 1767 "check.cog"
                    DEREF(

#line 1767 "check.cog"
             context).checkContext, 

#line 1767 "check.cog"
                                                  

#line 1767 "check.cog"
                                          DEREF(

#line 1767 "check.cog"
                                   declRef).getDecl());


#line 1769 "check.cog"
     

#line 1769 "check.cog"
     

#line 1769 "check.cog"
                    OverloadCandidate candidate;


#line 1770 "check.cog"
              DEREF(

#line 1770 "check.cog"
     candidate).declRef = 

#line 1770 "check.cog"
                         declRef;


#line 1771 "check.cog"
              DEREF(

#line 1771 "check.cog"
     candidate).resultType = 

#line 1771 "check.cog"
                                         

#line 1771 "check.cog"
                            getResultType(

#line 1771 "check.cog"
                                                 DEREF(

#line 1771 "check.cog"
                                          context).checkContext, 

#line 1771 "check.cog"
                                                                declRef);


#line 1773 "check.cog"
                         

#line 1773 "check.cog"
                         

#line 1773 "check.cog"
     addOverloadCandidate(

#line 1773 "check.cog"
                          context, 

#line 1773 "check.cog"
                                   candidate);
}


#line 1776 "check.cog"
 void addFuncOverloadCandidate(

#line 1777 "check.cog"
                                    

#line 1777 "check.cog"
              OverloadResolveContext

#line 1777 "check.cog"
                                    * context, 

#line 1778 "check.cog"
              DeclRefValImpl<

#line 1778 "check.cog"
                             FuncDeclBase>  declRef)
{


#line 1780 "check.cog"
            

#line 1780 "check.cog"
            

#line 1780 "check.cog"
  ensureDecl(

#line 1780 "check.cog"
                    DEREF(

#line 1780 "check.cog"
             context).checkContext, 

#line 1780 "check.cog"
                                                  

#line 1780 "check.cog"
                                          DEREF(

#line 1780 "check.cog"
                                   declRef).getDecl());


#line 1782 "check.cog"
     

#line 1782 "check.cog"
     

#line 1782 "check.cog"
                    OverloadCandidate candidate;


#line 1783 "check.cog"
              DEREF(

#line 1783 "check.cog"
     candidate).declRef = 

#line 1783 "check.cog"
                         declRef;


#line 1784 "check.cog"
              DEREF(

#line 1784 "check.cog"
     candidate).resultType = 

#line 1784 "check.cog"
                                         

#line 1784 "check.cog"
                            getResultType(

#line 1784 "check.cog"
                                                 DEREF(

#line 1784 "check.cog"
                                          context).checkContext, 

#line 1784 "check.cog"
                                                                declRef);


#line 1786 "check.cog"
                         

#line 1786 "check.cog"
                         

#line 1786 "check.cog"
     addOverloadCandidate(

#line 1786 "check.cog"
                          context, 

#line 1786 "check.cog"
                                   candidate);
}


#line 469 "syntax.cog"
 

#line 1789 "check.cog"
 void addInitializerOverloadCandidate(

#line 1790 "check.cog"
                                     

#line 1790 "check.cog"
               OverloadResolveContext

#line 1790 "check.cog"
                                     * context, 

#line 1791 "check.cog"
             Type type, 

#line 1792 "check.cog"
               DeclRefValImpl<

#line 1792 "check.cog"
                              InitializerDecl>  declRef)
{


#line 1794 "check.cog"
     

#line 1794 "check.cog"
     

#line 1794 "check.cog"
                    OverloadCandidate candidate;


#line 1795 "check.cog"
              DEREF(

#line 1795 "check.cog"
     candidate).declRef = 

#line 1795 "check.cog"
                         declRef;


#line 1796 "check.cog"
              DEREF(

#line 1796 "check.cog"
     candidate).resultType = 

#line 1796 "check.cog"
                            type;


#line 1797 "check.cog"
                         

#line 1797 "check.cog"
                         

#line 1797 "check.cog"
     addOverloadCandidate(

#line 1797 "check.cog"
                          context, 

#line 1797 "check.cog"
                                   candidate);
}


#line 1800 "check.cog"
 

#line 1805 "check.cog"
        Exp createDeclRefExp(

#line 1801 "check.cog"
                       

#line 1801 "check.cog"
           CheckContext

#line 1801 "check.cog"
                       * context, 

#line 1802 "check.cog"
           CompactDeclRef declRef, 

#line 1803 "check.cog"
       SourceLoc loc, 

#line 1804 "check.cog"
           Exp baseExp)
{


#line 1807 "check.cog"
     

#line 1807 "check.cog"
     

#line 1807 "check.cog"
                     DeclRefExp declRefExp = 

#line 1807 "check.cog"
                                  nullptr;


#line 1808 "check.cog"
     if(

#line 1808 "check.cog"
        baseExp)
{


#line 1810 "check.cog"
         

#line 1810 "check.cog"
         auto memberRefExp = 

#line 1810 "check.cog"
                                                   

#line 1810 "check.cog"
                            createObject<

#line 1810 "check.cog"
                                         MemberExp> ();


#line 1811 "check.cog"
                     DEREF(

#line 1811 "check.cog"
         memberRefExp).base = 

#line 1811 "check.cog"
                             baseExp;


#line 1812 "check.cog"
         declRefExp = 

#line 1812 "check.cog"
                      memberRefExp;
}
else
{


#line 1816 "check.cog"
         declRefExp = 

#line 1816 "check.cog"
                                              

#line 1816 "check.cog"
                      createObject<

#line 1816 "check.cog"
                                   DeclRefExp> ();
}


#line 1819 "check.cog"
               DEREF(

#line 1819 "check.cog"
     declRefExp).loc = 

#line 1819 "check.cog"
                      loc;


#line 1820 "check.cog"
               DEREF(

#line 1820 "check.cog"
     declRefExp).declRef = 

#line 1820 "check.cog"
                          declRef;


#line 1821 "check.cog"
               DEREF(

#line 1821 "check.cog"
     declRefExp).type = 

#line 1821 "check.cog"
                                        

#line 1821 "check.cog"
                       getTypeForDeclRef(

#line 1821 "check.cog"
                                         context, 

#line 1821 "check.cog"
                                                  declRef);


#line 1822 "check.cog"
     return 

#line 1822 "check.cog"
            declRefExp;
}


#line 1825 "check.cog"
 

#line 1830 "check.cog"
        Exp createDeclRefExp(

#line 1826 "check.cog"
                       

#line 1826 "check.cog"
           CheckContext

#line 1826 "check.cog"
                       * context, 

#line 1827 "check.cog"
           DeclRefVal declRef, 

#line 1828 "check.cog"
       SourceLoc loc, 

#line 1829 "check.cog"
           Exp baseExp)
{


#line 1833 "check.cog"
     

#line 1833 "check.cog"
     auto decl = 

#line 1833 "check.cog"
                               

#line 1833 "check.cog"
                       DEREF(

#line 1833 "check.cog"
                declRef).getDecl();


#line 1834 "check.cog"
     if(auto specializations = 

#line 1834 "check.cog"
                                                        

#line 1834 "check.cog"
                                     DEREF(

#line 1834 "check.cog"
                              declRef).getSpecializations())
{


#line 1836 "check.cog"
         

#line 1836 "check.cog"
         auto specializedDecl = 

#line 1836 "check.cog"
                                                            

#line 1836 "check.cog"
                               createObject<

#line 1836 "check.cog"
                                            SpecializedDecl> ();


#line 1837 "check.cog"
                        DEREF(

#line 1837 "check.cog"
         specializedDecl).decl = 

#line 1837 "check.cog"
                                decl;


#line 1838 "check.cog"
                        DEREF(

#line 1838 "check.cog"
         specializedDecl).specializations = 

#line 1838 "check.cog"
                                           specializations;


#line 1840 "check.cog"
         return 

#line 1840 "check.cog"
                                

#line 1840 "check.cog"
                createDeclRefExp(

#line 1840 "check.cog"
                                 context, 

#line 1840 "check.cog"
                                                        

#line 1840 "check.cog"
                                          CompactDeclRef(

#line 1840 "check.cog"
                                                         specializedDecl), 

#line 1840 "check.cog"
                                                                           loc, 

#line 1840 "check.cog"
                                                                                baseExp);
}
else
{


#line 1844 "check.cog"
         return 

#line 1844 "check.cog"
                                

#line 1844 "check.cog"
                createDeclRefExp(

#line 1844 "check.cog"
                                 context, 

#line 1844 "check.cog"
                                                        

#line 1844 "check.cog"
                                          CompactDeclRef(

#line 1844 "check.cog"
                                                         decl), 

#line 1844 "check.cog"
                                                                loc, 

#line 1844 "check.cog"
                                                                     baseExp);
}
}


#line 1849 "check.cog"
 

#line 1853 "check.cog"
        Exp createDeclRefExp(

#line 1850 "check.cog"
                       

#line 1850 "check.cog"
           CheckContext

#line 1850 "check.cog"
                       * context, 

#line 1851 "check.cog"
           DeclRefVal declRef, 

#line 1852 "check.cog"
       SourceLoc loc)
{


#line 1855 "check.cog"
  return 

#line 1855 "check.cog"
                         

#line 1855 "check.cog"
         createDeclRefExp(

#line 1855 "check.cog"
                          context, 

#line 1855 "check.cog"
                                   declRef, 

#line 1855 "check.cog"
                                            loc, 

#line 1855 "check.cog"
                                                 nullptr);
}


#line 1858 "check.cog"
 

#line 1861 "check.cog"
     Val getGenericArgVal(

#line 1859 "check.cog"
                       

#line 1859 "check.cog"
           CheckContext

#line 1859 "check.cog"
                       * context, 

#line 1860 "check.cog"
        Exp expr)
{


#line 1863 "check.cog"
  

#line 1863 "check.cog"
  auto type = 

#line 1863 "check.cog"
                 DEREF(

#line 1863 "check.cog"
             expr).type;


#line 1864 "check.cog"
  if(auto typeType = 

#line 1864 "check.cog"
                                

#line 1864 "check.cog"
                    as<

#line 1864 "check.cog"
                       TypeType> (

#line 1864 "check.cog"
                                 type))
{


#line 1866 "check.cog"
   return 

#line 1866 "check.cog"
                  DEREF(

#line 1866 "check.cog"
          typeType).type;
}


#line 1868 "check.cog"
  if(auto errorType = 

#line 1868 "check.cog"
                                  

#line 1868 "check.cog"
                     as<

#line 1868 "check.cog"
                        ErrorType> (

#line 1868 "check.cog"
                                   type))
{


#line 1870 "check.cog"
   return 

#line 1870 "check.cog"
          errorType;
}


#line 1873 "check.cog"
          

#line 1873 "check.cog"
          

#line 1873 "check.cog"
  diagnose(

#line 1873 "check.cog"
                  

#line 1873 "check.cog"
           getSink(

#line 1873 "check.cog"
                   context), 

#line 1873 "check.cog"
                                 DEREF(

#line 1873 "check.cog"
                             expr).loc, 

#line 1873 "check.cog"
                                       kDiagnostic_unimplemented, 

#line 1873 "check.cog"
                                                                  "generic arg flavor");


#line 1875 "check.cog"
  return 

#line 1875 "check.cog"
                        

#line 1875 "check.cog"
         createErrorType(

#line 1875 "check.cog"
                         context);
}


#line 1878 "check.cog"
 

#line 1881 "check.cog"
     Exp completeOverloadCandidate(

#line 1879 "check.cog"
                                         

#line 1879 "check.cog"
                   OverloadResolveContext

#line 1879 "check.cog"
                                         * overloadContext, 

#line 1880 "check.cog"
                              

#line 1880 "check.cog"
             OverloadCandidate

#line 1880 "check.cog"
                              * candidate)
{


#line 1883 "check.cog"
     

#line 1883 "check.cog"
     auto context = 

#line 1883 "check.cog"
                                  DEREF(

#line 1883 "check.cog"
                   overloadContext).checkContext;


#line 1884 "check.cog"
     

#line 1884 "check.cog"
     auto appExp = 

#line 1884 "check.cog"
                                 DEREF(

#line 1884 "check.cog"
                  overloadContext).appExp;


#line 1885 "check.cog"
  

#line 1885 "check.cog"
  auto loc = 

#line 1885 "check.cog"
                  DEREF(

#line 1885 "check.cog"
            appExp).loc;


#line 1886 "check.cog"
  if(auto funcDeclRef = 

#line 1886 "check.cog"
                                       

#line 1886 "check.cog"
                       as<

#line 1886 "check.cog"
                          FuncDeclBase> (

#line 1886 "check.cog"
                                                 DEREF(

#line 1886 "check.cog"
                                        candidate).declRef))
{


#line 1888 "check.cog"
   

#line 1888 "check.cog"
   auto baseExp = 

#line 1888 "check.cog"
                                 

#line 1888 "check.cog"
                 createDeclRefExp(

#line 1889 "check.cog"
    context, 

#line 1890 "check.cog"
    funcDeclRef, 

#line 1891 "check.cog"
          DEREF(

#line 1891 "check.cog"
    appExp).loc, 

#line 1892 "check.cog"
                   DEREF(

#line 1892 "check.cog"
    overloadContext).baseExp);


#line 1894 "check.cog"
         DEREF(

#line 1894 "check.cog"
   appExp).base = 

#line 1894 "check.cog"
                 baseExp;


#line 1895 "check.cog"
         DEREF(

#line 1895 "check.cog"
   appExp).type = 

#line 1895 "check.cog"
                          DEREF(

#line 1895 "check.cog"
                 candidate).resultType;


#line 1896 "check.cog"
   return 

#line 1896 "check.cog"
          appExp;
}
else
{


#line 1898 "check.cog"
       if(auto genericDeclRef = 

#line 1898 "check.cog"
                                              

#line 1898 "check.cog"
                               as<

#line 1898 "check.cog"
                                  GenericDecl> (

#line 1898 "check.cog"
                                                        DEREF(

#line 1898 "check.cog"
                                               candidate).declRef))
{


#line 1901 "check.cog"
   

#line 1901 "check.cog"
   auto innerDecl = 

#line 1901 "check.cog"
                                           DEREF(

#line 1901 "check.cog"
                                         

#line 1901 "check.cog"
                                 DEREF(

#line 1901 "check.cog"
                   genericDeclRef).getDecl()).inner;


#line 1902 "check.cog"
   

#line 1902 "check.cog"
   auto specializations = 

#line 1902 "check.cog"
                                                      

#line 1902 "check.cog"
                         createObject<

#line 1902 "check.cog"
                                      Specializations> ();


#line 1903 "check.cog"
                  DEREF(

#line 1903 "check.cog"
   specializations).genericDeclRef = 

#line 1903 "check.cog"
                                    genericDeclRef;


#line 1905 "check.cog"
   

#line 1905 "check.cog"
   auto argCursor = 

#line 1905 "check.cog"
                                    

#line 1905 "check.cog"
                              DEREF(

#line 1905 "check.cog"
                         DEREF(

#line 1905 "check.cog"
                   appExp).args).begin();


#line 1907 "check.cog"
   

#line 1907 "check.cog"
   auto argLink = 

#line 1907 "check.cog"
                 

#line 1907 "check.cog"
                 &

#line 1907 "check.cog"
                                      DEREF(

#line 1907 "check.cog"
                                 DEREF(

#line 1907 "check.cog"
                  specializations).args).head;


#line 1909 "check.cog"
   for(auto dd : 

#line 1909 "check.cog"
                         

#line 1909 "check.cog"
                 getDecls(

#line 1909 "check.cog"
                          genericDeclRef))
{
{


#line 1911 "check.cog"
    if(auto paramDeclRef = 

#line 1911 "check.cog"
                                              

#line 1911 "check.cog"
                          as<

#line 1911 "check.cog"
                             GenericParamDecl> (

#line 1911 "check.cog"
                                               dd))
{


#line 1913 "check.cog"
     

#line 1913 "check.cog"
     auto arg = 

#line 1913 "check.cog"
               

#line 1913 "check.cog"
               *

#line 1913 "check.cog"
                argCursor;


#line 1914 "check.cog"
     

#line 1914 "check.cog"
     

#line 1914 "check.cog"
     ++

#line 1914 "check.cog"
       argCursor;


#line 1916 "check.cog"
     

#line 1916 "check.cog"
     auto specializationArg = 

#line 1916 "check.cog"
                                                            

#line 1916 "check.cog"
                             createObject<

#line 1916 "check.cog"
                                          SpecializationArg> ();


#line 1917 "check.cog"
                      DEREF(

#line 1917 "check.cog"
     specializationArg).param = 

#line 1917 "check.cog"
                                                   

#line 1917 "check.cog"
                                           DEREF(

#line 1917 "check.cog"
                               paramDeclRef).getDecl();


#line 1918 "check.cog"
                      DEREF(

#line 1918 "check.cog"
     specializationArg).value = 

#line 1918 "check.cog"
                                               

#line 1918 "check.cog"
                               getGenericArgVal(

#line 1918 "check.cog"
                                                context, 

#line 1918 "check.cog"
                                                            DEREF(

#line 1918 "check.cog"
                                                         arg).exp);


#line 1920 "check.cog"
     

#line 1920 "check.cog"
     *

#line 1920 "check.cog"
      argLink = 

#line 1920 "check.cog"
                specializationArg;


#line 1921 "check.cog"
     argLink = 

#line 1921 "check.cog"
               

#line 1921 "check.cog"
               &

#line 1921 "check.cog"
                                 DEREF(

#line 1921 "check.cog"
                specializationArg).next;
}
}
}


#line 1925 "check.cog"
   

#line 1925 "check.cog"
   auto innerDeclRef = 

#line 1925 "check.cog"
                                

#line 1925 "check.cog"
                      DeclRefVal(

#line 1925 "check.cog"
                                 innerDecl, 

#line 1925 "check.cog"
                                            specializations);


#line 1926 "check.cog"
   return 

#line 1926 "check.cog"
                          

#line 1926 "check.cog"
          createDeclRefExp(

#line 1927 "check.cog"
    context, 

#line 1928 "check.cog"
    innerDeclRef, 

#line 1929 "check.cog"
          DEREF(

#line 1929 "check.cog"
    appExp).loc, 

#line 1930 "check.cog"
                   DEREF(

#line 1930 "check.cog"
    overloadContext).baseExp);
}
else
{


#line 1934 "check.cog"
           

#line 1934 "check.cog"
           

#line 1934 "check.cog"
   diagnose(

#line 1934 "check.cog"
                   

#line 1934 "check.cog"
            getSink(

#line 1934 "check.cog"
                    context), 

#line 1934 "check.cog"
                              loc, 

#line 1934 "check.cog"
                                   kDiagnostic_unimplemented, 

#line 1934 "check.cog"
                                                              "overload candidate flavor");
}
}
}


#line 1938 "check.cog"
 

#line 1940 "check.cog"
        Exp completeOverload(

#line 1939 "check.cog"
                                            

#line 1939 "check.cog"
                      OverloadResolveContext

#line 1939 "check.cog"
                                            * overloadContext)
{


#line 1942 "check.cog"
     

#line 1942 "check.cog"
     auto context = 

#line 1942 "check.cog"
                                  DEREF(

#line 1942 "check.cog"
                   overloadContext).checkContext;


#line 1943 "check.cog"
     

#line 1943 "check.cog"
     auto appExp = 

#line 1943 "check.cog"
                                 DEREF(

#line 1943 "check.cog"
                  overloadContext).appExp;


#line 1945 "check.cog"
     

#line 1945 "check.cog"
     auto count = 

#line 1945 "check.cog"
                                                    

#line 1945 "check.cog"
                                           DEREF(

#line 1945 "check.cog"
                                DEREF(

#line 1945 "check.cog"
                 overloadContext).candidates).getCount();


#line 1947 "check.cog"
     

#line 1947 "check.cog"
     

#line 1947 "check.cog"
                        

#line 1947 "check.cog"
                    Name

#line 1947 "check.cog"
                        * baseName = 

#line 1947 "check.cog"
                            nullptr;


#line 1948 "check.cog"
     if(auto declRefExp = 

#line 1948 "check.cog"
                                       

#line 1948 "check.cog"
                         as<

#line 1948 "check.cog"
                            DeclRefExp> (

#line 1948 "check.cog"
                                              DEREF(

#line 1948 "check.cog"
                                        appExp).base))
{


#line 1950 "check.cog"
         baseName = 

#line 1950 "check.cog"
                                                DEREF(

#line 1950 "check.cog"
                                              

#line 1950 "check.cog"
                                      DEREF(

#line 1950 "check.cog"
                              DEREF(

#line 1950 "check.cog"
                    declRefExp).declRef).getDecl()).name;
}
else
{


#line 1952 "check.cog"
          if(auto nameExp = 

#line 1952 "check.cog"
                                      

#line 1952 "check.cog"
                           as<

#line 1952 "check.cog"
                              NameExp> (

#line 1952 "check.cog"
                                             DEREF(

#line 1952 "check.cog"
                                       appExp).base))
{


#line 1954 "check.cog"
         baseName = 

#line 1954 "check.cog"
                           DEREF(

#line 1954 "check.cog"
                    nameExp).name;
}
else
{


#line 1956 "check.cog"
          if(auto overloadedExpr = 

#line 1956 "check.cog"
                                                    

#line 1956 "check.cog"
                                  as<

#line 1956 "check.cog"
                                     OverloadedExpr> (

#line 1956 "check.cog"
                                                           DEREF(

#line 1956 "check.cog"
                                                     appExp).base))
{


#line 1958 "check.cog"
         baseName = 

#line 1958 "check.cog"
                                                             DEREF(

#line 1958 "check.cog"
                                                        DEREF(

#line 1958 "check.cog"
                                                     

#line 1958 "check.cog"
                                               DEREF(

#line 1958 "check.cog"
                                  DEREF(

#line 1958 "check.cog"
                    overloadedExpr).lookupResult).items[

#line 1958 "check.cog"
                                                      0]).decl).name;
}
}
}


#line 1961 "check.cog"
     if(

#line 1961 "check.cog"
              

#line 1961 "check.cog"
        count 

#line 1961 "check.cog"
              == 

#line 1961 "check.cog"
                 1)
{


#line 1965 "check.cog"
         

#line 1965 "check.cog"
         auto candidate = 

#line 1965 "check.cog"
                         

#line 1965 "check.cog"
                         &

#line 1965 "check.cog"
                                                    

#line 1965 "check.cog"
                                         DEREF(

#line 1965 "check.cog"
                          overloadContext).candidates[

#line 1965 "check.cog"
                                                     0];


#line 1966 "check.cog"
         if(

#line 1966 "check.cog"
                            

#line 1966 "check.cog"
                     DEREF(

#line 1966 "check.cog"
            candidate).state 

#line 1966 "check.cog"
                            == 

#line 1966 "check.cog"
                               kOverloadCandidateState_Applicable)
{


#line 1968 "check.cog"
    return 

#line 1968 "check.cog"
                                    

#line 1968 "check.cog"
           completeOverloadCandidate(

#line 1968 "check.cog"
                                     overloadContext, 

#line 1968 "check.cog"
                                                      candidate);
}
else
{


#line 1974 "check.cog"
                            DEREF(

#line 1974 "check.cog"
             overloadContext).mode = 

#line 1974 "check.cog"
                                    kOverloadResolveMode_forReal;


#line 1975 "check.cog"
                                   

#line 1975 "check.cog"
                                   

#line 1975 "check.cog"
             checkOverloadCandidate(

#line 1976 "check.cog"
                 overloadContext, 

#line 1977 "check.cog"
                 

#line 1977 "check.cog"
                 *

#line 1977 "check.cog"
                  candidate);


#line 1978 "check.cog"
             return 

#line 1978 "check.cog"
                                  

#line 1978 "check.cog"
                    createErrorExp(

#line 1978 "check.cog"
                                   context, 

#line 1978 "check.cog"
                                                  DEREF(

#line 1978 "check.cog"
                                            appExp).loc);
}
}
else
{


#line 1981 "check.cog"
          if(

#line 1981 "check.cog"
                   

#line 1981 "check.cog"
             count 

#line 1981 "check.cog"
                   == 

#line 1981 "check.cog"
                      0)
{


#line 1984 "check.cog"
                 

#line 1984 "check.cog"
                 

#line 1984 "check.cog"
         diagnose(

#line 1984 "check.cog"
                         

#line 1984 "check.cog"
                  getSink(

#line 1984 "check.cog"
                          context), 

#line 1984 "check.cog"
                                          DEREF(

#line 1984 "check.cog"
                                    appExp).loc, 

#line 1984 "check.cog"
                                                kDiagnostic_noOverloadCandidatesFound, 

#line 1984 "check.cog"
                                                                                       baseName);


#line 1986 "check.cog"
         if(auto overloadedExpr = 

#line 1986 "check.cog"
                                                   

#line 1986 "check.cog"
                                 as<

#line 1986 "check.cog"
                                    OverloadedExpr> (

#line 1986 "check.cog"
                                                          DEREF(

#line 1986 "check.cog"
                                                    appExp).base))
{


#line 1988 "check.cog"
             for(auto item : 

#line 1988 "check.cog"
                                            DEREF(

#line 1988 "check.cog"
                              overloadedExpr).lookupResult)
{
{


#line 1990 "check.cog"
                         

#line 1990 "check.cog"
                         

#line 1990 "check.cog"
                 diagnose(

#line 1990 "check.cog"
                                 

#line 1990 "check.cog"
                          getSink(

#line 1990 "check.cog"
                                  context), 

#line 1990 "check.cog"
                                                     DEREF(

#line 1990 "check.cog"
                                                DEREF(

#line 1990 "check.cog"
                                            item).decl).loc, 

#line 1990 "check.cog"
                                                           kDiagnostic_candidate, 

#line 1990 "check.cog"
                                                                                            

#line 1990 "check.cog"
                                                                                  DeclRefVal(

#line 1990 "check.cog"
                                                                                                 DEREF(

#line 1990 "check.cog"
                                                                                             item).decl));
}
}
}


#line 1994 "check.cog"
         return 

#line 1994 "check.cog"
                              

#line 1994 "check.cog"
                createErrorExp(

#line 1994 "check.cog"
                               context, 

#line 1994 "check.cog"
                                              DEREF(

#line 1994 "check.cog"
                                        appExp).loc);
}
else
{


#line 1999 "check.cog"
         if(

#line 1999 "check.cog"
                                                

#line 1999 "check.cog"
                                         DEREF(

#line 1999 "check.cog"
                                      

#line 1999 "check.cog"
                           DEREF(

#line 1999 "check.cog"
            overloadContext).candidates[

#line 1999 "check.cog"
                                       0]).state 

#line 1999 "check.cog"
                                                == 

#line 1999 "check.cog"
                                                   kOverloadCandidateState_Applicable)
{


#line 2002 "check.cog"
                     

#line 2002 "check.cog"
                     

#line 2002 "check.cog"
             diagnose(

#line 2002 "check.cog"
                             

#line 2002 "check.cog"
                      getSink(

#line 2002 "check.cog"
                              context), 

#line 2002 "check.cog"
                                              DEREF(

#line 2002 "check.cog"
                                        appExp).loc, 

#line 2002 "check.cog"
                                                    kDiagnostic_ambiguousCallToOverload, 

#line 2002 "check.cog"
                                                                                         baseName, 

#line 2002 "check.cog"
                                                                                                              

#line 2002 "check.cog"
                                                                                                   ArgTypeList(

#line 2002 "check.cog"
                                                                                                                          DEREF(

#line 2002 "check.cog"
                                                                                                                     DEREF(

#line 2002 "check.cog"
                                                                                                               appExp).args).head));


#line 2004 "check.cog"
             for(auto cc : 

#line 2004 "check.cog"
                                           DEREF(

#line 2004 "check.cog"
                            overloadContext).candidates)
{
{


#line 2006 "check.cog"
                         

#line 2006 "check.cog"
                         

#line 2006 "check.cog"
                 diagnose(

#line 2006 "check.cog"
                                 

#line 2006 "check.cog"
                          getSink(

#line 2006 "check.cog"
                                  context), 

#line 2006 "check.cog"
                                                                DEREF(

#line 2006 "check.cog"
                                                              

#line 2006 "check.cog"
                                                      DEREF(

#line 2006 "check.cog"
                                              DEREF(

#line 2006 "check.cog"
                                            cc).declRef).getDecl()).loc, 

#line 2006 "check.cog"
                                                                      kDiagnostic_candidate, 

#line 2006 "check.cog"
                                                                                               DEREF(

#line 2006 "check.cog"
                                                                                             cc).declRef);
}
}


#line 2009 "check.cog"
             return 

#line 2009 "check.cog"
                                  

#line 2009 "check.cog"
                    createErrorExp(

#line 2009 "check.cog"
                                   context, 

#line 2009 "check.cog"
                                                  DEREF(

#line 2009 "check.cog"
                                            appExp).loc);
}
else
{


#line 2014 "check.cog"
                     

#line 2014 "check.cog"
                     

#line 2014 "check.cog"
             diagnose(

#line 2014 "check.cog"
                             

#line 2014 "check.cog"
                      getSink(

#line 2014 "check.cog"
                              context), 

#line 2014 "check.cog"
                                              DEREF(

#line 2014 "check.cog"
                                        appExp).loc, 

#line 2014 "check.cog"
                                                    kDiagnostic_noApplicableOverloadForCall, 

#line 2014 "check.cog"
                                                                                             baseName, 

#line 2014 "check.cog"
                                                                                                                  

#line 2014 "check.cog"
                                                                                                       ArgTypeList(

#line 2014 "check.cog"
                                                                                                                              DEREF(

#line 2014 "check.cog"
                                                                                                                         DEREF(

#line 2014 "check.cog"
                                                                                                                   appExp).args).head));


#line 2016 "check.cog"
             for(auto cc : 

#line 2016 "check.cog"
                                          DEREF(

#line 2016 "check.cog"
                           overloadContext).candidates)
{
{


#line 2018 "check.cog"
                         

#line 2018 "check.cog"
                         

#line 2018 "check.cog"
                 diagnose(

#line 2018 "check.cog"
                                 

#line 2018 "check.cog"
                          getSink(

#line 2018 "check.cog"
                                  context), 

#line 2018 "check.cog"
                                                                DEREF(

#line 2018 "check.cog"
                                                              

#line 2018 "check.cog"
                                                      DEREF(

#line 2018 "check.cog"
                                              DEREF(

#line 2018 "check.cog"
                                            cc).declRef).getDecl()).loc, 

#line 2018 "check.cog"
                                                                      kDiagnostic_candidate, 

#line 2018 "check.cog"
                                                                                               DEREF(

#line 2018 "check.cog"
                                                                                             cc).declRef);
}
}


#line 2021 "check.cog"
             return 

#line 2021 "check.cog"
                                  

#line 2021 "check.cog"
                    createErrorExp(

#line 2021 "check.cog"
                                   context, 

#line 2021 "check.cog"
                                                  DEREF(

#line 2021 "check.cog"
                                            appExp).loc);
}
}
}
}


#line 2026 "check.cog"
 

#line 2028 "check.cog"
        Bool isError(

#line 2027 "check.cog"
        Type type)
{


#line 2030 "check.cog"
     return 

#line 2030 "check.cog"
                                

#line 2030 "check.cog"
                         

#line 2030 "check.cog"
            as<

#line 2030 "check.cog"
               ErrorType> (

#line 2030 "check.cog"
                          type) 

#line 2030 "check.cog"
                                != 

#line 2030 "check.cog"
                                   nullptr;
}


#line 2033 "check.cog"
 

#line 2036 "check.cog"
        Bool isError(

#line 2034 "check.cog"
                       

#line 2034 "check.cog"
           CheckContext

#line 2034 "check.cog"
                       * context, 

#line 2035 "check.cog"
       Exp exp)
{


#line 2038 "check.cog"
     return 

#line 2038 "check.cog"
                              

#line 2038 "check.cog"
                        

#line 2038 "check.cog"
            as<

#line 2038 "check.cog"
               ErrorExp> (

#line 2038 "check.cog"
                         exp) 

#line 2038 "check.cog"
                              || 

#line 2038 "check.cog"
                                        

#line 2038 "check.cog"
                                 isError(

#line 2038 "check.cog"
                                            DEREF(

#line 2038 "check.cog"
                                         exp).type);
}


#line 2041 "check.cog"
 void addTypeOverloadCandidates(

#line 2042 "check.cog"
                                 

#line 2042 "check.cog"
           OverloadResolveContext

#line 2042 "check.cog"
                                 * context, 

#line 2043 "check.cog"
           Exp typeExp, 

#line 2044 "check.cog"
        Type type)
{


#line 2046 "check.cog"
     if(auto declRefType = 

#line 2046 "check.cog"
                                         

#line 2046 "check.cog"
                          as<

#line 2046 "check.cog"
                             DeclRefType> (

#line 2046 "check.cog"
                                          type))
{


#line 2048 "check.cog"
         if(auto aggTypeDeclRef = 

#line 2048 "check.cog"
                                                

#line 2048 "check.cog"
                                 as<

#line 2048 "check.cog"
                                    AggTypeDecl> (

#line 2048 "check.cog"
                                                            DEREF(

#line 2048 "check.cog"
                                                 declRefType).declRef))
{


#line 2052 "check.cog"
             for(auto memberDeclRef : 

#line 2052 "check.cog"
                                               

#line 2052 "check.cog"
                                       getDecls(

#line 2052 "check.cog"
                                                aggTypeDeclRef))
{
{


#line 2054 "check.cog"
                 if(auto initializerDeclRef = 

#line 2054 "check.cog"
                                                                

#line 2054 "check.cog"
                                             as<

#line 2054 "check.cog"
                                                InitializerDecl> (

#line 2054 "check.cog"
                                                                 memberDeclRef))
{


#line 2056 "check.cog"
                                                    

#line 2056 "check.cog"
                                                    

#line 2056 "check.cog"
                     addInitializerOverloadCandidate(

#line 2056 "check.cog"
                                                     context, 

#line 2056 "check.cog"
                                                              type, 

#line 2056 "check.cog"
                                                                    initializerDeclRef);
}
}
}
}
}
}


#line 417 "syntax.cog"
 

#line 2064 "check.cog"
 

#line 2070 "check.cog"
 

#line 2077 "check.cog"
 

#line 2081 "check.cog"
        Bool doInferenceForVals(

#line 2078 "check.cog"
                                  

#line 2078 "check.cog"
           GenericInferenceContext

#line 2078 "check.cog"
                                  * context, 

#line 2079 "check.cog"
          Val argVal, 

#line 2080 "check.cog"
            Val paramVal)
{


#line 2083 "check.cog"
     if(auto argType = 

#line 2083 "check.cog"
                              

#line 2083 "check.cog"
                      as<

#line 2083 "check.cog"
                         Type> (

#line 2083 "check.cog"
                               argVal))
{


#line 2085 "check.cog"
         if(auto paramType = 

#line 2085 "check.cog"
                                    

#line 2085 "check.cog"
                            as<

#line 2085 "check.cog"
                               Type> (

#line 2085 "check.cog"
                                     paramVal))
{


#line 2087 "check.cog"
             return 

#line 2087 "check.cog"
                                       

#line 2087 "check.cog"
                    doInferenceForTypes(

#line 2087 "check.cog"
                                        context, 

#line 2087 "check.cog"
                                                 argType, 

#line 2087 "check.cog"
                                                          paramType);
}
}


#line 2092 "check.cog"
     return 

#line 2092 "check.cog"
            false;
}


#line 2095 "check.cog"
 

#line 2099 "check.cog"
        Bool doInferenceForSpecializations(

#line 2096 "check.cog"
                                  

#line 2096 "check.cog"
           GenericInferenceContext

#line 2096 "check.cog"
                                  * context, 

#line 2097 "check.cog"
              Specializations argSpec, 

#line 2098 "check.cog"
                Specializations paramSpec)
{


#line 2102 "check.cog"
     if(

#line 2102 "check.cog"
                 

#line 2102 "check.cog"
        

#line 2102 "check.cog"
        !

#line 2102 "check.cog"
         argSpec 

#line 2102 "check.cog"
                 || 

#line 2102 "check.cog"
                    

#line 2102 "check.cog"
                    !

#line 2102 "check.cog"
                     paramSpec)
{


#line 2104 "check.cog"
      return 

#line 2104 "check.cog"
                     

#line 2104 "check.cog"
             argSpec 

#line 2104 "check.cog"
                     == 

#line 2104 "check.cog"
                        paramSpec;
}


#line 2108 "check.cog"
     if(

#line 2108 "check.cog"
        

#line 2108 "check.cog"
        !

#line 2108 "check.cog"
                               

#line 2108 "check.cog"
         doInferenceForDeclRefs(

#line 2109 "check.cog"
         context, 

#line 2110 "check.cog"
                DEREF(

#line 2110 "check.cog"
         argSpec).genericDeclRef, 

#line 2111 "check.cog"
                  DEREF(

#line 2111 "check.cog"
         paramSpec).genericDeclRef))
{


#line 2113 "check.cog"
         return 

#line 2113 "check.cog"
                false;
}


#line 2118 "check.cog"
     

#line 2118 "check.cog"
     auto aa = 

#line 2118 "check.cog"
                          DEREF(

#line 2118 "check.cog"
                     DEREF(

#line 2118 "check.cog"
              argSpec).args).head;


#line 2119 "check.cog"
     

#line 2119 "check.cog"
     auto pp = 

#line 2119 "check.cog"
                            DEREF(

#line 2119 "check.cog"
                       DEREF(

#line 2119 "check.cog"
              paramSpec).args).head;


#line 2120 "check.cog"
     while(

#line 2120 "check.cog"
           aa)
{
{


#line 2122 "check.cog"
         if(

#line 2122 "check.cog"
            

#line 2122 "check.cog"
            !

#line 2122 "check.cog"
                               

#line 2122 "check.cog"
             doInferenceForVals(

#line 2122 "check.cog"
                                context, 

#line 2122 "check.cog"
                                           DEREF(

#line 2122 "check.cog"
                                         aa).value, 

#line 2122 "check.cog"
                                                     DEREF(

#line 2122 "check.cog"
                                                   pp).value))
{


#line 2123 "check.cog"
             return 

#line 2123 "check.cog"
                    false;
}


#line 2125 "check.cog"
         aa = 

#line 2125 "check.cog"
                DEREF(

#line 2125 "check.cog"
              aa).next;


#line 2126 "check.cog"
         pp = 

#line 2126 "check.cog"
                DEREF(

#line 2126 "check.cog"
              pp).next;
}
}


#line 2129 "check.cog"
     return 

#line 2129 "check.cog"
            true;
}


#line 2132 "check.cog"
 

#line 2136 "check.cog"
        Bool doInferenceForDeclRefs(

#line 2133 "check.cog"
                                    

#line 2133 "check.cog"
             GenericInferenceContext

#line 2133 "check.cog"
                                    * context, 

#line 2134 "check.cog"
                  DeclRefVal argDeclRef, 

#line 2135 "check.cog"
                    DeclRefVal paramDeclRef)
{


#line 2139 "check.cog"
     if(

#line 2140 "check.cog"
         

#line 2139 "check.cog"
                            

#line 2139 "check.cog"
                    DEREF(

#line 2139 "check.cog"
        paramDeclRef).getDecl() 

#line 2140 "check.cog"
         != 

#line 2140 "check.cog"
                              

#line 2140 "check.cog"
                      DEREF(

#line 2140 "check.cog"
            argDeclRef).getDecl())
{


#line 2142 "check.cog"
         return 

#line 2142 "check.cog"
                false;
}


#line 2147 "check.cog"
     return 

#line 2147 "check.cog"
                                         

#line 2147 "check.cog"
            doInferenceForSpecializations(

#line 2148 "check.cog"
         context, 

#line 2149 "check.cog"
                   DEREF(

#line 2149 "check.cog"
         argDeclRef).specializations, 

#line 2150 "check.cog"
                     DEREF(

#line 2150 "check.cog"
         paramDeclRef).specializations);
}


#line 2153 "check.cog"
 

#line 2156 "check.cog"
                        

#line 2156 "check.cog"
     GenericInferenceArg

#line 2156 "check.cog"
                        * findGenericInferenceArg(

#line 2154 "check.cog"
                                  

#line 2154 "check.cog"
           GenericInferenceContext

#line 2154 "check.cog"
                                  * context, 

#line 2155 "check.cog"
                DeclRefValImpl<

#line 2155 "check.cog"
                               GenericParamDecl>  paramDeclRef)
{


#line 2158 "check.cog"
  {


#line 2158 "check.cog"
      

#line 2158 "check.cog"
      

#line 2158 "check.cog"
               Int ii = 

#line 2158 "check.cog"
                     0;
for(;

#line 2158 "check.cog"
                           

#line 2158 "check.cog"
                        ii 

#line 2158 "check.cog"
                           < 

#line 2158 "check.cog"
                                    DEREF(

#line 2158 "check.cog"
                             context).argCount;

#line 2158 "check.cog"
                                               

#line 2158 "check.cog"
                                               ++

#line 2158 "check.cog"
                                                 ii)
{
{


#line 2160 "check.cog"
   if(

#line 2160 "check.cog"
                   

#line 2160 "check.cog"
      isSameDeclRef(

#line 2160 "check.cog"
                                    DEREF(

#line 2160 "check.cog"
                                

#line 2160 "check.cog"
                           DEREF(

#line 2160 "check.cog"
                    context).args[

#line 2160 "check.cog"
                                 ii]).paramDeclRef, 

#line 2160 "check.cog"
                                                   paramDeclRef))
{


#line 2161 "check.cog"
    return 

#line 2161 "check.cog"
           

#line 2161 "check.cog"
           &

#line 2161 "check.cog"
                        

#line 2161 "check.cog"
                   DEREF(

#line 2161 "check.cog"
            context).args[

#line 2161 "check.cog"
                         ii];
}
}
}}


#line 2163 "check.cog"
  return 

#line 2163 "check.cog"
         nullptr;
}


#line 2166 "check.cog"
 

#line 2170 "check.cog"
        Bool doInferenceForTypes(

#line 2167 "check.cog"
                                     

#line 2167 "check.cog"
              GenericInferenceContext

#line 2167 "check.cog"
                                     * context, 

#line 2168 "check.cog"
              Type argType, 

#line 2169 "check.cog"
                Type paramType)
{


#line 2173 "check.cog"
     if(

#line 2173 "check.cog"
                  

#line 2173 "check.cog"
        isSameType(

#line 2173 "check.cog"
                   argType, 

#line 2173 "check.cog"
                            paramType))
{


#line 2174 "check.cog"
         return 

#line 2174 "check.cog"
                true;
}


#line 2176 "check.cog"
     if(auto paramDeclRefType = 

#line 2176 "check.cog"
                                              

#line 2176 "check.cog"
                               as<

#line 2176 "check.cog"
                                  DeclRefType> (

#line 2176 "check.cog"
                                               paramType))
{


#line 2178 "check.cog"
         if(auto genericParamDeclRef = 

#line 2178 "check.cog"
                                                          

#line 2178 "check.cog"
                                      as<

#line 2178 "check.cog"
                                         GenericParamDecl> (

#line 2178 "check.cog"
                                                                           DEREF(

#line 2178 "check.cog"
                                                           paramDeclRefType).declRef))
{


#line 2186 "check.cog"
    

#line 2186 "check.cog"
    auto genericInferenceArg = 

#line 2186 "check.cog"
                                                     

#line 2186 "check.cog"
                              findGenericInferenceArg(

#line 2186 "check.cog"
                                                      context, 

#line 2186 "check.cog"
                                                               genericParamDeclRef);


#line 2187 "check.cog"
    if(

#line 2187 "check.cog"
       genericInferenceArg)
{


#line 2190 "check.cog"
                        DEREF(

#line 2190 "check.cog"
     genericInferenceArg).val = 

#line 2190 "check.cog"
                               argType;


#line 2191 "check.cog"
     return 

#line 2191 "check.cog"
            true;
}
}


#line 2197 "check.cog"
         if(auto argDeclRefType = 

#line 2197 "check.cog"
                                                

#line 2197 "check.cog"
                                 as<

#line 2197 "check.cog"
                                    DeclRefType> (

#line 2197 "check.cog"
                                                 argType))
{


#line 2199 "check.cog"
             return 

#line 2199 "check.cog"
                                          

#line 2199 "check.cog"
                    doInferenceForDeclRefs(

#line 2200 "check.cog"
                 context, 

#line 2201 "check.cog"
                               DEREF(

#line 2201 "check.cog"
                 argDeclRefType).declRef, 

#line 2202 "check.cog"
                                 DEREF(

#line 2202 "check.cog"
                 paramDeclRefType).declRef);
}
}


#line 2207 "check.cog"
     return 

#line 2207 "check.cog"
            false;
}


#line 490 "syntax.cog"
 

#line 494 "syntax.cog"
 

#line 2211 "check.cog"
 

#line 2215 "check.cog"
        Bool doInferenceForArgAndParam(

#line 2212 "check.cog"
                                     

#line 2212 "check.cog"
              GenericInferenceContext

#line 2212 "check.cog"
                                     * context, 

#line 2213 "check.cog"
              Exp argExpr, 

#line 2214 "check.cog"
                   DeclRefValImpl<

#line 2214 "check.cog"
                                  ParamDecl>  paramDeclRef)
{


#line 2217 "check.cog"
     return 

#line 2217 "check.cog"
                               

#line 2217 "check.cog"
            doInferenceForTypes(

#line 2218 "check.cog"
         context, 

#line 2219 "check.cog"
                DEREF(

#line 2219 "check.cog"
         argExpr).type, 

#line 2220 "check.cog"
                

#line 2220 "check.cog"
         getType(

#line 2220 "check.cog"
                 paramDeclRef));
}


#line 2223 "check.cog"
 

#line 2227 "check.cog"
        Specializations inferGenericArgsForApp(

#line 2224 "check.cog"
                          

#line 2224 "check.cog"
              CheckContext

#line 2224 "check.cog"
                          * context, 

#line 2225 "check.cog"
                     DeclRefValImpl<

#line 2225 "check.cog"
                                    GenericDecl>  genericDeclRef, 

#line 2226 "check.cog"
              AppExpBase appExpr)
{


#line 2236 "check.cog"
     

#line 2236 "check.cog"
     auto innerDeclRef = 

#line 2236 "check.cog"
                                

#line 2236 "check.cog"
                        getInner(

#line 2236 "check.cog"
                                 genericDeclRef);


#line 2237 "check.cog"
     

#line 2237 "check.cog"
     auto innerFuncDeclRef = 

#line 2237 "check.cog"
                                            

#line 2237 "check.cog"
                            as<

#line 2237 "check.cog"
                               FuncDeclBase> (

#line 2237 "check.cog"
                                             innerDeclRef);


#line 2238 "check.cog"
     if(

#line 2238 "check.cog"
        

#line 2238 "check.cog"
        !

#line 2238 "check.cog"
         innerFuncDeclRef)
{


#line 2241 "check.cog"
         return 

#line 2241 "check.cog"
                nullptr;
}


#line 2245 "check.cog"
     

#line 2245 "check.cog"
     

#line 2245 "check.cog"
               Array<

#line 2245 "check.cog"
                     GenericInferenceArg>  args;


#line 2246 "check.cog"
     for(auto member : 

#line 2246 "check.cog"
                                

#line 2246 "check.cog"
                        getDecls(

#line 2246 "check.cog"
                                 genericDeclRef))
{
{


#line 2248 "check.cog"
         if(auto genericParamDeclRef = 

#line 2248 "check.cog"
                                                          

#line 2248 "check.cog"
                                      as<

#line 2248 "check.cog"
                                         GenericParamDecl> (

#line 2248 "check.cog"
                                                           member))
{


#line 2250 "check.cog"
             

#line 2250 "check.cog"
             

#line 2250 "check.cog"
                      GenericInferenceArg arg;


#line 2251 "check.cog"
                DEREF(

#line 2251 "check.cog"
             arg).paramDeclRef = 

#line 2251 "check.cog"
                                genericParamDeclRef;


#line 2253 "check.cog"
                        

#line 2253 "check.cog"
                        

#line 2253 "check.cog"
                 DEREF(

#line 2253 "check.cog"
             args).append(

#line 2253 "check.cog"
                         arg);
}
else
{
}
}
}


#line 2261 "check.cog"
     

#line 2261 "check.cog"
     

#line 2261 "check.cog"
                            GenericInferenceContext inferenceContext;


#line 2262 "check.cog"
                     DEREF(

#line 2262 "check.cog"
     inferenceContext).checkContext = 

#line 2262 "check.cog"
                                     context;


#line 2263 "check.cog"
                     DEREF(

#line 2263 "check.cog"
     inferenceContext).args = 

#line 2263 "check.cog"
                             

#line 2263 "check.cog"
                             &

#line 2263 "check.cog"
                                  

#line 2263 "check.cog"
                              args[

#line 2263 "check.cog"
                                   0];


#line 2264 "check.cog"
                  DEREF(

#line 2264 "check.cog"
  inferenceContext).argCount = 

#line 2264 "check.cog"
                                           

#line 2264 "check.cog"
                                  DEREF(

#line 2264 "check.cog"
                              args).getCount();


#line 2266 "check.cog"
     

#line 2266 "check.cog"
     auto aa = 

#line 2266 "check.cog"
                                

#line 2266 "check.cog"
                          DEREF(

#line 2266 "check.cog"
                     DEREF(

#line 2266 "check.cog"
              appExpr).args).begin();


#line 2267 "check.cog"
     

#line 2267 "check.cog"
     auto ae = 

#line 2267 "check.cog"
                              

#line 2267 "check.cog"
                          DEREF(

#line 2267 "check.cog"
                     DEREF(

#line 2267 "check.cog"
              appExpr).args).end();


#line 2268 "check.cog"
     for(auto member : 

#line 2268 "check.cog"
                               

#line 2268 "check.cog"
                       getDecls(

#line 2268 "check.cog"
                                innerFuncDeclRef))
{
{


#line 2270 "check.cog"
         

#line 2270 "check.cog"
         auto paramDeclRef = 

#line 2270 "check.cog"
                                         

#line 2270 "check.cog"
                            as<

#line 2270 "check.cog"
                               ParamDecl> (

#line 2270 "check.cog"
                                          member);


#line 2271 "check.cog"
         if(

#line 2271 "check.cog"
            

#line 2271 "check.cog"
            !

#line 2271 "check.cog"
             paramDeclRef)
{


#line 2272 "check.cog"
             continue;
}


#line 2274 "check.cog"
         if(

#line 2274 "check.cog"
            

#line 2274 "check.cog"
            !

#line 2274 "check.cog"
             (

#line 2274 "check.cog"
                 

#line 2274 "check.cog"
              aa 

#line 2274 "check.cog"
                 != 

#line 2274 "check.cog"
                    ae))
{


#line 2277 "check.cog"
             return 

#line 2277 "check.cog"
                    nullptr;
}


#line 2280 "check.cog"
         

#line 2280 "check.cog"
         auto arg = 

#line 2280 "check.cog"
                   

#line 2280 "check.cog"
                   *

#line 2280 "check.cog"
                    aa;


#line 2281 "check.cog"
         

#line 2281 "check.cog"
         

#line 2281 "check.cog"
         ++

#line 2281 "check.cog"
           aa;


#line 2285 "check.cog"
         if(

#line 2285 "check.cog"
            

#line 2285 "check.cog"
            !

#line 2285 "check.cog"
                                      

#line 2285 "check.cog"
             doInferenceForArgAndParam(

#line 2286 "check.cog"
             

#line 2286 "check.cog"
             &

#line 2286 "check.cog"
              inferenceContext, 

#line 2287 "check.cog"
                DEREF(

#line 2287 "check.cog"
             arg).exp, 

#line 2288 "check.cog"
             paramDeclRef))
{


#line 2290 "check.cog"
             return 

#line 2290 "check.cog"
                    nullptr;
}
}
}


#line 2293 "check.cog"
     if(

#line 2293 "check.cog"
           

#line 2293 "check.cog"
        aa 

#line 2293 "check.cog"
           != 

#line 2293 "check.cog"
              ae)
{


#line 2296 "check.cog"
         return 

#line 2296 "check.cog"
                nullptr;
}


#line 2301 "check.cog"
     for(auto arg : 

#line 2301 "check.cog"
                    args)
{
{


#line 2303 "check.cog"
         if(

#line 2303 "check.cog"
            

#line 2303 "check.cog"
            !

#line 2303 "check.cog"
                DEREF(

#line 2303 "check.cog"
             arg).val)
{


#line 2304 "check.cog"
             return 

#line 2304 "check.cog"
                    nullptr;
}
}
}


#line 2308 "check.cog"
     return 

#line 2308 "check.cog"
            nullptr;
}


#line 2311 "check.cog"
 void addGenericOverloadCandidate(

#line 2312 "check.cog"
                                    

#line 2312 "check.cog"
              OverloadResolveContext

#line 2312 "check.cog"
                                    * context, 

#line 2313 "check.cog"
                     DeclRefValImpl<

#line 2313 "check.cog"
                                    GenericDecl>  genericDeclRef)
{


#line 2315 "check.cog"
            

#line 2315 "check.cog"
            

#line 2315 "check.cog"
  ensureDecl(

#line 2315 "check.cog"
                    DEREF(

#line 2315 "check.cog"
             context).checkContext, 

#line 2315 "check.cog"
                                                         

#line 2315 "check.cog"
                                                 DEREF(

#line 2315 "check.cog"
                                   genericDeclRef).getDecl());


#line 2325 "check.cog"
     

#line 2325 "check.cog"
     auto innerDeclRef = 

#line 2325 "check.cog"
                                

#line 2325 "check.cog"
                        getInner(

#line 2325 "check.cog"
                                 genericDeclRef);


#line 2326 "check.cog"
     

#line 2326 "check.cog"
     auto specializations = 

#line 2326 "check.cog"
                                                 

#line 2326 "check.cog"
                           inferGenericArgsForApp(

#line 2327 "check.cog"
                DEREF(

#line 2327 "check.cog"
         context).checkContext, 

#line 2328 "check.cog"
         genericDeclRef, 

#line 2329 "check.cog"
                DEREF(

#line 2329 "check.cog"
         context).appExp);


#line 2330 "check.cog"
     if(

#line 2330 "check.cog"
        specializations)
{


#line 2332 "check.cog"
                     DEREF(

#line 2332 "check.cog"
         innerDeclRef).specializations = 

#line 2332 "check.cog"
                                        specializations;
}


#line 2339 "check.cog"
                                 

#line 2339 "check.cog"
                                 

#line 2339 "check.cog"
     addDeclRefOverloadCandidates(

#line 2339 "check.cog"
                                  context, 

#line 2339 "check.cog"
                                           innerDeclRef);
}


#line 2342 "check.cog"
 void addDeclRefOverloadCandidates(

#line 2343 "check.cog"
                                    

#line 2343 "check.cog"
              OverloadResolveContext

#line 2343 "check.cog"
                                    * context, 

#line 2344 "check.cog"
          DeclRefVal val)
{


#line 2346 "check.cog"
     if(auto funcDeclRef = 

#line 2346 "check.cog"
                                          

#line 2346 "check.cog"
                          as<

#line 2346 "check.cog"
                             FuncDeclBase> (

#line 2346 "check.cog"
                                           val))
{


#line 2348 "check.cog"
                                 

#line 2348 "check.cog"
                                 

#line 2348 "check.cog"
         addFuncOverloadCandidate(

#line 2348 "check.cog"
                                  context, 

#line 2348 "check.cog"
                                           funcDeclRef);
}
else
{


#line 2350 "check.cog"
          if(auto genericDeclRef = 

#line 2350 "check.cog"
                                                 

#line 2350 "check.cog"
                                  as<

#line 2350 "check.cog"
                                     GenericDecl> (

#line 2350 "check.cog"
                                                  val))
{


#line 2352 "check.cog"
                                    

#line 2352 "check.cog"
                                    

#line 2352 "check.cog"
         addGenericOverloadCandidate(

#line 2352 "check.cog"
                                     context, 

#line 2352 "check.cog"
                                              genericDeclRef);
}
else
{
}
}
}


#line 2362 "check.cog"
 

#line 2365 "check.cog"
     Val findSpecialization(

#line 2363 "check.cog"
                   Specializations specializations, 

#line 2364 "check.cog"
           Decl decl)
{


#line 2367 "check.cog"
  for(auto arg : 

#line 2367 "check.cog"
                                DEREF(

#line 2367 "check.cog"
                 specializations).args)
{
{


#line 2369 "check.cog"
   if(

#line 2369 "check.cog"
           

#line 2369 "check.cog"
      decl 

#line 2369 "check.cog"
           == 

#line 2369 "check.cog"
                 DEREF(

#line 2369 "check.cog"
              arg).param)
{


#line 2371 "check.cog"
    return 

#line 2371 "check.cog"
              DEREF(

#line 2371 "check.cog"
           arg).value;
}
}
}


#line 2375 "check.cog"
  return 

#line 2375 "check.cog"
         nullptr;
}


#line 2378 "check.cog"
 

#line 2381 "check.cog"
     DeclRefVal specializeDeclRef(

#line 2379 "check.cog"
           DeclRefVal declRef, 

#line 2380 "check.cog"
                   Specializations specializations)
{


#line 2383 "check.cog"
  

#line 2383 "check.cog"
  auto oldDecl = 

#line 2383 "check.cog"
                               

#line 2383 "check.cog"
                       DEREF(

#line 2383 "check.cog"
                declRef).getDecl();


#line 2384 "check.cog"
  

#line 2384 "check.cog"
  auto oldSpecializations = 

#line 2384 "check.cog"
                                                     

#line 2384 "check.cog"
                                  DEREF(

#line 2384 "check.cog"
                           declRef).getSpecializations();


#line 2387 "check.cog"
  if(auto genericTypeParamDecl = 

#line 2387 "check.cog"
                                                    

#line 2387 "check.cog"
                                as<

#line 2387 "check.cog"
                                   GenericParamDecl> (

#line 2387 "check.cog"
                                                     oldDecl))
{


#line 2390 "check.cog"
   if(auto newVal = 

#line 2390 "check.cog"
                                     

#line 2390 "check.cog"
                   findSpecialization(

#line 2390 "check.cog"
                                      specializations, 

#line 2390 "check.cog"
                                                       genericTypeParamDecl))
{


#line 2392 "check.cog"
    if(auto typeDeclRef = 

#line 2392 "check.cog"
                                        

#line 2392 "check.cog"
                         as<

#line 2392 "check.cog"
                            DeclRefType> (

#line 2392 "check.cog"
                                         newVal))
{


#line 2393 "check.cog"
     return 

#line 2393 "check.cog"
                       DEREF(

#line 2393 "check.cog"
            typeDeclRef).declRef;
}
}


#line 2396 "check.cog"
            

#line 2396 "check.cog"
            

#line 2396 "check.cog"
   cogAssert(

#line 2396 "check.cog"
             

#line 2396 "check.cog"
             !

#line 2396 "check.cog"
              "unimplemented");
}


#line 2399 "check.cog"
  if(

#line 2399 "check.cog"
     

#line 2399 "check.cog"
     !

#line 2399 "check.cog"
      oldSpecializations)
{


#line 2400 "check.cog"
   return 

#line 2400 "check.cog"
          declRef;
}


#line 2405 "check.cog"
           

#line 2405 "check.cog"
           

#line 2405 "check.cog"
  cogAssert(

#line 2405 "check.cog"
            

#line 2405 "check.cog"
            !

#line 2405 "check.cog"
             "unimplemented");


#line 2407 "check.cog"
  return 

#line 2407 "check.cog"
                   

#line 2407 "check.cog"
         DeclRefVal();
}


#line 2410 "check.cog"
 

#line 2413 "check.cog"
     Type specializeType(

#line 2411 "check.cog"
        Type type, 

#line 2412 "check.cog"
                   Specializations specializations)
{


#line 2415 "check.cog"
  if(

#line 2415 "check.cog"
     

#line 2415 "check.cog"
     !

#line 2415 "check.cog"
      specializations)
{


#line 2416 "check.cog"
   return 

#line 2416 "check.cog"
          type;
}


#line 2418 "check.cog"
  if(auto declRefType = 

#line 2418 "check.cog"
                                      

#line 2418 "check.cog"
                       as<

#line 2418 "check.cog"
                          DeclRefType> (

#line 2418 "check.cog"
                                       type))
{


#line 2421 "check.cog"
   

#line 2421 "check.cog"
   auto specDeclRef = 

#line 2421 "check.cog"
                                      

#line 2421 "check.cog"
                     specializeDeclRef(

#line 2421 "check.cog"
                                                  DEREF(

#line 2421 "check.cog"
                                       declRefType).declRef, 

#line 2421 "check.cog"
                                                            specializations);


#line 2423 "check.cog"
   

#line 2423 "check.cog"
   auto specType = 

#line 2423 "check.cog"
                                           

#line 2423 "check.cog"
                  createObject<

#line 2423 "check.cog"
                               DeclRefType> ();


#line 2424 "check.cog"
           DEREF(

#line 2424 "check.cog"
   specType).declRef = 

#line 2424 "check.cog"
                                    

#line 2424 "check.cog"
                      CompactDeclRef(

#line 2424 "check.cog"
                                     specDeclRef);


#line 2425 "check.cog"
   return 

#line 2425 "check.cog"
          specType;
}


#line 2428 "check.cog"
  if(auto errorType = 

#line 2428 "check.cog"
                                  

#line 2428 "check.cog"
                     as<

#line 2428 "check.cog"
                        ErrorType> (

#line 2428 "check.cog"
                                   type))
{


#line 2429 "check.cog"
   return 

#line 2429 "check.cog"
          errorType;
}


#line 2431 "check.cog"
           

#line 2431 "check.cog"
           

#line 2431 "check.cog"
  cogAssert(

#line 2431 "check.cog"
            

#line 2431 "check.cog"
            !

#line 2431 "check.cog"
             "unimplemented");


#line 2432 "check.cog"
  return 

#line 2432 "check.cog"
         nullptr;
}


#line 2437 "check.cog"
 void ensureDecl(

#line 2438 "check.cog"
                       

#line 2438 "check.cog"
           CheckContext

#line 2438 "check.cog"
                       * context, 

#line 2439 "check.cog"
        Decl decl, 

#line 2440 "check.cog"
         DeclCheckState state)
{


#line 2442 "check.cog"
  if(

#line 2442 "check.cog"
                     

#line 2442 "check.cog"
         DEREF(

#line 2442 "check.cog"
     decl).checkState 

#line 2442 "check.cog"
                     >= 

#line 2442 "check.cog"
                        state)
{


#line 2443 "check.cog"
   return;
}


#line 2445 "check.cog"
           

#line 2445 "check.cog"
           

#line 2445 "check.cog"
  checkDecl(

#line 2445 "check.cog"
            context, 

#line 2445 "check.cog"
                     decl);
}


#line 2448 "check.cog"
 void ensureDecl(

#line 2449 "check.cog"
                       

#line 2449 "check.cog"
           CheckContext

#line 2449 "check.cog"
                       * context, 

#line 2450 "check.cog"
        Decl decl)
{


#line 2452 "check.cog"
            

#line 2452 "check.cog"
            

#line 2452 "check.cog"
  ensureDecl(

#line 2452 "check.cog"
             context, 

#line 2452 "check.cog"
                      decl, 

#line 2452 "check.cog"
                            kDeclCheckState_CheckedHead);
}


#line 3 "diagnostic.cog"
 

#line 11 "diagnostic.cog"
 

#line 44 "diagnostic.cog"
 

#line 48 "diagnostic.cog"
  ArgTypeList::ArgTypeList()
{


#line 50 "diagnostic.cog"
       DEREF(

#line 50 "diagnostic.cog"
   this).args = 

#line 50 "diagnostic.cog"
               nullptr;
}


#line 53 "diagnostic.cog"
  ArgTypeList::ArgTypeList(

#line 53 "diagnostic.cog"
             Arg args)
{


#line 55 "diagnostic.cog"
       DEREF(

#line 55 "diagnostic.cog"
   this).args = 

#line 55 "diagnostic.cog"
               args;
}


#line 59 "diagnostic.cog"
 

#line 12 "token.cog"
 

#line 5 "string.cog"
 

#line 10 "string.cog"
  StringSpan::StringSpan()
{
}


#line 13 "string.cog"
  StringSpan::StringSpan(

#line 14 "string.cog"
          Ptr<

#line 14 "string.cog"
              Char>  begin, 

#line 15 "string.cog"
        Ptr<

#line 15 "string.cog"
            Char>  end)
{


#line 17 "string.cog"
       DEREF(

#line 17 "string.cog"
   this).begin = 

#line 17 "string.cog"
                begin;


#line 18 "string.cog"
       DEREF(

#line 18 "string.cog"
   this).end = 

#line 18 "string.cog"
              end;
}


#line 21 "string.cog"
  StringSpan::StringSpan(

#line 22 "string.cog"
          ConstPtr<

#line 22 "string.cog"
                   Char>  begin, 

#line 23 "string.cog"
        ConstPtr<

#line 23 "string.cog"
                 Char>  end)
{


#line 25 "string.cog"
       DEREF(

#line 25 "string.cog"
   this).begin = 

#line 25 "string.cog"
                cast<

#line 25 "string.cog"
                     Ptr<

#line 25 "string.cog"
                         Char> >(

#line 25 "string.cog"
                                 begin);


#line 26 "string.cog"
       DEREF(

#line 26 "string.cog"
   this).end = 

#line 26 "string.cog"
              cast<

#line 26 "string.cog"
                   Ptr<

#line 26 "string.cog"
                       Char> >(

#line 26 "string.cog"
                               end);
}


#line 29 "string.cog"
  

#line 29 "string.cog"
                      Size StringSpan::getLength()
{


#line 31 "string.cog"
   return 

#line 31 "string.cog"
              

#line 31 "string.cog"
          end 

#line 31 "string.cog"
              - 

#line 31 "string.cog"
                begin;
}


#line 34 "string.cog"
  

#line 34 "string.cog"
                                       Bool StringSpan::endsWith(

#line 34 "string.cog"
                        StringSpan suffix)
{


#line 36 "string.cog"
   

#line 36 "string.cog"
   auto len = 

#line 36 "string.cog"
                      

#line 36 "string.cog"
             getLength();


#line 37 "string.cog"
   

#line 37 "string.cog"
   auto suffixLen = 

#line 37 "string.cog"
                                   

#line 37 "string.cog"
                         DEREF(

#line 37 "string.cog"
                   suffix).getLength();


#line 39 "string.cog"
   if(

#line 39 "string.cog"
                

#line 39 "string.cog"
      suffixLen 

#line 39 "string.cog"
                > 

#line 39 "string.cog"
                  len)
{


#line 39 "string.cog"
                       return 

#line 39 "string.cog"
                              false;
}


#line 41 "string.cog"
   return 

#line 41 "string.cog"
                                           

#line 41 "string.cog"
                    

#line 41 "string.cog"
          StringSpan(

#line 41 "string.cog"
                         

#line 41 "string.cog"
                     end 

#line 41 "string.cog"
                         - 

#line 41 "string.cog"
                           suffixLen, 

#line 41 "string.cog"
                                      end) 

#line 41 "string.cog"
                                           == 

#line 41 "string.cog"
                                              suffix;
}


#line 44 "string.cog"
  

#line 44 "string.cog"
                                          Bool StringSpan::trimFromEnd(

#line 44 "string.cog"
                           StringSpan suffix)
{


#line 46 "string.cog"
   if(

#line 46 "string.cog"
      

#line 46 "string.cog"
      !

#line 46 "string.cog"
               

#line 46 "string.cog"
       endsWith(

#line 46 "string.cog"
                suffix))
{


#line 47 "string.cog"
    return 

#line 47 "string.cog"
           false;
}


#line 49 "string.cog"
   

#line 49 "string.cog"
   auto suffixLen = 

#line 49 "string.cog"
                                   

#line 49 "string.cog"
                         DEREF(

#line 49 "string.cog"
                   suffix).getLength();


#line 50 "string.cog"
       

#line 50 "string.cog"
       

#line 50 "string.cog"
   end 

#line 50 "string.cog"
       -= 

#line 50 "string.cog"
          suffixLen;


#line 51 "string.cog"
   return 

#line 51 "string.cog"
          true;
}


#line 54 "string.cog"
  

#line 54 "string.cog"
                                   StringSpan StringSpan::suffixAfterLast(

#line 54 "string.cog"
                          Char c)
{


#line 56 "string.cog"
   

#line 56 "string.cog"
   auto cursor = 

#line 56 "string.cog"
                end;


#line 57 "string.cog"
   while(

#line 57 "string.cog"
                

#line 57 "string.cog"
         cursor 

#line 57 "string.cog"
                != 

#line 57 "string.cog"
                   begin)
{
{


#line 59 "string.cog"
    

#line 59 "string.cog"
    

#line 59 "string.cog"
    --

#line 59 "string.cog"
      cursor;


#line 60 "string.cog"
    if(

#line 60 "string.cog"
               

#line 60 "string.cog"
       

#line 60 "string.cog"
       *

#line 60 "string.cog"
        cursor 

#line 60 "string.cog"
               == 

#line 60 "string.cog"
                  c)
{


#line 62 "string.cog"
     return 

#line 62 "string.cog"
                      

#line 62 "string.cog"
            StringSpan(

#line 62 "string.cog"
                             

#line 62 "string.cog"
                       cursor 

#line 62 "string.cog"
                             + 

#line 62 "string.cog"
                              1, 

#line 62 "string.cog"
                                 end);
}
}
}


#line 65 "string.cog"
   return 

#line 65 "string.cog"
          

#line 65 "string.cog"
          *

#line 65 "string.cog"
           this;
}


#line 70 "diagnostic.cog"
 

#line 72 "diagnostic.cog"
  DiagnosticArg::DiagnosticArg(

#line 72 "diagnostic.cog"
            Int val)
{


#line 74 "diagnostic.cog"
       DEREF(

#line 74 "diagnostic.cog"
   this).flavor = 

#line 74 "diagnostic.cog"
                 kFlavor_Int;


#line 75 "diagnostic.cog"
       DEREF(

#line 75 "diagnostic.cog"
   this).intVal = 

#line 75 "diagnostic.cog"
                 val;
}


#line 78 "diagnostic.cog"
  DiagnosticArg::DiagnosticArg(

#line 78 "diagnostic.cog"
            TokenCode val)
{


#line 80 "diagnostic.cog"
       DEREF(

#line 80 "diagnostic.cog"
   this).flavor = 

#line 80 "diagnostic.cog"
                 kFlavor_TokenCode;


#line 81 "diagnostic.cog"
       DEREF(

#line 81 "diagnostic.cog"
   this).tokenCodeVal = 

#line 81 "diagnostic.cog"
                       val;
}


#line 84 "diagnostic.cog"
  DiagnosticArg::DiagnosticArg(

#line 84 "diagnostic.cog"
            Ptr<

#line 84 "diagnostic.cog"
                Name>  val)
{


#line 86 "diagnostic.cog"
       DEREF(

#line 86 "diagnostic.cog"
   this).flavor = 

#line 86 "diagnostic.cog"
                 kFlavor_Name;


#line 87 "diagnostic.cog"
       DEREF(

#line 87 "diagnostic.cog"
   this).nameVal = 

#line 87 "diagnostic.cog"
                  val;
}


#line 90 "diagnostic.cog"
  DiagnosticArg::DiagnosticArg(

#line 90 "diagnostic.cog"
            StringSpan val)
{


#line 92 "diagnostic.cog"
       DEREF(

#line 92 "diagnostic.cog"
   this).flavor = 

#line 92 "diagnostic.cog"
                 kFlavor_StringSpan;


#line 93 "diagnostic.cog"
       DEREF(

#line 93 "diagnostic.cog"
   this).stringSpanVal = 

#line 93 "diagnostic.cog"
                        val;
}


#line 98 "diagnostic.cog"
  DiagnosticArg::DiagnosticArg(

#line 98 "diagnostic.cog"
            ConstPtr<

#line 98 "diagnostic.cog"
                     Char>  val)
{


#line 100 "diagnostic.cog"
       DEREF(

#line 100 "diagnostic.cog"
   this).flavor = 

#line 100 "diagnostic.cog"
                 kFlavor_StringSpan;


#line 101 "diagnostic.cog"
       DEREF(

#line 101 "diagnostic.cog"
   this).stringSpanVal = 

#line 101 "diagnostic.cog"
                                            

#line 101 "diagnostic.cog"
                        TerminatedStringSpan(

#line 101 "diagnostic.cog"
                                             val);
}


#line 104 "diagnostic.cog"
  DiagnosticArg::DiagnosticArg(

#line 104 "diagnostic.cog"
            Type val)
{


#line 106 "diagnostic.cog"
       DEREF(

#line 106 "diagnostic.cog"
   this).flavor = 

#line 106 "diagnostic.cog"
                 kFlavor_Type;


#line 107 "diagnostic.cog"
       DEREF(

#line 107 "diagnostic.cog"
   this).typeVal = 

#line 107 "diagnostic.cog"
                  val;
}


#line 110 "diagnostic.cog"
  DiagnosticArg::DiagnosticArg(

#line 110 "diagnostic.cog"
            DeclRefVal val)
{


#line 112 "diagnostic.cog"
       DEREF(

#line 112 "diagnostic.cog"
   this).flavor = 

#line 112 "diagnostic.cog"
                 kFlavor_DeclRef;


#line 113 "diagnostic.cog"
       DEREF(

#line 113 "diagnostic.cog"
   this).declRefVal = 

#line 113 "diagnostic.cog"
                     val;
}


#line 116 "diagnostic.cog"
  DiagnosticArg::DiagnosticArg(

#line 116 "diagnostic.cog"
            ConstRef<

#line 116 "diagnostic.cog"
                     ArgTypeList>  val)
{


#line 118 "diagnostic.cog"
       DEREF(

#line 118 "diagnostic.cog"
   this).flavor = 

#line 118 "diagnostic.cog"
                 kFlavor_ArgTypeList;


#line 119 "diagnostic.cog"
       DEREF(

#line 119 "diagnostic.cog"
   this).argTypeListVal = 

#line 119 "diagnostic.cog"
                         val;
}


#line 135 "diagnostic.cog"
 void diagnose(

#line 136 "diagnostic.cog"
        Ptr<

#line 136 "diagnostic.cog"
            DiagnosticSink>  sink, 

#line 137 "diagnostic.cog"
       SourceLoc loc, 

#line 138 "diagnostic.cog"
      DiagnosticID id)
{


#line 140 "diagnostic.cog"
              

#line 140 "diagnostic.cog"
              

#line 140 "diagnostic.cog"
  diagnoseImpl(

#line 140 "diagnostic.cog"
               sink, 

#line 140 "diagnostic.cog"
                     loc, 

#line 140 "diagnostic.cog"
                          id, 

#line 140 "diagnostic.cog"
                              0, 

#line 140 "diagnostic.cog"
                                 0);
}


#line 143 "diagnostic.cog"
 void diagnose(

#line 144 "diagnostic.cog"
        Ptr<

#line 144 "diagnostic.cog"
            DiagnosticSink>  sink, 

#line 145 "diagnostic.cog"
       SourceLoc loc, 

#line 146 "diagnostic.cog"
      DiagnosticID id, 

#line 147 "diagnostic.cog"
        DiagnosticArg arg0)
{


#line 149 "diagnostic.cog"
  

#line 149 "diagnostic.cog"
  

#line 149 "diagnostic.cog"
             FixedSizeArray<

#line 149 "diagnostic.cog"
                            1, 

#line 149 "diagnostic.cog"
                               Ptr<

#line 149 "diagnostic.cog"
                                   DiagnosticArg> >  args;


#line 150 "diagnostic.cog"
      

#line 150 "diagnostic.cog"
  args[

#line 150 "diagnostic.cog"
       0] = 

#line 150 "diagnostic.cog"
            

#line 150 "diagnostic.cog"
            &

#line 150 "diagnostic.cog"
             arg0;


#line 151 "diagnostic.cog"
              

#line 151 "diagnostic.cog"
              

#line 151 "diagnostic.cog"
  diagnoseImpl(

#line 151 "diagnostic.cog"
               sink, 

#line 151 "diagnostic.cog"
                     loc, 

#line 151 "diagnostic.cog"
                          id, 

#line 151 "diagnostic.cog"
                              1, 

#line 151 "diagnostic.cog"
                                 args);
}


#line 154 "diagnostic.cog"
 void diagnose(

#line 155 "diagnostic.cog"
        Ptr<

#line 155 "diagnostic.cog"
            DiagnosticSink>  sink, 

#line 156 "diagnostic.cog"
       SourceLoc loc, 

#line 157 "diagnostic.cog"
      DiagnosticID id, 

#line 158 "diagnostic.cog"
        DiagnosticArg arg0, 

#line 159 "diagnostic.cog"
        DiagnosticArg arg1)
{


#line 161 "diagnostic.cog"
  

#line 161 "diagnostic.cog"
  

#line 161 "diagnostic.cog"
             FixedSizeArray<

#line 161 "diagnostic.cog"
                            2, 

#line 161 "diagnostic.cog"
                               Ptr<

#line 161 "diagnostic.cog"
                                   DiagnosticArg> >  args;


#line 162 "diagnostic.cog"
      

#line 162 "diagnostic.cog"
  args[

#line 162 "diagnostic.cog"
       0] = 

#line 162 "diagnostic.cog"
            

#line 162 "diagnostic.cog"
            &

#line 162 "diagnostic.cog"
             arg0;


#line 163 "diagnostic.cog"
      

#line 163 "diagnostic.cog"
  args[

#line 163 "diagnostic.cog"
       1] = 

#line 163 "diagnostic.cog"
            

#line 163 "diagnostic.cog"
            &

#line 163 "diagnostic.cog"
             arg1;


#line 164 "diagnostic.cog"
              

#line 164 "diagnostic.cog"
              

#line 164 "diagnostic.cog"
  diagnoseImpl(

#line 164 "diagnostic.cog"
               sink, 

#line 164 "diagnostic.cog"
                     loc, 

#line 164 "diagnostic.cog"
                          id, 

#line 164 "diagnostic.cog"
                              2, 

#line 164 "diagnostic.cog"
                                 args);
}


#line 232 "diagnostic.cog"
 void printDeclRef(

#line 233 "diagnostic.cog"
              

#line 233 "diagnostic.cog"
          FILE

#line 233 "diagnostic.cog"
              * stream, 

#line 234 "diagnostic.cog"
           DeclRefVal declRef)
{


#line 236 "diagnostic.cog"
         

#line 236 "diagnostic.cog"
         

#line 236 "diagnostic.cog"
  fprintf(

#line 236 "diagnostic.cog"
          stream, 

#line 236 "diagnostic.cog"
                  "%s", 

#line 236 "diagnostic.cog"
                                                       DEREF(

#line 236 "diagnostic.cog"
                               

#line 236 "diagnostic.cog"
                        getText(

#line 236 "diagnostic.cog"
                                                 DEREF(

#line 236 "diagnostic.cog"
                                               

#line 236 "diagnostic.cog"
                                       DEREF(

#line 236 "diagnostic.cog"
                                declRef).getDecl()).name)).begin);
}


#line 239 "diagnostic.cog"
 void printType(

#line 240 "diagnostic.cog"
              

#line 240 "diagnostic.cog"
          FILE

#line 240 "diagnostic.cog"
              * stream, 

#line 241 "diagnostic.cog"
        Type type)
{


#line 243 "diagnostic.cog"
  if(auto declRefType = 

#line 243 "diagnostic.cog"
                                      

#line 243 "diagnostic.cog"
                       as<

#line 243 "diagnostic.cog"
                          DeclRefType> (

#line 243 "diagnostic.cog"
                                       type))
{


#line 245 "diagnostic.cog"
               

#line 245 "diagnostic.cog"
               

#line 245 "diagnostic.cog"
   printDeclRef(

#line 245 "diagnostic.cog"
                stream, 

#line 245 "diagnostic.cog"
                                   DEREF(

#line 245 "diagnostic.cog"
                        declRefType).declRef);
}
else
{


#line 247 "diagnostic.cog"
       if(auto typeType = 

#line 247 "diagnostic.cog"
                                     

#line 247 "diagnostic.cog"
                         as<

#line 247 "diagnostic.cog"
                            TypeType> (

#line 247 "diagnostic.cog"
                                      type))
{


#line 249 "diagnostic.cog"
          

#line 249 "diagnostic.cog"
          

#line 249 "diagnostic.cog"
   fprintf(

#line 249 "diagnostic.cog"
           stream, 

#line 249 "diagnostic.cog"
                   "typeof(");


#line 250 "diagnostic.cog"
            

#line 250 "diagnostic.cog"
            

#line 250 "diagnostic.cog"
   printType(

#line 250 "diagnostic.cog"
             stream, 

#line 250 "diagnostic.cog"
                             DEREF(

#line 250 "diagnostic.cog"
                     typeType).type);


#line 251 "diagnostic.cog"
          

#line 251 "diagnostic.cog"
          

#line 251 "diagnostic.cog"
   fprintf(

#line 251 "diagnostic.cog"
           stream, 

#line 251 "diagnostic.cog"
                   ")");
}
else
{


#line 253 "diagnostic.cog"
       if(auto funcType = 

#line 253 "diagnostic.cog"
                                     

#line 253 "diagnostic.cog"
                         as<

#line 253 "diagnostic.cog"
                            FuncType> (

#line 253 "diagnostic.cog"
                                      type))
{


#line 255 "diagnostic.cog"
          

#line 255 "diagnostic.cog"
          

#line 255 "diagnostic.cog"
   fprintf(

#line 255 "diagnostic.cog"
           stream, 

#line 255 "diagnostic.cog"
                   "FUNC_TYPE");
}
else
{


#line 257 "diagnostic.cog"
       if(auto errorType = 

#line 257 "diagnostic.cog"
                                       

#line 257 "diagnostic.cog"
                          as<

#line 257 "diagnostic.cog"
                             ErrorType> (

#line 257 "diagnostic.cog"
                                        type))
{


#line 259 "diagnostic.cog"
          

#line 259 "diagnostic.cog"
          

#line 259 "diagnostic.cog"
   fprintf(

#line 259 "diagnostic.cog"
           stream, 

#line 259 "diagnostic.cog"
                   "<error>");
}
else
{


#line 261 "diagnostic.cog"
       if(auto overloadGroupType = 

#line 261 "diagnostic.cog"
                                                       

#line 261 "diagnostic.cog"
                                  as<

#line 261 "diagnostic.cog"
                                     OverloadGroupType> (

#line 261 "diagnostic.cog"
                                                        type))
{


#line 263 "diagnostic.cog"
          

#line 263 "diagnostic.cog"
          

#line 263 "diagnostic.cog"
   fprintf(

#line 263 "diagnostic.cog"
           stream, 

#line 263 "diagnostic.cog"
                   "<overload group>");
}
else
{


#line 265 "diagnostic.cog"
       if(

#line 265 "diagnostic.cog"
          

#line 265 "diagnostic.cog"
          !

#line 265 "diagnostic.cog"
           type)
{


#line 267 "diagnostic.cog"
          

#line 267 "diagnostic.cog"
          

#line 267 "diagnostic.cog"
   fprintf(

#line 267 "diagnostic.cog"
           stream, 

#line 267 "diagnostic.cog"
                   "NULL_TYPE");
}
else
{


#line 271 "diagnostic.cog"
          

#line 271 "diagnostic.cog"
          

#line 271 "diagnostic.cog"
   fprintf(

#line 271 "diagnostic.cog"
           stream, 

#line 271 "diagnostic.cog"
                   "UNKNOWN_TYPE(%s)", 

#line 271 "diagnostic.cog"
                                                       DEREF(

#line 271 "diagnostic.cog"
                                           DEREF(

#line 271 "diagnostic.cog"
                                       type).directClass).name);
}
}
}
}
}
}
}


#line 275 "diagnostic.cog"
 void printDiagnosticArg(

#line 276 "diagnostic.cog"
       ConstPtr<

#line 276 "diagnostic.cog"
                DiagnosticArg>  arg)
{


#line 278 "diagnostic.cog"
  switch(

#line 278 "diagnostic.cog"
            DEREF(

#line 278 "diagnostic.cog"
         arg).flavor)
{
case 

#line 280 "diagnostic.cog"
       kFlavor_Int:
{


#line 281 "diagnostic.cog"
          

#line 281 "diagnostic.cog"
          

#line 281 "diagnostic.cog"
   fprintf(

#line 281 "diagnostic.cog"
           stderr, 

#line 281 "diagnostic.cog"
                   "%ld", 

#line 281 "diagnostic.cog"
                             DEREF(

#line 281 "diagnostic.cog"
                          arg).intVal);
}
{


#line 282 "diagnostic.cog"
   break;
}
case 

#line 284 "diagnostic.cog"
       kFlavor_TokenCode:
{


#line 286 "diagnostic.cog"
          

#line 286 "diagnostic.cog"
          

#line 286 "diagnostic.cog"
   fprintf(

#line 286 "diagnostic.cog"
           stderr, 

#line 286 "diagnostic.cog"
                   "TOKEN: %d", 

#line 286 "diagnostic.cog"
                                   DEREF(

#line 286 "diagnostic.cog"
                                arg).tokenCodeVal);
}
{


#line 287 "diagnostic.cog"
   break;
}
case 

#line 289 "diagnostic.cog"
       kFlavor_Name:
{
{


#line 291 "diagnostic.cog"
    

#line 291 "diagnostic.cog"
    auto text = 

#line 291 "diagnostic.cog"
                      

#line 291 "diagnostic.cog"
               getText(

#line 291 "diagnostic.cog"
                          DEREF(

#line 291 "diagnostic.cog"
                       arg).nameVal);


#line 292 "diagnostic.cog"
          

#line 292 "diagnostic.cog"
          

#line 292 "diagnostic.cog"
    fwrite(

#line 292 "diagnostic.cog"
               DEREF(

#line 292 "diagnostic.cog"
           text).begin, 

#line 292 "diagnostic.cog"
                       1, 

#line 292 "diagnostic.cog"
                                  

#line 292 "diagnostic.cog"
                              DEREF(

#line 292 "diagnostic.cog"
                          text).end 

#line 292 "diagnostic.cog"
                                  - 

#line 292 "diagnostic.cog"
                                       DEREF(

#line 292 "diagnostic.cog"
                                   text).begin, 

#line 292 "diagnostic.cog"
                                               stderr);
}
}
{


#line 294 "diagnostic.cog"
   break;
}
case 

#line 296 "diagnostic.cog"
       kFlavor_StringSpan:
{
{


#line 298 "diagnostic.cog"
    

#line 298 "diagnostic.cog"
    auto text = 

#line 298 "diagnostic.cog"
                  DEREF(

#line 298 "diagnostic.cog"
               arg).stringSpanVal;


#line 299 "diagnostic.cog"
          

#line 299 "diagnostic.cog"
          

#line 299 "diagnostic.cog"
    fwrite(

#line 299 "diagnostic.cog"
               DEREF(

#line 299 "diagnostic.cog"
           text).begin, 

#line 299 "diagnostic.cog"
                       1, 

#line 299 "diagnostic.cog"
                                  

#line 299 "diagnostic.cog"
                              DEREF(

#line 299 "diagnostic.cog"
                          text).end 

#line 299 "diagnostic.cog"
                                  - 

#line 299 "diagnostic.cog"
                                       DEREF(

#line 299 "diagnostic.cog"
                                   text).begin, 

#line 299 "diagnostic.cog"
                                               stderr);
}
}
{


#line 301 "diagnostic.cog"
   break;
}
case 

#line 303 "diagnostic.cog"
       kFlavor_Type:
{
{


#line 305 "diagnostic.cog"
             

#line 305 "diagnostic.cog"
             

#line 305 "diagnostic.cog"
    printType(

#line 305 "diagnostic.cog"
              stderr, 

#line 305 "diagnostic.cog"
                         DEREF(

#line 305 "diagnostic.cog"
                      arg).typeVal);
}
}
{


#line 307 "diagnostic.cog"
   break;
}
case 

#line 309 "diagnostic.cog"
       kFlavor_ArgTypeList:
{
{


#line 311 "diagnostic.cog"
    

#line 311 "diagnostic.cog"
    auto first = 

#line 311 "diagnostic.cog"
                true;


#line 312 "diagnostic.cog"
    {


#line 312 "diagnostic.cog"
        

#line 312 "diagnostic.cog"
        auto aa = 

#line 312 "diagnostic.cog"
                                   DEREF(

#line 312 "diagnostic.cog"
                    DEREF(

#line 312 "diagnostic.cog"
                 arg).argTypeListVal).args;
for(;

#line 312 "diagnostic.cog"
                                          aa;

#line 312 "diagnostic.cog"
                                              aa = 

#line 312 "diagnostic.cog"
                                                     DEREF(

#line 312 "diagnostic.cog"
                                                   aa).next)
{
{


#line 314 "diagnostic.cog"
     if(

#line 314 "diagnostic.cog"
        

#line 314 "diagnostic.cog"
        !

#line 314 "diagnostic.cog"
         first)
{


#line 314 "diagnostic.cog"
                       

#line 314 "diagnostic.cog"
                       

#line 314 "diagnostic.cog"
                fprintf(

#line 314 "diagnostic.cog"
                        stderr, 

#line 314 "diagnostic.cog"
                                ", ");
}


#line 315 "diagnostic.cog"
              

#line 315 "diagnostic.cog"
              

#line 315 "diagnostic.cog"
     printType(

#line 315 "diagnostic.cog"
               stderr, 

#line 315 "diagnostic.cog"
                             DEREF(

#line 315 "diagnostic.cog"
                         DEREF(

#line 315 "diagnostic.cog"
                       aa).exp).type);


#line 316 "diagnostic.cog"
     first = 

#line 316 "diagnostic.cog"
             false;
}
}}
}
}
{


#line 319 "diagnostic.cog"
   break;
}
case 

#line 321 "diagnostic.cog"
       kFlavor_DeclRef:
{
{


#line 323 "diagnostic.cog"
                

#line 323 "diagnostic.cog"
                

#line 323 "diagnostic.cog"
    printDeclRef(

#line 323 "diagnostic.cog"
                 stderr, 

#line 323 "diagnostic.cog"
                            DEREF(

#line 323 "diagnostic.cog"
                         arg).declRefVal);
}
}
{


#line 325 "diagnostic.cog"
   break;
}
default:
{


#line 328 "diagnostic.cog"
          

#line 328 "diagnostic.cog"
          

#line 328 "diagnostic.cog"
   fprintf(

#line 328 "diagnostic.cog"
           stderr, 

#line 328 "diagnostic.cog"
                   "UNIMPLEMENTD:%d", 

#line 328 "diagnostic.cog"
                                         DEREF(

#line 328 "diagnostic.cog"
                                      arg).flavor);
}
{


#line 330 "diagnostic.cog"
   break;
}
}
}


#line 334 "diagnostic.cog"
 void diagnoseImpl(

#line 335 "diagnostic.cog"
        Ptr<

#line 335 "diagnostic.cog"
            DiagnosticSink>  sink, 

#line 336 "diagnostic.cog"
       SourceLoc loc, 

#line 337 "diagnostic.cog"
      DiagnosticID id, 

#line 338 "diagnostic.cog"
            int argCount, 

#line 339 "diagnostic.cog"
        Ptr<

#line 339 "diagnostic.cog"
            Ptr<

#line 339 "diagnostic.cog"
                DiagnosticArg> >  args)
{


#line 343 "diagnostic.cog"
  

#line 343 "diagnostic.cog"
  auto expandedLoc = 

#line 343 "diagnostic.cog"
                             

#line 343 "diagnostic.cog"
                    expandLoc(

#line 343 "diagnostic.cog"
                                  DEREF(

#line 343 "diagnostic.cog"
                              sink).session, 

#line 343 "diagnostic.cog"
                                            loc);


#line 345 "diagnostic.cog"
  

#line 345 "diagnostic.cog"
  auto severity = 

#line 345 "diagnostic.cog"
                 kSeverity_Error;


#line 347 "diagnostic.cog"
         

#line 347 "diagnostic.cog"
         

#line 347 "diagnostic.cog"
  fprintf(

#line 347 "diagnostic.cog"
          stderr, 

#line 347 "diagnostic.cog"
                  "%s(%ld,%ld): %s: ", 

#line 348 "diagnostic.cog"
                    DEREF(

#line 348 "diagnostic.cog"
               DEREF(

#line 348 "diagnostic.cog"
    expandedLoc).file).begin, 

#line 349 "diagnostic.cog"
               DEREF(

#line 349 "diagnostic.cog"
    expandedLoc).line, 

#line 350 "diagnostic.cog"
               DEREF(

#line 350 "diagnostic.cog"
    expandedLoc).column, 

#line 351 "diagnostic.cog"
    "error");


#line 355 "diagnostic.cog"
         

#line 355 "diagnostic.cog"
         

#line 355 "diagnostic.cog"
  fprintf(

#line 355 "diagnostic.cog"
          stderr, 

#line 355 "diagnostic.cog"
                  "%d", 

#line 355 "diagnostic.cog"
                        id);


#line 357 "diagnostic.cog"
     {


#line 357 "diagnostic.cog"
         

#line 357 "diagnostic.cog"
         

#line 357 "diagnostic.cog"
                  int ii = 

#line 357 "diagnostic.cog"
                        0;
for(;

#line 357 "diagnostic.cog"
                              

#line 357 "diagnostic.cog"
                           ii 

#line 357 "diagnostic.cog"
                              < 

#line 357 "diagnostic.cog"
                                argCount;

#line 357 "diagnostic.cog"
                                            

#line 357 "diagnostic.cog"
                                          ii

#line 357 "diagnostic.cog"
                                            ++)
{
{


#line 359 "diagnostic.cog"
             

#line 359 "diagnostic.cog"
             

#line 359 "diagnostic.cog"
      fprintf(

#line 359 "diagnostic.cog"
              stderr, 

#line 359 "diagnostic.cog"
                      "[");


#line 360 "diagnostic.cog"
                        

#line 360 "diagnostic.cog"
                        

#line 360 "diagnostic.cog"
      printDiagnosticArg(

#line 360 "diagnostic.cog"
                             

#line 360 "diagnostic.cog"
                         args[

#line 360 "diagnostic.cog"
                              ii]);


#line 361 "diagnostic.cog"
             

#line 361 "diagnostic.cog"
             

#line 361 "diagnostic.cog"
      fprintf(

#line 361 "diagnostic.cog"
              stderr, 

#line 361 "diagnostic.cog"
                      "]");
}
}}


#line 364 "diagnostic.cog"
         

#line 364 "diagnostic.cog"
         

#line 364 "diagnostic.cog"
  fprintf(

#line 364 "diagnostic.cog"
          stderr, 

#line 364 "diagnostic.cog"
                  "\n");


#line 366 "diagnostic.cog"
     if(

#line 366 "diagnostic.cog"
                 

#line 366 "diagnostic.cog"
        severity 

#line 366 "diagnostic.cog"
                 >= 

#line 366 "diagnostic.cog"
                    kSeverity_Error)
{


#line 368 "diagnostic.cog"
                        

#line 368 "diagnostic.cog"
                        

#line 368 "diagnostic.cog"
             DEREF(

#line 368 "diagnostic.cog"
         sink).errorCount

#line 368 "diagnostic.cog"
                        ++;


#line 369 "diagnostic.cog"
         if(

#line 369 "diagnostic.cog"
                     

#line 369 "diagnostic.cog"
            severity 

#line 369 "diagnostic.cog"
                     >= 

#line 369 "diagnostic.cog"
                        kSeverity_Fatal)
{


#line 371 "diagnostic.cog"
                   

#line 371 "diagnostic.cog"
                   

#line 371 "diagnostic.cog"
          cogAssert(

#line 371 "diagnostic.cog"
                    

#line 371 "diagnostic.cog"
                    !

#line 371 "diagnostic.cog"
                     "fatal");


#line 372 "diagnostic.cog"
                 

#line 372 "diagnostic.cog"
                 

#line 372 "diagnostic.cog"
             exit(

#line 372 "diagnostic.cog"
                  1);
}
}
}


#line 5 "emit.cog"
 

#line 12 "emit.cog"
 

#line 12 "emit.cog"
                                                      

#line 12 "emit.cog"
                                        DiagnosticSink

#line 12 "emit.cog"
                                                      * getSink(

#line 12 "emit.cog"
                                  

#line 12 "emit.cog"
                       EmitContext

#line 12 "emit.cog"
                                  * context)
{


#line 14 "emit.cog"
     return 

#line 14 "emit.cog"
            

#line 14 "emit.cog"
            &

#line 14 "emit.cog"
                            DEREF(

#line 14 "emit.cog"
                    DEREF(

#line 14 "emit.cog"
             context).session).sink;
}


#line 17 "emit.cog"
 

#line 24 "emit.cog"
 void emit(

#line 25 "emit.cog"
                      

#line 25 "emit.cog"
           EmitContext

#line 25 "emit.cog"
                      * context, 

#line 26 "emit.cog"
        StringSpan text)
{


#line 28 "emit.cog"
        

#line 28 "emit.cog"
        

#line 28 "emit.cog"
  fwrite(

#line 28 "emit.cog"
             DEREF(

#line 28 "emit.cog"
         text).begin, 

#line 28 "emit.cog"
                     1, 

#line 28 "emit.cog"
                                 

#line 28 "emit.cog"
                            DEREF(

#line 28 "emit.cog"
                        text).end 

#line 28 "emit.cog"
                                 - 

#line 28 "emit.cog"
                                       DEREF(

#line 28 "emit.cog"
                                   text).begin, 

#line 28 "emit.cog"
                                                      DEREF(

#line 28 "emit.cog"
                                               context).stream);
}


#line 31 "emit.cog"
 void emit(

#line 32 "emit.cog"
                      

#line 32 "emit.cog"
           EmitContext

#line 32 "emit.cog"
                      * context, 

#line 33 "emit.cog"
            

#line 33 "emit.cog"
        Char

#line 33 "emit.cog"
            * text)
{


#line 35 "emit.cog"
      

#line 35 "emit.cog"
      

#line 35 "emit.cog"
  emit(

#line 35 "emit.cog"
       context, 

#line 35 "emit.cog"
                                    

#line 35 "emit.cog"
                TerminatedStringSpan(

#line 35 "emit.cog"
                                     text));
}


#line 87 "string.cog"
 

#line 92 "string.cog"
  TerminatedStringSpan::TerminatedStringSpan(

#line 92 "string.cog"
             ConstPtr<

#line 92 "string.cog"
                      Char>  text)
{


#line 94 "string.cog"
       DEREF(

#line 94 "string.cog"
   this).begin = 

#line 94 "string.cog"
                cast<

#line 94 "string.cog"
                     Ptr<

#line 94 "string.cog"
                         Char> >(

#line 94 "string.cog"
                                 text);


#line 95 "string.cog"
       DEREF(

#line 95 "string.cog"
   this).end = 

#line 95 "string.cog"
              cast<

#line 95 "string.cog"
                   Ptr<

#line 95 "string.cog"
                       Char> >(

#line 95 "string.cog"
                                    

#line 95 "string.cog"
                               text 

#line 95 "string.cog"
                                    + 

#line 95 "string.cog"
                                            

#line 95 "string.cog"
                                      strlen(

#line 95 "string.cog"
                                             text));
}


#line 99 "string.cog"
  TerminatedStringSpan::TerminatedStringSpan()
{
}


#line 102 "string.cog"
  TerminatedStringSpan::TerminatedStringSpan(

#line 103 "string.cog"
          Ptr<

#line 103 "string.cog"
              Char>  begin, 

#line 104 "string.cog"
        Ptr<

#line 104 "string.cog"
            Char>  end)
{


#line 106 "string.cog"
       DEREF(

#line 106 "string.cog"
   this).begin = 

#line 106 "string.cog"
                begin;


#line 107 "string.cog"
       DEREF(

#line 107 "string.cog"
   this).end = 

#line 107 "string.cog"
              end;
}


#line 110 "string.cog"
  

#line 110 "string.cog"
                         StringSpan TerminatedStringSpan::asStringSpan()
{


#line 112 "string.cog"
   return 

#line 112 "string.cog"
                    

#line 112 "string.cog"
          StringSpan(

#line 112 "string.cog"
                     begin, 

#line 112 "string.cog"
                            end);
}


#line 3 "name.cog"
 

#line 38 "emit.cog"
 void emit(

#line 39 "emit.cog"
                      

#line 39 "emit.cog"
           EmitContext

#line 39 "emit.cog"
                      * context, 

#line 40 "emit.cog"
            

#line 40 "emit.cog"
        Name

#line 40 "emit.cog"
            * name)
{


#line 42 "emit.cog"
      

#line 42 "emit.cog"
      

#line 42 "emit.cog"
  emit(

#line 42 "emit.cog"
       context, 

#line 42 "emit.cog"
                       

#line 42 "emit.cog"
                getText(

#line 42 "emit.cog"
                        name));
}


#line 45 "emit.cog"
 void emitType(

#line 46 "emit.cog"
                      

#line 46 "emit.cog"
           EmitContext

#line 46 "emit.cog"
                      * context, 

#line 47 "emit.cog"
        Exp type)
{


#line 49 "emit.cog"
     if(

#line 49 "emit.cog"
        

#line 49 "emit.cog"
        !

#line 49 "emit.cog"
         type)
{


#line 51 "emit.cog"
             

#line 51 "emit.cog"
             

#line 51 "emit.cog"
         emit(

#line 51 "emit.cog"
              context, 

#line 51 "emit.cog"
                       "NullType");


#line 52 "emit.cog"
         return;
}


#line 55 "emit.cog"
         

#line 55 "emit.cog"
         

#line 55 "emit.cog"
  emitExp(

#line 55 "emit.cog"
          context, 

#line 55 "emit.cog"
                   type);
}


#line 58 "emit.cog"
 void emitVal(

#line 59 "emit.cog"
                         

#line 59 "emit.cog"
              EmitContext

#line 59 "emit.cog"
                         * context, 

#line 60 "emit.cog"
          Val val)
{
{


#line 63 "emit.cog"
                  

#line 63 "emit.cog"
                  

#line 63 "emit.cog"
         cogAssert(

#line 63 "emit.cog"
                   

#line 63 "emit.cog"
                   !

#line 63 "emit.cog"
                    "unimplemented");


#line 64 "emit.cog"
             

#line 64 "emit.cog"
             

#line 64 "emit.cog"
         emit(

#line 64 "emit.cog"
              context, 

#line 64 "emit.cog"
                       "UnknownVal");
}
}


#line 68 "emit.cog"
 void emitGenericQuals(

#line 69 "emit.cog"
                      

#line 69 "emit.cog"
           EmitContext

#line 69 "emit.cog"
                      * context, 

#line 70 "emit.cog"
        Decl decl)
{


#line 72 "emit.cog"
  

#line 72 "emit.cog"
  auto pp = 

#line 72 "emit.cog"
               DEREF(

#line 72 "emit.cog"
           decl).parent;


#line 73 "emit.cog"
  while(

#line 73 "emit.cog"
         pp)
{
{


#line 75 "emit.cog"
   

#line 75 "emit.cog"
   auto genericParent = 

#line 75 "emit.cog"
                                      

#line 75 "emit.cog"
                       as<

#line 75 "emit.cog"
                          GenericDecl> (

#line 75 "emit.cog"
                                       pp);


#line 76 "emit.cog"
   if(

#line 76 "emit.cog"
       genericParent)
{


#line 78 "emit.cog"
        

#line 78 "emit.cog"
        

#line 78 "emit.cog"
    emit(

#line 78 "emit.cog"
         context, 

#line 78 "emit.cog"
                  "template<");


#line 79 "emit.cog"
    

#line 79 "emit.cog"
    auto first = 

#line 79 "emit.cog"
                true;


#line 80 "emit.cog"
    for(auto dd : 

#line 80 "emit.cog"
                                        

#line 80 "emit.cog"
                               DEREF(

#line 80 "emit.cog"
                  genericParent).getDecls())
{
{


#line 82 "emit.cog"
     

#line 82 "emit.cog"
     auto genericParamDecl = 

#line 82 "emit.cog"
                                                

#line 82 "emit.cog"
                            as<

#line 82 "emit.cog"
                               GenericParamDecl> (

#line 82 "emit.cog"
                                                 dd);


#line 83 "emit.cog"
     if(

#line 83 "emit.cog"
         

#line 83 "emit.cog"
         !

#line 83 "emit.cog"
          genericParamDecl)
{


#line 84 "emit.cog"
      continue;
}


#line 86 "emit.cog"
     if(

#line 86 "emit.cog"
         

#line 86 "emit.cog"
         !

#line 86 "emit.cog"
          first)
{


#line 86 "emit.cog"
                     

#line 86 "emit.cog"
                     

#line 86 "emit.cog"
                 emit(

#line 86 "emit.cog"
                      context, 

#line 86 "emit.cog"
                               ", ");
}


#line 88 "emit.cog"
         

#line 88 "emit.cog"
         

#line 88 "emit.cog"
     emit(

#line 88 "emit.cog"
          context, 

#line 88 "emit.cog"
                   "typename ");


#line 89 "emit.cog"
         

#line 89 "emit.cog"
         

#line 89 "emit.cog"
     emit(

#line 89 "emit.cog"
          context, 

#line 89 "emit.cog"
                                   DEREF(

#line 89 "emit.cog"
                   genericParamDecl).name);


#line 90 "emit.cog"
     first = 

#line 90 "emit.cog"
             false;
}
}


#line 92 "emit.cog"
        

#line 92 "emit.cog"
        

#line 92 "emit.cog"
    emit(

#line 92 "emit.cog"
         context, 

#line 92 "emit.cog"
                  " > ");
}


#line 95 "emit.cog"
   pp = 

#line 95 "emit.cog"
          DEREF(

#line 95 "emit.cog"
        pp).parent;
}
}
}


#line 99 "emit.cog"
 void emitDeclName(

#line 100 "emit.cog"
                      

#line 100 "emit.cog"
           EmitContext

#line 100 "emit.cog"
                      * context, 

#line 101 "emit.cog"
        Decl decl, 

#line 102 "emit.cog"
        DeclEmitMode mode, 

#line 103 "emit.cog"
                 Bool includeModule)
{


#line 105 "emit.cog"
  

#line 105 "emit.cog"
  auto parent = 

#line 105 "emit.cog"
                   DEREF(

#line 105 "emit.cog"
               decl).parent;


#line 107 "emit.cog"
  

#line 107 "emit.cog"
  auto genericParent = 

#line 107 "emit.cog"
                                     

#line 107 "emit.cog"
                      as<

#line 107 "emit.cog"
                         GenericDecl> (

#line 107 "emit.cog"
                                      parent);


#line 108 "emit.cog"
  if(

#line 108 "emit.cog"
      genericParent)
{


#line 110 "emit.cog"
   parent = 

#line 110 "emit.cog"
                         DEREF(

#line 110 "emit.cog"
            genericParent).parent;
}


#line 113 "emit.cog"
  

#line 113 "emit.cog"
  auto aggTypeDecl = 

#line 113 "emit.cog"
                                    

#line 113 "emit.cog"
                    as<

#line 113 "emit.cog"
                        AggTypeDecl> (

#line 113 "emit.cog"
                                     parent);


#line 114 "emit.cog"
  if(

#line 114 "emit.cog"
      aggTypeDecl)
{


#line 116 "emit.cog"
   if(

#line 116 "emit.cog"
            

#line 116 "emit.cog"
       mode 

#line 116 "emit.cog"
            == 

#line 116 "emit.cog"
               kDeclEmitMode_Full)
{


#line 118 "emit.cog"
                              

#line 118 "emit.cog"
                              

#line 118 "emit.cog"
    emitDeclNameAndGenericArgs(

#line 118 "emit.cog"
                               context, 

#line 118 "emit.cog"
                                        parent, 

#line 118 "emit.cog"
                                                mode);


#line 119 "emit.cog"
        

#line 119 "emit.cog"
        

#line 119 "emit.cog"
    emit(

#line 119 "emit.cog"
         context, 

#line 119 "emit.cog"
                  "::");
}
}
else
{


#line 122 "emit.cog"
       if(auto moduleDecl = 

#line 122 "emit.cog"
                                         

#line 122 "emit.cog"
                           as<

#line 122 "emit.cog"
                              ModuleDecl> (

#line 122 "emit.cog"
                                          parent))
{


#line 124 "emit.cog"
   if(

#line 124 "emit.cog"
      includeModule)
{


#line 126 "emit.cog"
                

#line 126 "emit.cog"
                

#line 126 "emit.cog"
    emitDeclName(

#line 126 "emit.cog"
                 context, 

#line 126 "emit.cog"
                          parent, 

#line 126 "emit.cog"
                                  mode);


#line 127 "emit.cog"
        

#line 127 "emit.cog"
        

#line 127 "emit.cog"
    emit(

#line 127 "emit.cog"
         context, 

#line 127 "emit.cog"
                  "::");
}
}
}


#line 131 "emit.cog"
  

#line 131 "emit.cog"
  auto name = 

#line 131 "emit.cog"
                 DEREF(

#line 131 "emit.cog"
             decl).name;


#line 132 "emit.cog"
  

#line 132 "emit.cog"
  auto text = 

#line 132 "emit.cog"
                          DEREF(

#line 132 "emit.cog"
                    

#line 132 "emit.cog"
             getText(

#line 132 "emit.cog"
                     name)).begin;


#line 133 "emit.cog"
  

#line 133 "emit.cog"
  auto c = 

#line 133 "emit.cog"
              

#line 133 "emit.cog"
          text[

#line 133 "emit.cog"
               0];


#line 134 "emit.cog"
  if(

#line 134 "emit.cog"
          

#line 134 "emit.cog"
      'a' 

#line 134 "emit.cog"
          <= 

#line 134 "emit.cog"
               

#line 134 "emit.cog"
             c 

#line 134 "emit.cog"
               && 

#line 134 "emit.cog"
                    

#line 134 "emit.cog"
                  c 

#line 134 "emit.cog"
                    <= 

#line 134 "emit.cog"
                       'z')
{
}
else
{


#line 135 "emit.cog"
       if(

#line 135 "emit.cog"
               

#line 135 "emit.cog"
           'A' 

#line 135 "emit.cog"
               <= 

#line 135 "emit.cog"
                    

#line 135 "emit.cog"
                  c 

#line 135 "emit.cog"
                    && 

#line 135 "emit.cog"
                         

#line 135 "emit.cog"
                       c 

#line 135 "emit.cog"
                         <= 

#line 135 "emit.cog"
                            'Z')
{
}
else
{


#line 136 "emit.cog"
       if(

#line 136 "emit.cog"
               

#line 136 "emit.cog"
           '_' 

#line 136 "emit.cog"
               == 

#line 136 "emit.cog"
                    

#line 136 "emit.cog"
                  c 

#line 136 "emit.cog"
                    || 

#line 136 "emit.cog"
                         

#line 136 "emit.cog"
                       0 

#line 136 "emit.cog"
                         == 

#line 136 "emit.cog"
                            c)
{
}
else
{


#line 139 "emit.cog"
       

#line 139 "emit.cog"
       

#line 139 "emit.cog"
   emit(

#line 139 "emit.cog"
        context, 

#line 139 "emit.cog"
                 "operator");
}
}
}


#line 141 "emit.cog"
      

#line 141 "emit.cog"
      

#line 141 "emit.cog"
  emit(

#line 141 "emit.cog"
       context, 

#line 141 "emit.cog"
                    DEREF(

#line 141 "emit.cog"
                decl).name);
}


#line 144 "emit.cog"
 void emitDeclName(

#line 145 "emit.cog"
                      

#line 145 "emit.cog"
           EmitContext

#line 145 "emit.cog"
                      * context, 

#line 146 "emit.cog"
        Decl decl, 

#line 147 "emit.cog"
        DeclEmitMode mode)
{


#line 149 "emit.cog"
              

#line 149 "emit.cog"
              

#line 149 "emit.cog"
  emitDeclName(

#line 149 "emit.cog"
               context, 

#line 149 "emit.cog"
                        decl, 

#line 149 "emit.cog"
                              mode, 

#line 149 "emit.cog"
                                    false);
}


#line 152 "emit.cog"
 void emitDeclNameAndGenericArgs(

#line 153 "emit.cog"
                      

#line 153 "emit.cog"
           EmitContext

#line 153 "emit.cog"
                      * context, 

#line 154 "emit.cog"
        Decl decl, 

#line 155 "emit.cog"
        DeclEmitMode mode)
{


#line 157 "emit.cog"
  

#line 157 "emit.cog"
  auto parent = 

#line 157 "emit.cog"
                   DEREF(

#line 157 "emit.cog"
               decl).parent;


#line 159 "emit.cog"
  

#line 159 "emit.cog"
  auto genericParent = 

#line 159 "emit.cog"
                                     

#line 159 "emit.cog"
                      as<

#line 159 "emit.cog"
                         GenericDecl> (

#line 159 "emit.cog"
                                      parent);


#line 161 "emit.cog"
              

#line 161 "emit.cog"
              

#line 161 "emit.cog"
  emitDeclName(

#line 161 "emit.cog"
               context, 

#line 161 "emit.cog"
                        decl, 

#line 161 "emit.cog"
                              mode);


#line 163 "emit.cog"
  if(auto classDecl = 

#line 163 "emit.cog"
                                  

#line 163 "emit.cog"
                     as<

#line 163 "emit.cog"
                        ClassDecl> (

#line 163 "emit.cog"
                                   decl))
{


#line 165 "emit.cog"
       

#line 165 "emit.cog"
       

#line 165 "emit.cog"
   emit(

#line 165 "emit.cog"
        context, 

#line 165 "emit.cog"
                 "Impl");
}


#line 168 "emit.cog"
  if(

#line 168 "emit.cog"
                    

#line 168 "emit.cog"
      genericParent 

#line 168 "emit.cog"
                    && 

#line 168 "emit.cog"
                       (

#line 168 "emit.cog"
                             

#line 168 "emit.cog"
                        mode 

#line 168 "emit.cog"
                             == 

#line 168 "emit.cog"
                                kDeclEmitMode_Full))
{


#line 170 "emit.cog"
       

#line 170 "emit.cog"
       

#line 170 "emit.cog"
   emit(

#line 170 "emit.cog"
        context, 

#line 170 "emit.cog"
                 "<");


#line 171 "emit.cog"
   

#line 171 "emit.cog"
   auto first = 

#line 171 "emit.cog"
               true;


#line 172 "emit.cog"
   for(auto dd : 

#line 172 "emit.cog"
                                       

#line 172 "emit.cog"
                              DEREF(

#line 172 "emit.cog"
                 genericParent).getDecls())
{
{


#line 174 "emit.cog"
    

#line 174 "emit.cog"
    auto genericParamDecl = 

#line 174 "emit.cog"
                                               

#line 174 "emit.cog"
                           as<

#line 174 "emit.cog"
                              GenericParamDecl> (

#line 174 "emit.cog"
                                                dd);


#line 175 "emit.cog"
    if(

#line 175 "emit.cog"
        

#line 175 "emit.cog"
        !

#line 175 "emit.cog"
         genericParamDecl)
{


#line 176 "emit.cog"
     continue;
}


#line 178 "emit.cog"
    if(

#line 178 "emit.cog"
        

#line 178 "emit.cog"
        !

#line 178 "emit.cog"
         first)
{


#line 178 "emit.cog"
                    

#line 178 "emit.cog"
                    

#line 178 "emit.cog"
                emit(

#line 178 "emit.cog"
                     context, 

#line 178 "emit.cog"
                              ", ");
}


#line 180 "emit.cog"
        

#line 180 "emit.cog"
        

#line 180 "emit.cog"
    emit(

#line 180 "emit.cog"
         context, 

#line 180 "emit.cog"
                                  DEREF(

#line 180 "emit.cog"
                  genericParamDecl).name);


#line 181 "emit.cog"
    first = 

#line 181 "emit.cog"
            false;
}
}


#line 183 "emit.cog"
       

#line 183 "emit.cog"
       

#line 183 "emit.cog"
   emit(

#line 183 "emit.cog"
        context, 

#line 183 "emit.cog"
                 " > ");
}
}


#line 187 "emit.cog"
 void emitDeclarator(

#line 188 "emit.cog"
                      

#line 188 "emit.cog"
           EmitContext

#line 188 "emit.cog"
                      * context, 

#line 189 "emit.cog"
        Exp type, 

#line 190 "emit.cog"
        Decl decl, 

#line 191 "emit.cog"
        DeclEmitMode mode)
{


#line 193 "emit.cog"
          

#line 193 "emit.cog"
          

#line 193 "emit.cog"
  emitType(

#line 193 "emit.cog"
           context, 

#line 193 "emit.cog"
                    type);


#line 194 "emit.cog"
      

#line 194 "emit.cog"
      

#line 194 "emit.cog"
  emit(

#line 194 "emit.cog"
       context, 

#line 194 "emit.cog"
                " ");


#line 196 "emit.cog"
              

#line 196 "emit.cog"
              

#line 196 "emit.cog"
  emitDeclName(

#line 196 "emit.cog"
               context, 

#line 196 "emit.cog"
                        decl, 

#line 196 "emit.cog"
                              mode);
}


#line 199 "emit.cog"
 void emitDeclarator(

#line 200 "emit.cog"
                      

#line 200 "emit.cog"
           EmitContext

#line 200 "emit.cog"
                      * context, 

#line 201 "emit.cog"
        TypeExp type, 

#line 202 "emit.cog"
        Decl decl, 

#line 203 "emit.cog"
        DeclEmitMode mode)
{


#line 205 "emit.cog"
                

#line 205 "emit.cog"
                

#line 205 "emit.cog"
  emitDeclarator(

#line 205 "emit.cog"
                 context, 

#line 205 "emit.cog"
                              DEREF(

#line 205 "emit.cog"
                          type).exp, 

#line 205 "emit.cog"
                                    decl, 

#line 205 "emit.cog"
                                          mode);
}


#line 210 "emit.cog"
 void emitBinaryExp(

#line 211 "emit.cog"
                         

#line 211 "emit.cog"
              EmitContext

#line 211 "emit.cog"
                         * context, 

#line 212 "emit.cog"
          AppExpBase exp, 

#line 213 "emit.cog"
             

#line 213 "emit.cog"
         Char

#line 213 "emit.cog"
             * op)
{


#line 215 "emit.cog"
            

#line 215 "emit.cog"
            

#line 215 "emit.cog"
     emitExp(

#line 215 "emit.cog"
             context, 

#line 215 "emit.cog"
                                   DEREF(

#line 215 "emit.cog"
                              DEREF(

#line 215 "emit.cog"
                         DEREF(

#line 215 "emit.cog"
                      exp).args).head).exp);


#line 216 "emit.cog"
         

#line 216 "emit.cog"
         

#line 216 "emit.cog"
     emit(

#line 216 "emit.cog"
          context, 

#line 216 "emit.cog"
                   " ");


#line 217 "emit.cog"
         

#line 217 "emit.cog"
         

#line 217 "emit.cog"
     emit(

#line 217 "emit.cog"
          context, 

#line 217 "emit.cog"
                   op);


#line 218 "emit.cog"
         

#line 218 "emit.cog"
         

#line 218 "emit.cog"
     emit(

#line 218 "emit.cog"
          context, 

#line 218 "emit.cog"
                   " ");


#line 219 "emit.cog"
            

#line 219 "emit.cog"
            

#line 219 "emit.cog"
     emitExp(

#line 219 "emit.cog"
             context, 

#line 219 "emit.cog"
                                        DEREF(

#line 219 "emit.cog"
                                   DEREF(

#line 219 "emit.cog"
                              DEREF(

#line 219 "emit.cog"
                         DEREF(

#line 219 "emit.cog"
                      exp).args).head).next).exp);
}


#line 222 "emit.cog"
 void emitStringVal(

#line 223 "emit.cog"
                         

#line 223 "emit.cog"
              EmitContext

#line 223 "emit.cog"
                         * context, 

#line 224 "emit.cog"
          StringSpan str)
{


#line 226 "emit.cog"
     

#line 226 "emit.cog"
     auto cursor = 

#line 226 "emit.cog"
                     DEREF(

#line 226 "emit.cog"
                  str).begin;


#line 227 "emit.cog"
     while(

#line 227 "emit.cog"
                  

#line 227 "emit.cog"
           cursor 

#line 227 "emit.cog"
                  != 

#line 227 "emit.cog"
                        DEREF(

#line 227 "emit.cog"
                     str).end)
{
{


#line 229 "emit.cog"
         switch(

#line 229 "emit.cog"
                

#line 229 "emit.cog"
                *

#line 229 "emit.cog"
                 cursor)
{
case 

#line 231 "emit.cog"
              '\n':
{


#line 231 "emit.cog"
                        

#line 231 "emit.cog"
                        

#line 231 "emit.cog"
                    emit(

#line 231 "emit.cog"
                         context, 

#line 231 "emit.cog"
                                  "\\n");
}
{


#line 231 "emit.cog"
                                          break;
}
case 

#line 232 "emit.cog"
        '\r':
{


#line 232 "emit.cog"
                  

#line 232 "emit.cog"
                  

#line 232 "emit.cog"
              emit(

#line 232 "emit.cog"
                   context, 

#line 232 "emit.cog"
                            "\\r");
}
{


#line 232 "emit.cog"
                                    break;
}
case 

#line 233 "emit.cog"
        '\\':
{


#line 233 "emit.cog"
                  

#line 233 "emit.cog"
                  

#line 233 "emit.cog"
              emit(

#line 233 "emit.cog"
                   context, 

#line 233 "emit.cog"
                            "\\\\");
}
{


#line 233 "emit.cog"
                                     break;
}
case 

#line 234 "emit.cog"
        '\t':
{


#line 234 "emit.cog"
                  

#line 234 "emit.cog"
                  

#line 234 "emit.cog"
              emit(

#line 234 "emit.cog"
                   context, 

#line 234 "emit.cog"
                            "\\t");
}
{


#line 234 "emit.cog"
                                    break;
}
case 

#line 235 "emit.cog"
        '\'':
{


#line 235 "emit.cog"
                  

#line 235 "emit.cog"
                  

#line 235 "emit.cog"
              emit(

#line 235 "emit.cog"
                   context, 

#line 235 "emit.cog"
                            "\\\'");
}
{


#line 235 "emit.cog"
                                     break;
}
case 

#line 236 "emit.cog"
        '\"':
{


#line 236 "emit.cog"
                  

#line 236 "emit.cog"
                  

#line 236 "emit.cog"
              emit(

#line 236 "emit.cog"
                   context, 

#line 236 "emit.cog"
                            "\\\"");
}
{


#line 236 "emit.cog"
                                     break;
}
default:
{
{


#line 240 "emit.cog"
     

#line 240 "emit.cog"
     

#line 240 "emit.cog"
                FixedSizeArray<

#line 240 "emit.cog"
                               2, 

#line 240 "emit.cog"
                                  Char>  text;


#line 241 "emit.cog"
         

#line 241 "emit.cog"
     text[

#line 241 "emit.cog"
          0] = 

#line 241 "emit.cog"
               

#line 241 "emit.cog"
               *

#line 241 "emit.cog"
                cursor;


#line 242 "emit.cog"
         

#line 242 "emit.cog"
     text[

#line 242 "emit.cog"
          1] = 

#line 242 "emit.cog"
               0;


#line 244 "emit.cog"
                     

#line 244 "emit.cog"
                     

#line 244 "emit.cog"
                 emit(

#line 244 "emit.cog"
                      context, 

#line 244 "emit.cog"
                               text);
}
}
{


#line 246 "emit.cog"
             break;
}
}


#line 248 "emit.cog"
               

#line 248 "emit.cog"
               

#line 248 "emit.cog"
         cursor

#line 248 "emit.cog"
               ++;
}
}
}


#line 252 "emit.cog"
 void emitStringVal(

#line 253 "emit.cog"
                         

#line 253 "emit.cog"
              EmitContext

#line 253 "emit.cog"
                         * context, 

#line 254 "emit.cog"
          String str)
{


#line 256 "emit.cog"
  

#line 256 "emit.cog"
  auto strSpan = 

#line 256 "emit.cog"
                          

#line 256 "emit.cog"
                   DEREF(

#line 256 "emit.cog"
                str).asSpan();


#line 257 "emit.cog"
               

#line 257 "emit.cog"
               

#line 257 "emit.cog"
  emitStringVal(

#line 257 "emit.cog"
                context, 

#line 257 "emit.cog"
                                   

#line 257 "emit.cog"
                         StringSpan(

#line 257 "emit.cog"
                                           DEREF(

#line 257 "emit.cog"
                                    strSpan).begin, 

#line 257 "emit.cog"
                                                          DEREF(

#line 257 "emit.cog"
                                                   strSpan).end));
}


#line 260 "emit.cog"
 void emitExp(

#line 261 "emit.cog"
                         

#line 261 "emit.cog"
              EmitContext

#line 261 "emit.cog"
                         * context, 

#line 262 "emit.cog"
       Exp exp)
{


#line 264 "emit.cog"
                   

#line 264 "emit.cog"
                   

#line 264 "emit.cog"
  emitLineDirective(

#line 264 "emit.cog"
                    context, 

#line 264 "emit.cog"
                             exp);


#line 266 "emit.cog"
  if(auto nameExp = 

#line 266 "emit.cog"
                               

#line 266 "emit.cog"
                    as<

#line 266 "emit.cog"
                       NameExp> (

#line 266 "emit.cog"
                                exp))
{


#line 268 "emit.cog"
       

#line 268 "emit.cog"
       

#line 268 "emit.cog"
   emit(

#line 268 "emit.cog"
        context, 

#line 268 "emit.cog"
                        DEREF(

#line 268 "emit.cog"
                 nameExp).name);
}
else
{


#line 270 "emit.cog"
       if(auto memberExpr = 

#line 270 "emit.cog"
                                         

#line 270 "emit.cog"
                            as<

#line 270 "emit.cog"
                               MemberExp> (

#line 270 "emit.cog"
                                          exp))
{


#line 272 "emit.cog"
       

#line 272 "emit.cog"
       

#line 272 "emit.cog"
   emit(

#line 272 "emit.cog"
        context, 

#line 272 "emit.cog"
                 "DEREF(");


#line 273 "emit.cog"
          

#line 273 "emit.cog"
          

#line 273 "emit.cog"
   emitExp(

#line 273 "emit.cog"
           context, 

#line 273 "emit.cog"
                              DEREF(

#line 273 "emit.cog"
                    memberExpr).base);


#line 274 "emit.cog"
       

#line 274 "emit.cog"
       

#line 274 "emit.cog"
   emit(

#line 274 "emit.cog"
        context, 

#line 274 "emit.cog"
                 ")");


#line 275 "emit.cog"
       

#line 275 "emit.cog"
       

#line 275 "emit.cog"
   emit(

#line 275 "emit.cog"
        context, 

#line 275 "emit.cog"
                 ".");


#line 276 "emit.cog"
       

#line 276 "emit.cog"
       

#line 276 "emit.cog"
   emit(

#line 276 "emit.cog"
        context, 

#line 276 "emit.cog"
                           DEREF(

#line 276 "emit.cog"
                 memberExpr).memberName);
}
else
{


#line 278 "emit.cog"
       if(auto parenExpr = 

#line 278 "emit.cog"
                                       

#line 278 "emit.cog"
                           as<

#line 278 "emit.cog"
                              ParenExp> (

#line 278 "emit.cog"
                                        exp))
{


#line 280 "emit.cog"
       

#line 280 "emit.cog"
       

#line 280 "emit.cog"
   emit(

#line 280 "emit.cog"
        context, 

#line 280 "emit.cog"
                 "(");


#line 281 "emit.cog"
          

#line 281 "emit.cog"
          

#line 281 "emit.cog"
   emitExp(

#line 281 "emit.cog"
           context, 

#line 281 "emit.cog"
                             DEREF(

#line 281 "emit.cog"
                    parenExpr).base);


#line 282 "emit.cog"
       

#line 282 "emit.cog"
       

#line 282 "emit.cog"
   emit(

#line 282 "emit.cog"
        context, 

#line 282 "emit.cog"
                 ")");
}
else
{


#line 284 "emit.cog"
       if(auto genericAppExp = 

#line 284 "emit.cog"
                                                

#line 284 "emit.cog"
                               as<

#line 284 "emit.cog"
                                  GenericAppExp> (

#line 284 "emit.cog"
                                                 exp))
{


#line 286 "emit.cog"
          

#line 286 "emit.cog"
          

#line 286 "emit.cog"
   emitExp(

#line 286 "emit.cog"
           context, 

#line 286 "emit.cog"
                                 DEREF(

#line 286 "emit.cog"
                    genericAppExp).base);


#line 287 "emit.cog"
       

#line 287 "emit.cog"
       

#line 287 "emit.cog"
   emit(

#line 287 "emit.cog"
        context, 

#line 287 "emit.cog"
                 "<");


#line 288 "emit.cog"
   

#line 288 "emit.cog"
   auto first = 

#line 288 "emit.cog"
               true;


#line 289 "emit.cog"
   for(auto arg : 

#line 289 "emit.cog"
                               DEREF(

#line 289 "emit.cog"
                  genericAppExp).args)
{
{


#line 291 "emit.cog"
    if(

#line 291 "emit.cog"
        

#line 291 "emit.cog"
        !

#line 291 "emit.cog"
         first)
{


#line 291 "emit.cog"
                    

#line 291 "emit.cog"
                    

#line 291 "emit.cog"
                emit(

#line 291 "emit.cog"
                     context, 

#line 291 "emit.cog"
                              ", ");
}


#line 292 "emit.cog"
           

#line 292 "emit.cog"
           

#line 292 "emit.cog"
    emitExp(

#line 292 "emit.cog"
            context, 

#line 292 "emit.cog"
                        DEREF(

#line 292 "emit.cog"
                     arg).exp);


#line 293 "emit.cog"
    first = 

#line 293 "emit.cog"
            false;
}
}


#line 295 "emit.cog"
       

#line 295 "emit.cog"
       

#line 295 "emit.cog"
   emit(

#line 295 "emit.cog"
        context, 

#line 295 "emit.cog"
                 "> ");
}
else
{


#line 297 "emit.cog"
       if(auto infixExp = 

#line 297 "emit.cog"
                                      

#line 297 "emit.cog"
                          as<

#line 297 "emit.cog"
                             InfixExp> (

#line 297 "emit.cog"
                                       exp))
{


#line 299 "emit.cog"
          

#line 299 "emit.cog"
          

#line 299 "emit.cog"
   emitExp(

#line 299 "emit.cog"
           context, 

#line 299 "emit.cog"
                                      DEREF(

#line 299 "emit.cog"
                                 DEREF(

#line 299 "emit.cog"
                            DEREF(

#line 299 "emit.cog"
                    infixExp).args).head).exp);


#line 300 "emit.cog"
       

#line 300 "emit.cog"
       

#line 300 "emit.cog"
   emit(

#line 300 "emit.cog"
        context, 

#line 300 "emit.cog"
                 " ");


#line 301 "emit.cog"
          

#line 301 "emit.cog"
          

#line 301 "emit.cog"
   emitExp(

#line 301 "emit.cog"
           context, 

#line 301 "emit.cog"
                            DEREF(

#line 301 "emit.cog"
                    infixExp).base);


#line 302 "emit.cog"
       

#line 302 "emit.cog"
       

#line 302 "emit.cog"
   emit(

#line 302 "emit.cog"
        context, 

#line 302 "emit.cog"
                 " ");


#line 303 "emit.cog"
          

#line 303 "emit.cog"
          

#line 303 "emit.cog"
   emitExp(

#line 303 "emit.cog"
           context, 

#line 303 "emit.cog"
                                           DEREF(

#line 303 "emit.cog"
                                      DEREF(

#line 303 "emit.cog"
                                 DEREF(

#line 303 "emit.cog"
                            DEREF(

#line 303 "emit.cog"
                    infixExp).args).head).next).exp);
}
else
{


#line 305 "emit.cog"
       if(auto prefixExp = 

#line 305 "emit.cog"
                                        

#line 305 "emit.cog"
                           as<

#line 305 "emit.cog"
                              PrefixExp> (

#line 305 "emit.cog"
                                         exp))
{


#line 307 "emit.cog"
          

#line 307 "emit.cog"
          

#line 307 "emit.cog"
   emitExp(

#line 307 "emit.cog"
           context, 

#line 307 "emit.cog"
                             DEREF(

#line 307 "emit.cog"
                    prefixExp).base);


#line 308 "emit.cog"
          

#line 308 "emit.cog"
          

#line 308 "emit.cog"
   emitExp(

#line 308 "emit.cog"
           context, 

#line 308 "emit.cog"
                                       DEREF(

#line 308 "emit.cog"
                                  DEREF(

#line 308 "emit.cog"
                             DEREF(

#line 308 "emit.cog"
                    prefixExp).args).head).exp);
}
else
{


#line 310 "emit.cog"
       if(auto postfixExp = 

#line 310 "emit.cog"
                                          

#line 310 "emit.cog"
                            as<

#line 310 "emit.cog"
                               PostfixExp> (

#line 310 "emit.cog"
                                           exp))
{


#line 312 "emit.cog"
          

#line 312 "emit.cog"
          

#line 312 "emit.cog"
   emitExp(

#line 312 "emit.cog"
           context, 

#line 312 "emit.cog"
                                        DEREF(

#line 312 "emit.cog"
                                   DEREF(

#line 312 "emit.cog"
                              DEREF(

#line 312 "emit.cog"
                    postfixExp).args).head).exp);


#line 313 "emit.cog"
          

#line 313 "emit.cog"
          

#line 313 "emit.cog"
   emitExp(

#line 313 "emit.cog"
           context, 

#line 313 "emit.cog"
                              DEREF(

#line 313 "emit.cog"
                    postfixExp).base);
}
else
{


#line 315 "emit.cog"
       if(auto indexExp = 

#line 315 "emit.cog"
                                      

#line 315 "emit.cog"
                          as<

#line 315 "emit.cog"
                             IndexExp> (

#line 315 "emit.cog"
                                       exp))
{


#line 317 "emit.cog"
          

#line 317 "emit.cog"
          

#line 317 "emit.cog"
   emitExp(

#line 317 "emit.cog"
           context, 

#line 317 "emit.cog"
                            DEREF(

#line 317 "emit.cog"
                    indexExp).base);


#line 318 "emit.cog"
       

#line 318 "emit.cog"
       

#line 318 "emit.cog"
   emit(

#line 318 "emit.cog"
        context, 

#line 318 "emit.cog"
                 "[");


#line 319 "emit.cog"
   

#line 319 "emit.cog"
   auto first = 

#line 319 "emit.cog"
               true;


#line 320 "emit.cog"
   for(auto arg : 

#line 320 "emit.cog"
                          DEREF(

#line 320 "emit.cog"
                  indexExp).args)
{
{


#line 322 "emit.cog"
    if(

#line 322 "emit.cog"
        

#line 322 "emit.cog"
        !

#line 322 "emit.cog"
         first)
{


#line 322 "emit.cog"
                    

#line 322 "emit.cog"
                    

#line 322 "emit.cog"
                emit(

#line 322 "emit.cog"
                     context, 

#line 322 "emit.cog"
                              ", ");
}


#line 323 "emit.cog"
           

#line 323 "emit.cog"
           

#line 323 "emit.cog"
    emitExp(

#line 323 "emit.cog"
            context, 

#line 323 "emit.cog"
                        DEREF(

#line 323 "emit.cog"
                     arg).exp);


#line 324 "emit.cog"
    first = 

#line 324 "emit.cog"
            false;
}
}


#line 326 "emit.cog"
       

#line 326 "emit.cog"
       

#line 326 "emit.cog"
   emit(

#line 326 "emit.cog"
        context, 

#line 326 "emit.cog"
                 "]");
}
else
{


#line 328 "emit.cog"
       if(auto appExp = 

#line 328 "emit.cog"
                                     

#line 328 "emit.cog"
                       as<

#line 328 "emit.cog"
                          AppExpBase> (

#line 328 "emit.cog"
                                      exp))
{


#line 330 "emit.cog"
                

#line 330 "emit.cog"
                

#line 330 "emit.cog"
         emitExp(

#line 330 "emit.cog"
                 context, 

#line 330 "emit.cog"
                                DEREF(

#line 330 "emit.cog"
                          appExp).base);


#line 331 "emit.cog"
             

#line 331 "emit.cog"
             

#line 331 "emit.cog"
         emit(

#line 331 "emit.cog"
              context, 

#line 331 "emit.cog"
                       "(");


#line 332 "emit.cog"
         

#line 332 "emit.cog"
         auto first = 

#line 332 "emit.cog"
                     true;


#line 333 "emit.cog"
         for(auto arg : 

#line 333 "emit.cog"
                              DEREF(

#line 333 "emit.cog"
                        appExp).args)
{
{


#line 335 "emit.cog"
             if(

#line 335 "emit.cog"
                

#line 335 "emit.cog"
                !

#line 335 "emit.cog"
                 first)
{


#line 335 "emit.cog"
                            

#line 335 "emit.cog"
                            

#line 335 "emit.cog"
                        emit(

#line 335 "emit.cog"
                             context, 

#line 335 "emit.cog"
                                      ", ");
}


#line 336 "emit.cog"
                    

#line 336 "emit.cog"
                    

#line 336 "emit.cog"
             emitExp(

#line 336 "emit.cog"
                     context, 

#line 336 "emit.cog"
                                 DEREF(

#line 336 "emit.cog"
                              arg).exp);


#line 337 "emit.cog"
             first = 

#line 337 "emit.cog"
                     false;
}
}


#line 339 "emit.cog"
             

#line 339 "emit.cog"
             

#line 339 "emit.cog"
         emit(

#line 339 "emit.cog"
              context, 

#line 339 "emit.cog"
                       ")");
}
else
{


#line 341 "emit.cog"
          if(auto assignExp = 

#line 341 "emit.cog"
                                          

#line 341 "emit.cog"
                             as<

#line 341 "emit.cog"
                                AssignExp> (

#line 341 "emit.cog"
                                           exp))
{


#line 343 "emit.cog"
                

#line 343 "emit.cog"
                

#line 343 "emit.cog"
         emitExp(

#line 343 "emit.cog"
                 context, 

#line 343 "emit.cog"
                                   DEREF(

#line 343 "emit.cog"
                          assignExp).left);


#line 344 "emit.cog"
             

#line 344 "emit.cog"
             

#line 344 "emit.cog"
         emit(

#line 344 "emit.cog"
              context, 

#line 344 "emit.cog"
                       " = ");


#line 345 "emit.cog"
                

#line 345 "emit.cog"
                

#line 345 "emit.cog"
         emitExp(

#line 345 "emit.cog"
                 context, 

#line 345 "emit.cog"
                                   DEREF(

#line 345 "emit.cog"
                          assignExp).right);
}
else
{


#line 347 "emit.cog"
          if(auto intLitExp = 

#line 347 "emit.cog"
                                          

#line 347 "emit.cog"
                             as<

#line 347 "emit.cog"
                                IntLitExp> (

#line 347 "emit.cog"
                                           exp))
{


#line 350 "emit.cog"
   

#line 350 "emit.cog"
   

#line 350 "emit.cog"
                FixedSizeArray<

#line 350 "emit.cog"
                               16, 

#line 350 "emit.cog"
                                  Char>  buffer;


#line 351 "emit.cog"
                

#line 351 "emit.cog"
                

#line 351 "emit.cog"
         sprintf(

#line 351 "emit.cog"
                 buffer, 

#line 351 "emit.cog"
                         "%lld", 

#line 351 "emit.cog"
                                          DEREF(

#line 351 "emit.cog"
                                 intLitExp).val);


#line 352 "emit.cog"
             

#line 352 "emit.cog"
             

#line 352 "emit.cog"
         emit(

#line 352 "emit.cog"
              context, 

#line 352 "emit.cog"
                       buffer);
}
else
{


#line 354 "emit.cog"
          if(auto strLitExp = 

#line 354 "emit.cog"
                                             

#line 354 "emit.cog"
                             as<

#line 354 "emit.cog"
                                StringLitExp> (

#line 354 "emit.cog"
                                              exp))
{


#line 356 "emit.cog"
             

#line 356 "emit.cog"
             

#line 356 "emit.cog"
         emit(

#line 356 "emit.cog"
              context, 

#line 356 "emit.cog"
                       "\"");


#line 357 "emit.cog"
                      

#line 357 "emit.cog"
                      

#line 357 "emit.cog"
         emitStringVal(

#line 357 "emit.cog"
                       context, 

#line 357 "emit.cog"
                                         DEREF(

#line 357 "emit.cog"
                                strLitExp).val);


#line 358 "emit.cog"
             

#line 358 "emit.cog"
             

#line 358 "emit.cog"
         emit(

#line 358 "emit.cog"
              context, 

#line 358 "emit.cog"
                       "\"");
}
else
{


#line 360 "emit.cog"
          if(auto charLitExp = 

#line 360 "emit.cog"
                                                 

#line 360 "emit.cog"
                              as<

#line 360 "emit.cog"
                                 CharacterLitExp> (

#line 360 "emit.cog"
                                                  exp))
{


#line 362 "emit.cog"
             

#line 362 "emit.cog"
             

#line 362 "emit.cog"
         emit(

#line 362 "emit.cog"
              context, 

#line 362 "emit.cog"
                       "\'");


#line 363 "emit.cog"
                      

#line 363 "emit.cog"
                      

#line 363 "emit.cog"
         emitStringVal(

#line 363 "emit.cog"
                       context, 

#line 363 "emit.cog"
                                          DEREF(

#line 363 "emit.cog"
                                charLitExp).val);


#line 364 "emit.cog"
             

#line 364 "emit.cog"
             

#line 364 "emit.cog"
         emit(

#line 364 "emit.cog"
              context, 

#line 364 "emit.cog"
                       "\'");
}
else
{


#line 366 "emit.cog"
          if(auto thisExpr = 

#line 366 "emit.cog"
                                        

#line 366 "emit.cog"
                            as<

#line 366 "emit.cog"
                               ThisExpr> (

#line 366 "emit.cog"
                                         exp))
{


#line 368 "emit.cog"
             

#line 368 "emit.cog"
             

#line 368 "emit.cog"
         emit(

#line 368 "emit.cog"
              context, 

#line 368 "emit.cog"
                       "this");
}
else
{


#line 370 "emit.cog"
          if(auto castExpr = 

#line 370 "emit.cog"
                                        

#line 370 "emit.cog"
                            as<

#line 370 "emit.cog"
                               CastExpr> (

#line 370 "emit.cog"
                                         exp))
{


#line 372 "emit.cog"
             

#line 372 "emit.cog"
             

#line 372 "emit.cog"
         emit(

#line 372 "emit.cog"
              context, 

#line 372 "emit.cog"
                       "cast<");


#line 373 "emit.cog"
           

#line 373 "emit.cog"
           

#line 373 "emit.cog"
   emitType(

#line 373 "emit.cog"
            context, 

#line 373 "emit.cog"
                                    DEREF(

#line 373 "emit.cog"
                             DEREF(

#line 373 "emit.cog"
                     castExpr).toType).exp);


#line 374 "emit.cog"
             

#line 374 "emit.cog"
             

#line 374 "emit.cog"
         emit(

#line 374 "emit.cog"
              context, 

#line 374 "emit.cog"
                       ">(");


#line 375 "emit.cog"
          

#line 375 "emit.cog"
          

#line 375 "emit.cog"
   emitExp(

#line 375 "emit.cog"
           context, 

#line 375 "emit.cog"
                            DEREF(

#line 375 "emit.cog"
                    castExpr).arg);


#line 376 "emit.cog"
             

#line 376 "emit.cog"
             

#line 376 "emit.cog"
         emit(

#line 376 "emit.cog"
              context, 

#line 376 "emit.cog"
                       ")");
}
else
{


#line 380 "emit.cog"
                 

#line 380 "emit.cog"
                 

#line 380 "emit.cog"
         diagnose(

#line 380 "emit.cog"
                         

#line 380 "emit.cog"
                  getSink(

#line 380 "emit.cog"
                          context), 

#line 380 "emit.cog"
                                       DEREF(

#line 380 "emit.cog"
                                    exp).loc, 

#line 380 "emit.cog"
                                             kDiagnostic_unimplemented, 

#line 380 "emit.cog"
                                                                                       DEREF(

#line 380 "emit.cog"
                                                                           DEREF(

#line 380 "emit.cog"
                                                                        exp).directClass).name);


#line 381 "emit.cog"
                  

#line 381 "emit.cog"
                  

#line 381 "emit.cog"
         cogAssert(

#line 381 "emit.cog"
                   

#line 381 "emit.cog"
                   !

#line 381 "emit.cog"
                    "unimplemented");
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


#line 388 "emit.cog"
 void emitBlockStmt(

#line 389 "emit.cog"
                      

#line 389 "emit.cog"
           EmitContext

#line 389 "emit.cog"
                      * context, 

#line 390 "emit.cog"
        BlockStmt stmt)
{


#line 392 "emit.cog"
      

#line 392 "emit.cog"
      

#line 392 "emit.cog"
  emit(

#line 392 "emit.cog"
       context, 

#line 392 "emit.cog"
                "{\n");


#line 393 "emit.cog"
  for(auto stmt : 

#line 393 "emit.cog"
                               

#line 393 "emit.cog"
                      DEREF(

#line 393 "emit.cog"
                  stmt).getStmts())
{
{


#line 395 "emit.cog"
           

#line 395 "emit.cog"
           

#line 395 "emit.cog"
   emitStmt(

#line 395 "emit.cog"
            context, 

#line 395 "emit.cog"
                     stmt);
}
}


#line 397 "emit.cog"
      

#line 397 "emit.cog"
      

#line 397 "emit.cog"
  emit(

#line 397 "emit.cog"
       context, 

#line 397 "emit.cog"
                "}\n");
}


#line 400 "emit.cog"
 void emitBlockStmt(

#line 401 "emit.cog"
                         

#line 401 "emit.cog"
              EmitContext

#line 401 "emit.cog"
                         * context, 

#line 402 "emit.cog"
        Stmt stmt)
{


#line 404 "emit.cog"
     if(auto blockStmt = 

#line 404 "emit.cog"
                                     

#line 404 "emit.cog"
                        as<

#line 404 "emit.cog"
                           BlockStmt> (

#line 404 "emit.cog"
                                      stmt))
{


#line 406 "emit.cog"
                      

#line 406 "emit.cog"
                      

#line 406 "emit.cog"
         emitBlockStmt(

#line 406 "emit.cog"
                       context, 

#line 406 "emit.cog"
                                blockStmt);
}
else
{


#line 410 "emit.cog"
             

#line 410 "emit.cog"
             

#line 410 "emit.cog"
         emit(

#line 410 "emit.cog"
              context, 

#line 410 "emit.cog"
                       "{\n");


#line 411 "emit.cog"
                 

#line 411 "emit.cog"
                 

#line 411 "emit.cog"
         emitStmt(

#line 411 "emit.cog"
                  context, 

#line 411 "emit.cog"
                           stmt);


#line 412 "emit.cog"
             

#line 412 "emit.cog"
             

#line 412 "emit.cog"
         emit(

#line 412 "emit.cog"
              context, 

#line 412 "emit.cog"
                       "}\n");
}
}


#line 416 "emit.cog"
 void emit(

#line 417 "emit.cog"
                      

#line 417 "emit.cog"
           EmitContext

#line 417 "emit.cog"
                      * context, 

#line 418 "emit.cog"
         Int value)
{


#line 420 "emit.cog"
  

#line 420 "emit.cog"
  

#line 420 "emit.cog"
               FixedSizeArray<

#line 420 "emit.cog"
                              32, 

#line 420 "emit.cog"
                                 Char>  buffer;


#line 421 "emit.cog"
         

#line 421 "emit.cog"
         

#line 421 "emit.cog"
  sprintf(

#line 421 "emit.cog"
          buffer, 

#line 421 "emit.cog"
                  "%lld", 

#line 421 "emit.cog"
                               

#line 421 "emit.cog"
                          Int64(

#line 421 "emit.cog"
                                value));


#line 422 "emit.cog"
      

#line 422 "emit.cog"
      

#line 422 "emit.cog"
  emit(

#line 422 "emit.cog"
       context, 

#line 422 "emit.cog"
                buffer);
}


#line 425 "emit.cog"
 void emitLineDirective(

#line 426 "emit.cog"
                      

#line 426 "emit.cog"
           EmitContext

#line 426 "emit.cog"
                      * context, 

#line 427 "emit.cog"
       Syntax syn)
{


#line 429 "emit.cog"
  if(

#line 429 "emit.cog"
                                   

#line 429 "emit.cog"
            DEREF(

#line 429 "emit.cog"
     context).suppressLineDirective 

#line 429 "emit.cog"
                                   > 

#line 429 "emit.cog"
                                     0)
{


#line 430 "emit.cog"
   return;
}


#line 432 "emit.cog"
  

#line 432 "emit.cog"
  auto loc = 

#line 432 "emit.cog"
               DEREF(

#line 432 "emit.cog"
            syn).loc;


#line 433 "emit.cog"
  if(

#line 433 "emit.cog"
     

#line 433 "emit.cog"
     !

#line 433 "emit.cog"
         DEREF(

#line 433 "emit.cog"
      loc).raw)
{


#line 434 "emit.cog"
   return;
}


#line 436 "emit.cog"
  

#line 436 "emit.cog"
  auto expandedLoc = 

#line 436 "emit.cog"
                             

#line 436 "emit.cog"
                    expandLoc(

#line 436 "emit.cog"
                                     DEREF(

#line 436 "emit.cog"
                              context).session, 

#line 436 "emit.cog"
                                               loc);


#line 440 "emit.cog"
      

#line 440 "emit.cog"
      

#line 440 "emit.cog"
  emit(

#line 440 "emit.cog"
       context, 

#line 440 "emit.cog"
                "\n\n#line ");


#line 441 "emit.cog"
      

#line 441 "emit.cog"
      

#line 441 "emit.cog"
  emit(

#line 441 "emit.cog"
       context, 

#line 441 "emit.cog"
                           DEREF(

#line 441 "emit.cog"
                expandedLoc).line);


#line 442 "emit.cog"
      

#line 442 "emit.cog"
      

#line 442 "emit.cog"
  emit(

#line 442 "emit.cog"
       context, 

#line 442 "emit.cog"
                " \"");


#line 443 "emit.cog"
      

#line 443 "emit.cog"
      

#line 443 "emit.cog"
  emit(

#line 443 "emit.cog"
       context, 

#line 443 "emit.cog"
                           DEREF(

#line 443 "emit.cog"
                expandedLoc).file);


#line 444 "emit.cog"
      

#line 444 "emit.cog"
      

#line 444 "emit.cog"
  emit(

#line 444 "emit.cog"
       context, 

#line 444 "emit.cog"
                "\"\n");


#line 447 "emit.cog"
  {


#line 447 "emit.cog"
      

#line 447 "emit.cog"
      

#line 447 "emit.cog"
               Int ii = 

#line 447 "emit.cog"
                     0;
for(;

#line 447 "emit.cog"
                           

#line 447 "emit.cog"
                        ii 

#line 447 "emit.cog"
                           < 

#line 447 "emit.cog"
                                        DEREF(

#line 447 "emit.cog"
                             expandedLoc).column;

#line 447 "emit.cog"
                                                 

#line 447 "emit.cog"
                                                 ++

#line 447 "emit.cog"
                                                   ii)
{
{


#line 449 "emit.cog"
       

#line 449 "emit.cog"
       

#line 449 "emit.cog"
   emit(

#line 449 "emit.cog"
        context, 

#line 449 "emit.cog"
                 " ");
}
}}
}


#line 453 "emit.cog"
 void emitStmt(

#line 454 "emit.cog"
                      

#line 454 "emit.cog"
           EmitContext

#line 454 "emit.cog"
                      * context, 

#line 455 "emit.cog"
        Stmt stmt)
{


#line 457 "emit.cog"
                   

#line 457 "emit.cog"
                   

#line 457 "emit.cog"
  emitLineDirective(

#line 457 "emit.cog"
                    context, 

#line 457 "emit.cog"
                             stmt);


#line 459 "emit.cog"
  if(auto blockStmt = 

#line 459 "emit.cog"
                                  

#line 459 "emit.cog"
                     as<

#line 459 "emit.cog"
                        BlockStmt> (

#line 459 "emit.cog"
                                   stmt))
{


#line 461 "emit.cog"
                

#line 461 "emit.cog"
                

#line 461 "emit.cog"
   emitBlockStmt(

#line 461 "emit.cog"
                 context, 

#line 461 "emit.cog"
                          blockStmt);
}
else
{


#line 463 "emit.cog"
       if(auto decl = 

#line 463 "emit.cog"
                             

#line 463 "emit.cog"
                     as<

#line 463 "emit.cog"
                        Decl> (

#line 463 "emit.cog"
                              stmt))
{


#line 465 "emit.cog"
           

#line 465 "emit.cog"
           

#line 465 "emit.cog"
   emitDecl(

#line 465 "emit.cog"
            context, 

#line 465 "emit.cog"
                     decl, 

#line 465 "emit.cog"
                           kDeclEmitMode_Full);
}
else
{


#line 467 "emit.cog"
          if(auto exp = 

#line 467 "emit.cog"
                              

#line 467 "emit.cog"
                       as<

#line 467 "emit.cog"
                          Exp> (

#line 467 "emit.cog"
                               stmt))
{


#line 469 "emit.cog"
                

#line 469 "emit.cog"
                

#line 469 "emit.cog"
         emitExp(

#line 469 "emit.cog"
                 context, 

#line 469 "emit.cog"
                          exp);


#line 470 "emit.cog"
             

#line 470 "emit.cog"
             

#line 470 "emit.cog"
         emit(

#line 470 "emit.cog"
              context, 

#line 470 "emit.cog"
                       ";\n");
}
else
{


#line 472 "emit.cog"
          if(auto whileStmt = 

#line 472 "emit.cog"
                                          

#line 472 "emit.cog"
                             as<

#line 472 "emit.cog"
                                WhileStmt> (

#line 472 "emit.cog"
                                           stmt))
{


#line 474 "emit.cog"
             

#line 474 "emit.cog"
             

#line 474 "emit.cog"
         emit(

#line 474 "emit.cog"
              context, 

#line 474 "emit.cog"
                       "while(");


#line 475 "emit.cog"
                

#line 475 "emit.cog"
                

#line 475 "emit.cog"
         emitExp(

#line 475 "emit.cog"
                 context, 

#line 475 "emit.cog"
                                   DEREF(

#line 475 "emit.cog"
                          whileStmt).condition);


#line 476 "emit.cog"
             

#line 476 "emit.cog"
             

#line 476 "emit.cog"
         emit(

#line 476 "emit.cog"
              context, 

#line 476 "emit.cog"
                       ")\n{\n");


#line 477 "emit.cog"
                 

#line 477 "emit.cog"
                 

#line 477 "emit.cog"
         emitStmt(

#line 477 "emit.cog"
                  context, 

#line 477 "emit.cog"
                                    DEREF(

#line 477 "emit.cog"
                           whileStmt).body);


#line 478 "emit.cog"
             

#line 478 "emit.cog"
             

#line 478 "emit.cog"
         emit(

#line 478 "emit.cog"
              context, 

#line 478 "emit.cog"
                       "}\n");
}
else
{


#line 480 "emit.cog"
       if(auto forEachStmt = 

#line 480 "emit.cog"
                                            

#line 480 "emit.cog"
                             as<

#line 480 "emit.cog"
                                ForEachStmt> (

#line 480 "emit.cog"
                                             stmt))
{


#line 482 "emit.cog"
       

#line 482 "emit.cog"
       

#line 482 "emit.cog"
   emit(

#line 482 "emit.cog"
        context, 

#line 482 "emit.cog"
                 "for(auto ");


#line 483 "emit.cog"
       

#line 483 "emit.cog"
       

#line 483 "emit.cog"
   emit(

#line 483 "emit.cog"
        context, 

#line 483 "emit.cog"
                            DEREF(

#line 483 "emit.cog"
                 forEachStmt).name);


#line 484 "emit.cog"
       

#line 484 "emit.cog"
       

#line 484 "emit.cog"
   emit(

#line 484 "emit.cog"
        context, 

#line 484 "emit.cog"
                 " : ");


#line 485 "emit.cog"
          

#line 485 "emit.cog"
          

#line 485 "emit.cog"
   emitExp(

#line 485 "emit.cog"
           context, 

#line 485 "emit.cog"
                               DEREF(

#line 485 "emit.cog"
                    forEachStmt).exp);


#line 486 "emit.cog"
       

#line 486 "emit.cog"
       

#line 486 "emit.cog"
   emit(

#line 486 "emit.cog"
        context, 

#line 486 "emit.cog"
                 ")\n{\n");


#line 487 "emit.cog"
           

#line 487 "emit.cog"
           

#line 487 "emit.cog"
   emitStmt(

#line 487 "emit.cog"
            context, 

#line 487 "emit.cog"
                                DEREF(

#line 487 "emit.cog"
                     forEachStmt).body);


#line 488 "emit.cog"
       

#line 488 "emit.cog"
       

#line 488 "emit.cog"
   emit(

#line 488 "emit.cog"
        context, 

#line 488 "emit.cog"
                 "}\n");
}
else
{


#line 490 "emit.cog"
       if(auto forStmt = 

#line 490 "emit.cog"
                                    

#line 490 "emit.cog"
                         as<

#line 490 "emit.cog"
                            ForStmt> (

#line 490 "emit.cog"
                                     stmt))
{


#line 492 "emit.cog"
       

#line 492 "emit.cog"
       

#line 492 "emit.cog"
   emit(

#line 492 "emit.cog"
        context, 

#line 492 "emit.cog"
                 "{\n");


#line 493 "emit.cog"
   if(

#line 493 "emit.cog"
              DEREF(

#line 493 "emit.cog"
       forStmt).init)
{


#line 495 "emit.cog"
            

#line 495 "emit.cog"
            

#line 495 "emit.cog"
    emitStmt(

#line 495 "emit.cog"
             context, 

#line 495 "emit.cog"
                             DEREF(

#line 495 "emit.cog"
                      forStmt).init);
}


#line 497 "emit.cog"
       

#line 497 "emit.cog"
       

#line 497 "emit.cog"
   emit(

#line 497 "emit.cog"
        context, 

#line 497 "emit.cog"
                 "for(;");


#line 498 "emit.cog"
   if(

#line 498 "emit.cog"
              DEREF(

#line 498 "emit.cog"
       forStmt).condition)
{


#line 500 "emit.cog"
           

#line 500 "emit.cog"
           

#line 500 "emit.cog"
    emitExp(

#line 500 "emit.cog"
            context, 

#line 500 "emit.cog"
                            DEREF(

#line 500 "emit.cog"
                     forStmt).condition);
}


#line 502 "emit.cog"
       

#line 502 "emit.cog"
       

#line 502 "emit.cog"
   emit(

#line 502 "emit.cog"
        context, 

#line 502 "emit.cog"
                 ";");


#line 503 "emit.cog"
   if(

#line 503 "emit.cog"
              DEREF(

#line 503 "emit.cog"
       forStmt).iter)
{


#line 505 "emit.cog"
           

#line 505 "emit.cog"
           

#line 505 "emit.cog"
    emitExp(

#line 505 "emit.cog"
            context, 

#line 505 "emit.cog"
                            DEREF(

#line 505 "emit.cog"
                     forStmt).iter);
}


#line 507 "emit.cog"
       

#line 507 "emit.cog"
       

#line 507 "emit.cog"
   emit(

#line 507 "emit.cog"
        context, 

#line 507 "emit.cog"
                 ")\n{\n");


#line 508 "emit.cog"
           

#line 508 "emit.cog"
           

#line 508 "emit.cog"
   emitStmt(

#line 508 "emit.cog"
            context, 

#line 508 "emit.cog"
                            DEREF(

#line 508 "emit.cog"
                     forStmt).body);


#line 509 "emit.cog"
       

#line 509 "emit.cog"
       

#line 509 "emit.cog"
   emit(

#line 509 "emit.cog"
        context, 

#line 509 "emit.cog"
                 "}}\n");
}
else
{


#line 511 "emit.cog"
       if(auto switchStmt = 

#line 511 "emit.cog"
                                          

#line 511 "emit.cog"
                            as<

#line 511 "emit.cog"
                               SwitchStmt> (

#line 511 "emit.cog"
                                           stmt))
{


#line 513 "emit.cog"
       

#line 513 "emit.cog"
       

#line 513 "emit.cog"
   emit(

#line 513 "emit.cog"
        context, 

#line 513 "emit.cog"
                 "switch(");


#line 514 "emit.cog"
          

#line 514 "emit.cog"
          

#line 514 "emit.cog"
   emitExp(

#line 514 "emit.cog"
           context, 

#line 514 "emit.cog"
                              DEREF(

#line 514 "emit.cog"
                    switchStmt).condition);


#line 515 "emit.cog"
       

#line 515 "emit.cog"
       

#line 515 "emit.cog"
   emit(

#line 515 "emit.cog"
        context, 

#line 515 "emit.cog"
                 ")\n{\n");


#line 516 "emit.cog"
   {


#line 516 "emit.cog"
       

#line 516 "emit.cog"
       auto cc = 

#line 516 "emit.cog"
                          DEREF(

#line 516 "emit.cog"
                switchStmt).cases;
for(;

#line 516 "emit.cog"
                                  cc;

#line 516 "emit.cog"
                                      cc = 

#line 516 "emit.cog"
                                             DEREF(

#line 516 "emit.cog"
                                           cc).next)
{
{


#line 518 "emit.cog"
    {


#line 518 "emit.cog"
         

#line 518 "emit.cog"
         auto aa = 

#line 518 "emit.cog"
                    DEREF(

#line 518 "emit.cog"
                  cc).values;
for(;

#line 518 "emit.cog"
                             aa;

#line 518 "emit.cog"
                                 aa = 

#line 518 "emit.cog"
                                        DEREF(

#line 518 "emit.cog"
                                      aa).next)
{
{


#line 520 "emit.cog"
     if(

#line 520 "emit.cog"
           DEREF(

#line 520 "emit.cog"
         aa).exp)
{


#line 522 "emit.cog"
          

#line 522 "emit.cog"
          

#line 522 "emit.cog"
      emit(

#line 522 "emit.cog"
           context, 

#line 522 "emit.cog"
                    "case ");


#line 523 "emit.cog"
             

#line 523 "emit.cog"
             

#line 523 "emit.cog"
      emitExp(

#line 523 "emit.cog"
              context, 

#line 523 "emit.cog"
                         DEREF(

#line 523 "emit.cog"
                       aa).exp);
}
else
{


#line 527 "emit.cog"
          

#line 527 "emit.cog"
          

#line 527 "emit.cog"
      emit(

#line 527 "emit.cog"
           context, 

#line 527 "emit.cog"
                    "default");
}


#line 529 "emit.cog"
         

#line 529 "emit.cog"
         

#line 529 "emit.cog"
     emit(

#line 529 "emit.cog"
          context, 

#line 529 "emit.cog"
                   ":\n");
}
}}


#line 531 "emit.cog"
        

#line 531 "emit.cog"
        

#line 531 "emit.cog"
    emit(

#line 531 "emit.cog"
         context, 

#line 531 "emit.cog"
                  "{\n");


#line 532 "emit.cog"
            

#line 532 "emit.cog"
            

#line 532 "emit.cog"
    emitStmt(

#line 532 "emit.cog"
             context, 

#line 532 "emit.cog"
                        DEREF(

#line 532 "emit.cog"
                      cc).body);


#line 533 "emit.cog"
        

#line 533 "emit.cog"
        

#line 533 "emit.cog"
    emit(

#line 533 "emit.cog"
         context, 

#line 533 "emit.cog"
                  "}\n");
}
}}


#line 535 "emit.cog"
       

#line 535 "emit.cog"
       

#line 535 "emit.cog"
   emit(

#line 535 "emit.cog"
        context, 

#line 535 "emit.cog"
                 "}\n");
}
else
{


#line 537 "emit.cog"
       if(auto ifStmt = 

#line 537 "emit.cog"
                                 

#line 537 "emit.cog"
                       as<

#line 537 "emit.cog"
                          IfStmt> (

#line 537 "emit.cog"
                                  stmt))
{


#line 539 "emit.cog"
             

#line 539 "emit.cog"
             

#line 539 "emit.cog"
         emit(

#line 539 "emit.cog"
              context, 

#line 539 "emit.cog"
                       "if(");


#line 540 "emit.cog"
                

#line 540 "emit.cog"
                

#line 540 "emit.cog"
         emitExp(

#line 540 "emit.cog"
                 context, 

#line 540 "emit.cog"
                                DEREF(

#line 540 "emit.cog"
                          ifStmt).condition);


#line 541 "emit.cog"
             

#line 541 "emit.cog"
             

#line 541 "emit.cog"
         emit(

#line 541 "emit.cog"
              context, 

#line 541 "emit.cog"
                       ")\n");


#line 542 "emit.cog"
                      

#line 542 "emit.cog"
                      

#line 542 "emit.cog"
         emitBlockStmt(

#line 542 "emit.cog"
                       context, 

#line 542 "emit.cog"
                                      DEREF(

#line 542 "emit.cog"
                                ifStmt).thenStmt);


#line 543 "emit.cog"
         if(auto elseStmt = 

#line 543 "emit.cog"
                                 DEREF(

#line 543 "emit.cog"
                           ifStmt).elseStmt)
{


#line 545 "emit.cog"
                 

#line 545 "emit.cog"
                 

#line 545 "emit.cog"
             emit(

#line 545 "emit.cog"
                  context, 

#line 545 "emit.cog"
                           "else\n");


#line 546 "emit.cog"
                          

#line 546 "emit.cog"
                          

#line 546 "emit.cog"
             emitBlockStmt(

#line 546 "emit.cog"
                           context, 

#line 546 "emit.cog"
                                    elseStmt);
}
}
else
{


#line 549 "emit.cog"
       if(auto ifLetStmt = 

#line 549 "emit.cog"
                                       

#line 549 "emit.cog"
                          as<

#line 549 "emit.cog"
                             IfLetStmt> (

#line 549 "emit.cog"
                                        stmt))
{


#line 551 "emit.cog"
             

#line 551 "emit.cog"
             

#line 551 "emit.cog"
         emit(

#line 551 "emit.cog"
              context, 

#line 551 "emit.cog"
                       "if(auto ");


#line 552 "emit.cog"
             

#line 552 "emit.cog"
             

#line 552 "emit.cog"
         emit(

#line 552 "emit.cog"
              context, 

#line 552 "emit.cog"
                                DEREF(

#line 552 "emit.cog"
                       ifLetStmt).name);


#line 553 "emit.cog"
             

#line 553 "emit.cog"
             

#line 553 "emit.cog"
         emit(

#line 553 "emit.cog"
              context, 

#line 553 "emit.cog"
                       " = ");


#line 554 "emit.cog"
                

#line 554 "emit.cog"
                

#line 554 "emit.cog"
         emitExp(

#line 554 "emit.cog"
                 context, 

#line 554 "emit.cog"
                                   DEREF(

#line 554 "emit.cog"
                          ifLetStmt).init);


#line 555 "emit.cog"
             

#line 555 "emit.cog"
             

#line 555 "emit.cog"
         emit(

#line 555 "emit.cog"
              context, 

#line 555 "emit.cog"
                       ")\n");


#line 556 "emit.cog"
                      

#line 556 "emit.cog"
                      

#line 556 "emit.cog"
         emitBlockStmt(

#line 556 "emit.cog"
                       context, 

#line 556 "emit.cog"
                                         DEREF(

#line 556 "emit.cog"
                                ifLetStmt).thenStmt);


#line 557 "emit.cog"
         if(auto elseStmt = 

#line 557 "emit.cog"
                                    DEREF(

#line 557 "emit.cog"
                           ifLetStmt).elseStmt)
{


#line 559 "emit.cog"
                 

#line 559 "emit.cog"
                 

#line 559 "emit.cog"
             emit(

#line 559 "emit.cog"
                  context, 

#line 559 "emit.cog"
                           "else\n");


#line 560 "emit.cog"
                          

#line 560 "emit.cog"
                          

#line 560 "emit.cog"
             emitBlockStmt(

#line 560 "emit.cog"
                           context, 

#line 560 "emit.cog"
                                    elseStmt);
}
}
else
{


#line 563 "emit.cog"
          if(auto returnStmt = 

#line 563 "emit.cog"
                                            

#line 563 "emit.cog"
                              as<

#line 563 "emit.cog"
                                 ReturnStmt> (

#line 563 "emit.cog"
                                             stmt))
{


#line 565 "emit.cog"
             

#line 565 "emit.cog"
             

#line 565 "emit.cog"
         emit(

#line 565 "emit.cog"
              context, 

#line 565 "emit.cog"
                       "return");


#line 566 "emit.cog"
         if(auto value = 

#line 566 "emit.cog"
                                  DEREF(

#line 566 "emit.cog"
                        returnStmt).value)
{


#line 568 "emit.cog"
                 

#line 568 "emit.cog"
                 

#line 568 "emit.cog"
             emit(

#line 568 "emit.cog"
                  context, 

#line 568 "emit.cog"
                           " ");


#line 569 "emit.cog"
                    

#line 569 "emit.cog"
                    

#line 569 "emit.cog"
             emitExp(

#line 569 "emit.cog"
                     context, 

#line 569 "emit.cog"
                              value);
}


#line 571 "emit.cog"
             

#line 571 "emit.cog"
             

#line 571 "emit.cog"
         emit(

#line 571 "emit.cog"
              context, 

#line 571 "emit.cog"
                       ";\n");
}
else
{


#line 573 "emit.cog"
          if(auto breakStmt = 

#line 573 "emit.cog"
                                          

#line 573 "emit.cog"
                             as<

#line 573 "emit.cog"
                                BreakStmt> (

#line 573 "emit.cog"
                                           stmt))
{


#line 575 "emit.cog"
             

#line 575 "emit.cog"
             

#line 575 "emit.cog"
         emit(

#line 575 "emit.cog"
              context, 

#line 575 "emit.cog"
                       "break;\n");
}
else
{


#line 577 "emit.cog"
          if(auto continueStmt = 

#line 577 "emit.cog"
                                                

#line 577 "emit.cog"
                                as<

#line 577 "emit.cog"
                                   ContinueStmt> (

#line 577 "emit.cog"
                                                 stmt))
{


#line 579 "emit.cog"
             

#line 579 "emit.cog"
             

#line 579 "emit.cog"
         emit(

#line 579 "emit.cog"
              context, 

#line 579 "emit.cog"
                       "continue;\n");
}
else
{


#line 583 "emit.cog"
                 

#line 583 "emit.cog"
                 

#line 583 "emit.cog"
         diagnose(

#line 583 "emit.cog"
                         

#line 583 "emit.cog"
                  getSink(

#line 583 "emit.cog"
                          context), 

#line 583 "emit.cog"
                                        DEREF(

#line 583 "emit.cog"
                                    stmt).loc, 

#line 583 "emit.cog"
                                              kDiagnostic_unimplemented, 

#line 583 "emit.cog"
                                                                                         DEREF(

#line 583 "emit.cog"
                                                                             DEREF(

#line 583 "emit.cog"
                                                                         stmt).directClass).name);


#line 584 "emit.cog"
                  

#line 584 "emit.cog"
                  

#line 584 "emit.cog"
         cogAssert(

#line 584 "emit.cog"
                   

#line 584 "emit.cog"
                   !

#line 584 "emit.cog"
                    "unimplemented");
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


#line 590 "emit.cog"
 void emitClassDecl(

#line 591 "emit.cog"
                      

#line 591 "emit.cog"
           EmitContext

#line 591 "emit.cog"
                      * context, 

#line 592 "emit.cog"
              ClassDecl aggDecl, 

#line 593 "emit.cog"
        DeclEmitMode mode)
{


#line 596 "emit.cog"
  if(

#line 596 "emit.cog"
           

#line 596 "emit.cog"
      mode 

#line 596 "emit.cog"
           == 

#line 596 "emit.cog"
              kDeclEmitMode_Full)
{


#line 598 "emit.cog"
   for(auto dd : 

#line 598 "emit.cog"
                                 

#line 598 "emit.cog"
                        DEREF(

#line 598 "emit.cog"
                 aggDecl).getDecls())
{
{


#line 600 "emit.cog"
    if(auto varDecl = 

#line 600 "emit.cog"
                                 

#line 600 "emit.cog"
                      as<

#line 600 "emit.cog"
                         VarDecl> (

#line 600 "emit.cog"
                                  dd))
{


#line 601 "emit.cog"
     continue;
}


#line 603 "emit.cog"
            

#line 603 "emit.cog"
            

#line 603 "emit.cog"
    emitDecl(

#line 603 "emit.cog"
             context, 

#line 603 "emit.cog"
                      dd, 

#line 603 "emit.cog"
                          kDeclEmitMode_Full);
}
}


#line 606 "emit.cog"
   return;
}


#line 609 "emit.cog"
      

#line 609 "emit.cog"
      

#line 609 "emit.cog"
  emit(

#line 609 "emit.cog"
       context, 

#line 609 "emit.cog"
                "using ");


#line 610 "emit.cog"
         

#line 610 "emit.cog"
         

#line 610 "emit.cog"
     emit(

#line 610 "emit.cog"
          context, 

#line 610 "emit.cog"
                          DEREF(

#line 610 "emit.cog"
                   aggDecl).name);


#line 611 "emit.cog"
         

#line 611 "emit.cog"
         

#line 611 "emit.cog"
     emit(

#line 611 "emit.cog"
          context, 

#line 611 "emit.cog"
                   " = struct ");


#line 612 "emit.cog"
         

#line 612 "emit.cog"
         

#line 612 "emit.cog"
     emit(

#line 612 "emit.cog"
          context, 

#line 612 "emit.cog"
                          DEREF(

#line 612 "emit.cog"
                   aggDecl).name);


#line 613 "emit.cog"
         

#line 613 "emit.cog"
         

#line 613 "emit.cog"
     emit(

#line 613 "emit.cog"
          context, 

#line 613 "emit.cog"
                   "Impl* ");


#line 614 "emit.cog"
         

#line 614 "emit.cog"
         

#line 614 "emit.cog"
     emit(

#line 614 "emit.cog"
          context, 

#line 614 "emit.cog"
                   ";\n");


#line 616 "emit.cog"
      

#line 616 "emit.cog"
      

#line 616 "emit.cog"
  emit(

#line 616 "emit.cog"
       context, 

#line 616 "emit.cog"
                "struct ");


#line 617 "emit.cog"
         

#line 617 "emit.cog"
         

#line 617 "emit.cog"
     emit(

#line 617 "emit.cog"
          context, 

#line 617 "emit.cog"
                          DEREF(

#line 617 "emit.cog"
                   aggDecl).name);


#line 618 "emit.cog"
      

#line 618 "emit.cog"
      

#line 618 "emit.cog"
  emit(

#line 618 "emit.cog"
       context, 

#line 618 "emit.cog"
                "Impl");


#line 620 "emit.cog"
  if(

#line 620 "emit.cog"
           

#line 620 "emit.cog"
      mode 

#line 620 "emit.cog"
           <= 

#line 620 "emit.cog"
              kDeclEmitMode_MinimalForward)
{


#line 622 "emit.cog"
       

#line 622 "emit.cog"
       

#line 622 "emit.cog"
   emit(

#line 622 "emit.cog"
        context, 

#line 622 "emit.cog"
                 ";\n");


#line 623 "emit.cog"
   return;
}


#line 626 "emit.cog"
     if(auto base = 

#line 626 "emit.cog"
                               DEREF(

#line 626 "emit.cog"
                          DEREF(

#line 626 "emit.cog"
                   aggDecl).base).exp)
{


#line 628 "emit.cog"
       

#line 628 "emit.cog"
       

#line 628 "emit.cog"
   emit(

#line 628 "emit.cog"
        context, 

#line 628 "emit.cog"
                 " : ");


#line 629 "emit.cog"
           

#line 629 "emit.cog"
           

#line 629 "emit.cog"
   emitType(

#line 629 "emit.cog"
            context, 

#line 629 "emit.cog"
                     base);


#line 630 "emit.cog"
       

#line 630 "emit.cog"
       

#line 630 "emit.cog"
   emit(

#line 630 "emit.cog"
        context, 

#line 630 "emit.cog"
                 "Impl");
}
else
{


#line 634 "emit.cog"
       

#line 634 "emit.cog"
       

#line 634 "emit.cog"
   emit(

#line 634 "emit.cog"
        context, 

#line 634 "emit.cog"
                 " : cog::ObjectImpl");
}


#line 637 "emit.cog"
      

#line 637 "emit.cog"
      

#line 637 "emit.cog"
  emit(

#line 637 "emit.cog"
       context, 

#line 637 "emit.cog"
                "\n{\n");


#line 639 "emit.cog"
      

#line 639 "emit.cog"
      

#line 639 "emit.cog"
  emit(

#line 639 "emit.cog"
       context, 

#line 639 "emit.cog"
                "typedef cog::Class StaticClass;\n");


#line 640 "emit.cog"
      

#line 640 "emit.cog"
      

#line 640 "emit.cog"
  emit(

#line 640 "emit.cog"
       context, 

#line 640 "emit.cog"
                "static StaticClass staticClass;\n");


#line 643 "emit.cog"
              

#line 643 "emit.cog"
              

#line 643 "emit.cog"
     emitDecls(

#line 643 "emit.cog"
               context, 

#line 643 "emit.cog"
                        aggDecl, 

#line 643 "emit.cog"
                                 kDeclEmitMode_Forward);


#line 644 "emit.cog"
      

#line 644 "emit.cog"
      

#line 644 "emit.cog"
  emit(

#line 644 "emit.cog"
       context, 

#line 644 "emit.cog"
                "};\n");


#line 646 "emit.cog"
      

#line 646 "emit.cog"
      

#line 646 "emit.cog"
  emit(

#line 646 "emit.cog"
       context, 

#line 646 "emit.cog"
                "} namespace cog {\n");


#line 648 "emit.cog"
      

#line 648 "emit.cog"
      

#line 648 "emit.cog"
  emit(

#line 648 "emit.cog"
       context, 

#line 648 "emit.cog"
                "template<> struct ObjectClassImpl<");


#line 649 "emit.cog"
              

#line 649 "emit.cog"
              

#line 649 "emit.cog"
  emitDeclName(

#line 649 "emit.cog"
               context, 

#line 649 "emit.cog"
                        aggDecl, 

#line 649 "emit.cog"
                                 kDeclEmitMode_Full, 

#line 649 "emit.cog"
                                                     true);


#line 650 "emit.cog"
      

#line 650 "emit.cog"
      

#line 650 "emit.cog"
  emit(

#line 650 "emit.cog"
       context, 

#line 650 "emit.cog"
                " > { typedef ");


#line 651 "emit.cog"
              

#line 651 "emit.cog"
              

#line 651 "emit.cog"
  emitDeclName(

#line 651 "emit.cog"
               context, 

#line 651 "emit.cog"
                        aggDecl, 

#line 651 "emit.cog"
                                 kDeclEmitMode_Full, 

#line 651 "emit.cog"
                                                     true);


#line 652 "emit.cog"
      

#line 652 "emit.cog"
      

#line 652 "emit.cog"
  emit(

#line 652 "emit.cog"
       context, 

#line 652 "emit.cog"
                "Impl Impl; };\n");


#line 654 "emit.cog"
      

#line 654 "emit.cog"
      

#line 654 "emit.cog"
  emit(

#line 654 "emit.cog"
       context, 

#line 654 "emit.cog"
                "} namespace ");


#line 655 "emit.cog"
      

#line 655 "emit.cog"
      

#line 655 "emit.cog"
  emit(

#line 655 "emit.cog"
       context, 

#line 655 "emit.cog"
                                          DEREF(

#line 655 "emit.cog"
                               DEREF(

#line 655 "emit.cog"
                       DEREF(

#line 655 "emit.cog"
                context).session).moduleDecl).name);


#line 656 "emit.cog"
      

#line 656 "emit.cog"
      

#line 656 "emit.cog"
  emit(

#line 656 "emit.cog"
       context, 

#line 656 "emit.cog"
                " {\n");
}


#line 660 "emit.cog"
 void emitStructDecl(

#line 661 "emit.cog"
                      

#line 661 "emit.cog"
           EmitContext

#line 661 "emit.cog"
                      * context, 

#line 662 "emit.cog"
              StructDecl aggDecl, 

#line 663 "emit.cog"
        DeclEmitMode mode)
{


#line 666 "emit.cog"
  if(

#line 666 "emit.cog"
           

#line 666 "emit.cog"
      mode 

#line 666 "emit.cog"
           == 

#line 666 "emit.cog"
              kDeclEmitMode_Full)
{


#line 668 "emit.cog"
   for(auto dd : 

#line 668 "emit.cog"
                                 

#line 668 "emit.cog"
                        DEREF(

#line 668 "emit.cog"
                 aggDecl).getDecls())
{
{


#line 670 "emit.cog"
    if(auto varDecl = 

#line 670 "emit.cog"
                                 

#line 670 "emit.cog"
                      as<

#line 670 "emit.cog"
                         VarDecl> (

#line 670 "emit.cog"
                                  dd))
{


#line 671 "emit.cog"
     continue;
}


#line 673 "emit.cog"
            

#line 673 "emit.cog"
            

#line 673 "emit.cog"
    emitDecl(

#line 673 "emit.cog"
             context, 

#line 673 "emit.cog"
                      dd, 

#line 673 "emit.cog"
                          kDeclEmitMode_Full);
}
}


#line 676 "emit.cog"
   return;
}


#line 679 "emit.cog"
      

#line 679 "emit.cog"
      

#line 679 "emit.cog"
  emit(

#line 679 "emit.cog"
       context, 

#line 679 "emit.cog"
                "struct ");


#line 680 "emit.cog"
         

#line 680 "emit.cog"
         

#line 680 "emit.cog"
     emit(

#line 680 "emit.cog"
          context, 

#line 680 "emit.cog"
                          DEREF(

#line 680 "emit.cog"
                   aggDecl).name);


#line 682 "emit.cog"
  if(

#line 682 "emit.cog"
           

#line 682 "emit.cog"
      mode 

#line 682 "emit.cog"
           <= 

#line 682 "emit.cog"
              kDeclEmitMode_MinimalForward)
{


#line 684 "emit.cog"
       

#line 684 "emit.cog"
       

#line 684 "emit.cog"
   emit(

#line 684 "emit.cog"
        context, 

#line 684 "emit.cog"
                 ";\n");


#line 685 "emit.cog"
   return;
}


#line 688 "emit.cog"
     if(auto base = 

#line 688 "emit.cog"
                               DEREF(

#line 688 "emit.cog"
                          DEREF(

#line 688 "emit.cog"
                   aggDecl).base).exp)
{


#line 690 "emit.cog"
       

#line 690 "emit.cog"
       

#line 690 "emit.cog"
   emit(

#line 690 "emit.cog"
        context, 

#line 690 "emit.cog"
                 " : ");


#line 691 "emit.cog"
           

#line 691 "emit.cog"
           

#line 691 "emit.cog"
   emitType(

#line 691 "emit.cog"
            context, 

#line 691 "emit.cog"
                     base);
}


#line 694 "emit.cog"
      

#line 694 "emit.cog"
      

#line 694 "emit.cog"
  emit(

#line 694 "emit.cog"
       context, 

#line 694 "emit.cog"
                "\n{\n");


#line 696 "emit.cog"
      

#line 696 "emit.cog"
      

#line 696 "emit.cog"
  emit(

#line 696 "emit.cog"
       context, 

#line 696 "emit.cog"
                "typedef cog::Class StaticClass;\n");


#line 697 "emit.cog"
      

#line 697 "emit.cog"
      

#line 697 "emit.cog"
  emit(

#line 697 "emit.cog"
       context, 

#line 697 "emit.cog"
                "static StaticClass staticClass;\n");


#line 700 "emit.cog"
              

#line 700 "emit.cog"
              

#line 700 "emit.cog"
     emitDecls(

#line 700 "emit.cog"
               context, 

#line 700 "emit.cog"
                        aggDecl, 

#line 700 "emit.cog"
                                 kDeclEmitMode_Forward);


#line 701 "emit.cog"
      

#line 701 "emit.cog"
      

#line 701 "emit.cog"
  emit(

#line 701 "emit.cog"
       context, 

#line 701 "emit.cog"
                "};\n");
}


#line 704 "emit.cog"
 void emitVarDecl(

#line 705 "emit.cog"
                      

#line 705 "emit.cog"
           EmitContext

#line 705 "emit.cog"
                      * context, 

#line 706 "emit.cog"
           VarDeclBase varDecl, 

#line 707 "emit.cog"
        DeclEmitMode mode)
{


#line 709 "emit.cog"
  if(

#line 709 "emit.cog"
           

#line 709 "emit.cog"
      mode 

#line 709 "emit.cog"
           == 

#line 709 "emit.cog"
              kDeclEmitMode_MinimalForward)
{


#line 710 "emit.cog"
   return;
}


#line 712 "emit.cog"
  if(auto type = 

#line 712 "emit.cog"
                             DEREF(

#line 712 "emit.cog"
                        DEREF(

#line 712 "emit.cog"
                 varDecl).type).exp)
{


#line 714 "emit.cog"
                 

#line 714 "emit.cog"
                 

#line 714 "emit.cog"
   emitDeclarator(

#line 714 "emit.cog"
                  context, 

#line 714 "emit.cog"
                           type, 

#line 714 "emit.cog"
                                 varDecl, 

#line 714 "emit.cog"
                                          mode);
}
else
{


#line 718 "emit.cog"
       

#line 718 "emit.cog"
       

#line 718 "emit.cog"
   emit(

#line 718 "emit.cog"
        context, 

#line 718 "emit.cog"
                 "auto ");


#line 719 "emit.cog"
               

#line 719 "emit.cog"
               

#line 719 "emit.cog"
   emitDeclName(

#line 719 "emit.cog"
                context, 

#line 719 "emit.cog"
                         varDecl, 

#line 719 "emit.cog"
                                  mode);
}


#line 721 "emit.cog"
     if(auto initExp = 

#line 721 "emit.cog"
                             DEREF(

#line 721 "emit.cog"
                      varDecl).init)
{


#line 723 "emit.cog"
             

#line 723 "emit.cog"
             

#line 723 "emit.cog"
         emit(

#line 723 "emit.cog"
              context, 

#line 723 "emit.cog"
                       " = ");


#line 724 "emit.cog"
                

#line 724 "emit.cog"
                

#line 724 "emit.cog"
         emitExp(

#line 724 "emit.cog"
                 context, 

#line 724 "emit.cog"
                          initExp);
}


#line 726 "emit.cog"
      

#line 726 "emit.cog"
      

#line 726 "emit.cog"
  emit(

#line 726 "emit.cog"
       context, 

#line 726 "emit.cog"
                ";\n");
}


#line 729 "emit.cog"
 void emitParamDecl(

#line 730 "emit.cog"
                      

#line 730 "emit.cog"
           EmitContext

#line 730 "emit.cog"
                      * context, 

#line 731 "emit.cog"
             ParamDecl paramDecl)
{


#line 733 "emit.cog"
                

#line 733 "emit.cog"
                

#line 733 "emit.cog"
  emitDeclarator(

#line 733 "emit.cog"
                 context, 

#line 733 "emit.cog"
                                   DEREF(

#line 733 "emit.cog"
                          paramDecl).type, 

#line 733 "emit.cog"
                                          paramDecl, 

#line 733 "emit.cog"
                                                     kDeclEmitMode_Full);
}


#line 461 "syntax.cog"
 

#line 736 "emit.cog"
 void emitFuncDecl(

#line 737 "emit.cog"
                      

#line 737 "emit.cog"
           EmitContext

#line 737 "emit.cog"
                      * context, 

#line 738 "emit.cog"
            FuncDecl funcDecl, 

#line 739 "emit.cog"
        DeclEmitMode mode)
{


#line 741 "emit.cog"
  if(

#line 741 "emit.cog"
           

#line 741 "emit.cog"
      mode 

#line 741 "emit.cog"
           == 

#line 741 "emit.cog"
              kDeclEmitMode_MinimalForward)
{


#line 742 "emit.cog"
   return;
}


#line 744 "emit.cog"
  if(

#line 744 "emit.cog"
           

#line 744 "emit.cog"
      mode 

#line 744 "emit.cog"
           == 

#line 744 "emit.cog"
              kDeclEmitMode_Full)
{


#line 746 "emit.cog"
   if(

#line 746 "emit.cog"
       

#line 746 "emit.cog"
       !

#line 746 "emit.cog"
                DEREF(

#line 746 "emit.cog"
        funcDecl).body)
{


#line 747 "emit.cog"
    return;
}


#line 749 "emit.cog"
                   

#line 749 "emit.cog"
                   

#line 749 "emit.cog"
   emitGenericQuals(

#line 749 "emit.cog"
                    context, 

#line 749 "emit.cog"
                             funcDecl);
}


#line 752 "emit.cog"
  if(auto resultType = 

#line 752 "emit.cog"
                                          DEREF(

#line 752 "emit.cog"
                               DEREF(

#line 752 "emit.cog"
                       funcDecl).resultType).exp)
{


#line 754 "emit.cog"
                 

#line 754 "emit.cog"
                 

#line 754 "emit.cog"
   emitDeclarator(

#line 754 "emit.cog"
                  context, 

#line 754 "emit.cog"
                           resultType, 

#line 754 "emit.cog"
                                       funcDecl, 

#line 754 "emit.cog"
                                                 mode);
}
else
{


#line 758 "emit.cog"
       

#line 758 "emit.cog"
       

#line 758 "emit.cog"
   emit(

#line 758 "emit.cog"
        context, 

#line 758 "emit.cog"
                 "void ");


#line 759 "emit.cog"
               

#line 759 "emit.cog"
               

#line 759 "emit.cog"
   emitDeclName(

#line 759 "emit.cog"
                context, 

#line 759 "emit.cog"
                         funcDecl, 

#line 759 "emit.cog"
                                   mode);
}


#line 762 "emit.cog"
      

#line 762 "emit.cog"
      

#line 762 "emit.cog"
  emit(

#line 762 "emit.cog"
       context, 

#line 762 "emit.cog"
                "(");


#line 764 "emit.cog"
  

#line 764 "emit.cog"
  auto first = 

#line 764 "emit.cog"
              true;


#line 765 "emit.cog"
  for(auto decl : 

#line 765 "emit.cog"
                                    

#line 765 "emit.cog"
                           DEREF(

#line 765 "emit.cog"
                   funcDecl).getDecls())
{
{


#line 767 "emit.cog"
   

#line 767 "emit.cog"
   auto param = 

#line 767 "emit.cog"
                            

#line 767 "emit.cog"
               as<

#line 767 "emit.cog"
                  ParamDecl> (

#line 767 "emit.cog"
                             decl);


#line 768 "emit.cog"
   if(

#line 768 "emit.cog"
      

#line 768 "emit.cog"
      !

#line 768 "emit.cog"
       param)
{


#line 768 "emit.cog"
              continue;
}


#line 770 "emit.cog"
   if(

#line 770 "emit.cog"
      

#line 770 "emit.cog"
      !

#line 770 "emit.cog"
       first)
{


#line 770 "emit.cog"
                  

#line 770 "emit.cog"
                  

#line 770 "emit.cog"
              emit(

#line 770 "emit.cog"
                   context, 

#line 770 "emit.cog"
                            ", ");
}


#line 771 "emit.cog"
                

#line 771 "emit.cog"
                

#line 771 "emit.cog"
   emitParamDecl(

#line 771 "emit.cog"
                 context, 

#line 771 "emit.cog"
                          param);


#line 772 "emit.cog"
   first = 

#line 772 "emit.cog"
           false;
}
}


#line 775 "emit.cog"
      

#line 775 "emit.cog"
      

#line 775 "emit.cog"
  emit(

#line 775 "emit.cog"
       context, 

#line 775 "emit.cog"
                ")");


#line 777 "emit.cog"
  

#line 777 "emit.cog"
  auto body = 

#line 777 "emit.cog"
                     DEREF(

#line 777 "emit.cog"
             funcDecl).body;


#line 778 "emit.cog"
  if(

#line 778 "emit.cog"
          

#line 778 "emit.cog"
     body 

#line 778 "emit.cog"
          && 

#line 778 "emit.cog"
                  

#line 778 "emit.cog"
             mode 

#line 778 "emit.cog"
                  == 

#line 778 "emit.cog"
                     kDeclEmitMode_Full)
{


#line 780 "emit.cog"
             

#line 780 "emit.cog"
             

#line 780 "emit.cog"
         emit(

#line 780 "emit.cog"
              context, 

#line 780 "emit.cog"
                       "\n");


#line 781 "emit.cog"
                

#line 781 "emit.cog"
                

#line 781 "emit.cog"
   emitBlockStmt(

#line 781 "emit.cog"
                 context, 

#line 781 "emit.cog"
                          body);
}
else
{


#line 785 "emit.cog"
       

#line 785 "emit.cog"
       

#line 785 "emit.cog"
   emit(

#line 785 "emit.cog"
        context, 

#line 785 "emit.cog"
                 ";\n");
}
}


#line 789 "emit.cog"
 void emitInitializerDecl(

#line 790 "emit.cog"
                         

#line 790 "emit.cog"
              EmitContext

#line 790 "emit.cog"
                         * context, 

#line 791 "emit.cog"
               InitializerDecl initDecl, 

#line 792 "emit.cog"
        DeclEmitMode mode)
{


#line 794 "emit.cog"
  if(

#line 794 "emit.cog"
           

#line 794 "emit.cog"
      mode 

#line 794 "emit.cog"
           == 

#line 794 "emit.cog"
              kDeclEmitMode_MinimalForward)
{


#line 795 "emit.cog"
   return;
}


#line 797 "emit.cog"
  if(

#line 797 "emit.cog"
           

#line 797 "emit.cog"
      mode 

#line 797 "emit.cog"
           == 

#line 797 "emit.cog"
              kDeclEmitMode_Full)
{


#line 799 "emit.cog"
   if(

#line 799 "emit.cog"
       

#line 799 "emit.cog"
       !

#line 799 "emit.cog"
                DEREF(

#line 799 "emit.cog"
        initDecl).body)
{


#line 800 "emit.cog"
    return;
}


#line 802 "emit.cog"
                   

#line 802 "emit.cog"
                   

#line 802 "emit.cog"
   emitGenericQuals(

#line 802 "emit.cog"
                    context, 

#line 802 "emit.cog"
                             initDecl);
}


#line 807 "emit.cog"
  if(

#line 807 "emit.cog"
           

#line 807 "emit.cog"
      mode 

#line 807 "emit.cog"
           == 

#line 807 "emit.cog"
              kDeclEmitMode_Full)
{


#line 809 "emit.cog"
                             

#line 809 "emit.cog"
                             

#line 809 "emit.cog"
   emitDeclNameAndGenericArgs(

#line 809 "emit.cog"
                              context, 

#line 809 "emit.cog"
                                                         

#line 809 "emit.cog"
                                               DEREF(

#line 809 "emit.cog"
                                       initDecl).getParent(), 

#line 809 "emit.cog"
                                                             mode);


#line 810 "emit.cog"
       

#line 810 "emit.cog"
       

#line 810 "emit.cog"
   emit(

#line 810 "emit.cog"
        context, 

#line 810 "emit.cog"
                 "::");
}


#line 812 "emit.cog"
         

#line 812 "emit.cog"
         

#line 812 "emit.cog"
     emit(

#line 812 "emit.cog"
          context, 

#line 812 "emit.cog"
                                       DEREF(

#line 812 "emit.cog"
                                     

#line 812 "emit.cog"
                           DEREF(

#line 812 "emit.cog"
                   initDecl).getParent()).name);


#line 814 "emit.cog"
     if(

#line 814 "emit.cog"
                     

#line 814 "emit.cog"
        as<

#line 814 "emit.cog"
           ClassDecl> (

#line 814 "emit.cog"
                                        

#line 814 "emit.cog"
                              DEREF(

#line 814 "emit.cog"
                      initDecl).getParent()))
{


#line 816 "emit.cog"
          

#line 816 "emit.cog"
          

#line 816 "emit.cog"
      emit(

#line 816 "emit.cog"
           context, 

#line 816 "emit.cog"
                    "Impl");
}


#line 819 "emit.cog"
         

#line 819 "emit.cog"
         

#line 819 "emit.cog"
     emit(

#line 819 "emit.cog"
          context, 

#line 819 "emit.cog"
                   "(");


#line 821 "emit.cog"
     

#line 821 "emit.cog"
     auto first = 

#line 821 "emit.cog"
                 true;


#line 822 "emit.cog"
     for(auto decl : 

#line 822 "emit.cog"
                                       

#line 822 "emit.cog"
                              DEREF(

#line 822 "emit.cog"
                      initDecl).getDecls())
{
{


#line 824 "emit.cog"
         

#line 824 "emit.cog"
         auto param = 

#line 824 "emit.cog"
                                  

#line 824 "emit.cog"
                     as<

#line 824 "emit.cog"
                        ParamDecl> (

#line 824 "emit.cog"
                                   decl);


#line 825 "emit.cog"
         if(

#line 825 "emit.cog"
            

#line 825 "emit.cog"
            !

#line 825 "emit.cog"
             param)
{


#line 825 "emit.cog"
                    continue;
}


#line 827 "emit.cog"
         if(

#line 827 "emit.cog"
            

#line 827 "emit.cog"
            !

#line 827 "emit.cog"
             first)
{


#line 827 "emit.cog"
                        

#line 827 "emit.cog"
                        

#line 827 "emit.cog"
                    emit(

#line 827 "emit.cog"
                         context, 

#line 827 "emit.cog"
                                  ", ");
}


#line 828 "emit.cog"
                      

#line 828 "emit.cog"
                      

#line 828 "emit.cog"
         emitParamDecl(

#line 828 "emit.cog"
                       context, 

#line 828 "emit.cog"
                                param);


#line 829 "emit.cog"
         first = 

#line 829 "emit.cog"
                 false;
}
}


#line 832 "emit.cog"
         

#line 832 "emit.cog"
         

#line 832 "emit.cog"
     emit(

#line 832 "emit.cog"
          context, 

#line 832 "emit.cog"
                   ")");


#line 834 "emit.cog"
  

#line 834 "emit.cog"
  auto body = 

#line 834 "emit.cog"
                     DEREF(

#line 834 "emit.cog"
             initDecl).body;


#line 835 "emit.cog"
  if(

#line 835 "emit.cog"
           

#line 835 "emit.cog"
      body 

#line 835 "emit.cog"
           && 

#line 835 "emit.cog"
                   

#line 835 "emit.cog"
              mode 

#line 835 "emit.cog"
                   == 

#line 835 "emit.cog"
                      kDeclEmitMode_Full)
{


#line 837 "emit.cog"
       

#line 837 "emit.cog"
       

#line 837 "emit.cog"
   emit(

#line 837 "emit.cog"
        context, 

#line 837 "emit.cog"
                 "\n");


#line 838 "emit.cog"
                

#line 838 "emit.cog"
                

#line 838 "emit.cog"
   emitBlockStmt(

#line 838 "emit.cog"
                 context, 

#line 838 "emit.cog"
                          body);
}
else
{


#line 842 "emit.cog"
       

#line 842 "emit.cog"
       

#line 842 "emit.cog"
   emit(

#line 842 "emit.cog"
        context, 

#line 842 "emit.cog"
                 ";\n");
}
}


#line 846 "emit.cog"
 void emitSubscriptDecl(

#line 847 "emit.cog"
                      

#line 847 "emit.cog"
           EmitContext

#line 847 "emit.cog"
                      * context, 

#line 848 "emit.cog"
        SubscriptDecl decl, 

#line 849 "emit.cog"
        DeclEmitMode mode)
{


#line 851 "emit.cog"
  if(

#line 851 "emit.cog"
           

#line 851 "emit.cog"
      mode 

#line 851 "emit.cog"
           == 

#line 851 "emit.cog"
              kDeclEmitMode_MinimalForward)
{


#line 852 "emit.cog"
   return;
}


#line 854 "emit.cog"
  if(

#line 854 "emit.cog"
           

#line 854 "emit.cog"
      mode 

#line 854 "emit.cog"
           == 

#line 854 "emit.cog"
              kDeclEmitMode_Full)
{


#line 856 "emit.cog"
   if(

#line 856 "emit.cog"
       

#line 856 "emit.cog"
       !

#line 856 "emit.cog"
            DEREF(

#line 856 "emit.cog"
        decl).body)
{


#line 857 "emit.cog"
    return;
}


#line 859 "emit.cog"
                   

#line 859 "emit.cog"
                   

#line 859 "emit.cog"
   emitGenericQuals(

#line 859 "emit.cog"
                    context, 

#line 859 "emit.cog"
                             decl);
}


#line 862 "emit.cog"
  if(auto resultType = 

#line 862 "emit.cog"
                                      DEREF(

#line 862 "emit.cog"
                           DEREF(

#line 862 "emit.cog"
                       decl).resultType).exp)
{


#line 864 "emit.cog"
           

#line 864 "emit.cog"
           

#line 864 "emit.cog"
   emitType(

#line 864 "emit.cog"
            context, 

#line 864 "emit.cog"
                     resultType);


#line 865 "emit.cog"
       

#line 865 "emit.cog"
       

#line 865 "emit.cog"
   emit(

#line 865 "emit.cog"
        context, 

#line 865 "emit.cog"
                 " ");
}
else
{


#line 869 "emit.cog"
       

#line 869 "emit.cog"
       

#line 869 "emit.cog"
   emit(

#line 869 "emit.cog"
        context, 

#line 869 "emit.cog"
                 "void ");
}


#line 874 "emit.cog"
  if(

#line 874 "emit.cog"
           

#line 874 "emit.cog"
      mode 

#line 874 "emit.cog"
           == 

#line 874 "emit.cog"
              kDeclEmitMode_Full)
{


#line 876 "emit.cog"
                             

#line 876 "emit.cog"
                             

#line 876 "emit.cog"
   emitDeclNameAndGenericArgs(

#line 876 "emit.cog"
                              context, 

#line 876 "emit.cog"
                                                     

#line 876 "emit.cog"
                                           DEREF(

#line 876 "emit.cog"
                                       decl).getParent(), 

#line 876 "emit.cog"
                                                         mode);


#line 877 "emit.cog"
       

#line 877 "emit.cog"
       

#line 877 "emit.cog"
   emit(

#line 877 "emit.cog"
        context, 

#line 877 "emit.cog"
                 "::");
}


#line 880 "emit.cog"
      

#line 880 "emit.cog"
      

#line 880 "emit.cog"
  emit(

#line 880 "emit.cog"
       context, 

#line 880 "emit.cog"
                "operator[](");


#line 882 "emit.cog"
  

#line 882 "emit.cog"
  auto first = 

#line 882 "emit.cog"
              true;


#line 883 "emit.cog"
  for(auto decl : 

#line 883 "emit.cog"
                               

#line 883 "emit.cog"
                      DEREF(

#line 883 "emit.cog"
                  decl).getDecls())
{
{


#line 885 "emit.cog"
   

#line 885 "emit.cog"
   auto param = 

#line 885 "emit.cog"
                            

#line 885 "emit.cog"
               as<

#line 885 "emit.cog"
                  ParamDecl> (

#line 885 "emit.cog"
                             decl);


#line 886 "emit.cog"
   if(

#line 886 "emit.cog"
       

#line 886 "emit.cog"
       !

#line 886 "emit.cog"
        param)
{


#line 886 "emit.cog"
               continue;
}


#line 888 "emit.cog"
   if(

#line 888 "emit.cog"
       

#line 888 "emit.cog"
       !

#line 888 "emit.cog"
        first)
{


#line 888 "emit.cog"
                   

#line 888 "emit.cog"
                   

#line 888 "emit.cog"
               emit(

#line 888 "emit.cog"
                    context, 

#line 888 "emit.cog"
                             ", ");
}


#line 889 "emit.cog"
                

#line 889 "emit.cog"
                

#line 889 "emit.cog"
   emitParamDecl(

#line 889 "emit.cog"
                 context, 

#line 889 "emit.cog"
                          param);


#line 890 "emit.cog"
   first = 

#line 890 "emit.cog"
           false;
}
}


#line 893 "emit.cog"
      

#line 893 "emit.cog"
      

#line 893 "emit.cog"
  emit(

#line 893 "emit.cog"
       context, 

#line 893 "emit.cog"
                ")");


#line 895 "emit.cog"
  

#line 895 "emit.cog"
  auto body = 

#line 895 "emit.cog"
                 DEREF(

#line 895 "emit.cog"
             decl).body;


#line 896 "emit.cog"
  if(

#line 896 "emit.cog"
           

#line 896 "emit.cog"
      body 

#line 896 "emit.cog"
           && 

#line 896 "emit.cog"
                   

#line 896 "emit.cog"
              mode 

#line 896 "emit.cog"
                   == 

#line 896 "emit.cog"
                      kDeclEmitMode_Full)
{


#line 898 "emit.cog"
       

#line 898 "emit.cog"
       

#line 898 "emit.cog"
   emit(

#line 898 "emit.cog"
        context, 

#line 898 "emit.cog"
                 "\n");


#line 899 "emit.cog"
                

#line 899 "emit.cog"
                

#line 899 "emit.cog"
   emitBlockStmt(

#line 899 "emit.cog"
                 context, 

#line 899 "emit.cog"
                          body);
}
else
{


#line 903 "emit.cog"
       

#line 903 "emit.cog"
       

#line 903 "emit.cog"
   emit(

#line 903 "emit.cog"
        context, 

#line 903 "emit.cog"
                 ";\n");
}
}


#line 907 "emit.cog"
 void emitDecl(

#line 908 "emit.cog"
                      

#line 908 "emit.cog"
           EmitContext

#line 908 "emit.cog"
                      * context, 

#line 909 "emit.cog"
        Decl decl, 

#line 910 "emit.cog"
        DeclEmitMode mode)
{


#line 912 "emit.cog"
  

#line 912 "emit.cog"
  auto builtinAttr = 

#line 912 "emit.cog"
                                              

#line 912 "emit.cog"
                        DEREF(

#line 912 "emit.cog"
                    decl).findAttr<

#line 912 "emit.cog"
                                  BuiltinAttr> ();


#line 913 "emit.cog"
     if(

#line 913 "emit.cog"
         builtinAttr)
{


#line 916 "emit.cog"
         return;
}


#line 919 "emit.cog"
                   

#line 919 "emit.cog"
                   

#line 919 "emit.cog"
  emitLineDirective(

#line 919 "emit.cog"
                    context, 

#line 919 "emit.cog"
                             decl);


#line 921 "emit.cog"
  if(auto classDecl = 

#line 921 "emit.cog"
                                  

#line 921 "emit.cog"
                     as<

#line 921 "emit.cog"
                        ClassDecl> (

#line 921 "emit.cog"
                                   decl))
{


#line 923 "emit.cog"
                

#line 923 "emit.cog"
                

#line 923 "emit.cog"
   emitClassDecl(

#line 923 "emit.cog"
                 context, 

#line 923 "emit.cog"
                          classDecl, 

#line 923 "emit.cog"
                                     mode);
}
else
{


#line 925 "emit.cog"
          if(auto structDecl = 

#line 925 "emit.cog"
                                            

#line 925 "emit.cog"
                              as<

#line 925 "emit.cog"
                                 StructDecl> (

#line 925 "emit.cog"
                                             decl))
{


#line 927 "emit.cog"
                 

#line 927 "emit.cog"
                 

#line 927 "emit.cog"
   emitStructDecl(

#line 927 "emit.cog"
                  context, 

#line 927 "emit.cog"
                           structDecl, 

#line 927 "emit.cog"
                                       mode);
}
else
{


#line 930 "emit.cog"
       if(auto tagDecl = 

#line 930 "emit.cog"
                                        

#line 930 "emit.cog"
                         as<

#line 930 "emit.cog"
                            EnumTagDecl> (

#line 930 "emit.cog"
                                         decl))
{


#line 932 "emit.cog"
       

#line 932 "emit.cog"
       

#line 932 "emit.cog"
   emit(

#line 932 "emit.cog"
        context, 

#line 932 "emit.cog"
                        DEREF(

#line 932 "emit.cog"
                 tagDecl).name);


#line 933 "emit.cog"
   if(

#line 933 "emit.cog"
              DEREF(

#line 933 "emit.cog"
       tagDecl).init)
{


#line 935 "emit.cog"
        

#line 935 "emit.cog"
        

#line 935 "emit.cog"
    emit(

#line 935 "emit.cog"
         context, 

#line 935 "emit.cog"
                  " = ");


#line 936 "emit.cog"
           

#line 936 "emit.cog"
           

#line 936 "emit.cog"
    emitExp(

#line 936 "emit.cog"
            context, 

#line 936 "emit.cog"
                            DEREF(

#line 936 "emit.cog"
                     tagDecl).init);
}


#line 938 "emit.cog"
       

#line 938 "emit.cog"
       

#line 938 "emit.cog"
   emit(

#line 938 "emit.cog"
        context, 

#line 938 "emit.cog"
                 ",\n");
}
else
{


#line 940 "emit.cog"
       if(auto varDecl = 

#line 940 "emit.cog"
                                       

#line 940 "emit.cog"
                        as<

#line 940 "emit.cog"
                           VarDeclBase> (

#line 940 "emit.cog"
                                        decl))
{


#line 942 "emit.cog"
              

#line 942 "emit.cog"
              

#line 942 "emit.cog"
   emitVarDecl(

#line 942 "emit.cog"
               context, 

#line 942 "emit.cog"
                        varDecl, 

#line 942 "emit.cog"
                                 mode);
}
else
{


#line 944 "emit.cog"
       if(auto funcDecl = 

#line 944 "emit.cog"
                                     

#line 944 "emit.cog"
                         as<

#line 944 "emit.cog"
                            FuncDecl> (

#line 944 "emit.cog"
                                      decl))
{


#line 946 "emit.cog"
               

#line 946 "emit.cog"
               

#line 946 "emit.cog"
   emitFuncDecl(

#line 946 "emit.cog"
                context, 

#line 946 "emit.cog"
                         funcDecl, 

#line 946 "emit.cog"
                                   mode);
}
else
{


#line 948 "emit.cog"
          if(auto initDecl = 

#line 948 "emit.cog"
                                               

#line 948 "emit.cog"
                            as<

#line 948 "emit.cog"
                               InitializerDecl> (

#line 948 "emit.cog"
                                                decl))
{


#line 950 "emit.cog"
                      

#line 950 "emit.cog"
                      

#line 950 "emit.cog"
   emitInitializerDecl(

#line 950 "emit.cog"
                       context, 

#line 950 "emit.cog"
                                initDecl, 

#line 950 "emit.cog"
                                          mode);
}
else
{


#line 952 "emit.cog"
       if(auto subscriptDecl = 

#line 952 "emit.cog"
                                                

#line 952 "emit.cog"
                               as<

#line 952 "emit.cog"
                                  SubscriptDecl> (

#line 952 "emit.cog"
                                                 decl))
{


#line 954 "emit.cog"
                    

#line 954 "emit.cog"
                    

#line 954 "emit.cog"
   emitSubscriptDecl(

#line 954 "emit.cog"
                     context, 

#line 954 "emit.cog"
                              subscriptDecl, 

#line 954 "emit.cog"
                                             mode);
}
else
{


#line 956 "emit.cog"
       if(auto enumDecl = 

#line 956 "emit.cog"
                                      

#line 956 "emit.cog"
                          as<

#line 956 "emit.cog"
                             EnumDecl> (

#line 956 "emit.cog"
                                       decl))
{


#line 958 "emit.cog"
   if(

#line 958 "emit.cog"
            

#line 958 "emit.cog"
       mode 

#line 958 "emit.cog"
            >= 

#line 958 "emit.cog"
               kDeclEmitMode_Full)
{


#line 959 "emit.cog"
    return;
}


#line 961 "emit.cog"
       

#line 961 "emit.cog"
       

#line 961 "emit.cog"
   emit(

#line 961 "emit.cog"
        context, 

#line 961 "emit.cog"
                 "enum ");


#line 962 "emit.cog"
               

#line 962 "emit.cog"
               

#line 962 "emit.cog"
   emitDeclName(

#line 962 "emit.cog"
                context, 

#line 962 "emit.cog"
                         enumDecl, 

#line 962 "emit.cog"
                                   mode);


#line 963 "emit.cog"
       

#line 963 "emit.cog"
       

#line 963 "emit.cog"
   emit(

#line 963 "emit.cog"
        context, 

#line 963 "emit.cog"
                 " : int");


#line 965 "emit.cog"
   if(

#line 965 "emit.cog"
            

#line 965 "emit.cog"
       mode 

#line 965 "emit.cog"
            <= 

#line 965 "emit.cog"
               kDeclEmitMode_MinimalForward)
{


#line 967 "emit.cog"
        

#line 967 "emit.cog"
        

#line 967 "emit.cog"
    emit(

#line 967 "emit.cog"
         context, 

#line 967 "emit.cog"
                  ";\n");


#line 968 "emit.cog"
    return;
}


#line 971 "emit.cog"
       

#line 971 "emit.cog"
       

#line 971 "emit.cog"
   emit(

#line 971 "emit.cog"
        context, 

#line 971 "emit.cog"
                 "\n{\n");


#line 972 "emit.cog"
   for(auto dd : 

#line 972 "emit.cog"
                                  

#line 972 "emit.cog"
                         DEREF(

#line 972 "emit.cog"
                 enumDecl).getDecls())
{
{


#line 974 "emit.cog"
            

#line 974 "emit.cog"
            

#line 974 "emit.cog"
    emitDecl(

#line 974 "emit.cog"
             context, 

#line 974 "emit.cog"
                      dd, 

#line 974 "emit.cog"
                          kDeclEmitMode_Full);
}
}


#line 976 "emit.cog"
       

#line 976 "emit.cog"
       

#line 976 "emit.cog"
   emit(

#line 976 "emit.cog"
        context, 

#line 976 "emit.cog"
                 "};\n");
}
else
{


#line 978 "emit.cog"
       if(auto importDecl = 

#line 978 "emit.cog"
                                         

#line 978 "emit.cog"
                           as<

#line 978 "emit.cog"
                              ImportDecl> (

#line 978 "emit.cog"
                                          decl))
{
}
else
{


#line 980 "emit.cog"
       if(auto typeAliasDecl = 

#line 980 "emit.cog"
                                                

#line 980 "emit.cog"
                               as<

#line 980 "emit.cog"
                                  TypeAliasDecl> (

#line 980 "emit.cog"
                                                 decl))
{


#line 982 "emit.cog"
       

#line 982 "emit.cog"
       

#line 982 "emit.cog"
   emit(

#line 982 "emit.cog"
        context, 

#line 982 "emit.cog"
                 "typedef ");


#line 983 "emit.cog"
                 

#line 983 "emit.cog"
                 

#line 983 "emit.cog"
   emitDeclarator(

#line 983 "emit.cog"
                  context, 

#line 983 "emit.cog"
                                        DEREF(

#line 983 "emit.cog"
                           typeAliasDecl).init, 

#line 983 "emit.cog"
                                               typeAliasDecl, 

#line 983 "emit.cog"
                                                              mode);


#line 984 "emit.cog"
       

#line 984 "emit.cog"
       

#line 984 "emit.cog"
   emit(

#line 984 "emit.cog"
        context, 

#line 984 "emit.cog"
                 ";\n");
}
else
{


#line 986 "emit.cog"
       if(auto genericDecl = 

#line 986 "emit.cog"
                                            

#line 986 "emit.cog"
                             as<

#line 986 "emit.cog"
                                GenericDecl> (

#line 986 "emit.cog"
                                             decl))
{


#line 991 "emit.cog"
   if(

#line 991 "emit.cog"
            

#line 991 "emit.cog"
       mode 

#line 991 "emit.cog"
            < 

#line 991 "emit.cog"
              kDeclEmitMode_Full)
{


#line 993 "emit.cog"
    

#line 993 "emit.cog"
    auto innerDecl = 

#line 993 "emit.cog"
                               DEREF(

#line 993 "emit.cog"
                    genericDecl).inner;


#line 996 "emit.cog"
    if(

#line 996 "emit.cog"
             

#line 996 "emit.cog"
        mode 

#line 996 "emit.cog"
             <= 

#line 996 "emit.cog"
                kDeclEmitMode_MinimalForward)
{


#line 998 "emit.cog"
     if(

#line 998 "emit.cog"
                         

#line 998 "emit.cog"
         as<

#line 998 "emit.cog"
            FuncDeclBase> (

#line 998 "emit.cog"
                          innerDecl))
{


#line 999 "emit.cog"
      return;
}
}


#line 1002 "emit.cog"
        

#line 1002 "emit.cog"
        

#line 1002 "emit.cog"
    emit(

#line 1002 "emit.cog"
         context, 

#line 1002 "emit.cog"
                  "template<");


#line 1003 "emit.cog"
    

#line 1003 "emit.cog"
    auto first = 

#line 1003 "emit.cog"
                true;


#line 1004 "emit.cog"
    for(auto dd : 

#line 1004 "emit.cog"
                                      

#line 1004 "emit.cog"
                             DEREF(

#line 1004 "emit.cog"
                  genericDecl).getDecls())
{
{


#line 1006 "emit.cog"
     if(auto typeParam = 

#line 1006 "emit.cog"
                                             

#line 1006 "emit.cog"
                         as<

#line 1006 "emit.cog"
                            GenericParamDecl> (

#line 1006 "emit.cog"
                                              dd))
{


#line 1008 "emit.cog"
      if(

#line 1008 "emit.cog"
          

#line 1008 "emit.cog"
          !

#line 1008 "emit.cog"
           first)
{


#line 1008 "emit.cog"
                      

#line 1008 "emit.cog"
                      

#line 1008 "emit.cog"
                  emit(

#line 1008 "emit.cog"
                       context, 

#line 1008 "emit.cog"
                                ", ");
}


#line 1009 "emit.cog"
          

#line 1009 "emit.cog"
          

#line 1009 "emit.cog"
      emit(

#line 1009 "emit.cog"
           context, 

#line 1009 "emit.cog"
                    "typename ");


#line 1010 "emit.cog"
          

#line 1010 "emit.cog"
          

#line 1010 "emit.cog"
      emit(

#line 1010 "emit.cog"
           context, 

#line 1010 "emit.cog"
                             DEREF(

#line 1010 "emit.cog"
                    typeParam).name);


#line 1011 "emit.cog"
      first = 

#line 1011 "emit.cog"
              false;
}
else
{
}
}
}


#line 1017 "emit.cog"
        

#line 1017 "emit.cog"
        

#line 1017 "emit.cog"
    emit(

#line 1017 "emit.cog"
         context, 

#line 1017 "emit.cog"
                  " >\n");
}


#line 1019 "emit.cog"
           

#line 1019 "emit.cog"
           

#line 1019 "emit.cog"
   emitDecl(

#line 1019 "emit.cog"
            context, 

#line 1019 "emit.cog"
                                DEREF(

#line 1019 "emit.cog"
                     genericDecl).inner, 

#line 1019 "emit.cog"
                                        mode);
}
else
{


#line 1023 "emit.cog"
            

#line 1023 "emit.cog"
            

#line 1023 "emit.cog"
   cogAssert(

#line 1023 "emit.cog"
             

#line 1023 "emit.cog"
             !

#line 1023 "emit.cog"
              "unimplemented");
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


#line 1028 "emit.cog"
 void emitDecls(

#line 1029 "emit.cog"
                      

#line 1029 "emit.cog"
           EmitContext

#line 1029 "emit.cog"
                      * context, 

#line 1030 "emit.cog"
                 ContainerDecl containerDecl, 

#line 1031 "emit.cog"
        DeclEmitMode mode)
{


#line 1033 "emit.cog"
  for(auto decl : 

#line 1033 "emit.cog"
                                        

#line 1033 "emit.cog"
                               DEREF(

#line 1033 "emit.cog"
                  containerDecl).getDecls())
{
{


#line 1035 "emit.cog"
           

#line 1035 "emit.cog"
           

#line 1035 "emit.cog"
   emitDecl(

#line 1035 "emit.cog"
            context, 

#line 1035 "emit.cog"
                     decl, 

#line 1035 "emit.cog"
                           mode);
}
}
}


#line 83 "syntax.cog"
 

#line 87 "syntax.cog"
  template<typename T > SyntaxListBuilder<T > ::SyntaxListBuilder()
{


#line 89 "syntax.cog"
       DEREF(

#line 89 "syntax.cog"
   this).link = 

#line 89 "syntax.cog"
               

#line 89 "syntax.cog"
               &

#line 89 "syntax.cog"
                    DEREF(

#line 89 "syntax.cog"
                this).head;
}


#line 92 "syntax.cog"
  template<typename T > SyntaxListBuilder<T > ::SyntaxListBuilder(

#line 92 "syntax.cog"
              SyntaxList<

#line 92 "syntax.cog"
                         T>  other)
{


#line 94 "syntax.cog"
       DEREF(

#line 94 "syntax.cog"
   this).head = 

#line 94 "syntax.cog"
                    DEREF(

#line 94 "syntax.cog"
               other).head;


#line 95 "syntax.cog"
       DEREF(

#line 95 "syntax.cog"
   this).link = 

#line 95 "syntax.cog"
               

#line 95 "syntax.cog"
               &

#line 95 "syntax.cog"
                    DEREF(

#line 95 "syntax.cog"
                this).head;


#line 97 "syntax.cog"
         

#line 97 "syntax.cog"
         

#line 97 "syntax.cog"
   adjust();
}


#line 100 "syntax.cog"
  template<typename T > void SyntaxListBuilder<T > ::adjust()
{


#line 102 "syntax.cog"
   while(

#line 102 "syntax.cog"
          

#line 102 "syntax.cog"
          *

#line 102 "syntax.cog"
           link)
{
{


#line 104 "syntax.cog"
    link = 

#line 104 "syntax.cog"
           cast<

#line 104 "syntax.cog"
                Ptr<

#line 104 "syntax.cog"
                    T> >(

#line 104 "syntax.cog"
                         

#line 104 "syntax.cog"
                         &

#line 104 "syntax.cog"
                                 DEREF(

#line 104 "syntax.cog"
                          (

#line 104 "syntax.cog"
                           

#line 104 "syntax.cog"
                           *

#line 104 "syntax.cog"
                            link)).next);
}
}
}


#line 108 "syntax.cog"
  template<typename T > void SyntaxListBuilder<T > ::add(

#line 108 "syntax.cog"
                    T element)
{


#line 110 "syntax.cog"
         

#line 110 "syntax.cog"
         

#line 110 "syntax.cog"
   adjust();


#line 112 "syntax.cog"
   

#line 112 "syntax.cog"
   *

#line 112 "syntax.cog"
    link = 

#line 112 "syntax.cog"
           element;


#line 113 "syntax.cog"
          DEREF(

#line 113 "syntax.cog"
   element).next = 

#line 113 "syntax.cog"
                  0;
}


#line 116 "syntax.cog"
  template<typename T > void SyntaxListBuilder<T > ::append(

#line 116 "syntax.cog"
                     SyntaxListBuilder<

#line 116 "syntax.cog"
                                       T>  other)
{


#line 118 "syntax.cog"
         

#line 118 "syntax.cog"
         

#line 118 "syntax.cog"
   adjust();


#line 120 "syntax.cog"
   if(

#line 120 "syntax.cog"
           DEREF(

#line 120 "syntax.cog"
      other).head)
{


#line 122 "syntax.cog"
    

#line 122 "syntax.cog"
    *

#line 122 "syntax.cog"
     link = 

#line 122 "syntax.cog"
                 DEREF(

#line 122 "syntax.cog"
            other).head;


#line 123 "syntax.cog"
    link = 

#line 123 "syntax.cog"
                DEREF(

#line 123 "syntax.cog"
           other).link;
}
}


#line 1039 "emit.cog"
 

#line 1045 "emit.cog"
 void addDecl(

#line 1046 "emit.cog"
                          

#line 1046 "emit.cog"
           DeclSortContext

#line 1046 "emit.cog"
                          * context, 

#line 1047 "emit.cog"
        Decl decl)
{


#line 1049 "emit.cog"
      DEREF(

#line 1049 "emit.cog"
  decl).next = 

#line 1049 "emit.cog"
              nullptr;


#line 1050 "emit.cog"
                         

#line 1050 "emit.cog"
                         

#line 1050 "emit.cog"
                     DEREF(

#line 1050 "emit.cog"
         DEREF(

#line 1050 "emit.cog"
  context).sortedDecls).add(

#line 1050 "emit.cog"
                          decl);
}


#line 1053 "emit.cog"
 void addDecl(

#line 1054 "emit.cog"
                          

#line 1054 "emit.cog"
           DeclSortContext

#line 1054 "emit.cog"
                          * context, 

#line 1055 "emit.cog"
               

#line 1055 "emit.cog"
           Decl

#line 1055 "emit.cog"
               * declPtr)
{


#line 1057 "emit.cog"
  

#line 1057 "emit.cog"
  auto decl = 

#line 1057 "emit.cog"
             

#line 1057 "emit.cog"
             *

#line 1057 "emit.cog"
              declPtr;


#line 1058 "emit.cog"
  

#line 1058 "emit.cog"
  *

#line 1058 "emit.cog"
   declPtr = 

#line 1058 "emit.cog"
             cast<

#line 1058 "emit.cog"
                  Decl>(

#line 1058 "emit.cog"
                            DEREF(

#line 1058 "emit.cog"
                        decl).next);


#line 1059 "emit.cog"
      DEREF(

#line 1059 "emit.cog"
  decl).next = 

#line 1059 "emit.cog"
              nullptr;


#line 1061 "emit.cog"
                         

#line 1061 "emit.cog"
                         

#line 1061 "emit.cog"
                     DEREF(

#line 1061 "emit.cog"
         DEREF(

#line 1061 "emit.cog"
  context).sortedDecls).add(

#line 1061 "emit.cog"
                          decl);
}


#line 1064 "emit.cog"
 

#line 1069 "emit.cog"
 void addDependencies(

#line 1070 "emit.cog"
                          

#line 1070 "emit.cog"
           DeclSortContext

#line 1070 "emit.cog"
                          * context, 

#line 1071 "emit.cog"
            

#line 1071 "emit.cog"
        Name

#line 1071 "emit.cog"
            * name)
{


#line 1073 "emit.cog"
           

#line 1073 "emit.cog"
           

#line 1073 "emit.cog"
  cogAssert(

#line 1073 "emit.cog"
            name);


#line 1081 "emit.cog"
  

#line 1081 "emit.cog"
  auto dd = 

#line 1081 "emit.cog"
                  DEREF(

#line 1081 "emit.cog"
           context).unsortedDecls;


#line 1083 "emit.cog"
  

#line 1083 "emit.cog"
  

#line 1083 "emit.cog"
                      Decl matchingDecls = 

#line 1083 "emit.cog"
                             nullptr;


#line 1084 "emit.cog"
  

#line 1084 "emit.cog"
  auto matchingDeclLink = 

#line 1084 "emit.cog"
                         

#line 1084 "emit.cog"
                         &

#line 1084 "emit.cog"
                          matchingDecls;


#line 1086 "emit.cog"
  

#line 1086 "emit.cog"
  auto unsortedDeclLink = 

#line 1086 "emit.cog"
                         

#line 1086 "emit.cog"
                         &

#line 1086 "emit.cog"
                                 DEREF(

#line 1086 "emit.cog"
                          context).unsortedDecls;


#line 1087 "emit.cog"
         DEREF(

#line 1087 "emit.cog"
  context).unsortedDecls = 

#line 1087 "emit.cog"
                          nullptr;


#line 1089 "emit.cog"
  while(

#line 1089 "emit.cog"
         dd)
{
{


#line 1091 "emit.cog"
   

#line 1091 "emit.cog"
   auto next = 

#line 1091 "emit.cog"
              cast<

#line 1091 "emit.cog"
                   Decl>(

#line 1091 "emit.cog"
                           DEREF(

#line 1091 "emit.cog"
                         dd).next);


#line 1092 "emit.cog"
     DEREF(

#line 1092 "emit.cog"
   dd).next = 

#line 1092 "emit.cog"
             nullptr;


#line 1094 "emit.cog"
   if(

#line 1094 "emit.cog"
               

#line 1094 "emit.cog"
         DEREF(

#line 1094 "emit.cog"
       dd).name 

#line 1094 "emit.cog"
               == 

#line 1094 "emit.cog"
                  name)
{


#line 1096 "emit.cog"
    

#line 1096 "emit.cog"
    *

#line 1096 "emit.cog"
     matchingDeclLink = 

#line 1096 "emit.cog"
                        dd;


#line 1097 "emit.cog"
    matchingDeclLink = 

#line 1097 "emit.cog"
                       cast<

#line 1097 "emit.cog"
                            Ptr<

#line 1097 "emit.cog"
                                Decl> >(

#line 1097 "emit.cog"
                                        

#line 1097 "emit.cog"
                                        &

#line 1097 "emit.cog"
                                           DEREF(

#line 1097 "emit.cog"
                                         dd).next);
}
else
{


#line 1101 "emit.cog"
    

#line 1101 "emit.cog"
    *

#line 1101 "emit.cog"
     unsortedDeclLink = 

#line 1101 "emit.cog"
                        dd;


#line 1102 "emit.cog"
    unsortedDeclLink = 

#line 1102 "emit.cog"
                       cast<

#line 1102 "emit.cog"
                            Ptr<

#line 1102 "emit.cog"
                                Decl> >(

#line 1102 "emit.cog"
                                        

#line 1102 "emit.cog"
                                        &

#line 1102 "emit.cog"
                                           DEREF(

#line 1102 "emit.cog"
                                         dd).next);
}


#line 1105 "emit.cog"
   dd = 

#line 1105 "emit.cog"
        next;
}
}


#line 1109 "emit.cog"
  

#line 1109 "emit.cog"
  *

#line 1109 "emit.cog"
   matchingDeclLink = 

#line 1109 "emit.cog"
                      nullptr;


#line 1110 "emit.cog"
  

#line 1110 "emit.cog"
  *

#line 1110 "emit.cog"
   unsortedDeclLink = 

#line 1110 "emit.cog"
                      nullptr;


#line 1114 "emit.cog"
  dd = 

#line 1114 "emit.cog"
       matchingDecls;


#line 1115 "emit.cog"
  while(

#line 1115 "emit.cog"
         dd)
{
{


#line 1117 "emit.cog"
   

#line 1117 "emit.cog"
   auto next = 

#line 1117 "emit.cog"
              cast<

#line 1117 "emit.cog"
                   Decl>(

#line 1117 "emit.cog"
                           DEREF(

#line 1117 "emit.cog"
                         dd).next);


#line 1118 "emit.cog"
     DEREF(

#line 1118 "emit.cog"
   dd).next = 

#line 1118 "emit.cog"
             nullptr;


#line 1120 "emit.cog"
                  

#line 1120 "emit.cog"
                  

#line 1120 "emit.cog"
   addDependencies(

#line 1120 "emit.cog"
                   context, 

#line 1120 "emit.cog"
                            dd);


#line 1121 "emit.cog"
          

#line 1121 "emit.cog"
          

#line 1121 "emit.cog"
   addDecl(

#line 1121 "emit.cog"
           context, 

#line 1121 "emit.cog"
                    dd);


#line 1123 "emit.cog"
   dd = 

#line 1123 "emit.cog"
        next;
}
}
}


#line 1127 "emit.cog"
 void addDependencies(

#line 1128 "emit.cog"
                          

#line 1128 "emit.cog"
           DeclSortContext

#line 1128 "emit.cog"
                          * context, 

#line 1129 "emit.cog"
       Exp exp)
{


#line 1131 "emit.cog"
  if(

#line 1131 "emit.cog"
      

#line 1131 "emit.cog"
      !

#line 1131 "emit.cog"
       exp)
{


#line 1131 "emit.cog"
            return;
}


#line 1134 "emit.cog"
  if(auto genericAppExpr = 

#line 1134 "emit.cog"
                                            

#line 1134 "emit.cog"
                           as<

#line 1134 "emit.cog"
                              GenericAppExp> (

#line 1134 "emit.cog"
                                             exp))
{


#line 1136 "emit.cog"
   if(auto nameExpr = 

#line 1136 "emit.cog"
                                 

#line 1136 "emit.cog"
                      as<

#line 1136 "emit.cog"
                         NameExp> (

#line 1136 "emit.cog"
                                                DEREF(

#line 1136 "emit.cog"
                                  genericAppExpr).base))
{


#line 1138 "emit.cog"
    if(

#line 1138 "emit.cog"
                                                    

#line 1138 "emit.cog"
              

#line 1138 "emit.cog"
        strcmp(

#line 1138 "emit.cog"
               "Ptr", 

#line 1138 "emit.cog"
                                            DEREF(

#line 1138 "emit.cog"
                             

#line 1138 "emit.cog"
                      getText(

#line 1138 "emit.cog"
                                      DEREF(

#line 1138 "emit.cog"
                              nameExpr).name)).begin) 

#line 1138 "emit.cog"
                                                    == 

#line 1138 "emit.cog"
                                                       0)
{


#line 1139 "emit.cog"
     return;
}


#line 1140 "emit.cog"
    if(

#line 1140 "emit.cog"
                                                         

#line 1140 "emit.cog"
              

#line 1140 "emit.cog"
        strcmp(

#line 1140 "emit.cog"
               "ConstPtr", 

#line 1140 "emit.cog"
                                                 DEREF(

#line 1140 "emit.cog"
                                  

#line 1140 "emit.cog"
                           getText(

#line 1140 "emit.cog"
                                           DEREF(

#line 1140 "emit.cog"
                                   nameExpr).name)).begin) 

#line 1140 "emit.cog"
                                                         == 

#line 1140 "emit.cog"
                                                            0)
{


#line 1141 "emit.cog"
     return;
}
}
}


#line 1145 "emit.cog"
  if(auto nameExp = 

#line 1145 "emit.cog"
                               

#line 1145 "emit.cog"
                    as<

#line 1145 "emit.cog"
                       NameExp> (

#line 1145 "emit.cog"
                                exp))
{


#line 1147 "emit.cog"
                  

#line 1147 "emit.cog"
                  

#line 1147 "emit.cog"
   addDependencies(

#line 1147 "emit.cog"
                   context, 

#line 1147 "emit.cog"
                                   DEREF(

#line 1147 "emit.cog"
                            nameExp).name);
}
else
{


#line 1149 "emit.cog"
       if(auto appExp = 

#line 1149 "emit.cog"
                                      

#line 1149 "emit.cog"
                        as<

#line 1149 "emit.cog"
                           AppExpBase> (

#line 1149 "emit.cog"
                                       exp))
{


#line 1151 "emit.cog"
                  

#line 1151 "emit.cog"
                  

#line 1151 "emit.cog"
   addDependencies(

#line 1151 "emit.cog"
                   context, 

#line 1151 "emit.cog"
                                  DEREF(

#line 1151 "emit.cog"
                            appExp).base);


#line 1152 "emit.cog"
   for(auto aa : 

#line 1152 "emit.cog"
                       DEREF(

#line 1152 "emit.cog"
                 appExp).args)
{


#line 1153 "emit.cog"
                   

#line 1153 "emit.cog"
                   

#line 1153 "emit.cog"
    addDependencies(

#line 1153 "emit.cog"
                    context, 

#line 1153 "emit.cog"
                               DEREF(

#line 1153 "emit.cog"
                             aa).exp);
}
}
}
}


#line 1157 "emit.cog"
 void addDependencies(

#line 1158 "emit.cog"
                          

#line 1158 "emit.cog"
           DeclSortContext

#line 1158 "emit.cog"
                          * context, 

#line 1159 "emit.cog"
           TypeExp typeExp)
{


#line 1161 "emit.cog"
                 

#line 1161 "emit.cog"
                 

#line 1161 "emit.cog"
  addDependencies(

#line 1161 "emit.cog"
                  context, 

#line 1161 "emit.cog"
                                  DEREF(

#line 1161 "emit.cog"
                           typeExp).exp);
}


#line 1164 "emit.cog"
 void addDependencies(

#line 1165 "emit.cog"
                          

#line 1165 "emit.cog"
           DeclSortContext

#line 1165 "emit.cog"
                          * context, 

#line 1166 "emit.cog"
        Decl decl)
{


#line 1169 "emit.cog"
  if(auto varDecl = 

#line 1169 "emit.cog"
                                   

#line 1169 "emit.cog"
                    as<

#line 1169 "emit.cog"
                       VarDeclBase> (

#line 1169 "emit.cog"
                                    decl))
{


#line 1171 "emit.cog"
                  

#line 1171 "emit.cog"
                  

#line 1171 "emit.cog"
   addDependencies(

#line 1171 "emit.cog"
                   context, 

#line 1171 "emit.cog"
                                   DEREF(

#line 1171 "emit.cog"
                            varDecl).type);
}
else
{


#line 1173 "emit.cog"
       if(auto funcDecl = 

#line 1173 "emit.cog"
                                          

#line 1173 "emit.cog"
                          as<

#line 1173 "emit.cog"
                             FuncDeclBase> (

#line 1173 "emit.cog"
                                           decl))
{


#line 1175 "emit.cog"
                  

#line 1175 "emit.cog"
                  

#line 1175 "emit.cog"
   addDependencies(

#line 1175 "emit.cog"
                   context, 

#line 1175 "emit.cog"
                                    DEREF(

#line 1175 "emit.cog"
                            funcDecl).resultType);


#line 1176 "emit.cog"
   for(auto dd : 

#line 1176 "emit.cog"
                                  

#line 1176 "emit.cog"
                         DEREF(

#line 1176 "emit.cog"
                 funcDecl).getDecls())
{
{


#line 1178 "emit.cog"
                   

#line 1178 "emit.cog"
                   

#line 1178 "emit.cog"
    addDependencies(

#line 1178 "emit.cog"
                    context, 

#line 1178 "emit.cog"
                             dd);
}
}
}
else
{


#line 1181 "emit.cog"
       if(auto aggTypeDecl = 

#line 1181 "emit.cog"
                                            

#line 1181 "emit.cog"
                             as<

#line 1181 "emit.cog"
                                AggTypeDecl> (

#line 1181 "emit.cog"
                                             decl))
{


#line 1183 "emit.cog"
                  

#line 1183 "emit.cog"
                  

#line 1183 "emit.cog"
   addDependencies(

#line 1183 "emit.cog"
                   context, 

#line 1183 "emit.cog"
                                       DEREF(

#line 1183 "emit.cog"
                            aggTypeDecl).base);


#line 1184 "emit.cog"
   for(auto dd : 

#line 1184 "emit.cog"
                                     

#line 1184 "emit.cog"
                            DEREF(

#line 1184 "emit.cog"
                 aggTypeDecl).getDecls())
{
{


#line 1186 "emit.cog"
                   

#line 1186 "emit.cog"
                   

#line 1186 "emit.cog"
    addDependencies(

#line 1186 "emit.cog"
                    context, 

#line 1186 "emit.cog"
                             dd);
}
}
}
}
}
}


#line 1192 "emit.cog"
 void sortDecls(

#line 1193 "emit.cog"
                      

#line 1193 "emit.cog"
           EmitContext

#line 1193 "emit.cog"
                      * context, 

#line 1194 "emit.cog"
             ContainerDecl container)
{


#line 1196 "emit.cog"
  

#line 1196 "emit.cog"
  

#line 1196 "emit.cog"
                    DeclSortContext sortContext;


#line 1197 "emit.cog"
             DEREF(

#line 1197 "emit.cog"
  sortContext).unsortedDecls = 

#line 1197 "emit.cog"
                                                  DEREF(

#line 1197 "emit.cog"
                                                

#line 1197 "emit.cog"
                                       DEREF(

#line 1197 "emit.cog"
                              container).getDecls()).head;


#line 1199 "emit.cog"
  while(

#line 1199 "emit.cog"
                    DEREF(

#line 1199 "emit.cog"
         sortContext).unsortedDecls)
{
{


#line 1201 "emit.cog"
   

#line 1201 "emit.cog"
   auto decl = 

#line 1201 "emit.cog"
                         DEREF(

#line 1201 "emit.cog"
              sortContext).unsortedDecls;


#line 1202 "emit.cog"
              DEREF(

#line 1202 "emit.cog"
   sortContext).unsortedDecls = 

#line 1202 "emit.cog"
                               cast<

#line 1202 "emit.cog"
                                    Decl>(

#line 1202 "emit.cog"
                                              DEREF(

#line 1202 "emit.cog"
                                          decl).next);


#line 1203 "emit.cog"
       DEREF(

#line 1203 "emit.cog"
   decl).next = 

#line 1203 "emit.cog"
               nullptr;


#line 1206 "emit.cog"
                  

#line 1206 "emit.cog"
                  

#line 1206 "emit.cog"
   addDependencies(

#line 1206 "emit.cog"
                   

#line 1206 "emit.cog"
                   &

#line 1206 "emit.cog"
                    sortContext, 

#line 1206 "emit.cog"
                                 decl);


#line 1208 "emit.cog"
          

#line 1208 "emit.cog"
          

#line 1208 "emit.cog"
   addDecl(

#line 1208 "emit.cog"
           

#line 1208 "emit.cog"
           &

#line 1208 "emit.cog"
            sortContext, 

#line 1208 "emit.cog"
                         

#line 1208 "emit.cog"
                         &

#line 1208 "emit.cog"
                          decl);
}
}
}


#line 1212 "emit.cog"
 void emitModuleInner(

#line 1213 "emit.cog"
             Session session, 

#line 1214 "emit.cog"
                  TerminatedStringSpan moduleNameText, 

#line 1215 "emit.cog"
               Ptr<

#line 1215 "emit.cog"
                   Char>  outputPath, 

#line 1216 "emit.cog"
           Ptr<

#line 1216 "emit.cog"
               Char>  extra)
{


#line 1218 "emit.cog"
  

#line 1218 "emit.cog"
  auto moduleDecl = 

#line 1218 "emit.cog"
                          DEREF(

#line 1218 "emit.cog"
                   session).moduleDecl;


#line 1220 "emit.cog"
  

#line 1220 "emit.cog"
  auto stream = 

#line 1220 "emit.cog"
                    

#line 1220 "emit.cog"
               fopen(

#line 1220 "emit.cog"
                     outputPath, 

#line 1220 "emit.cog"
                                 "wb");


#line 1223 "emit.cog"
  

#line 1223 "emit.cog"
  

#line 1223 "emit.cog"
                EmitContext context;


#line 1224 "emit.cog"
         DEREF(

#line 1224 "emit.cog"
  context).session = 

#line 1224 "emit.cog"
                    session;


#line 1225 "emit.cog"
         DEREF(

#line 1225 "emit.cog"
  context).stream = 

#line 1225 "emit.cog"
                   stream;


#line 1226 "emit.cog"
         DEREF(

#line 1226 "emit.cog"
  context).suppressLineDirective = 

#line 1226 "emit.cog"
                                  0;


#line 1228 "emit.cog"
      

#line 1228 "emit.cog"
      

#line 1228 "emit.cog"
  emit(

#line 1228 "emit.cog"
       

#line 1228 "emit.cog"
       &

#line 1228 "emit.cog"
        context, 

#line 1228 "emit.cog"
                 "#include \"runtime/runtime.h\"\n");


#line 1230 "emit.cog"
     {


#line 1230 "emit.cog"
         

#line 1230 "emit.cog"
         auto mm = 

#line 1230 "emit.cog"
                         DEREF(

#line 1230 "emit.cog"
                  session).loadedModules;
for(;

#line 1230 "emit.cog"
                                         mm;

#line 1230 "emit.cog"
                                             mm = 

#line 1230 "emit.cog"
                                                  cast<

#line 1230 "emit.cog"
                                                       ModuleDecl>(

#line 1230 "emit.cog"
                                                                     DEREF(

#line 1230 "emit.cog"
                                                                   mm).next))
{
{


#line 1232 "emit.cog"
         if(

#line 1232 "emit.cog"
               

#line 1232 "emit.cog"
            mm 

#line 1232 "emit.cog"
               == 

#line 1232 "emit.cog"
                  moduleDecl)
{


#line 1232 "emit.cog"
                              continue;
}


#line 1234 "emit.cog"
            

#line 1234 "emit.cog"
            

#line 1234 "emit.cog"
   sortDecls(

#line 1234 "emit.cog"
             

#line 1234 "emit.cog"
             &

#line 1234 "emit.cog"
              context, 

#line 1234 "emit.cog"
                       mm);


#line 1237 "emit.cog"
         

#line 1237 "emit.cog"
         

#line 1237 "emit.cog"
     emit(

#line 1237 "emit.cog"
          

#line 1237 "emit.cog"
          &

#line 1237 "emit.cog"
           context, 

#line 1237 "emit.cog"
                    "namespace ");


#line 1238 "emit.cog"
         

#line 1238 "emit.cog"
         

#line 1238 "emit.cog"
     emit(

#line 1238 "emit.cog"
          

#line 1238 "emit.cog"
          &

#line 1238 "emit.cog"
           context, 

#line 1238 "emit.cog"
                      DEREF(

#line 1238 "emit.cog"
                    mm).name);


#line 1239 "emit.cog"
         

#line 1239 "emit.cog"
         

#line 1239 "emit.cog"
     emit(

#line 1239 "emit.cog"
          

#line 1239 "emit.cog"
          &

#line 1239 "emit.cog"
           context, 

#line 1239 "emit.cog"
                    " {\n");


#line 1240 "emit.cog"
           

#line 1240 "emit.cog"
           

#line 1240 "emit.cog"
  emitDecls(

#line 1240 "emit.cog"
            

#line 1240 "emit.cog"
            &

#line 1240 "emit.cog"
             context, 

#line 1240 "emit.cog"
                      mm, 

#line 1240 "emit.cog"
                          kDeclEmitMode_MinimalForward);


#line 1241 "emit.cog"
           

#line 1241 "emit.cog"
           

#line 1241 "emit.cog"
  emitDecls(

#line 1241 "emit.cog"
            

#line 1241 "emit.cog"
            &

#line 1241 "emit.cog"
             context, 

#line 1241 "emit.cog"
                      mm, 

#line 1241 "emit.cog"
                          kDeclEmitMode_Forward);


#line 1242 "emit.cog"
         

#line 1242 "emit.cog"
         

#line 1242 "emit.cog"
     emit(

#line 1242 "emit.cog"
          

#line 1242 "emit.cog"
          &

#line 1242 "emit.cog"
           context, 

#line 1242 "emit.cog"
                    "}\n");
}
}}


#line 1247 "emit.cog"
           

#line 1247 "emit.cog"
           

#line 1247 "emit.cog"
  sortDecls(

#line 1247 "emit.cog"
            

#line 1247 "emit.cog"
            &

#line 1247 "emit.cog"
             context, 

#line 1247 "emit.cog"
                      moduleDecl);


#line 1249 "emit.cog"
         

#line 1249 "emit.cog"
         

#line 1249 "emit.cog"
     emit(

#line 1249 "emit.cog"
          

#line 1249 "emit.cog"
          &

#line 1249 "emit.cog"
           context, 

#line 1249 "emit.cog"
                    "namespace ");


#line 1250 "emit.cog"
         

#line 1250 "emit.cog"
         

#line 1250 "emit.cog"
     emit(

#line 1250 "emit.cog"
          

#line 1250 "emit.cog"
          &

#line 1250 "emit.cog"
           context, 

#line 1250 "emit.cog"
                    moduleNameText);


#line 1251 "emit.cog"
         

#line 1251 "emit.cog"
         

#line 1251 "emit.cog"
     emit(

#line 1251 "emit.cog"
          

#line 1251 "emit.cog"
          &

#line 1251 "emit.cog"
           context, 

#line 1251 "emit.cog"
                    " {\n");


#line 1252 "emit.cog"
           

#line 1252 "emit.cog"
           

#line 1252 "emit.cog"
  emitDecls(

#line 1252 "emit.cog"
            

#line 1252 "emit.cog"
            &

#line 1252 "emit.cog"
             context, 

#line 1252 "emit.cog"
                      moduleDecl, 

#line 1252 "emit.cog"
                                  kDeclEmitMode_MinimalForward);


#line 1253 "emit.cog"
           

#line 1253 "emit.cog"
           

#line 1253 "emit.cog"
  emitDecls(

#line 1253 "emit.cog"
            

#line 1253 "emit.cog"
            &

#line 1253 "emit.cog"
             context, 

#line 1253 "emit.cog"
                      moduleDecl, 

#line 1253 "emit.cog"
                                  kDeclEmitMode_Forward);


#line 1254 "emit.cog"
           

#line 1254 "emit.cog"
           

#line 1254 "emit.cog"
  emitDecls(

#line 1254 "emit.cog"
            

#line 1254 "emit.cog"
            &

#line 1254 "emit.cog"
             context, 

#line 1254 "emit.cog"
                      moduleDecl, 

#line 1254 "emit.cog"
                                  kDeclEmitMode_Full);


#line 1257 "emit.cog"
  for(auto dd : 

#line 1257 "emit.cog"
                                   

#line 1257 "emit.cog"
                          DEREF(

#line 1257 "emit.cog"
                moduleDecl).getDecls())
{
{


#line 1259 "emit.cog"
   

#line 1259 "emit.cog"
   auto classDecl = 

#line 1259 "emit.cog"
                                

#line 1259 "emit.cog"
                   as<

#line 1259 "emit.cog"
                      ClassDecl> (

#line 1259 "emit.cog"
                                 dd);


#line 1260 "emit.cog"
   if(

#line 1260 "emit.cog"
       

#line 1260 "emit.cog"
       !

#line 1260 "emit.cog"
        classDecl)
{


#line 1260 "emit.cog"
                   continue;
}


#line 1262 "emit.cog"
                                 

#line 1262 "emit.cog"
                                 

#line 1262 "emit.cog"
          DEREF(

#line 1262 "emit.cog"
   context).suppressLineDirective 

#line 1262 "emit.cog"
                                 += 

#line 1262 "emit.cog"
                                    1;


#line 1264 "emit.cog"
       

#line 1264 "emit.cog"
       

#line 1264 "emit.cog"
   emit(

#line 1264 "emit.cog"
        

#line 1264 "emit.cog"
        &

#line 1264 "emit.cog"
         context, 

#line 1264 "emit.cog"
                  "COG_DEFINE_CLASS(");


#line 1265 "emit.cog"
               

#line 1265 "emit.cog"
               

#line 1265 "emit.cog"
   emitDeclName(

#line 1265 "emit.cog"
                

#line 1265 "emit.cog"
                &

#line 1265 "emit.cog"
                 context, 

#line 1265 "emit.cog"
                          classDecl, 

#line 1265 "emit.cog"
                                     kDeclEmitMode_Full);


#line 1266 "emit.cog"
       

#line 1266 "emit.cog"
       

#line 1266 "emit.cog"
   emit(

#line 1266 "emit.cog"
        

#line 1266 "emit.cog"
        &

#line 1266 "emit.cog"
         context, 

#line 1266 "emit.cog"
                  ", ");


#line 1267 "emit.cog"
   if(auto base = 

#line 1267 "emit.cog"
                                DEREF(

#line 1267 "emit.cog"
                           DEREF(

#line 1267 "emit.cog"
                  classDecl).base).exp)
{


#line 1269 "emit.cog"
           

#line 1269 "emit.cog"
           

#line 1269 "emit.cog"
    emitExp(

#line 1269 "emit.cog"
            

#line 1269 "emit.cog"
            &

#line 1269 "emit.cog"
             context, 

#line 1269 "emit.cog"
                      base);
}
else
{


#line 1273 "emit.cog"
        

#line 1273 "emit.cog"
        

#line 1273 "emit.cog"
    emit(

#line 1273 "emit.cog"
         

#line 1273 "emit.cog"
         &

#line 1273 "emit.cog"
          context, 

#line 1273 "emit.cog"
                   "cog::Object");
}


#line 1275 "emit.cog"
       

#line 1275 "emit.cog"
       

#line 1275 "emit.cog"
   emit(

#line 1275 "emit.cog"
        

#line 1275 "emit.cog"
        &

#line 1275 "emit.cog"
         context, 

#line 1275 "emit.cog"
                  ")\n");


#line 1277 "emit.cog"
                                 

#line 1277 "emit.cog"
                                 

#line 1277 "emit.cog"
          DEREF(

#line 1277 "emit.cog"
   context).suppressLineDirective 

#line 1277 "emit.cog"
                                 -= 

#line 1277 "emit.cog"
                                    1;
}
}


#line 1280 "emit.cog"
      

#line 1280 "emit.cog"
      

#line 1280 "emit.cog"
  emit(

#line 1280 "emit.cog"
       

#line 1280 "emit.cog"
       &

#line 1280 "emit.cog"
        context, 

#line 1280 "emit.cog"
                 "}\n");


#line 1282 "emit.cog"
  if(

#line 1282 "emit.cog"
     extra)
{


#line 1284 "emit.cog"
       

#line 1284 "emit.cog"
       

#line 1284 "emit.cog"
   emit(

#line 1284 "emit.cog"
        

#line 1284 "emit.cog"
        &

#line 1284 "emit.cog"
         context, 

#line 1284 "emit.cog"
                                      

#line 1284 "emit.cog"
                  TerminatedStringSpan(

#line 1284 "emit.cog"
                                       extra));
}


#line 1287 "emit.cog"
        

#line 1287 "emit.cog"
        

#line 1287 "emit.cog"
  fclose(

#line 1287 "emit.cog"
         stream);
}


#line 1291 "emit.cog"
 void emitModule(

#line 1292 "emit.cog"
           Session session)
{


#line 1294 "emit.cog"
     if(

#line 1294 "emit.cog"
        

#line 1294 "emit.cog"
        !

#line 1294 "emit.cog"
                DEREF(

#line 1294 "emit.cog"
         session).sourceFiles)
{


#line 1295 "emit.cog"
         return;
}


#line 1296 "emit.cog"
     if(

#line 1296 "emit.cog"
        

#line 1296 "emit.cog"
        !

#line 1296 "emit.cog"
                DEREF(

#line 1296 "emit.cog"
         session).moduleDecl)
{


#line 1297 "emit.cog"
         return;
}


#line 1300 "emit.cog"
  

#line 1300 "emit.cog"
  auto moduleDecl = 

#line 1300 "emit.cog"
                          DEREF(

#line 1300 "emit.cog"
                   session).moduleDecl;


#line 1301 "emit.cog"
  

#line 1301 "emit.cog"
  auto moduleName = 

#line 1301 "emit.cog"
                             DEREF(

#line 1301 "emit.cog"
                   moduleDecl).name;


#line 1302 "emit.cog"
              

#line 1302 "emit.cog"
              

#line 1302 "emit.cog"
     cogAssert(

#line 1302 "emit.cog"
               moduleName);


#line 1304 "emit.cog"
     

#line 1304 "emit.cog"
     auto modulePath = 

#line 1304 "emit.cog"
                             DEREF(

#line 1304 "emit.cog"
                      session).modulePath2;


#line 1305 "emit.cog"
              

#line 1305 "emit.cog"
              

#line 1305 "emit.cog"
     cogAssert(

#line 1305 "emit.cog"
               modulePath);


#line 1307 "emit.cog"
  

#line 1307 "emit.cog"
  auto moduleNameText = 

#line 1307 "emit.cog"
                              

#line 1307 "emit.cog"
                       getText(

#line 1307 "emit.cog"
                               moduleName);


#line 1308 "emit.cog"
     

#line 1308 "emit.cog"
     auto modulePathText = 

#line 1308 "emit.cog"
                                 

#line 1308 "emit.cog"
                          getText(

#line 1308 "emit.cog"
                                  modulePath);


#line 1313 "emit.cog"
  

#line 1313 "emit.cog"
  

#line 1313 "emit.cog"
               FixedSizeArray<

#line 1313 "emit.cog"
                              1024, 

#line 1313 "emit.cog"
                                    Char>  buffer;


#line 1314 "emit.cog"
         

#line 1314 "emit.cog"
         

#line 1314 "emit.cog"
  sprintf(

#line 1314 "emit.cog"
          buffer, 

#line 1314 "emit.cog"
                  "%s.cog.cpp", 

#line 1314 "emit.cog"
                                              DEREF(

#line 1314 "emit.cog"
                                modulePathText).begin);


#line 1316 "emit.cog"
                 

#line 1316 "emit.cog"
                 

#line 1316 "emit.cog"
  emitModuleInner(

#line 1317 "emit.cog"
   session, 

#line 1318 "emit.cog"
   moduleNameText, 

#line 1319 "emit.cog"
   buffer, 

#line 1320 "emit.cog"
   nullptr);
}


#line 5 "eval.cog"
 void evalModule(

#line 6 "eval.cog"
           Session session)
{


#line 9 "eval.cog"
  

#line 9 "eval.cog"
  auto moduleDecl = 

#line 9 "eval.cog"
                          DEREF(

#line 9 "eval.cog"
                   session).moduleDecl;


#line 12 "eval.cog"
  if(

#line 12 "eval.cog"
     

#line 12 "eval.cog"
     !

#line 12 "eval.cog"
      moduleDecl)
{


#line 13 "eval.cog"
   return;
}


#line 15 "eval.cog"
                 

#line 15 "eval.cog"
                 

#line 15 "eval.cog"
  emitModuleInner(

#line 16 "eval.cog"
   session, 

#line 17 "eval.cog"
   "cogc_eval", 

#line 18 "eval.cog"
   "cogc-eval.cog.cpp", 

#line 19 "eval.cog"
   "COG_EXPORT int _cogc_eval() { return cogc_eval::main(0, nullptr); }\n");


#line 21 "eval.cog"
             

#line 21 "eval.cog"
             

#line 21 "eval.cog"
  loadAndEval(

#line 21 "eval.cog"
              "cogc-eval.cog.cpp");
}


#line 26 "source.cog"
 

#line 3 "token.cog"
 typedef 

#line 3 "token.cog"
                        UInt16 TokenFlags;


#line 3 "lexer.cog"
 

#line 13 "lexer.cog"
 void initializeLexer(

#line 14 "lexer.cog"
              

#line 14 "lexer.cog"
         Lexer

#line 14 "lexer.cog"
              * lexer, 

#line 15 "lexer.cog"
           Session session, 

#line 16 "lexer.cog"
                  

#line 16 "lexer.cog"
        SourceFile

#line 16 "lexer.cog"
                  * file)
{


#line 18 "lexer.cog"
       DEREF(

#line 18 "lexer.cog"
  lexer).session = 

#line 18 "lexer.cog"
                   session;


#line 19 "lexer.cog"
       DEREF(

#line 19 "lexer.cog"
  lexer).file = 

#line 19 "lexer.cog"
                file;


#line 21 "lexer.cog"
       DEREF(

#line 21 "lexer.cog"
  lexer).cursor = 

#line 21 "lexer.cog"
                          DEREF(

#line 21 "lexer.cog"
                     DEREF(

#line 21 "lexer.cog"
                 file).text).begin;


#line 22 "lexer.cog"
       DEREF(

#line 22 "lexer.cog"
  lexer).tokenFlags = 

#line 24 "lexer.cog"
   

#line 23 "lexer.cog"
   kTokenFlag_AtStartOfLine 

#line 24 "lexer.cog"
   | 

#line 24 "lexer.cog"
     kTokenFlag_AfterSpace;


#line 26 "lexer.cog"
       DEREF(

#line 26 "lexer.cog"
  lexer).rawStartPtr = 

#line 26 "lexer.cog"
                                                     

#line 26 "lexer.cog"
                      cast<

#line 26 "lexer.cog"
                           UIntPtr>(

#line 26 "lexer.cog"
                                             DEREF(

#line 26 "lexer.cog"
                                        DEREF(

#line 26 "lexer.cog"
                                    file).text).begin) 

#line 26 "lexer.cog"
                                                     - 

#line 26 "lexer.cog"
                                                                    DEREF(

#line 26 "lexer.cog"
                                                           DEREF(

#line 26 "lexer.cog"
                                                       file).firstLoc).raw;
}


#line 29 "lexer.cog"
 void finalizeLexer(

#line 30 "lexer.cog"
              

#line 30 "lexer.cog"
         Lexer

#line 30 "lexer.cog"
              * lexer)
{
}


#line 34 "lexer.cog"
 

#line 36 "lexer.cog"
                   

#line 36 "lexer.cog"
     DiagnosticSink

#line 36 "lexer.cog"
                   * getSink(

#line 35 "lexer.cog"
              

#line 35 "lexer.cog"
         Lexer

#line 35 "lexer.cog"
              * lexer)
{


#line 38 "lexer.cog"
  return 

#line 38 "lexer.cog"
         

#line 38 "lexer.cog"
         &

#line 38 "lexer.cog"
                       DEREF(

#line 38 "lexer.cog"
               DEREF(

#line 38 "lexer.cog"
          lexer).session).sink;
}


#line 41 "lexer.cog"
 

#line 41 "lexer.cog"
                                 Int peekByte(

#line 41 "lexer.cog"
                           

#line 41 "lexer.cog"
                      Lexer

#line 41 "lexer.cog"
                           * lexer)
{


#line 43 "lexer.cog"
  return 

#line 43 "lexer.cog"
         

#line 43 "lexer.cog"
         *

#line 43 "lexer.cog"
               DEREF(

#line 43 "lexer.cog"
          lexer).cursor;
}


#line 46 "lexer.cog"
 

#line 46 "lexer.cog"
                                      Int peekCodePoint(

#line 46 "lexer.cog"
                                

#line 46 "lexer.cog"
                           Lexer

#line 46 "lexer.cog"
                                * lexer)
{


#line 49 "lexer.cog"
  return 

#line 49 "lexer.cog"
                 

#line 49 "lexer.cog"
         peekByte(

#line 49 "lexer.cog"
                  lexer);
}


#line 52 "lexer.cog"
 

#line 52 "lexer.cog"
                                SourceLoc peekLoc(

#line 52 "lexer.cog"
                          

#line 52 "lexer.cog"
                     Lexer

#line 52 "lexer.cog"
                          * lexer)
{


#line 54 "lexer.cog"
  

#line 54 "lexer.cog"
  

#line 54 "lexer.cog"
            SourceLoc loc;


#line 55 "lexer.cog"
     DEREF(

#line 55 "lexer.cog"
  loc).raw = 

#line 55 "lexer.cog"
                                        

#line 55 "lexer.cog"
            cast<

#line 55 "lexer.cog"
                 UIntPtr>(

#line 55 "lexer.cog"
                               DEREF(

#line 55 "lexer.cog"
                          lexer).cursor) 

#line 55 "lexer.cog"
                                        - 

#line 55 "lexer.cog"
                                               DEREF(

#line 55 "lexer.cog"
                                          lexer).rawStartPtr;


#line 56 "lexer.cog"
  return 

#line 56 "lexer.cog"
         loc;
}


#line 59 "lexer.cog"
 void advanceByte(

#line 59 "lexer.cog"
                              

#line 59 "lexer.cog"
                         Lexer

#line 59 "lexer.cog"
                              * lexer)
{


#line 61 "lexer.cog"
           

#line 61 "lexer.cog"
           

#line 61 "lexer.cog"
  cogAssert(

#line 61 "lexer.cog"
                         

#line 61 "lexer.cog"
                 DEREF(

#line 61 "lexer.cog"
            lexer).cursor 

#line 61 "lexer.cog"
                         != 

#line 61 "lexer.cog"
                                           DEREF(

#line 61 "lexer.cog"
                                      DEREF(

#line 61 "lexer.cog"
                                 DEREF(

#line 61 "lexer.cog"
                            lexer).file).text).end);


#line 62 "lexer.cog"
              

#line 62 "lexer.cog"
              

#line 62 "lexer.cog"
       DEREF(

#line 62 "lexer.cog"
  lexer).cursor

#line 62 "lexer.cog"
              ++;
}


#line 65 "lexer.cog"
 

#line 65 "lexer.cog"
                         Bool isAlpha(

#line 65 "lexer.cog"
                 Int c)
{


#line 67 "lexer.cog"
  return 

#line 68 "lexer.cog"
   

#line 67 "lexer.cog"
         (

#line 67 "lexer.cog"
                     

#line 67 "lexer.cog"
          (

#line 67 "lexer.cog"
             

#line 67 "lexer.cog"
           c 

#line 67 "lexer.cog"
             >= 

#line 67 "lexer.cog"
                'a') 

#line 67 "lexer.cog"
                     && 

#line 67 "lexer.cog"
                        (

#line 67 "lexer.cog"
                           

#line 67 "lexer.cog"
                         c 

#line 67 "lexer.cog"
                           <= 

#line 67 "lexer.cog"
                              'z')) 

#line 68 "lexer.cog"
   || 

#line 69 "lexer.cog"
   

#line 68 "lexer.cog"
      (

#line 68 "lexer.cog"
                  

#line 68 "lexer.cog"
       (

#line 68 "lexer.cog"
          

#line 68 "lexer.cog"
        c 

#line 68 "lexer.cog"
          >= 

#line 68 "lexer.cog"
             'A') 

#line 68 "lexer.cog"
                  && 

#line 68 "lexer.cog"
                     (

#line 68 "lexer.cog"
                        

#line 68 "lexer.cog"
                      c 

#line 68 "lexer.cog"
                        <= 

#line 68 "lexer.cog"
                           'Z')) 

#line 69 "lexer.cog"
   || 

#line 69 "lexer.cog"
      (

#line 69 "lexer.cog"
         

#line 69 "lexer.cog"
       c 

#line 69 "lexer.cog"
         == 

#line 69 "lexer.cog"
            '_');
}


#line 72 "lexer.cog"
 

#line 72 "lexer.cog"
                         Bool isDigit(

#line 72 "lexer.cog"
                 Int c)
{


#line 74 "lexer.cog"
  return 

#line 74 "lexer.cog"
                    

#line 74 "lexer.cog"
         (

#line 74 "lexer.cog"
            

#line 74 "lexer.cog"
          c 

#line 74 "lexer.cog"
            >= 

#line 74 "lexer.cog"
               '0') 

#line 74 "lexer.cog"
                    && 

#line 74 "lexer.cog"
                       (

#line 74 "lexer.cog"
                          

#line 74 "lexer.cog"
                        c 

#line 74 "lexer.cog"
                          <= 

#line 74 "lexer.cog"
                             '9');
}


#line 77 "lexer.cog"
 

#line 77 "lexer.cog"
                            Bool isAlphaNum(

#line 77 "lexer.cog"
                    Int c)
{


#line 79 "lexer.cog"
  return 

#line 79 "lexer.cog"
                    

#line 79 "lexer.cog"
                

#line 79 "lexer.cog"
         isAlpha(

#line 79 "lexer.cog"
                 c) 

#line 79 "lexer.cog"
                    || 

#line 79 "lexer.cog"
                              

#line 79 "lexer.cog"
                       isDigit(

#line 79 "lexer.cog"
                               c);
}


#line 82 "lexer.cog"
 

#line 82 "lexer.cog"
                                Bool isOperatorChar(

#line 82 "lexer.cog"
                        Int c)
{


#line 84 "lexer.cog"
  return 

#line 84 "lexer.cog"
                                     

#line 84 "lexer.cog"
               

#line 84 "lexer.cog"
         strchr(

#line 84 "lexer.cog"
                "~!%^&*-+=|<>?/", 

#line 84 "lexer.cog"
                                  c) 

#line 84 "lexer.cog"
                                     != 

#line 84 "lexer.cog"
                                        0;
}


#line 87 "lexer.cog"
 

#line 87 "lexer.cog"
                              Bool isWhiteSpace(

#line 87 "lexer.cog"
                      Int c)
{


#line 89 "lexer.cog"
  return 

#line 89 "lexer.cog"
                          

#line 89 "lexer.cog"
               

#line 89 "lexer.cog"
         strchr(

#line 89 "lexer.cog"
                " \t", 

#line 89 "lexer.cog"
                       c) 

#line 89 "lexer.cog"
                          != 

#line 89 "lexer.cog"
                             0;
}


#line 92 "lexer.cog"
 void lexDigits(

#line 93 "lexer.cog"
                 

#line 93 "lexer.cog"
            Lexer

#line 93 "lexer.cog"
                 * lexer, 

#line 94 "lexer.cog"
           Int base)
{


#line 96 "lexer.cog"
     {
for(;;)
{
{


#line 98 "lexer.cog"
         

#line 98 "lexer.cog"
         auto c = 

#line 98 "lexer.cog"
                         

#line 98 "lexer.cog"
                 peekByte(

#line 98 "lexer.cog"
                          lexer);


#line 99 "lexer.cog"
         switch(

#line 99 "lexer.cog"
                c)
{
case 

#line 101 "lexer.cog"
              '0':
case 

#line 101 "lexer.cog"
                        '1':
case 

#line 101 "lexer.cog"
                                  '2':
case 

#line 101 "lexer.cog"
                                            '3':
case 

#line 101 "lexer.cog"
                                                      '4':
case 

#line 102 "lexer.cog"
              '5':
case 

#line 102 "lexer.cog"
                        '6':
case 

#line 102 "lexer.cog"
                                  '7':
case 

#line 102 "lexer.cog"
                                            '8':
case 

#line 102 "lexer.cog"
                                                      '9':
{


#line 103 "lexer.cog"
                        

#line 103 "lexer.cog"
                        

#line 103 "lexer.cog"
             advanceByte(

#line 103 "lexer.cog"
                         lexer);
}
{


#line 104 "lexer.cog"
             continue;
}
case 

#line 106 "lexer.cog"
              'a':
case 

#line 106 "lexer.cog"
                        'b':
case 

#line 106 "lexer.cog"
                                  'c':
case 

#line 106 "lexer.cog"
                                            'd':
case 

#line 106 "lexer.cog"
                                                      'e':
case 

#line 106 "lexer.cog"
                                                                'f':
case 

#line 107 "lexer.cog"
              'A':
case 

#line 107 "lexer.cog"
                        'B':
case 

#line 107 "lexer.cog"
                                  'C':
case 

#line 107 "lexer.cog"
                                            'D':
case 

#line 107 "lexer.cog"
                                                      'E':
case 

#line 107 "lexer.cog"
                                                                'F':
{


#line 108 "lexer.cog"
             if(

#line 108 "lexer.cog"
                     

#line 108 "lexer.cog"
                base 

#line 108 "lexer.cog"
                     > 

#line 108 "lexer.cog"
                       10)
{


#line 110 "lexer.cog"
                            

#line 110 "lexer.cog"
                            

#line 110 "lexer.cog"
                 advanceByte(

#line 110 "lexer.cog"
                             lexer);


#line 111 "lexer.cog"
                 continue;
}
}
{


#line 113 "lexer.cog"
             break;
}
default:
{


#line 116 "lexer.cog"
             return;
}
}
}
}}
}


#line 121 "lexer.cog"
 

#line 124 "lexer.cog"
     Bool peekNumberExponentMarker(

#line 122 "lexer.cog"
                 

#line 122 "lexer.cog"
            Lexer

#line 122 "lexer.cog"
                 * lexer, 

#line 123 "lexer.cog"
        Int base)
{


#line 126 "lexer.cog"
     switch(

#line 126 "lexer.cog"
                    

#line 126 "lexer.cog"
            peekByte(

#line 126 "lexer.cog"
                     lexer))
{
case 

#line 128 "lexer.cog"
          'e':
case 

#line 128 "lexer.cog"
                    'E':
{


#line 129 "lexer.cog"
         return 

#line 129 "lexer.cog"
                     

#line 129 "lexer.cog"
                base 

#line 129 "lexer.cog"
                     == 

#line 129 "lexer.cog"
                        10;
}
case 

#line 131 "lexer.cog"
          'p':
case 

#line 131 "lexer.cog"
                    'P':
{


#line 132 "lexer.cog"
         return 

#line 132 "lexer.cog"
                     

#line 132 "lexer.cog"
                base 

#line 132 "lexer.cog"
                     == 

#line 132 "lexer.cog"
                        16;
}
default:
{


#line 135 "lexer.cog"
         return 

#line 135 "lexer.cog"
                false;
}
}
}


#line 139 "lexer.cog"
 

#line 142 "lexer.cog"
     TokenCode lexNumber(

#line 140 "lexer.cog"
                 

#line 140 "lexer.cog"
            Lexer

#line 140 "lexer.cog"
                 * lexer, 

#line 141 "lexer.cog"
           Int base)
{


#line 144 "lexer.cog"
     

#line 144 "lexer.cog"
     auto code = 

#line 144 "lexer.cog"
                kTokenCode_IntegerLiteral;


#line 147 "lexer.cog"
              

#line 147 "lexer.cog"
              

#line 147 "lexer.cog"
     lexDigits(

#line 147 "lexer.cog"
               lexer, 

#line 147 "lexer.cog"
                      base);


#line 150 "lexer.cog"
     if(

#line 150 "lexer.cog"
                        

#line 150 "lexer.cog"
                

#line 150 "lexer.cog"
        peekByte(

#line 150 "lexer.cog"
                 lexer) 

#line 150 "lexer.cog"
                        == 

#line 150 "lexer.cog"
                           '.')
{


#line 152 "lexer.cog"
                    

#line 152 "lexer.cog"
                    

#line 152 "lexer.cog"
         advanceByte(

#line 152 "lexer.cog"
                     lexer);


#line 153 "lexer.cog"
         code = 

#line 153 "lexer.cog"
                kTokenCode_FloatingPointLiteral;


#line 154 "lexer.cog"
                  

#line 154 "lexer.cog"
                  

#line 154 "lexer.cog"
         lexDigits(

#line 154 "lexer.cog"
                   lexer, 

#line 154 "lexer.cog"
                          base);
}


#line 158 "lexer.cog"
     if(

#line 158 "lexer.cog"
                                

#line 158 "lexer.cog"
        peekNumberExponentMarker(

#line 158 "lexer.cog"
                                 lexer, 

#line 158 "lexer.cog"
                                        base))
{


#line 160 "lexer.cog"
                    

#line 160 "lexer.cog"
                    

#line 160 "lexer.cog"
         advanceByte(

#line 160 "lexer.cog"
                     lexer);


#line 161 "lexer.cog"
         code = 

#line 161 "lexer.cog"
                kTokenCode_FloatingPointLiteral;


#line 164 "lexer.cog"
         switch(

#line 164 "lexer.cog"
                        

#line 164 "lexer.cog"
                peekByte(

#line 164 "lexer.cog"
                         lexer))
{
case 

#line 166 "lexer.cog"
              '+':
case 

#line 166 "lexer.cog"
                        '-':
{


#line 167 "lexer.cog"
                        

#line 167 "lexer.cog"
                        

#line 167 "lexer.cog"
             advanceByte(

#line 167 "lexer.cog"
                         lexer);
}
{


#line 168 "lexer.cog"
             break;
}
default:
{


#line 171 "lexer.cog"
             break;
}
}


#line 175 "lexer.cog"
                  

#line 175 "lexer.cog"
                  

#line 175 "lexer.cog"
         lexDigits(

#line 175 "lexer.cog"
                   lexer, 

#line 175 "lexer.cog"
                          base);
}


#line 180 "lexer.cog"
     return 

#line 180 "lexer.cog"
            code;
}


#line 183 "lexer.cog"
 

#line 185 "lexer.cog"
     TokenCode lexIdentifier(

#line 184 "lexer.cog"
              

#line 184 "lexer.cog"
         Lexer

#line 184 "lexer.cog"
              * lexer)
{


#line 187 "lexer.cog"
  {
for(;;)
{
{


#line 189 "lexer.cog"
   

#line 189 "lexer.cog"
   auto c = 

#line 189 "lexer.cog"
                   

#line 189 "lexer.cog"
           peekByte(

#line 189 "lexer.cog"
                    lexer);


#line 190 "lexer.cog"
   if(

#line 190 "lexer.cog"
      

#line 190 "lexer.cog"
      !

#line 190 "lexer.cog"
                 

#line 190 "lexer.cog"
       isAlphaNum(

#line 190 "lexer.cog"
                  c))
{


#line 191 "lexer.cog"
    break;
}


#line 193 "lexer.cog"
              

#line 193 "lexer.cog"
              

#line 193 "lexer.cog"
   advanceByte(

#line 193 "lexer.cog"
               lexer);
}
}}


#line 195 "lexer.cog"
  return 

#line 195 "lexer.cog"
         kTokenCode_Identifier;
}


#line 198 "lexer.cog"
 

#line 200 "lexer.cog"
     TokenCode lexOperator(

#line 199 "lexer.cog"
              

#line 199 "lexer.cog"
         Lexer

#line 199 "lexer.cog"
              * lexer)
{


#line 202 "lexer.cog"
  {
for(;;)
{
{


#line 204 "lexer.cog"
   

#line 204 "lexer.cog"
   auto c = 

#line 204 "lexer.cog"
                   

#line 204 "lexer.cog"
           peekByte(

#line 204 "lexer.cog"
                    lexer);


#line 205 "lexer.cog"
   if(

#line 205 "lexer.cog"
      

#line 205 "lexer.cog"
      !

#line 205 "lexer.cog"
                     

#line 205 "lexer.cog"
       isOperatorChar(

#line 205 "lexer.cog"
                      c))
{


#line 206 "lexer.cog"
    break;
}


#line 208 "lexer.cog"
              

#line 208 "lexer.cog"
              

#line 208 "lexer.cog"
   advanceByte(

#line 208 "lexer.cog"
               lexer);
}
}}


#line 210 "lexer.cog"
  return 

#line 210 "lexer.cog"
         kTokenCode_InfixOperator;
}


#line 213 "lexer.cog"
 

#line 215 "lexer.cog"
     TokenCode lexLineComment(

#line 214 "lexer.cog"
              

#line 214 "lexer.cog"
         Lexer

#line 214 "lexer.cog"
              * lexer)
{


#line 217 "lexer.cog"
  {
for(;;)
{
{


#line 219 "lexer.cog"
   

#line 219 "lexer.cog"
   auto c = 

#line 219 "lexer.cog"
                   

#line 219 "lexer.cog"
           peekByte(

#line 219 "lexer.cog"
                    lexer);


#line 220 "lexer.cog"
   switch(

#line 220 "lexer.cog"
          c)
{
case 

#line 222 "lexer.cog"
        '\r':
case 

#line 222 "lexer.cog"
                   '\n':
case 

#line 222 "lexer.cog"
                              0:
{


#line 223 "lexer.cog"
    return 

#line 223 "lexer.cog"
           kTokenCode_LineComment;
}
default:
{


#line 226 "lexer.cog"
               

#line 226 "lexer.cog"
               

#line 226 "lexer.cog"
    advanceByte(

#line 226 "lexer.cog"
                lexer);
}
{


#line 227 "lexer.cog"
    break;
}
}
}
}}
}


#line 232 "lexer.cog"
 

#line 234 "lexer.cog"
     TokenCode lexBlockComment(

#line 233 "lexer.cog"
              

#line 233 "lexer.cog"
         Lexer

#line 233 "lexer.cog"
              * lexer)
{


#line 236 "lexer.cog"
  {
for(;;)
{
{


#line 238 "lexer.cog"
   

#line 238 "lexer.cog"
   auto c = 

#line 238 "lexer.cog"
                   

#line 238 "lexer.cog"
           peekByte(

#line 238 "lexer.cog"
                    lexer);


#line 239 "lexer.cog"
   switch(

#line 239 "lexer.cog"
          c)
{
case 

#line 241 "lexer.cog"
        0:
{


#line 243 "lexer.cog"
    return 

#line 243 "lexer.cog"
           kTokenCode_BlockComment;
}
case 

#line 245 "lexer.cog"
        '*':
{


#line 246 "lexer.cog"
               

#line 246 "lexer.cog"
               

#line 246 "lexer.cog"
    advanceByte(

#line 246 "lexer.cog"
                lexer);
}
{


#line 247 "lexer.cog"
    switch(

#line 247 "lexer.cog"
                   

#line 247 "lexer.cog"
           peekByte(

#line 247 "lexer.cog"
                    lexer))
{
case 

#line 249 "lexer.cog"
         '/':
{


#line 250 "lexer.cog"
                

#line 250 "lexer.cog"
                

#line 250 "lexer.cog"
     advanceByte(

#line 250 "lexer.cog"
                 lexer);
}
{


#line 251 "lexer.cog"
     return 

#line 251 "lexer.cog"
            kTokenCode_BlockComment;
}
default:
{


#line 253 "lexer.cog"
     break;
}
}
}
{


#line 255 "lexer.cog"
    break;
}
default:
{


#line 258 "lexer.cog"
               

#line 258 "lexer.cog"
               

#line 258 "lexer.cog"
    advanceByte(

#line 258 "lexer.cog"
                lexer);
}
{


#line 259 "lexer.cog"
    break;
}
}
}
}}
}


#line 264 "lexer.cog"
 

#line 266 "lexer.cog"
     TokenCode lexWhiteSpace(

#line 265 "lexer.cog"
              

#line 265 "lexer.cog"
         Lexer

#line 265 "lexer.cog"
              * lexer)
{


#line 268 "lexer.cog"
  {
for(;;)
{
{


#line 270 "lexer.cog"
   

#line 270 "lexer.cog"
   auto c = 

#line 270 "lexer.cog"
                   

#line 270 "lexer.cog"
           peekByte(

#line 270 "lexer.cog"
                    lexer);


#line 271 "lexer.cog"
   if(

#line 271 "lexer.cog"
      

#line 271 "lexer.cog"
      !

#line 271 "lexer.cog"
                   

#line 271 "lexer.cog"
       isWhiteSpace(

#line 271 "lexer.cog"
                    c))
{


#line 273 "lexer.cog"
    return 

#line 273 "lexer.cog"
           kTokenCode_WhiteSpace;
}


#line 276 "lexer.cog"
              

#line 276 "lexer.cog"
              

#line 276 "lexer.cog"
   advanceByte(

#line 276 "lexer.cog"
               lexer);
}
}}
}


#line 280 "lexer.cog"
 void lexStringLiteral(

#line 281 "lexer.cog"
              

#line 281 "lexer.cog"
         Lexer

#line 281 "lexer.cog"
              * lexer, 

#line 282 "lexer.cog"
             Int delimeter)
{


#line 284 "lexer.cog"
  {
for(;;)
{
{


#line 286 "lexer.cog"
   

#line 286 "lexer.cog"
   auto c = 

#line 286 "lexer.cog"
                   

#line 286 "lexer.cog"
           peekByte(

#line 286 "lexer.cog"
                    lexer);


#line 287 "lexer.cog"
   if(

#line 287 "lexer.cog"
        

#line 287 "lexer.cog"
      c 

#line 287 "lexer.cog"
        == 

#line 287 "lexer.cog"
           delimeter)
{


#line 289 "lexer.cog"
               

#line 289 "lexer.cog"
               

#line 289 "lexer.cog"
    advanceByte(

#line 289 "lexer.cog"
                lexer);


#line 290 "lexer.cog"
    return;
}


#line 293 "lexer.cog"
   switch(

#line 293 "lexer.cog"
          c)
{
case 

#line 295 "lexer.cog"
        0:
case 

#line 295 "lexer.cog"
                '\r':
case 

#line 295 "lexer.cog"
                           '\n':
{


#line 297 "lexer.cog"
    return;
}
case 

#line 299 "lexer.cog"
        '\\':
{
{


#line 301 "lexer.cog"
                

#line 301 "lexer.cog"
                

#line 301 "lexer.cog"
     advanceByte(

#line 301 "lexer.cog"
                 lexer);


#line 302 "lexer.cog"
     

#line 302 "lexer.cog"
     auto d = 

#line 302 "lexer.cog"
                     

#line 302 "lexer.cog"
             peekByte(

#line 302 "lexer.cog"
                      lexer);


#line 303 "lexer.cog"
     switch(

#line 303 "lexer.cog"
            d)
{
case 

#line 305 "lexer.cog"
          0:
case 

#line 305 "lexer.cog"
                  '\r':
case 

#line 305 "lexer.cog"
                             '\n':
{


#line 307 "lexer.cog"
      return;
}
default:
{


#line 310 "lexer.cog"
                 

#line 310 "lexer.cog"
                 

#line 310 "lexer.cog"
      advanceByte(

#line 310 "lexer.cog"
                  lexer);
}
{


#line 311 "lexer.cog"
      break;
}
}
}
}
{


#line 315 "lexer.cog"
    break;
}
default:
{


#line 318 "lexer.cog"
               

#line 318 "lexer.cog"
               

#line 318 "lexer.cog"
    advanceByte(

#line 318 "lexer.cog"
                lexer);
}
{


#line 319 "lexer.cog"
    continue;
}
}
}
}}
}


#line 325 "lexer.cog"
 

#line 327 "lexer.cog"
     TokenCode lexTokenImpl(

#line 326 "lexer.cog"
              

#line 326 "lexer.cog"
         Lexer

#line 326 "lexer.cog"
              * lexer)
{


#line 329 "lexer.cog"
  

#line 329 "lexer.cog"
  auto c = 

#line 329 "lexer.cog"
                  

#line 329 "lexer.cog"
          peekByte(

#line 329 "lexer.cog"
                   lexer);


#line 330 "lexer.cog"
  switch(

#line 330 "lexer.cog"
         c)
{
case 

#line 332 "lexer.cog"
       0:
{
{


#line 334 "lexer.cog"
    if(

#line 334 "lexer.cog"
                    

#line 334 "lexer.cog"
            DEREF(

#line 334 "lexer.cog"
       lexer).cursor 

#line 334 "lexer.cog"
                    == 

#line 334 "lexer.cog"
                                      DEREF(

#line 334 "lexer.cog"
                                 DEREF(

#line 334 "lexer.cog"
                            DEREF(

#line 334 "lexer.cog"
                       lexer).file).text).end)
{


#line 336 "lexer.cog"
     return 

#line 336 "lexer.cog"
            kTokenCode_EndOfFile;
}
}
}
{


#line 339 "lexer.cog"
   break;
}
case 

#line 341 "lexer.cog"
       '\r':
case 

#line 341 "lexer.cog"
                  '\n':
{


#line 342 "lexer.cog"
              

#line 342 "lexer.cog"
              

#line 342 "lexer.cog"
   advanceByte(

#line 342 "lexer.cog"
               lexer);
}
{
{


#line 344 "lexer.cog"
    

#line 344 "lexer.cog"
    auto d = 

#line 344 "lexer.cog"
                    

#line 344 "lexer.cog"
            peekByte(

#line 344 "lexer.cog"
                     lexer);


#line 345 "lexer.cog"
    if(

#line 345 "lexer.cog"
               

#line 345 "lexer.cog"
       (

#line 345 "lexer.cog"
          

#line 345 "lexer.cog"
        c 

#line 345 "lexer.cog"
          ^ 

#line 345 "lexer.cog"
            d) 

#line 345 "lexer.cog"
               == 

#line 345 "lexer.cog"
                  (

#line 345 "lexer.cog"
                        

#line 345 "lexer.cog"
                   '\r' 

#line 345 "lexer.cog"
                        ^ 

#line 345 "lexer.cog"
                          '\n'))
{


#line 347 "lexer.cog"
                

#line 347 "lexer.cog"
                

#line 347 "lexer.cog"
     advanceByte(

#line 347 "lexer.cog"
                 lexer);
}


#line 349 "lexer.cog"
    return 

#line 349 "lexer.cog"
           kTokenCode_EndOfLine;
}
}
{


#line 351 "lexer.cog"
   break;
}
case 

#line 353 "lexer.cog"
       ' ':
case 

#line 353 "lexer.cog"
                 '\t':
{


#line 354 "lexer.cog"
   return 

#line 354 "lexer.cog"
                       

#line 354 "lexer.cog"
          lexWhiteSpace(

#line 354 "lexer.cog"
                        lexer);
}
case 

#line 356 "lexer.cog"
       '\"':
{


#line 357 "lexer.cog"
              

#line 357 "lexer.cog"
              

#line 357 "lexer.cog"
   advanceByte(

#line 357 "lexer.cog"
               lexer);
}
{


#line 358 "lexer.cog"
                   

#line 358 "lexer.cog"
                   

#line 358 "lexer.cog"
   lexStringLiteral(

#line 358 "lexer.cog"
                    lexer, 

#line 358 "lexer.cog"
                           c);
}
{


#line 359 "lexer.cog"
   return 

#line 359 "lexer.cog"
          kTokenCode_StringLiteral;
}
case 

#line 361 "lexer.cog"
       '\'':
{


#line 362 "lexer.cog"
              

#line 362 "lexer.cog"
              

#line 362 "lexer.cog"
   advanceByte(

#line 362 "lexer.cog"
               lexer);
}
{


#line 363 "lexer.cog"
                   

#line 363 "lexer.cog"
                   

#line 363 "lexer.cog"
   lexStringLiteral(

#line 363 "lexer.cog"
                    lexer, 

#line 363 "lexer.cog"
                           c);
}
{


#line 364 "lexer.cog"
   return 

#line 364 "lexer.cog"
          kTokenCode_CharacterLiteral;
}
case 

#line 366 "lexer.cog"
       '/':
{


#line 367 "lexer.cog"
              

#line 367 "lexer.cog"
              

#line 367 "lexer.cog"
   advanceByte(

#line 367 "lexer.cog"
               lexer);
}
{
{


#line 369 "lexer.cog"
    

#line 369 "lexer.cog"
    auto d = 

#line 369 "lexer.cog"
                    

#line 369 "lexer.cog"
            peekByte(

#line 369 "lexer.cog"
                     lexer);


#line 370 "lexer.cog"
    switch(

#line 370 "lexer.cog"
           d)
{
case 

#line 372 "lexer.cog"
         '/':
{


#line 373 "lexer.cog"
     return 

#line 373 "lexer.cog"
                          

#line 373 "lexer.cog"
            lexLineComment(

#line 373 "lexer.cog"
                           lexer);
}
case 

#line 374 "lexer.cog"
         '*':
{


#line 375 "lexer.cog"
     return 

#line 375 "lexer.cog"
                           

#line 375 "lexer.cog"
            lexBlockComment(

#line 375 "lexer.cog"
                            lexer);
}
default:
{


#line 377 "lexer.cog"
     return 

#line 377 "lexer.cog"
                       

#line 377 "lexer.cog"
            lexOperator(

#line 377 "lexer.cog"
                        lexer);
}
}
}
}
{


#line 380 "lexer.cog"
   break;
}
case 

#line 382 "lexer.cog"
       '-':
{


#line 383 "lexer.cog"
              

#line 383 "lexer.cog"
              

#line 383 "lexer.cog"
   advanceByte(

#line 383 "lexer.cog"
               lexer);
}
{
{


#line 385 "lexer.cog"
    

#line 385 "lexer.cog"
    auto d = 

#line 385 "lexer.cog"
                    

#line 385 "lexer.cog"
            peekByte(

#line 385 "lexer.cog"
                     lexer);


#line 386 "lexer.cog"
    switch(

#line 386 "lexer.cog"
           d)
{
case 

#line 388 "lexer.cog"
         '>':
{


#line 390 "lexer.cog"
                

#line 390 "lexer.cog"
                

#line 390 "lexer.cog"
     advanceByte(

#line 390 "lexer.cog"
                 lexer);
}
{


#line 391 "lexer.cog"
     return 

#line 391 "lexer.cog"
            kTokenCode_Arrow;
}
default:
{


#line 393 "lexer.cog"
     return 

#line 393 "lexer.cog"
                       

#line 393 "lexer.cog"
            lexOperator(

#line 393 "lexer.cog"
                        lexer);
}
}
}
}
{


#line 396 "lexer.cog"
   break;
}
case 

#line 398 "lexer.cog"
       '=':
{


#line 399 "lexer.cog"
              

#line 399 "lexer.cog"
              

#line 399 "lexer.cog"
   advanceByte(

#line 399 "lexer.cog"
               lexer);
}
{
{


#line 401 "lexer.cog"
    

#line 401 "lexer.cog"
    auto d = 

#line 401 "lexer.cog"
                    

#line 401 "lexer.cog"
            peekByte(

#line 401 "lexer.cog"
                     lexer);


#line 402 "lexer.cog"
    if(

#line 402 "lexer.cog"
                     

#line 402 "lexer.cog"
       isOperatorChar(

#line 402 "lexer.cog"
                      d))
{


#line 404 "lexer.cog"
     return 

#line 404 "lexer.cog"
                       

#line 404 "lexer.cog"
            lexOperator(

#line 404 "lexer.cog"
                        lexer);
}
else
{


#line 408 "lexer.cog"
     return 

#line 408 "lexer.cog"
            kTokenCode_Assign;
}
}
}
{


#line 411 "lexer.cog"
   break;
}
case 

#line 413 "lexer.cog"
       '.':
{


#line 414 "lexer.cog"
              

#line 414 "lexer.cog"
              

#line 414 "lexer.cog"
   advanceByte(

#line 414 "lexer.cog"
               lexer);
}
{


#line 415 "lexer.cog"
   if(

#line 415 "lexer.cog"
                      

#line 415 "lexer.cog"
              

#line 415 "lexer.cog"
      peekByte(

#line 415 "lexer.cog"
               lexer) 

#line 415 "lexer.cog"
                      == 

#line 415 "lexer.cog"
                         '.')
{


#line 418 "lexer.cog"
    {
for(;;)
{
{


#line 420 "lexer.cog"
                

#line 420 "lexer.cog"
                

#line 420 "lexer.cog"
     advanceByte(

#line 420 "lexer.cog"
                 lexer);


#line 421 "lexer.cog"
     if(

#line 421 "lexer.cog"
                        

#line 421 "lexer.cog"
                

#line 421 "lexer.cog"
        peekByte(

#line 421 "lexer.cog"
                 lexer) 

#line 421 "lexer.cog"
                        != 

#line 421 "lexer.cog"
                           '.')
{


#line 422 "lexer.cog"
      break;
}
}
}}


#line 424 "lexer.cog"
    return 

#line 424 "lexer.cog"
           kTokenCode_InfixOperator;
}
else
{


#line 428 "lexer.cog"
    return 

#line 428 "lexer.cog"
           kTokenCode_Dot;
}
}
case 

#line 431 "lexer.cog"
          '0':
{


#line 432 "lexer.cog"
                    

#line 432 "lexer.cog"
                    

#line 432 "lexer.cog"
         advanceByte(

#line 432 "lexer.cog"
                     lexer);
}
{
{


#line 434 "lexer.cog"
             

#line 434 "lexer.cog"
             auto d = 

#line 434 "lexer.cog"
                             

#line 434 "lexer.cog"
                     peekByte(

#line 434 "lexer.cog"
                              lexer);


#line 435 "lexer.cog"
             switch(

#line 435 "lexer.cog"
                    d)
{
case 

#line 437 "lexer.cog"
                  'x':
case 

#line 437 "lexer.cog"
                            'X':
{


#line 438 "lexer.cog"
                            

#line 438 "lexer.cog"
                            

#line 438 "lexer.cog"
                 advanceByte(

#line 438 "lexer.cog"
                             lexer);
}
{


#line 439 "lexer.cog"
                 return 

#line 439 "lexer.cog"
                                 

#line 439 "lexer.cog"
                        lexNumber(

#line 439 "lexer.cog"
                                  lexer, 

#line 439 "lexer.cog"
                                         16);
}
case 

#line 441 "lexer.cog"
                  'b':
case 

#line 441 "lexer.cog"
                            'B':
{


#line 442 "lexer.cog"
                            

#line 442 "lexer.cog"
                            

#line 442 "lexer.cog"
                 advanceByte(

#line 442 "lexer.cog"
                             lexer);
}
{


#line 443 "lexer.cog"
                 return 

#line 443 "lexer.cog"
                                 

#line 443 "lexer.cog"
                        lexNumber(

#line 443 "lexer.cog"
                                  lexer, 

#line 443 "lexer.cog"
                                         2);
}
default:
{


#line 446 "lexer.cog"
                 return 

#line 446 "lexer.cog"
                                 

#line 446 "lexer.cog"
                        lexNumber(

#line 446 "lexer.cog"
                                  lexer, 

#line 446 "lexer.cog"
                                         10);
}
}
}
}
case 

#line 450 "lexer.cog"
                    '1':
case 

#line 450 "lexer.cog"
                              '2':
case 

#line 450 "lexer.cog"
                                        '3':
case 

#line 450 "lexer.cog"
                                                  '4':
case 

#line 451 "lexer.cog"
          '5':
case 

#line 451 "lexer.cog"
                    '6':
case 

#line 451 "lexer.cog"
                              '7':
case 

#line 451 "lexer.cog"
                                        '8':
case 

#line 451 "lexer.cog"
                                                  '9':
{


#line 452 "lexer.cog"
         return 

#line 452 "lexer.cog"
                         

#line 452 "lexer.cog"
                lexNumber(

#line 452 "lexer.cog"
                          lexer, 

#line 452 "lexer.cog"
                                 10);
}
case 

#line 454 "lexer.cog"
          '@':
{


#line 455 "lexer.cog"
                    

#line 455 "lexer.cog"
                    

#line 455 "lexer.cog"
         advanceByte(

#line 455 "lexer.cog"
                     lexer);
}
{


#line 456 "lexer.cog"
         return 

#line 456 "lexer.cog"
                             

#line 456 "lexer.cog"
                lexIdentifier(

#line 456 "lexer.cog"
                              lexer);
}
case 

#line 474 "lexer.cog"
       '{':
{


#line 474 "lexer.cog"
                       

#line 474 "lexer.cog"
                       

#line 474 "lexer.cog"
            advanceByte(

#line 474 "lexer.cog"
                        lexer);
}
{


#line 474 "lexer.cog"
                                return 

#line 474 "lexer.cog"
                                       kTokenCode_LCurly;
}
case 

#line 475 "lexer.cog"
       '}':
{


#line 475 "lexer.cog"
                       

#line 475 "lexer.cog"
                       

#line 475 "lexer.cog"
            advanceByte(

#line 475 "lexer.cog"
                        lexer);
}
{


#line 475 "lexer.cog"
                                return 

#line 475 "lexer.cog"
                                       kTokenCode_RCurly;
}
case 

#line 476 "lexer.cog"
       '[':
{


#line 476 "lexer.cog"
                       

#line 476 "lexer.cog"
                       

#line 476 "lexer.cog"
            advanceByte(

#line 476 "lexer.cog"
                        lexer);
}
{


#line 476 "lexer.cog"
                                return 

#line 476 "lexer.cog"
                                       kTokenCode_LSquare;
}
case 

#line 477 "lexer.cog"
       ']':
{


#line 477 "lexer.cog"
                       

#line 477 "lexer.cog"
                       

#line 477 "lexer.cog"
            advanceByte(

#line 477 "lexer.cog"
                        lexer);
}
{


#line 477 "lexer.cog"
                                return 

#line 477 "lexer.cog"
                                       kTokenCode_RSquare;
}
case 

#line 478 "lexer.cog"
       '(':
{


#line 478 "lexer.cog"
                       

#line 478 "lexer.cog"
                       

#line 478 "lexer.cog"
            advanceByte(

#line 478 "lexer.cog"
                        lexer);
}
{


#line 478 "lexer.cog"
                                return 

#line 478 "lexer.cog"
                                       kTokenCode_LParen;
}
case 

#line 479 "lexer.cog"
       ')':
{


#line 479 "lexer.cog"
                       

#line 479 "lexer.cog"
                       

#line 479 "lexer.cog"
            advanceByte(

#line 479 "lexer.cog"
                        lexer);
}
{


#line 479 "lexer.cog"
                                return 

#line 479 "lexer.cog"
                                       kTokenCode_RParen;
}
case 

#line 480 "lexer.cog"
       ';':
{


#line 480 "lexer.cog"
                       

#line 480 "lexer.cog"
                       

#line 480 "lexer.cog"
            advanceByte(

#line 480 "lexer.cog"
                        lexer);
}
{


#line 480 "lexer.cog"
                                return 

#line 480 "lexer.cog"
                                       kTokenCode_Semi;
}
case 

#line 481 "lexer.cog"
       ':':
{


#line 481 "lexer.cog"
                       

#line 481 "lexer.cog"
                       

#line 481 "lexer.cog"
            advanceByte(

#line 481 "lexer.cog"
                        lexer);
}
{


#line 481 "lexer.cog"
                                return 

#line 481 "lexer.cog"
                                       kTokenCode_Colon;
}
case 

#line 482 "lexer.cog"
       ',':
{


#line 482 "lexer.cog"
                       

#line 482 "lexer.cog"
                       

#line 482 "lexer.cog"
            advanceByte(

#line 482 "lexer.cog"
                        lexer);
}
{


#line 482 "lexer.cog"
                                return 

#line 482 "lexer.cog"
                                       kTokenCode_Comma;
}
default:
{


#line 485 "lexer.cog"
   break;
}
}


#line 487 "lexer.cog"
  if(

#line 487 "lexer.cog"
            

#line 487 "lexer.cog"
     isAlpha(

#line 487 "lexer.cog"
             c))
{


#line 489 "lexer.cog"
   return 

#line 489 "lexer.cog"
                       

#line 489 "lexer.cog"
          lexIdentifier(

#line 489 "lexer.cog"
                        lexer);
}
else
{


#line 491 "lexer.cog"
       if(

#line 491 "lexer.cog"
                        

#line 491 "lexer.cog"
          isOperatorChar(

#line 491 "lexer.cog"
                         c))
{


#line 493 "lexer.cog"
   return 

#line 493 "lexer.cog"
                     

#line 493 "lexer.cog"
          lexOperator(

#line 493 "lexer.cog"
                      lexer);
}
else
{


#line 497 "lexer.cog"
           

#line 497 "lexer.cog"
           

#line 497 "lexer.cog"
   diagnose(

#line 497 "lexer.cog"
                   

#line 497 "lexer.cog"
            getSink(

#line 497 "lexer.cog"
                    lexer), 

#line 498 "lexer.cog"
           

#line 498 "lexer.cog"
    peekLoc(

#line 498 "lexer.cog"
            lexer), 

#line 499 "lexer.cog"
    kDiagnostic_unexpectedCharacter, 

#line 500 "lexer.cog"
                 

#line 500 "lexer.cog"
    peekCodePoint(

#line 500 "lexer.cog"
                  lexer));


#line 501 "lexer.cog"
              

#line 501 "lexer.cog"
              

#line 501 "lexer.cog"
   advanceByte(

#line 501 "lexer.cog"
               lexer);


#line 502 "lexer.cog"
   return 

#line 502 "lexer.cog"
          kTokenCode_Invalid;
}
}
}


#line 55 "token.cog"
 

#line 64 "token.cog"
  

#line 64 "token.cog"
                   SourceLoc Token::getLoc()
{


#line 66 "token.cog"
   return 

#line 66 "token.cog"
                   

#line 66 "token.cog"
          SourceLoc(

#line 66 "token.cog"
                    rawLoc);
}


#line 506 "lexer.cog"
 

#line 508 "lexer.cog"
     Token lexToken(

#line 507 "lexer.cog"
              

#line 507 "lexer.cog"
         Lexer

#line 507 "lexer.cog"
              * lexer)
{


#line 510 "lexer.cog"
  {
for(;;)
{
{


#line 513 "lexer.cog"
   

#line 513 "lexer.cog"
   auto begin = 

#line 513 "lexer.cog"
                    DEREF(

#line 513 "lexer.cog"
               lexer).cursor;


#line 514 "lexer.cog"
   

#line 514 "lexer.cog"
   auto flags = 

#line 514 "lexer.cog"
                    DEREF(

#line 514 "lexer.cog"
               lexer).tokenFlags;


#line 515 "lexer.cog"
   

#line 515 "lexer.cog"
   auto code = 

#line 515 "lexer.cog"
                          

#line 515 "lexer.cog"
              lexTokenImpl(

#line 515 "lexer.cog"
                           lexer);


#line 516 "lexer.cog"
   

#line 516 "lexer.cog"
   auto end = 

#line 516 "lexer.cog"
                  DEREF(

#line 516 "lexer.cog"
             lexer).cursor;


#line 517 "lexer.cog"
   

#line 517 "lexer.cog"
   auto rawData = 

#line 517 "lexer.cog"
                 cast<

#line 517 "lexer.cog"
                      Ptr<

#line 517 "lexer.cog"
                          Void> >(

#line 517 "lexer.cog"
                                  begin);


#line 519 "lexer.cog"
   switch(

#line 519 "lexer.cog"
          code)
{
case 

#line 521 "lexer.cog"
        kTokenCode_Identifier:
case 

#line 522 "lexer.cog"
        kTokenCode_InfixOperator:
case 

#line 523 "lexer.cog"
        kTokenCode_PrefixOperator:
case 

#line 524 "lexer.cog"
        kTokenCode_PostfixOperator:
{


#line 525 "lexer.cog"
    rawData = 

#line 525 "lexer.cog"
                     

#line 525 "lexer.cog"
              getName(

#line 525 "lexer.cog"
                           DEREF(

#line 525 "lexer.cog"
                      lexer).session, 

#line 525 "lexer.cog"
                                               

#line 525 "lexer.cog"
                                     StringSpan(

#line 525 "lexer.cog"
                                                begin, 

#line 525 "lexer.cog"
                                                       end));
}
default:
{


#line 528 "lexer.cog"
         DEREF(

#line 528 "lexer.cog"
    lexer).tokenFlags = 

#line 528 "lexer.cog"
                       0;
}
{


#line 529 "lexer.cog"
    break;
}
case 

#line 531 "lexer.cog"
        kTokenCode_LineComment:
{


#line 532 "lexer.cog"
    continue;
}
case 

#line 534 "lexer.cog"
        kTokenCode_EndOfLine:
{


#line 535 "lexer.cog"
                     

#line 535 "lexer.cog"
                     

#line 535 "lexer.cog"
         DEREF(

#line 535 "lexer.cog"
    lexer).tokenFlags 

#line 535 "lexer.cog"
                     |= 

#line 535 "lexer.cog"
                        kTokenFlag_AtStartOfLine;
}
case 

#line 536 "lexer.cog"
        kTokenCode_WhiteSpace:
case 

#line 537 "lexer.cog"
        kTokenCode_BlockComment:
{


#line 538 "lexer.cog"
                     

#line 538 "lexer.cog"
                     

#line 538 "lexer.cog"
         DEREF(

#line 538 "lexer.cog"
    lexer).tokenFlags 

#line 538 "lexer.cog"
                     |= 

#line 538 "lexer.cog"
                        kTokenFlag_AfterSpace;
}
{


#line 539 "lexer.cog"
    continue;
}
}


#line 542 "lexer.cog"
   

#line 542 "lexer.cog"
   

#line 542 "lexer.cog"
               Token token;


#line 543 "lexer.cog"
        DEREF(

#line 543 "lexer.cog"
   token).code = 

#line 543 "lexer.cog"
                code;


#line 544 "lexer.cog"
        DEREF(

#line 544 "lexer.cog"
   token).flags = 

#line 544 "lexer.cog"
                 flags;


#line 545 "lexer.cog"
        DEREF(

#line 545 "lexer.cog"
   token).rawData = 

#line 545 "lexer.cog"
                   rawData;


#line 546 "lexer.cog"
        DEREF(

#line 546 "lexer.cog"
   token).rawSize = 

#line 546 "lexer.cog"
                       

#line 546 "lexer.cog"
                   end 

#line 546 "lexer.cog"
                       - 

#line 546 "lexer.cog"
                         begin;


#line 547 "lexer.cog"
        DEREF(

#line 547 "lexer.cog"
   token).rawLoc = 

#line 547 "lexer.cog"
                                       

#line 547 "lexer.cog"
                  cast<

#line 547 "lexer.cog"
                       UIntPtr>(

#line 547 "lexer.cog"
                                begin) 

#line 547 "lexer.cog"
                                       - 

#line 547 "lexer.cog"
                                              DEREF(

#line 547 "lexer.cog"
                                         lexer).rawStartPtr;


#line 548 "lexer.cog"
        DEREF(

#line 548 "lexer.cog"
   token).advance = 

#line 548 "lexer.cog"
                   0;


#line 549 "lexer.cog"
   return 

#line 549 "lexer.cog"
          token;
}
}}
}


#line 553 "lexer.cog"
 

#line 559 "lexer.cog"
          

#line 559 "lexer.cog"
     Token

#line 559 "lexer.cog"
          * matchDelimeter(

#line 554 "lexer.cog"
              

#line 554 "lexer.cog"
         Lexer

#line 554 "lexer.cog"
              * lexer, 

#line 555 "lexer.cog"
             

#line 555 "lexer.cog"
        Token

#line 555 "lexer.cog"
             * open, 

#line 556 "lexer.cog"
              

#line 556 "lexer.cog"
         Token

#line 556 "lexer.cog"
              * begin, 

#line 557 "lexer.cog"
       ConstPtr<

#line 557 "lexer.cog"
                Token>  end, 

#line 558 "lexer.cog"
                    TokenCode closingTokenCode)
{


#line 561 "lexer.cog"
  

#line 561 "lexer.cog"
  auto cursor = 

#line 561 "lexer.cog"
               begin;


#line 562 "lexer.cog"
  while(

#line 562 "lexer.cog"
               

#line 562 "lexer.cog"
        cursor 

#line 562 "lexer.cog"
               != 

#line 562 "lexer.cog"
                  end)
{
{


#line 564 "lexer.cog"
   

#line 564 "lexer.cog"
   auto code = 

#line 564 "lexer.cog"
                    DEREF(

#line 564 "lexer.cog"
              cursor).code;


#line 565 "lexer.cog"
   if(

#line 565 "lexer.cog"
           

#line 565 "lexer.cog"
      code 

#line 565 "lexer.cog"
           == 

#line 565 "lexer.cog"
              closingTokenCode)
{


#line 570 "lexer.cog"
        DEREF(

#line 570 "lexer.cog"
    open).advance = 

#line 570 "lexer.cog"
                           

#line 570 "lexer.cog"
                   uint32_t(

#line 570 "lexer.cog"
                                             

#line 570 "lexer.cog"
                             (

#line 570 "lexer.cog"
                                     

#line 570 "lexer.cog"
                              cursor 

#line 570 "lexer.cog"
                                     - 

#line 570 "lexer.cog"
                                       open) 

#line 570 "lexer.cog"
                                             - 

#line 570 "lexer.cog"
                                               1);


#line 572 "lexer.cog"
    return 

#line 572 "lexer.cog"
           cursor;
}


#line 575 "lexer.cog"
   switch(

#line 575 "lexer.cog"
                DEREF(

#line 575 "lexer.cog"
          cursor).code)
{
default:
{


#line 578 "lexer.cog"
    cursor = 

#line 578 "lexer.cog"
                    

#line 578 "lexer.cog"
             cursor 

#line 578 "lexer.cog"
                    + 

#line 578 "lexer.cog"
                      1;
}
{


#line 579 "lexer.cog"
    break;
}
case 

#line 584 "lexer.cog"
        kTokenCode_LParen:
{


#line 585 "lexer.cog"
    cursor = 

#line 585 "lexer.cog"
                           

#line 585 "lexer.cog"
             matchDelimeter(

#line 585 "lexer.cog"
                            lexer, 

#line 585 "lexer.cog"
                                   cursor, 

#line 585 "lexer.cog"
                                                 

#line 585 "lexer.cog"
                                           cursor 

#line 585 "lexer.cog"
                                                 + 

#line 585 "lexer.cog"
                                                  1, 

#line 585 "lexer.cog"
                                                     end, 

#line 585 "lexer.cog"
                                                          kTokenCode_RParen);
}
{


#line 586 "lexer.cog"
    break;
}
case 

#line 588 "lexer.cog"
        kTokenCode_LCurly:
{


#line 589 "lexer.cog"
    cursor = 

#line 589 "lexer.cog"
                           

#line 589 "lexer.cog"
             matchDelimeter(

#line 589 "lexer.cog"
                            lexer, 

#line 589 "lexer.cog"
                                   cursor, 

#line 589 "lexer.cog"
                                                 

#line 589 "lexer.cog"
                                           cursor 

#line 589 "lexer.cog"
                                                 + 

#line 589 "lexer.cog"
                                                  1, 

#line 589 "lexer.cog"
                                                     end, 

#line 589 "lexer.cog"
                                                          kTokenCode_RCurly);
}
{


#line 590 "lexer.cog"
    break;
}
case 

#line 592 "lexer.cog"
        kTokenCode_LSquare:
{


#line 593 "lexer.cog"
    cursor = 

#line 593 "lexer.cog"
                           

#line 593 "lexer.cog"
             matchDelimeter(

#line 593 "lexer.cog"
                            lexer, 

#line 593 "lexer.cog"
                                   cursor, 

#line 593 "lexer.cog"
                                                 

#line 593 "lexer.cog"
                                           cursor 

#line 593 "lexer.cog"
                                                 + 

#line 593 "lexer.cog"
                                                  1, 

#line 593 "lexer.cog"
                                                     end, 

#line 593 "lexer.cog"
                                                          kTokenCode_RSquare);
}
{


#line 594 "lexer.cog"
    break;
}
}
}
}


#line 600 "lexer.cog"
  return 

#line 600 "lexer.cog"
         cursor;
}


#line 603 "lexer.cog"
 void matchDelimeters(

#line 604 "lexer.cog"
              

#line 604 "lexer.cog"
         Lexer

#line 604 "lexer.cog"
              * lexer, 

#line 605 "lexer.cog"
              

#line 605 "lexer.cog"
         Token

#line 605 "lexer.cog"
              * begin, 

#line 606 "lexer.cog"
       ConstPtr<

#line 606 "lexer.cog"
                Token>  end)
{


#line 608 "lexer.cog"
                

#line 608 "lexer.cog"
                

#line 608 "lexer.cog"
  matchDelimeter(

#line 608 "lexer.cog"
                 lexer, 

#line 608 "lexer.cog"
                        0, 

#line 608 "lexer.cog"
                           begin, 

#line 608 "lexer.cog"
                                  end, 

#line 608 "lexer.cog"
                                       kTokenCode_EndOfFile);
}


#line 611 "lexer.cog"
 void markUpOperators(

#line 612 "lexer.cog"
              

#line 612 "lexer.cog"
         Lexer

#line 612 "lexer.cog"
              * lexer, 

#line 613 "lexer.cog"
              

#line 613 "lexer.cog"
         Token

#line 613 "lexer.cog"
              * begin, 

#line 614 "lexer.cog"
       ConstPtr<

#line 614 "lexer.cog"
                Token>  end)
{


#line 616 "lexer.cog"
  

#line 616 "lexer.cog"
  auto afterSpace = 

#line 616 "lexer.cog"
                   true;


#line 618 "lexer.cog"
  

#line 618 "lexer.cog"
  auto cursor = 

#line 618 "lexer.cog"
               begin;


#line 619 "lexer.cog"
  while(

#line 619 "lexer.cog"
               

#line 619 "lexer.cog"
        cursor 

#line 619 "lexer.cog"
               != 

#line 619 "lexer.cog"
                  end)
{
{


#line 621 "lexer.cog"
   

#line 621 "lexer.cog"
   auto code = 

#line 621 "lexer.cog"
                    DEREF(

#line 621 "lexer.cog"
              cursor).code;


#line 622 "lexer.cog"
   

#line 622 "lexer.cog"
   auto nextCode = 

#line 622 "lexer.cog"
                              DEREF(

#line 622 "lexer.cog"
                  (

#line 622 "lexer.cog"
                          

#line 622 "lexer.cog"
                   cursor 

#line 622 "lexer.cog"
                          + 

#line 622 "lexer.cog"
                            1)).code;


#line 624 "lexer.cog"
   if(

#line 624 "lexer.cog"
           

#line 624 "lexer.cog"
      code 

#line 624 "lexer.cog"
           == 

#line 624 "lexer.cog"
              kTokenCode_InfixOperator)
{


#line 626 "lexer.cog"
    if(

#line 626 "lexer.cog"
                    

#line 626 "lexer.cog"
             DEREF(

#line 626 "lexer.cog"
       cursor).flags 

#line 626 "lexer.cog"
                    & 

#line 626 "lexer.cog"
                      kTokenFlag_AfterSpace)
{


#line 628 "lexer.cog"
     afterSpace = 

#line 628 "lexer.cog"
                  true;
}


#line 631 "lexer.cog"
    

#line 631 "lexer.cog"
    auto beforeSpace = 

#line 631 "lexer.cog"
                                                                   

#line 631 "lexer.cog"
                      (

#line 631 "lexer.cog"
                                          

#line 631 "lexer.cog"
                                   DEREF(

#line 631 "lexer.cog"
                       (

#line 631 "lexer.cog"
                               

#line 631 "lexer.cog"
                        cursor 

#line 631 "lexer.cog"
                               + 

#line 631 "lexer.cog"
                                 1)).flags 

#line 631 "lexer.cog"
                                          & 

#line 631 "lexer.cog"
                                            kTokenFlag_AfterSpace) 

#line 631 "lexer.cog"
                                                                   != 

#line 631 "lexer.cog"
                                                                      0;


#line 632 "lexer.cog"
    switch(

#line 632 "lexer.cog"
           nextCode)
{
default:
{


#line 635 "lexer.cog"
     break;
}
case 

#line 637 "lexer.cog"
         kTokenCode_RParen:
case 

#line 638 "lexer.cog"
         kTokenCode_RSquare:
case 

#line 639 "lexer.cog"
         kTokenCode_RCurly:
case 

#line 640 "lexer.cog"
         kTokenCode_Semi:
case 

#line 641 "lexer.cog"
         kTokenCode_Colon:
case 

#line 642 "lexer.cog"
         kTokenCode_Comma:
{


#line 643 "lexer.cog"
     beforeSpace = 

#line 643 "lexer.cog"
                   true;
}
}


#line 646 "lexer.cog"
    if(

#line 646 "lexer.cog"
                   

#line 646 "lexer.cog"
       beforeSpace 

#line 646 "lexer.cog"
                   == 

#line 646 "lexer.cog"
                      afterSpace)
{
}
else
{


#line 650 "lexer.cog"
         if(

#line 650 "lexer.cog"
            beforeSpace)
{


#line 652 "lexer.cog"
           DEREF(

#line 652 "lexer.cog"
     cursor).code = 

#line 652 "lexer.cog"
                   kTokenCode_PostfixOperator;
}
else
{


#line 656 "lexer.cog"
           DEREF(

#line 656 "lexer.cog"
     cursor).code = 

#line 656 "lexer.cog"
                   kTokenCode_PrefixOperator;
}
}
}


#line 660 "lexer.cog"
   switch(

#line 660 "lexer.cog"
          code)
{
default:
{


#line 663 "lexer.cog"
    afterSpace = 

#line 663 "lexer.cog"
                 false;
}
{


#line 664 "lexer.cog"
    break;
}
case 

#line 666 "lexer.cog"
        kTokenCode_LParen:
case 

#line 667 "lexer.cog"
        kTokenCode_LSquare:
case 

#line 668 "lexer.cog"
        kTokenCode_LCurly:
case 

#line 669 "lexer.cog"
        kTokenCode_Semi:
case 

#line 670 "lexer.cog"
        kTokenCode_Colon:
case 

#line 671 "lexer.cog"
        kTokenCode_Comma:
{


#line 672 "lexer.cog"
    afterSpace = 

#line 672 "lexer.cog"
                 true;
}
{


#line 673 "lexer.cog"
    break;
}
}


#line 676 "lexer.cog"
         

#line 676 "lexer.cog"
         

#line 676 "lexer.cog"
   cursor

#line 676 "lexer.cog"
         ++;
}
}
}


#line 70 "token.cog"
 

#line 75 "token.cog"
  TokenSpan::TokenSpan()
{


#line 77 "token.cog"
       DEREF(

#line 77 "token.cog"
   this).begin_ = 

#line 77 "token.cog"
                 nullptr;


#line 78 "token.cog"
       DEREF(

#line 78 "token.cog"
   this).end_ = 

#line 78 "token.cog"
               nullptr;
}


#line 81 "token.cog"
  TokenSpan::TokenSpan(

#line 81 "token.cog"
              ConstPtr<

#line 81 "token.cog"
                       Token>  begin, 

#line 81 "token.cog"
                                    ConstPtr<

#line 81 "token.cog"
                                             Token>  end)
{


#line 83 "token.cog"
       DEREF(

#line 83 "token.cog"
   this).begin_ = 

#line 83 "token.cog"
                 begin;


#line 84 "token.cog"
       DEREF(

#line 84 "token.cog"
   this).end_ = 

#line 84 "token.cog"
               end;
}


#line 680 "lexer.cog"
 

#line 683 "lexer.cog"
     TokenSpan lexTokens(

#line 681 "lexer.cog"
           Session session, 

#line 682 "lexer.cog"
                  

#line 682 "lexer.cog"
        SourceFile

#line 682 "lexer.cog"
                  * file)
{


#line 685 "lexer.cog"
  

#line 685 "lexer.cog"
  

#line 685 "lexer.cog"
              Lexer lexer;


#line 686 "lexer.cog"
                 

#line 686 "lexer.cog"
                 

#line 686 "lexer.cog"
  initializeLexer(

#line 686 "lexer.cog"
                  

#line 686 "lexer.cog"
                  &

#line 686 "lexer.cog"
                   lexer, 

#line 686 "lexer.cog"
                          session, 

#line 686 "lexer.cog"
                                   file);


#line 688 "lexer.cog"
  

#line 688 "lexer.cog"
  

#line 688 "lexer.cog"
                   SizeT tokenLimit = 

#line 688 "lexer.cog"
                           16;


#line 689 "lexer.cog"
  

#line 689 "lexer.cog"
  auto tokens = 

#line 689 "lexer.cog"
               cast<

#line 689 "lexer.cog"
                    Ptr<

#line 689 "lexer.cog"
                        Token> >(

#line 689 "lexer.cog"
                                       

#line 689 "lexer.cog"
                                 malloc(

#line 689 "lexer.cog"
                                                   

#line 689 "lexer.cog"
                                        tokenLimit 

#line 689 "lexer.cog"
                                                   * 

#line 689 "lexer.cog"
                                                                  

#line 689 "lexer.cog"
                                                     sizeOf<

#line 689 "lexer.cog"
                                                            Token> ()));


#line 690 "lexer.cog"
  

#line 690 "lexer.cog"
  

#line 690 "lexer.cog"
                   SizeT tokenCount = 

#line 690 "lexer.cog"
                           0;


#line 692 "lexer.cog"
  {
for(;;)
{
{


#line 694 "lexer.cog"
   

#line 694 "lexer.cog"
   auto token = 

#line 694 "lexer.cog"
                       

#line 694 "lexer.cog"
               lexToken(

#line 694 "lexer.cog"
                        

#line 694 "lexer.cog"
                        &

#line 694 "lexer.cog"
                         lexer);


#line 696 "lexer.cog"
   if(

#line 696 "lexer.cog"
                 

#line 696 "lexer.cog"
      tokenCount 

#line 696 "lexer.cog"
                 == 

#line 696 "lexer.cog"
                    tokenLimit)
{


#line 698 "lexer.cog"
               

#line 698 "lexer.cog"
               

#line 698 "lexer.cog"
    tokenLimit 

#line 698 "lexer.cog"
               *= 

#line 698 "lexer.cog"
                  2;


#line 699 "lexer.cog"
    tokens = 

#line 699 "lexer.cog"
             cast<

#line 699 "lexer.cog"
                  Ptr<

#line 699 "lexer.cog"
                      Token> >(

#line 699 "lexer.cog"
                                      

#line 699 "lexer.cog"
                               realloc(

#line 699 "lexer.cog"
                                       tokens, 

#line 699 "lexer.cog"
                                                         

#line 699 "lexer.cog"
                                               tokenLimit 

#line 699 "lexer.cog"
                                                         * 

#line 699 "lexer.cog"
                                                                       

#line 699 "lexer.cog"
                                                          sizeOf<

#line 699 "lexer.cog"
                                                                 Token> ()));
}


#line 701 "lexer.cog"
         

#line 701 "lexer.cog"
   tokens[

#line 701 "lexer.cog"
                    

#line 701 "lexer.cog"
          tokenCount

#line 701 "lexer.cog"
                    ++] = 

#line 701 "lexer.cog"
                          token;


#line 703 "lexer.cog"
   if(

#line 703 "lexer.cog"
                 

#line 703 "lexer.cog"
           DEREF(

#line 703 "lexer.cog"
      token).code 

#line 703 "lexer.cog"
                 == 

#line 703 "lexer.cog"
                    kTokenCode_EndOfFile)
{


#line 704 "lexer.cog"
    break;
}
}
}}


#line 708 "lexer.cog"
  tokens = 

#line 708 "lexer.cog"
           cast<

#line 708 "lexer.cog"
                Ptr<

#line 708 "lexer.cog"
                    Token> >(

#line 708 "lexer.cog"
                                    

#line 708 "lexer.cog"
                             realloc(

#line 708 "lexer.cog"
                                     tokens, 

#line 708 "lexer.cog"
                                                       

#line 708 "lexer.cog"
                                             tokenLimit 

#line 708 "lexer.cog"
                                                       * 

#line 708 "lexer.cog"
                                                                     

#line 708 "lexer.cog"
                                                        sizeOf<

#line 708 "lexer.cog"
                                                               Token> ()));


#line 711 "lexer.cog"
  

#line 711 "lexer.cog"
  auto endToken = 

#line 711 "lexer.cog"
                        

#line 711 "lexer.cog"
                 tokens 

#line 711 "lexer.cog"
                        + 

#line 711 "lexer.cog"
                                     

#line 711 "lexer.cog"
                          tokenCount 

#line 711 "lexer.cog"
                                     - 

#line 711 "lexer.cog"
                                       1;


#line 713 "lexer.cog"
  

#line 713 "lexer.cog"
  auto tokenSpan = 

#line 713 "lexer.cog"
                           

#line 713 "lexer.cog"
                  TokenSpan(

#line 713 "lexer.cog"
                            tokens, 

#line 713 "lexer.cog"
                                    endToken);


#line 715 "lexer.cog"
                 

#line 715 "lexer.cog"
                 

#line 715 "lexer.cog"
  matchDelimeters(

#line 715 "lexer.cog"
                  

#line 715 "lexer.cog"
                  &

#line 715 "lexer.cog"
                   lexer, 

#line 715 "lexer.cog"
                          tokens, 

#line 715 "lexer.cog"
                                  endToken);


#line 717 "lexer.cog"
                 

#line 717 "lexer.cog"
                 

#line 717 "lexer.cog"
  markUpOperators(

#line 717 "lexer.cog"
                  

#line 717 "lexer.cog"
                  &

#line 717 "lexer.cog"
                   lexer, 

#line 717 "lexer.cog"
                          tokens, 

#line 717 "lexer.cog"
                                  endToken);


#line 719 "lexer.cog"
               

#line 719 "lexer.cog"
               

#line 719 "lexer.cog"
  finalizeLexer(

#line 719 "lexer.cog"
                

#line 719 "lexer.cog"
                &

#line 719 "lexer.cog"
                 lexer);


#line 721 "lexer.cog"
  return 

#line 721 "lexer.cog"
         tokenSpan;
}


#line 3 "main.cog"
 

#line 7 "main.cog"
 

#line 5 "main.cog"
 

#line 9 "main.cog"
 void parseCommandLine(

#line 10 "main.cog"
           Session session, 

#line 11 "main.cog"
          Ptr<

#line 11 "main.cog"
              Int>  ioArgc, 

#line 12 "main.cog"
        Ptr<

#line 12 "main.cog"
            Ptr<

#line 12 "main.cog"
                Char> >  argv)
{


#line 14 "main.cog"
  

#line 14 "main.cog"
  auto argCursor = 

#line 14 "main.cog"
                  argv;


#line 15 "main.cog"
     

#line 15 "main.cog"
     auto argEnd = 

#line 15 "main.cog"
                       

#line 15 "main.cog"
                  argv 

#line 15 "main.cog"
                       + 

#line 15 "main.cog"
                         

#line 15 "main.cog"
                         *

#line 15 "main.cog"
                          ioArgc;


#line 17 "main.cog"
  

#line 17 "main.cog"
  auto writeCursor = 

#line 17 "main.cog"
                    argv;


#line 19 "main.cog"
  if(

#line 19 "main.cog"
                

#line 19 "main.cog"
      argCursor 

#line 19 "main.cog"
                != 

#line 19 "main.cog"
                   argEnd)
{


#line 22 "main.cog"
            

#line 22 "main.cog"
            

#line 22 "main.cog"
   argCursor

#line 22 "main.cog"
            ++;
}


#line 25 "main.cog"
  while(

#line 25 "main.cog"
                  

#line 25 "main.cog"
        argCursor 

#line 25 "main.cog"
                  != 

#line 25 "main.cog"
                     argEnd)
{
{


#line 28 "main.cog"
         

#line 28 "main.cog"
         

#line 28 "main.cog"
                   Ptr<

#line 28 "main.cog"
                       Char>  arg = 

#line 28 "main.cog"
                               

#line 28 "main.cog"
                               *

#line 28 "main.cog"
                                         

#line 28 "main.cog"
                                argCursor

#line 28 "main.cog"
                                         ++;


#line 31 "main.cog"
         if(

#line 31 "main.cog"
                             

#line 31 "main.cog"
             (

#line 31 "main.cog"
                     

#line 31 "main.cog"
                 

#line 31 "main.cog"
              arg[

#line 31 "main.cog"
                  0] 

#line 31 "main.cog"
                     == 

#line 31 "main.cog"
                        '-') 

#line 31 "main.cog"
                             && 

#line 31 "main.cog"
                                (

#line 31 "main.cog"
                                        

#line 31 "main.cog"
                                    

#line 31 "main.cog"
                                 arg[

#line 31 "main.cog"
                                     1] 

#line 31 "main.cog"
                                        != 

#line 31 "main.cog"
                                           0))
{


#line 33 "main.cog"
             if(

#line 33 "main.cog"
                                   

#line 33 "main.cog"
                       

#line 33 "main.cog"
                 strcmp(

#line 33 "main.cog"
                        arg, 

#line 33 "main.cog"
                             "--") 

#line 33 "main.cog"
                                   == 

#line 33 "main.cog"
                                      0)
{


#line 36 "main.cog"
     while(

#line 36 "main.cog"
                      

#line 36 "main.cog"
            argCursor 

#line 36 "main.cog"
                      != 

#line 36 "main.cog"
                         argEnd)
{
{


#line 38 "main.cog"
      

#line 38 "main.cog"
      *

#line 38 "main.cog"
                  

#line 38 "main.cog"
       writeCursor

#line 38 "main.cog"
                  ++ = 

#line 38 "main.cog"
                       

#line 38 "main.cog"
                       *

#line 38 "main.cog"
                                 

#line 38 "main.cog"
                        argCursor

#line 38 "main.cog"
                                 ++;
}
}


#line 40 "main.cog"
     break;
}
else
{


#line 42 "main.cog"
         if(

#line 42 "main.cog"
                               

#line 42 "main.cog"
                   

#line 42 "main.cog"
             strcmp(

#line 42 "main.cog"
                    arg, 

#line 42 "main.cog"
                         "-m") 

#line 42 "main.cog"
                               == 

#line 42 "main.cog"
                                  0)
{


#line 44 "main.cog"
     if(

#line 44 "main.cog"
                   

#line 44 "main.cog"
         argCursor 

#line 44 "main.cog"
                   == 

#line 44 "main.cog"
                      argEnd)
{


#line 46 "main.cog"
             

#line 46 "main.cog"
             

#line 46 "main.cog"
      fprintf(

#line 46 "main.cog"
              stderr, 

#line 46 "main.cog"
                      "command line: error: expected an argument after \'-m\' option\n");
}
else
{


#line 50 "main.cog"
      

#line 50 "main.cog"
      auto valArg = 

#line 50 "main.cog"
                   

#line 50 "main.cog"
                   *

#line 50 "main.cog"
                             

#line 50 "main.cog"
                    argCursor

#line 50 "main.cog"
                             ++;


#line 51 "main.cog"
                   

#line 51 "main.cog"
                   

#line 51 "main.cog"
      setModulePath(

#line 51 "main.cog"
                    session, 

#line 51 "main.cog"
                                                 

#line 51 "main.cog"
                             TerminatedStringSpan(

#line 51 "main.cog"
                                                  valArg));
}
}
else
{


#line 54 "main.cog"
         if(

#line 54 "main.cog"
                               

#line 54 "main.cog"
                   

#line 54 "main.cog"
             strcmp(

#line 54 "main.cog"
                    arg, 

#line 54 "main.cog"
                         "-o") 

#line 54 "main.cog"
                               == 

#line 54 "main.cog"
                                  0)
{


#line 56 "main.cog"
     if(

#line 56 "main.cog"
                   

#line 56 "main.cog"
         argCursor 

#line 56 "main.cog"
                   == 

#line 56 "main.cog"
                      argEnd)
{


#line 58 "main.cog"
             

#line 58 "main.cog"
             

#line 58 "main.cog"
      fprintf(

#line 58 "main.cog"
              stderr, 

#line 58 "main.cog"
                      "command line: error: expected an argument after \'-o\' option\n");
}
else
{


#line 62 "main.cog"
      

#line 62 "main.cog"
      auto valArg = 

#line 62 "main.cog"
                   

#line 62 "main.cog"
                   *

#line 62 "main.cog"
                             

#line 62 "main.cog"
                    argCursor

#line 62 "main.cog"
                             ++;
}
}
else
{


#line 66 "main.cog"
         if(

#line 66 "main.cog"
                                  

#line 66 "main.cog"
                   

#line 66 "main.cog"
             strcmp(

#line 66 "main.cog"
                    arg, 

#line 66 "main.cog"
                         "-eval") 

#line 66 "main.cog"
                                  == 

#line 66 "main.cog"
                                     0)
{


#line 69 "main.cog"
                

#line 69 "main.cog"
                

#line 69 "main.cog"
     setEvaluate(

#line 69 "main.cog"
                 session);
}
else
{


#line 73 "main.cog"
            

#line 73 "main.cog"
            

#line 73 "main.cog"
     fprintf(

#line 73 "main.cog"
             stderr, 

#line 73 "main.cog"
                     "command line: unknown option \'%s\'\n", 

#line 73 "main.cog"
                                                            arg);
}
}
}
}
}
else
{


#line 78 "main.cog"
    

#line 78 "main.cog"
    *

#line 78 "main.cog"
                

#line 78 "main.cog"
     writeCursor

#line 78 "main.cog"
                ++ = 

#line 78 "main.cog"
                     arg;
}
}
}


#line 82 "main.cog"
  

#line 82 "main.cog"
  *

#line 82 "main.cog"
   ioArgc = 

#line 82 "main.cog"
                        

#line 82 "main.cog"
            writeCursor 

#line 82 "main.cog"
                        - 

#line 82 "main.cog"
                          argv;


#line 86 "main.cog"
     if(

#line 86 "main.cog"
        

#line 86 "main.cog"
        !

#line 86 "main.cog"
                      

#line 86 "main.cog"
         getModuleName(

#line 86 "main.cog"
                       session))
{


#line 88 "main.cog"
         if(

#line 88 "main.cog"
                    

#line 88 "main.cog"
            

#line 88 "main.cog"
            *

#line 88 "main.cog"
             ioArgc 

#line 88 "main.cog"
                    == 

#line 88 "main.cog"
                       1)
{


#line 91 "main.cog"
             

#line 91 "main.cog"
             auto name = 

#line 91 "main.cog"
                                                                  

#line 91 "main.cog"
                                                     DEREF(

#line 91 "main.cog"
                                            

#line 91 "main.cog"
                        TerminatedStringSpan(

#line 91 "main.cog"
                                                 

#line 91 "main.cog"
                                             argv[

#line 91 "main.cog"
                                                  0])).asStringSpan();


#line 94 "main.cog"
                             

#line 94 "main.cog"
                             

#line 94 "main.cog"
                 DEREF(

#line 94 "main.cog"
             name).trimFromEnd(

#line 94 "main.cog"
                                                                       

#line 94 "main.cog"
                                                          DEREF(

#line 94 "main.cog"
                                                  

#line 94 "main.cog"
                              TerminatedStringSpan(

#line 94 "main.cog"
                                                   ".cog")).asStringSpan());


#line 96 "main.cog"
                          

#line 96 "main.cog"
                          

#line 96 "main.cog"
             setModulePath(

#line 96 "main.cog"
                           session, 

#line 96 "main.cog"
                                    name);
}
else
{


#line 101 "main.cog"
                    

#line 101 "main.cog"
                    

#line 101 "main.cog"
             fprintf(

#line 101 "main.cog"
                     stderr, 

#line 101 "main.cog"
                             "module name must be specified when using more than one input file");


#line 102 "main.cog"
                 

#line 102 "main.cog"
                 

#line 102 "main.cog"
             exit(

#line 102 "main.cog"
                  1);
}
}
}


#line 107 "main.cog"
 

#line 107 "main.cog"
                                                   Int main(

#line 107 "main.cog"
                   Int argc, 

#line 107 "main.cog"
                               Ptr<

#line 107 "main.cog"
                                   Ptr<

#line 107 "main.cog"
                                       Char> >  argv)
{


#line 109 "main.cog"
  

#line 109 "main.cog"
  auto session = 

#line 109 "main.cog"
                             

#line 109 "main.cog"
                createSession();


#line 111 "main.cog"
                  

#line 111 "main.cog"
                  

#line 111 "main.cog"
  parseCommandLine(

#line 111 "main.cog"
                   session, 

#line 111 "main.cog"
                            

#line 111 "main.cog"
                            &

#line 111 "main.cog"
                             argc, 

#line 111 "main.cog"
                                   argv);


#line 113 "main.cog"
  

#line 113 "main.cog"
  

#line 113 "main.cog"
           Int ii = 

#line 113 "main.cog"
                 0;


#line 114 "main.cog"
  while(

#line 114 "main.cog"
           

#line 114 "main.cog"
        ii 

#line 114 "main.cog"
           < 

#line 114 "main.cog"
             argc)
{
{


#line 116 "main.cog"
                       

#line 116 "main.cog"
                       

#line 116 "main.cog"
         loadSourceFile(

#line 116 "main.cog"
                        session, 

#line 116 "main.cog"
                                                     

#line 116 "main.cog"
                                 TerminatedStringSpan(

#line 116 "main.cog"
                                                          

#line 116 "main.cog"
                                                      argv[

#line 116 "main.cog"
                                                           ii]));


#line 117 "main.cog"
   ii = 

#line 117 "main.cog"
           

#line 117 "main.cog"
        ii 

#line 117 "main.cog"
           + 

#line 117 "main.cog"
             1;
}
}


#line 120 "main.cog"
     if(

#line 120 "main.cog"
                               

#line 120 "main.cog"
                     

#line 120 "main.cog"
        getErrorCount(

#line 120 "main.cog"
                      session) 

#line 120 "main.cog"
                               > 

#line 120 "main.cog"
                                 0)
{


#line 121 "main.cog"
         return 

#line 121 "main.cog"
                1;
}


#line 123 "main.cog"
                

#line 123 "main.cog"
                

#line 123 "main.cog"
     checkModule(

#line 123 "main.cog"
                 session);


#line 125 "main.cog"
     if(

#line 125 "main.cog"
                               

#line 125 "main.cog"
                     

#line 125 "main.cog"
        getErrorCount(

#line 125 "main.cog"
                      session) 

#line 125 "main.cog"
                               > 

#line 125 "main.cog"
                                 0)
{


#line 126 "main.cog"
         return 

#line 126 "main.cog"
                1;
}


#line 128 "main.cog"
  if(

#line 128 "main.cog"
            DEREF(

#line 128 "main.cog"
     session).eval)
{


#line 130 "main.cog"
             

#line 130 "main.cog"
             

#line 130 "main.cog"
   evalModule(

#line 130 "main.cog"
              session);
}
else
{


#line 134 "main.cog"
             

#line 134 "main.cog"
             

#line 134 "main.cog"
   emitModule(

#line 134 "main.cog"
              session);
}


#line 137 "main.cog"
  return 

#line 137 "main.cog"
         0;
}


#line 9 "name.cog"
 

#line 12 "name.cog"
     Ptr<

#line 12 "name.cog"
         Name>  getName(

#line 10 "name.cog"
           Session session, 

#line 11 "name.cog"
        StringSpan text)
{


#line 14 "name.cog"
  {


#line 14 "name.cog"
      

#line 14 "name.cog"
      auto nn = 

#line 14 "name.cog"
                      DEREF(

#line 14 "name.cog"
               session).names;
for(;

#line 14 "name.cog"
                              nn;

#line 14 "name.cog"
                                  nn = 

#line 14 "name.cog"
                                         DEREF(

#line 14 "name.cog"
                                       nn).next)
{
{


#line 16 "name.cog"
   if(

#line 16 "name.cog"
              

#line 16 "name.cog"
        DEREF(

#line 16 "name.cog"
      nn).text 

#line 16 "name.cog"
              == 

#line 16 "name.cog"
                 text)
{


#line 17 "name.cog"
    return 

#line 17 "name.cog"
           nn;
}
}
}}


#line 21 "name.cog"
  

#line 21 "name.cog"
  auto textSize = 

#line 21 "name.cog"
                          

#line 21 "name.cog"
                     DEREF(

#line 21 "name.cog"
                 text).end 

#line 21 "name.cog"
                          - 

#line 21 "name.cog"
                                DEREF(

#line 21 "name.cog"
                            text).begin;


#line 22 "name.cog"
  

#line 22 "name.cog"
  auto name = 

#line 22 "name.cog"
             cast<

#line 22 "name.cog"
                  Ptr<

#line 22 "name.cog"
                      Name> >(

#line 22 "name.cog"
                                      

#line 22 "name.cog"
                                malloc(

#line 22 "name.cog"
                                                    

#line 22 "name.cog"
                                             

#line 22 "name.cog"
                                       sizeof(

#line 22 "name.cog"
                                              Name) 

#line 22 "name.cog"
                                                    + 

#line 22 "name.cog"
                                                               

#line 22 "name.cog"
                                                      textSize 

#line 22 "name.cog"
                                                               + 

#line 22 "name.cog"
                                                                 1));


#line 24 "name.cog"
  

#line 24 "name.cog"
  auto textBegin = 

#line 24 "name.cog"
                  cast<

#line 24 "name.cog"
                       Ptr<

#line 24 "name.cog"
                           Char> >(

#line 24 "name.cog"
                                        

#line 24 "name.cog"
                                   name 

#line 24 "name.cog"
                                        + 

#line 24 "name.cog"
                                          1);


#line 25 "name.cog"
  

#line 25 "name.cog"
  auto textEnd = 

#line 25 "name.cog"
                          

#line 25 "name.cog"
                textBegin 

#line 25 "name.cog"
                          + 

#line 25 "name.cog"
                            textSize;


#line 27 "name.cog"
        

#line 27 "name.cog"
        

#line 27 "name.cog"
  memcpy(

#line 27 "name.cog"
         textBegin, 

#line 27 "name.cog"
                        DEREF(

#line 27 "name.cog"
                    text).begin, 

#line 27 "name.cog"
                                textSize);


#line 28 "name.cog"
  

#line 28 "name.cog"
  *

#line 28 "name.cog"
   textEnd = 

#line 28 "name.cog"
             0;


#line 30 "name.cog"
      DEREF(

#line 30 "name.cog"
  name).text = 

#line 30 "name.cog"
                                  

#line 30 "name.cog"
              TerminatedStringSpan(

#line 30 "name.cog"
                                   textBegin, 

#line 30 "name.cog"
                                              textEnd);


#line 31 "name.cog"
      DEREF(

#line 31 "name.cog"
  name).next = 

#line 31 "name.cog"
                     DEREF(

#line 31 "name.cog"
              session).names;


#line 32 "name.cog"
         DEREF(

#line 32 "name.cog"
  session).names = 

#line 32 "name.cog"
                  name;


#line 33 "name.cog"
  return 

#line 33 "name.cog"
         name;
}


#line 36 "name.cog"
 

#line 38 "name.cog"
     TerminatedStringSpan getText(

#line 37 "name.cog"
        Ptr<

#line 37 "name.cog"
            Name>  name)
{


#line 40 "name.cog"
  if(

#line 40 "name.cog"
     

#line 40 "name.cog"
     !

#line 40 "name.cog"
      name)
{


#line 41 "name.cog"
   return 

#line 41 "name.cog"
          "";
}


#line 42 "name.cog"
  return 

#line 42 "name.cog"
             DEREF(

#line 42 "name.cog"
         name).text;
}


#line 45 "name.cog"
 

#line 48 "name.cog"
     Ptr<

#line 48 "name.cog"
         Name>  getName(

#line 46 "name.cog"
           Session session, 

#line 47 "name.cog"
        Ptr<

#line 47 "name.cog"
            Char>  text)
{


#line 50 "name.cog"
  return 

#line 50 "name.cog"
                

#line 50 "name.cog"
         getName(

#line 50 "name.cog"
                 session, 

#line 50 "name.cog"
                                              

#line 50 "name.cog"
                          TerminatedStringSpan(

#line 50 "name.cog"
                                               text));
}


#line 4 "parser.cog"
 typedef 

#line 4 "parser.cog"
                         UInt32 ParserFlags;


#line 6 "parser.cog"
 

#line 12 "parser.cog"
 

#line 26 "parser.cog"
 void debugState(

#line 26 "parser.cog"
                               

#line 26 "parser.cog"
                         Parser

#line 26 "parser.cog"
                               * parser)
{
}


#line 40 "parser.cog"
 

#line 42 "parser.cog"
        ConstPtr<

#line 42 "parser.cog"
                 Token>  advanceToken(

#line 41 "parser.cog"
                   

#line 41 "parser.cog"
             Parser

#line 41 "parser.cog"
                   * parser)
{


#line 44 "parser.cog"
     

#line 44 "parser.cog"
     auto result = 

#line 44 "parser.cog"
                        DEREF(

#line 44 "parser.cog"
                  parser).token;


#line 45 "parser.cog"
           DEREF(

#line 45 "parser.cog"
     parser).token = 

#line 45 "parser.cog"
                          DEREF(

#line 45 "parser.cog"
                    parser).cursor;


#line 46 "parser.cog"
     if(

#line 46 "parser.cog"
                      

#line 46 "parser.cog"
              DEREF(

#line 46 "parser.cog"
        parser).cursor 

#line 46 "parser.cog"
                      != 

#line 46 "parser.cog"
                               DEREF(

#line 46 "parser.cog"
                         parser).end)
{


#line 48 "parser.cog"
                      

#line 48 "parser.cog"
                      

#line 48 "parser.cog"
               DEREF(

#line 48 "parser.cog"
         parser).cursor

#line 48 "parser.cog"
                      ++;
}


#line 50 "parser.cog"
               

#line 50 "parser.cog"
               

#line 50 "parser.cog"
     debugState(

#line 50 "parser.cog"
                parser);


#line 51 "parser.cog"
     return 

#line 51 "parser.cog"
            result;
}


#line 54 "parser.cog"
 

#line 56 "parser.cog"
        ConstPtr<

#line 56 "parser.cog"
                 Token>  advanceFragment(

#line 55 "parser.cog"
                   

#line 55 "parser.cog"
             Parser

#line 55 "parser.cog"
                   * parser)
{


#line 58 "parser.cog"
     

#line 58 "parser.cog"
     auto result = 

#line 58 "parser.cog"
                        DEREF(

#line 58 "parser.cog"
                  parser).token;


#line 59 "parser.cog"
           DEREF(

#line 59 "parser.cog"
     parser).token = 

#line 59 "parser.cog"
                          DEREF(

#line 59 "parser.cog"
                    parser).cursor;


#line 60 "parser.cog"
           DEREF(

#line 60 "parser.cog"
     parser).cursor = 

#line 60 "parser.cog"
                                   

#line 60 "parser.cog"
                           DEREF(

#line 60 "parser.cog"
                     parser).cursor 

#line 60 "parser.cog"
                                   + 

#line 60 "parser.cog"
                                                           

#line 60 "parser.cog"
                                                  DEREF(

#line 60 "parser.cog"
                                           DEREF(

#line 60 "parser.cog"
                                     parser).cursor).advance 

#line 60 "parser.cog"
                                                           + 

#line 60 "parser.cog"
                                                             1;


#line 61 "parser.cog"
     if(

#line 61 "parser.cog"
                      

#line 61 "parser.cog"
              DEREF(

#line 61 "parser.cog"
        parser).cursor 

#line 61 "parser.cog"
                      != 

#line 61 "parser.cog"
                               DEREF(

#line 61 "parser.cog"
                         parser).end)
{


#line 63 "parser.cog"
                      

#line 63 "parser.cog"
                      

#line 63 "parser.cog"
               DEREF(

#line 63 "parser.cog"
         parser).cursor

#line 63 "parser.cog"
                      ++;
}


#line 65 "parser.cog"
               

#line 65 "parser.cog"
               

#line 65 "parser.cog"
     debugState(

#line 65 "parser.cog"
                parser);


#line 66 "parser.cog"
     return 

#line 66 "parser.cog"
            result;
}


#line 69 "parser.cog"
 void initializeParser(

#line 70 "parser.cog"
                   

#line 70 "parser.cog"
             Parser

#line 70 "parser.cog"
                   * parser, 

#line 71 "parser.cog"
              Session session, 

#line 72 "parser.cog"
                     

#line 72 "parser.cog"
           SourceFile

#line 72 "parser.cog"
                     * file)
{


#line 74 "parser.cog"
     

#line 74 "parser.cog"
     auto tokens = 

#line 74 "parser.cog"
                           

#line 74 "parser.cog"
                  lexTokens(

#line 74 "parser.cog"
                            session, 

#line 74 "parser.cog"
                                     file);


#line 76 "parser.cog"
           DEREF(

#line 76 "parser.cog"
     parser).session = 

#line 76 "parser.cog"
                      session;


#line 77 "parser.cog"
           DEREF(

#line 77 "parser.cog"
     parser).scope = 

#line 77 "parser.cog"
                    0;


#line 78 "parser.cog"
           DEREF(

#line 78 "parser.cog"
     parser).begin = 

#line 78 "parser.cog"
                          DEREF(

#line 78 "parser.cog"
                    tokens).begin_;


#line 79 "parser.cog"
           DEREF(

#line 79 "parser.cog"
     parser).cursor = 

#line 79 "parser.cog"
                           DEREF(

#line 79 "parser.cog"
                     tokens).begin_;


#line 80 "parser.cog"
           DEREF(

#line 80 "parser.cog"
     parser).end = 

#line 80 "parser.cog"
                        DEREF(

#line 80 "parser.cog"
                  tokens).end_;


#line 81 "parser.cog"
           DEREF(

#line 81 "parser.cog"
     parser).flags = 

#line 81 "parser.cog"
                    0;


#line 83 "parser.cog"
                 

#line 83 "parser.cog"
                 

#line 83 "parser.cog"
     advanceToken(

#line 83 "parser.cog"
                  parser);
}


#line 86 "parser.cog"
 void finalizeParser(

#line 87 "parser.cog"
                   

#line 87 "parser.cog"
             Parser

#line 87 "parser.cog"
                   * parser)
{
}


#line 90 "parser.cog"
 void pushScope(

#line 91 "parser.cog"
                   

#line 91 "parser.cog"
             Parser

#line 91 "parser.cog"
                   * parser, 

#line 92 "parser.cog"
                ContainerDecl container)
{


#line 94 "parser.cog"
     

#line 94 "parser.cog"
     auto scope = 

#line 94 "parser.cog"
                             

#line 94 "parser.cog"
                 alloc<

#line 94 "parser.cog"
                       Scope> ();


#line 95 "parser.cog"
          DEREF(

#line 95 "parser.cog"
     scope).parent = 

#line 95 "parser.cog"
                          DEREF(

#line 95 "parser.cog"
                    parser).scope;


#line 98 "parser.cog"
                     DEREF(

#line 98 "parser.cog"
          DEREF(

#line 98 "parser.cog"
     scope).directLink).container = 

#line 98 "parser.cog"
                                  container;


#line 100 "parser.cog"
           DEREF(

#line 100 "parser.cog"
     parser).scope = 

#line 100 "parser.cog"
                    scope;
}


#line 103 "parser.cog"
 void restoreScope(

#line 104 "parser.cog"
                   

#line 104 "parser.cog"
             Parser

#line 104 "parser.cog"
                   * parser, 

#line 105 "parser.cog"
                 

#line 105 "parser.cog"
            Scope

#line 105 "parser.cog"
                 * scope)
{


#line 108 "parser.cog"
           DEREF(

#line 108 "parser.cog"
     parser).scope = 

#line 108 "parser.cog"
                    scope;
}


#line 111 "parser.cog"
 void popScope(

#line 112 "parser.cog"
                   

#line 112 "parser.cog"
             Parser

#line 112 "parser.cog"
                   * parser)
{


#line 114 "parser.cog"
              

#line 114 "parser.cog"
              

#line 114 "parser.cog"
     cogAssert(

#line 114 "parser.cog"
                     DEREF(

#line 114 "parser.cog"
               parser).scope);


#line 115 "parser.cog"
                 

#line 115 "parser.cog"
                 

#line 115 "parser.cog"
     restoreScope(

#line 115 "parser.cog"
                  parser, 

#line 115 "parser.cog"
                                      DEREF(

#line 115 "parser.cog"
                                DEREF(

#line 115 "parser.cog"
                          parser).scope).parent);
}


#line 119 "parser.cog"
 

#line 120 "parser.cog"
                      

#line 120 "parser.cog"
        DiagnosticSink

#line 120 "parser.cog"
                      * getSink(

#line 119 "parser.cog"
                            

#line 119 "parser.cog"
                      Parser

#line 119 "parser.cog"
                            * parser)
{


#line 122 "parser.cog"
     return 

#line 122 "parser.cog"
            

#line 122 "parser.cog"
            &

#line 122 "parser.cog"
                           DEREF(

#line 122 "parser.cog"
                   DEREF(

#line 122 "parser.cog"
             parser).session).sink;
}


#line 125 "parser.cog"
 

#line 126 "parser.cog"
        SourceLoc peekLoc(

#line 125 "parser.cog"
                            

#line 125 "parser.cog"
                      Parser

#line 125 "parser.cog"
                            * parser)
{


#line 128 "parser.cog"
     return 

#line 128 "parser.cog"
                     

#line 128 "parser.cog"
            SourceLoc(

#line 128 "parser.cog"
                                  DEREF(

#line 128 "parser.cog"
                            DEREF(

#line 128 "parser.cog"
                      parser).token).rawLoc);
}


#line 131 "parser.cog"
 

#line 132 "parser.cog"
        TokenCode peekTokenCode(

#line 131 "parser.cog"
                                  

#line 131 "parser.cog"
                            Parser

#line 131 "parser.cog"
                                  * parser)
{


#line 134 "parser.cog"
     return 

#line 134 "parser.cog"
                        DEREF(

#line 134 "parser.cog"
                  DEREF(

#line 134 "parser.cog"
            parser).token).code;
}


#line 137 "parser.cog"
 

#line 138 "parser.cog"
        Bool peekTokenCode(

#line 137 "parser.cog"
                                  

#line 137 "parser.cog"
                            Parser

#line 137 "parser.cog"
                                  * parser, 

#line 137 "parser.cog"
                                           TokenCode code)
{


#line 140 "parser.cog"
     return 

#line 140 "parser.cog"
                              

#line 140 "parser.cog"
                        DEREF(

#line 140 "parser.cog"
                  DEREF(

#line 140 "parser.cog"
            parser).token).code 

#line 140 "parser.cog"
                              == 

#line 140 "parser.cog"
                                 code;
}


#line 143 "parser.cog"
 

#line 144 "parser.cog"
        Bool isAtEnd(

#line 143 "parser.cog"
                            

#line 143 "parser.cog"
                      Parser

#line 143 "parser.cog"
                            * parser)
{


#line 146 "parser.cog"
     return 

#line 146 "parser.cog"
                          

#line 146 "parser.cog"
                  DEREF(

#line 146 "parser.cog"
            parser).cursor 

#line 146 "parser.cog"
                          == 

#line 146 "parser.cog"
                                   DEREF(

#line 146 "parser.cog"
                             parser).end;
}


#line 149 "parser.cog"
 

#line 150 "parser.cog"
        Bool isRecovering(

#line 149 "parser.cog"
                                 

#line 149 "parser.cog"
                           Parser

#line 149 "parser.cog"
                                 * parser)
{


#line 152 "parser.cog"
     return 

#line 152 "parser.cog"
                                                    

#line 152 "parser.cog"
            (

#line 152 "parser.cog"
                          

#line 152 "parser.cog"
                   DEREF(

#line 152 "parser.cog"
             parser).flags 

#line 152 "parser.cog"
                          & 

#line 152 "parser.cog"
                            kParserFlag_Recovering) 

#line 152 "parser.cog"
                                                    != 

#line 152 "parser.cog"
                                                       0;
}


#line 155 "parser.cog"
 void unexpected(

#line 155 "parser.cog"
                               

#line 155 "parser.cog"
                         Parser

#line 155 "parser.cog"
                               * parser)
{


#line 157 "parser.cog"
     if(

#line 157 "parser.cog"
        

#line 157 "parser.cog"
        !

#line 157 "parser.cog"
                     

#line 157 "parser.cog"
         isRecovering(

#line 157 "parser.cog"
                      parser))
{


#line 159 "parser.cog"
                 

#line 159 "parser.cog"
                 

#line 159 "parser.cog"
         diagnose(

#line 159 "parser.cog"
                         

#line 159 "parser.cog"
                  getSink(

#line 159 "parser.cog"
                          parser), 

#line 159 "parser.cog"
                                          

#line 159 "parser.cog"
                                   peekLoc(

#line 159 "parser.cog"
                                           parser), 

#line 159 "parser.cog"
                                                    kDiagnostic_unexpectedToken, 

#line 159 "parser.cog"
                                                                                              

#line 159 "parser.cog"
                                                                                 peekTokenCode(

#line 159 "parser.cog"
                                                                                               parser));


#line 160 "parser.cog"
                      

#line 160 "parser.cog"
                      

#line 160 "parser.cog"
               DEREF(

#line 160 "parser.cog"
         parser).flags 

#line 160 "parser.cog"
                      |= 

#line 160 "parser.cog"
                         kParserFlag_Recovering;
}
}


#line 164 "parser.cog"
 void unexpected(

#line 164 "parser.cog"
                               

#line 164 "parser.cog"
                         Parser

#line 164 "parser.cog"
                               * parser, 

#line 164 "parser.cog"
                                            TokenCode expected)
{


#line 166 "parser.cog"
     if(

#line 166 "parser.cog"
        

#line 166 "parser.cog"
        !

#line 166 "parser.cog"
                     

#line 166 "parser.cog"
         isRecovering(

#line 166 "parser.cog"
                      parser))
{


#line 168 "parser.cog"
                 

#line 168 "parser.cog"
                 

#line 168 "parser.cog"
         diagnose(

#line 168 "parser.cog"
                         

#line 168 "parser.cog"
                  getSink(

#line 168 "parser.cog"
                          parser), 

#line 168 "parser.cog"
                                          

#line 168 "parser.cog"
                                   peekLoc(

#line 168 "parser.cog"
                                           parser), 

#line 168 "parser.cog"
                                                    kDiagnostic_unexpectedTokenExpectedToken, 

#line 168 "parser.cog"
                                                                                                           

#line 168 "parser.cog"
                                                                                              peekTokenCode(

#line 168 "parser.cog"
                                                                                                            parser), 

#line 168 "parser.cog"
                                                                                                                     expected);


#line 169 "parser.cog"
                      

#line 169 "parser.cog"
                      

#line 169 "parser.cog"
               DEREF(

#line 169 "parser.cog"
         parser).flags 

#line 169 "parser.cog"
                      |= 

#line 169 "parser.cog"
                         kParserFlag_Recovering;
}
}


#line 173 "parser.cog"
 

#line 177 "parser.cog"
        Bool tokenIsInSet(

#line 174 "parser.cog"
             TokenCode needle, 

#line 175 "parser.cog"
            Int count, 

#line 176 "parser.cog"
               ConstPtr<

#line 176 "parser.cog"
                        TokenCode>  haystack)
{


#line 179 "parser.cog"
     {


#line 179 "parser.cog"
         

#line 179 "parser.cog"
         auto ii = 

#line 179 "parser.cog"
                  0;
for(;

#line 179 "parser.cog"
                        

#line 179 "parser.cog"
                     ii 

#line 179 "parser.cog"
                        < 

#line 179 "parser.cog"
                          count;

#line 179 "parser.cog"
                                 

#line 179 "parser.cog"
                                 ++

#line 179 "parser.cog"
                                   ii)
{
{


#line 181 "parser.cog"
         if(

#line 181 "parser.cog"
                   

#line 181 "parser.cog"
            needle 

#line 181 "parser.cog"
                   == 

#line 181 "parser.cog"
                              

#line 181 "parser.cog"
                      haystack[

#line 181 "parser.cog"
                               ii])
{


#line 183 "parser.cog"
             return 

#line 183 "parser.cog"
                    true;
}
}
}}


#line 186 "parser.cog"
     return 

#line 186 "parser.cog"
            false;
}


#line 189 "parser.cog"
 

#line 194 "parser.cog"
        Bool recoverIfTokenIsInSet(

#line 190 "parser.cog"
                   

#line 190 "parser.cog"
             Parser

#line 190 "parser.cog"
                   * parser, 

#line 191 "parser.cog"
             TokenCode needle, 

#line 192 "parser.cog"
            Int count, 

#line 193 "parser.cog"
               ConstPtr<

#line 193 "parser.cog"
                        TokenCode>  haystack)
{


#line 196 "parser.cog"
     if(

#line 196 "parser.cog"
                    

#line 196 "parser.cog"
        tokenIsInSet(

#line 196 "parser.cog"
                     needle, 

#line 196 "parser.cog"
                             count, 

#line 196 "parser.cog"
                                    haystack))
{


#line 198 "parser.cog"
                      

#line 198 "parser.cog"
                      

#line 198 "parser.cog"
               DEREF(

#line 198 "parser.cog"
         parser).flags 

#line 198 "parser.cog"
                      &= 

#line 198 "parser.cog"
                         

#line 198 "parser.cog"
                         ~

#line 198 "parser.cog"
                          kParserFlag_Recovering;


#line 199 "parser.cog"
         return 

#line 199 "parser.cog"
                true;
}


#line 201 "parser.cog"
     return 

#line 201 "parser.cog"
            false;
}


#line 204 "parser.cog"
 void tryRecover(

#line 205 "parser.cog"
                   

#line 205 "parser.cog"
             Parser

#line 205 "parser.cog"
                   * parser, 

#line 206 "parser.cog"
                         Int recoverBeforeCount, 

#line 207 "parser.cog"
                    ConstPtr<

#line 207 "parser.cog"
                             TokenCode>  recoverBefore, 

#line 208 "parser.cog"
                        Int recoverAfterCount, 

#line 209 "parser.cog"
                   ConstPtr<

#line 209 "parser.cog"
                            TokenCode>  recoverAfter)
{


#line 211 "parser.cog"
     if(

#line 211 "parser.cog"
        

#line 211 "parser.cog"
        !

#line 211 "parser.cog"
                     

#line 211 "parser.cog"
         isRecovering(

#line 211 "parser.cog"
                      parser))
{


#line 212 "parser.cog"
         return;
}


#line 215 "parser.cog"
     while(

#line 215 "parser.cog"
           

#line 215 "parser.cog"
           !

#line 215 "parser.cog"
                   

#line 215 "parser.cog"
            isAtEnd(

#line 215 "parser.cog"
                    parser))
{
{


#line 217 "parser.cog"
         

#line 217 "parser.cog"
         auto peek = 

#line 217 "parser.cog"
                                 

#line 217 "parser.cog"
                    peekTokenCode(

#line 217 "parser.cog"
                                  parser);


#line 221 "parser.cog"
         if(

#line 221 "parser.cog"
                                 

#line 221 "parser.cog"
            recoverIfTokenIsInSet(

#line 221 "parser.cog"
                                  parser, 

#line 221 "parser.cog"
                                          peek, 

#line 221 "parser.cog"
                                                recoverBeforeCount, 

#line 221 "parser.cog"
                                                                    recoverBefore))
{


#line 224 "parser.cog"
             return;
}


#line 230 "parser.cog"
         if(

#line 230 "parser.cog"
                                 

#line 230 "parser.cog"
            recoverIfTokenIsInSet(

#line 230 "parser.cog"
                                  parser, 

#line 230 "parser.cog"
                                          peek, 

#line 230 "parser.cog"
                                                recoverAfterCount, 

#line 230 "parser.cog"
                                                                   recoverAfter))
{


#line 233 "parser.cog"
                         

#line 233 "parser.cog"
                         

#line 233 "parser.cog"
             advanceToken(

#line 233 "parser.cog"
                          parser);


#line 234 "parser.cog"
             return;
}


#line 239 "parser.cog"
         switch(

#line 239 "parser.cog"
                peek)
{
case 

#line 241 "parser.cog"
              kTokenCode_EndOfFile:
case 

#line 242 "parser.cog"
              kTokenCode_RCurly:
case 

#line 243 "parser.cog"
              kTokenCode_RParen:
case 

#line 244 "parser.cog"
              kTokenCode_RSquare:
{


#line 247 "parser.cog"
             return;
}
default:
{


#line 250 "parser.cog"
             break;
}
}


#line 255 "parser.cog"
                        

#line 255 "parser.cog"
                        

#line 255 "parser.cog"
         advanceFragment(

#line 255 "parser.cog"
                         parser);
}
}
}


#line 260 "parser.cog"
 void tryRecover(

#line 260 "parser.cog"
                               

#line 260 "parser.cog"
                         Parser

#line 260 "parser.cog"
                               * parser)
{


#line 262 "parser.cog"
     if(

#line 262 "parser.cog"
        

#line 262 "parser.cog"
        !

#line 262 "parser.cog"
                     

#line 262 "parser.cog"
         isRecovering(

#line 262 "parser.cog"
                      parser))
{


#line 263 "parser.cog"
         return;
}


#line 268 "parser.cog"
     

#line 268 "parser.cog"
     

#line 268 "parser.cog"
                         FixedSizeArray<

#line 268 "parser.cog"
                                        1, 

#line 268 "parser.cog"
                                           TokenCode>  recoverBefore;


#line 269 "parser.cog"
                  

#line 269 "parser.cog"
     recoverBefore[

#line 269 "parser.cog"
                   0] = 

#line 269 "parser.cog"
                        kTokenCode_LCurly;


#line 271 "parser.cog"
     

#line 271 "parser.cog"
     

#line 271 "parser.cog"
                        FixedSizeArray<

#line 271 "parser.cog"
                                       2, 

#line 271 "parser.cog"
                                          TokenCode>  recoverAfter;


#line 272 "parser.cog"
                 

#line 272 "parser.cog"
     recoverAfter[

#line 272 "parser.cog"
                  0] = 

#line 272 "parser.cog"
                       kTokenCode_Semi;


#line 273 "parser.cog"
                 

#line 273 "parser.cog"
     recoverAfter[

#line 273 "parser.cog"
                  1] = 

#line 273 "parser.cog"
                       kTokenCode_RCurly;


#line 276 "parser.cog"
               

#line 276 "parser.cog"
               

#line 276 "parser.cog"
     tryRecover(

#line 276 "parser.cog"
                parser, 

#line 276 "parser.cog"
                        1, 

#line 276 "parser.cog"
                           recoverBefore, 

#line 276 "parser.cog"
                                          2, 

#line 276 "parser.cog"
                                             recoverAfter);
}


#line 280 "parser.cog"
 void tryRecoverBefore(

#line 280 "parser.cog"
                                     

#line 280 "parser.cog"
                               Parser

#line 280 "parser.cog"
                                     * parser, 

#line 280 "parser.cog"
                                              TokenCode code)
{


#line 282 "parser.cog"
     if(

#line 282 "parser.cog"
         

#line 282 "parser.cog"
         !

#line 282 "parser.cog"
                      

#line 282 "parser.cog"
          isRecovering(

#line 282 "parser.cog"
                       parser))
{


#line 283 "parser.cog"
         return;
}


#line 286 "parser.cog"
     

#line 286 "parser.cog"
     

#line 286 "parser.cog"
                         FixedSizeArray<

#line 286 "parser.cog"
                                        1, 

#line 286 "parser.cog"
                                           TokenCode>  recoverBefore;


#line 287 "parser.cog"
                  

#line 287 "parser.cog"
     recoverBefore[

#line 287 "parser.cog"
                   0] = 

#line 287 "parser.cog"
                        code;


#line 289 "parser.cog"
               

#line 289 "parser.cog"
               

#line 289 "parser.cog"
     tryRecover(

#line 289 "parser.cog"
                parser, 

#line 289 "parser.cog"
                        1, 

#line 289 "parser.cog"
                           recoverBefore, 

#line 289 "parser.cog"
                                          0, 

#line 289 "parser.cog"
                                             nullptr);
}


#line 293 "parser.cog"
 

#line 296 "parser.cog"
        ConstPtr<

#line 296 "parser.cog"
                 Token>  advanceIf(

#line 294 "parser.cog"
                   

#line 294 "parser.cog"
             Parser

#line 294 "parser.cog"
                   * parser, 

#line 295 "parser.cog"
               TokenCode expected)
{


#line 298 "parser.cog"
     if(

#line 298 "parser.cog"
                              

#line 298 "parser.cog"
                     

#line 298 "parser.cog"
        peekTokenCode(

#line 298 "parser.cog"
                      parser) 

#line 298 "parser.cog"
                              == 

#line 298 "parser.cog"
                                 expected)
{


#line 300 "parser.cog"
         return 

#line 300 "parser.cog"
                            

#line 300 "parser.cog"
                advanceToken(

#line 300 "parser.cog"
                             parser);
}


#line 302 "parser.cog"
     return 

#line 302 "parser.cog"
            0;
}


#line 305 "parser.cog"
 

#line 308 "parser.cog"
        ConstPtr<

#line 308 "parser.cog"
                 Token>  advanceIf(

#line 306 "parser.cog"
                   

#line 306 "parser.cog"
             Parser

#line 306 "parser.cog"
                   * parser, 

#line 307 "parser.cog"
               StringSpan expected)
{


#line 310 "parser.cog"
     switch(

#line 310 "parser.cog"
                         

#line 310 "parser.cog"
            peekTokenCode(

#line 310 "parser.cog"
                          parser))
{
case 

#line 312 "parser.cog"
          kTokenCode_Identifier:
{


#line 313 "parser.cog"
         if(

#line 313 "parser.cog"
                                                   

#line 313 "parser.cog"
                   

#line 313 "parser.cog"
            getText(

#line 313 "parser.cog"
                           

#line 313 "parser.cog"
                    (

#line 313 "parser.cog"
                         

#line 313 "parser.cog"
                     Name

#line 313 "parser.cog"
                         *)(

#line 313 "parser.cog"
                                        DEREF(

#line 313 "parser.cog"
                                  DEREF(

#line 313 "parser.cog"
                            parser).token).rawData)) 

#line 313 "parser.cog"
                                                   == 

#line 313 "parser.cog"
                                                      expected)
{


#line 315 "parser.cog"
             return 

#line 315 "parser.cog"
                                

#line 315 "parser.cog"
                    advanceToken(

#line 315 "parser.cog"
                                 parser);
}
}
default:
{


#line 319 "parser.cog"
         break;
}
}


#line 321 "parser.cog"
     return 

#line 321 "parser.cog"
            0;
}


#line 324 "parser.cog"
 

#line 327 "parser.cog"
        ConstPtr<

#line 327 "parser.cog"
                 Token>  advanceIfFragment(

#line 325 "parser.cog"
                   

#line 325 "parser.cog"
             Parser

#line 325 "parser.cog"
                   * parser, 

#line 326 "parser.cog"
               TokenCode expected)
{


#line 329 "parser.cog"
     if(

#line 329 "parser.cog"
                              

#line 329 "parser.cog"
                     

#line 329 "parser.cog"
        peekTokenCode(

#line 329 "parser.cog"
                      parser) 

#line 329 "parser.cog"
                              == 

#line 329 "parser.cog"
                                 expected)
{


#line 331 "parser.cog"
         return 

#line 331 "parser.cog"
                               

#line 331 "parser.cog"
                advanceFragment(

#line 331 "parser.cog"
                                parser);
}


#line 333 "parser.cog"
     return 

#line 333 "parser.cog"
            0;
}


#line 336 "parser.cog"
 

#line 339 "parser.cog"
        ConstPtr<

#line 339 "parser.cog"
                 Token>  expect(

#line 337 "parser.cog"
                   

#line 337 "parser.cog"
             Parser

#line 337 "parser.cog"
                   * parser, 

#line 338 "parser.cog"
               TokenCode expected)
{


#line 341 "parser.cog"
     if(auto token = 

#line 341 "parser.cog"
                             

#line 341 "parser.cog"
                    advanceIf(

#line 341 "parser.cog"
                              parser, 

#line 341 "parser.cog"
                                      expected))
{


#line 342 "parser.cog"
         return 

#line 342 "parser.cog"
                token;
}


#line 344 "parser.cog"
               

#line 344 "parser.cog"
               

#line 344 "parser.cog"
     unexpected(

#line 344 "parser.cog"
                parser, 

#line 344 "parser.cog"
                        expected);


#line 345 "parser.cog"
     return 

#line 345 "parser.cog"
            0;
}


#line 348 "parser.cog"
 

#line 351 "parser.cog"
        ConstPtr<

#line 351 "parser.cog"
                 Token>  expectFragment(

#line 349 "parser.cog"
                   

#line 349 "parser.cog"
             Parser

#line 349 "parser.cog"
                   * parser, 

#line 350 "parser.cog"
               TokenCode expected)
{


#line 353 "parser.cog"
     if(auto token = 

#line 353 "parser.cog"
                                     

#line 353 "parser.cog"
                    advanceIfFragment(

#line 353 "parser.cog"
                                      parser, 

#line 353 "parser.cog"
                                              expected))
{


#line 354 "parser.cog"
         return 

#line 354 "parser.cog"
                token;
}


#line 356 "parser.cog"
               

#line 356 "parser.cog"
               

#line 356 "parser.cog"
     unexpected(

#line 356 "parser.cog"
                parser, 

#line 356 "parser.cog"
                        expected);


#line 357 "parser.cog"
     return 

#line 357 "parser.cog"
            0;
}


#line 360 "parser.cog"
 

#line 362 "parser.cog"
            

#line 362 "parser.cog"
        Name

#line 362 "parser.cog"
            * expectIdentifier(

#line 361 "parser.cog"
                   

#line 361 "parser.cog"
             Parser

#line 361 "parser.cog"
                   * parser)
{


#line 364 "parser.cog"
     if(auto token = 

#line 364 "parser.cog"
                             

#line 364 "parser.cog"
                    advanceIf(

#line 364 "parser.cog"
                              parser, 

#line 364 "parser.cog"
                                      kTokenCode_Identifier))
{


#line 366 "parser.cog"
         

#line 366 "parser.cog"
         auto name = 

#line 366 "parser.cog"
                    cast<

#line 366 "parser.cog"
                         Ptr<

#line 366 "parser.cog"
                             Name> >(

#line 366 "parser.cog"
                                          DEREF(

#line 366 "parser.cog"
                                     token).rawData);


#line 367 "parser.cog"
         return 

#line 367 "parser.cog"
                name;
}
else
{


#line 371 "parser.cog"
                   

#line 371 "parser.cog"
                   

#line 371 "parser.cog"
         unexpected(

#line 371 "parser.cog"
                    parser, 

#line 371 "parser.cog"
                            kTokenCode_Identifier);


#line 372 "parser.cog"
         return 

#line 372 "parser.cog"
                0;
}
}


#line 377 "parser.cog"
 

#line 380 "parser.cog"
        ConstPtr<

#line 380 "parser.cog"
                 Token>  advanceIfEnd(

#line 378 "parser.cog"
                   

#line 378 "parser.cog"
             Parser

#line 378 "parser.cog"
                   * parser, 

#line 379 "parser.cog"
               TokenCode expected)
{


#line 382 "parser.cog"
     if(

#line 382 "parser.cog"
               

#line 382 "parser.cog"
        isAtEnd(

#line 382 "parser.cog"
                parser))
{


#line 384 "parser.cog"
         return 

#line 384 "parser.cog"
                      

#line 384 "parser.cog"
                expect(

#line 384 "parser.cog"
                       parser, 

#line 384 "parser.cog"
                               expected);
}


#line 388 "parser.cog"
     return 

#line 388 "parser.cog"
                     

#line 388 "parser.cog"
            advanceIf(

#line 388 "parser.cog"
                      parser, 

#line 388 "parser.cog"
                              expected);
}


#line 669 "syntax.cog"
 

#line 674 "syntax.cog"
  LookupResultItem::LookupResultItem()
{


#line 676 "syntax.cog"
       DEREF(

#line 676 "syntax.cog"
   this).decl = 

#line 676 "syntax.cog"
               nullptr;
}


#line 682 "syntax.cog"
  LookupResultItem::LookupResultItem(

#line 682 "syntax.cog"
             Decl decl)
{


#line 684 "syntax.cog"
       DEREF(

#line 684 "syntax.cog"
   this).decl = 

#line 684 "syntax.cog"
               decl;
}


#line 688 "syntax.cog"
 

#line 692 "syntax.cog"
  

#line 692 "syntax.cog"
                  Ptr<

#line 692 "syntax.cog"
                      LookupResultItem>  LookupResult::begin()
{


#line 692 "syntax.cog"
                                          return 

#line 692 "syntax.cog"
                                                            

#line 692 "syntax.cog"
                                                      DEREF(

#line 692 "syntax.cog"
                                                 items).begin();
}


#line 693 "syntax.cog"
  

#line 693 "syntax.cog"
                Ptr<

#line 693 "syntax.cog"
                    LookupResultItem>  LookupResult::end()
{


#line 693 "syntax.cog"
                                        return 

#line 693 "syntax.cog"
                                                        

#line 693 "syntax.cog"
                                                    DEREF(

#line 693 "syntax.cog"
                                               items).end();
}


#line 696 "syntax.cog"
  

#line 696 "syntax.cog"
                    Bool LookupResult::isEmpty()
{


#line 696 "syntax.cog"
                           return 

#line 696 "syntax.cog"
                                                   

#line 696 "syntax.cog"
                                                

#line 696 "syntax.cog"
                                       DEREF(

#line 696 "syntax.cog"
                                  items).getCount() 

#line 696 "syntax.cog"
                                                   == 

#line 696 "syntax.cog"
                                                      0;
}


#line 697 "syntax.cog"
     

#line 697 "syntax.cog"
                        Bool LookupResult::isUnique()
{


#line 697 "syntax.cog"
                               return 

#line 697 "syntax.cog"
                                                       

#line 697 "syntax.cog"
                                                    

#line 697 "syntax.cog"
                                           DEREF(

#line 697 "syntax.cog"
                                      items).getCount() 

#line 697 "syntax.cog"
                                                       == 

#line 697 "syntax.cog"
                                                          1;
}


#line 698 "syntax.cog"
     

#line 698 "syntax.cog"
                            Bool LookupResult::isOverloaded()
{


#line 698 "syntax.cog"
                                   return 

#line 698 "syntax.cog"
                                                           

#line 698 "syntax.cog"
                                                        

#line 698 "syntax.cog"
                                               DEREF(

#line 698 "syntax.cog"
                                          items).getCount() 

#line 698 "syntax.cog"
                                                           > 

#line 698 "syntax.cog"
                                                             1;
}


#line 700 "syntax.cog"
     

#line 700 "syntax.cog"
                       Decl LookupResult::getDecl()
{


#line 702 "syntax.cog"
                  

#line 702 "syntax.cog"
                  

#line 702 "syntax.cog"
         cogAssert(

#line 702 "syntax.cog"
                           

#line 702 "syntax.cog"
                   isUnique());


#line 703 "syntax.cog"
         return 

#line 703 "syntax.cog"
                        DEREF(

#line 703 "syntax.cog"
                     

#line 703 "syntax.cog"
                items[

#line 703 "syntax.cog"
                      0]).decl;
}


#line 391 "parser.cog"
 

#line 394 "parser.cog"
        LookupResult lookup(

#line 392 "parser.cog"
                   

#line 392 "parser.cog"
             Parser

#line 392 "parser.cog"
                   * parser, 

#line 393 "parser.cog"
               

#line 393 "parser.cog"
           Name

#line 393 "parser.cog"
               * name)
{


#line 396 "parser.cog"
     return 

#line 396 "parser.cog"
                  

#line 396 "parser.cog"
            lookup(

#line 396 "parser.cog"
                         DEREF(

#line 396 "parser.cog"
                   parser).scope, 

#line 396 "parser.cog"
                                 name);
}


#line 498 "syntax.cog"
 

#line 401 "parser.cog"
 

#line 403 "parser.cog"
        SyntaxDecl getSyntaxDecl(

#line 402 "parser.cog"
             ConstRef<

#line 402 "parser.cog"
                      LookupResult>  result)
{


#line 405 "parser.cog"
     for(auto item : 

#line 405 "parser.cog"
                            

#line 405 "parser.cog"
                     UNCONST(

#line 405 "parser.cog"
                             result))
{
{


#line 408 "parser.cog"
         if(auto syntaxDecl = 

#line 408 "parser.cog"
                                           

#line 408 "parser.cog"
                             as<

#line 408 "parser.cog"
                                SyntaxDecl> (

#line 408 "parser.cog"
                                                DEREF(

#line 408 "parser.cog"
                                            item).decl))
{


#line 410 "parser.cog"
             return 

#line 410 "parser.cog"
                    syntaxDecl;
}
}
}


#line 415 "parser.cog"
     return 

#line 415 "parser.cog"
            nullptr;
}


#line 652 "syntax.cog"
 

#line 418 "parser.cog"
 

#line 421 "parser.cog"
        NameExp createNameExp(

#line 419 "parser.cog"
                   

#line 419 "parser.cog"
             Parser

#line 419 "parser.cog"
                   * parser, 

#line 420 "parser.cog"
            ConstPtr<

#line 420 "parser.cog"
                     Token>  token)
{


#line 423 "parser.cog"
     

#line 423 "parser.cog"
     auto name = 

#line 423 "parser.cog"
                cast<

#line 423 "parser.cog"
                     Ptr<

#line 423 "parser.cog"
                         Name> >(

#line 423 "parser.cog"
                                      DEREF(

#line 423 "parser.cog"
                                 token).rawData);


#line 424 "parser.cog"
     

#line 424 "parser.cog"
     auto exp = 

#line 424 "parser.cog"
                                    

#line 424 "parser.cog"
               createObject<

#line 424 "parser.cog"
                            NameExp> ();


#line 425 "parser.cog"
        DEREF(

#line 425 "parser.cog"
     exp).loc = 

#line 425 "parser.cog"
                           

#line 425 "parser.cog"
                    DEREF(

#line 425 "parser.cog"
               token).getLoc();


#line 426 "parser.cog"
        DEREF(

#line 426 "parser.cog"
     exp).name = 

#line 426 "parser.cog"
                name;


#line 427 "parser.cog"
        DEREF(

#line 427 "parser.cog"
     exp).scope = 

#line 427 "parser.cog"
                       DEREF(

#line 427 "parser.cog"
                 parser).scope;


#line 428 "parser.cog"
     return 

#line 428 "parser.cog"
            exp;
}


#line 431 "parser.cog"
 

#line 433 "parser.cog"
        Exp createErrorExp(

#line 432 "parser.cog"
                   

#line 432 "parser.cog"
             Parser

#line 432 "parser.cog"
                   * parser)
{


#line 435 "parser.cog"
     

#line 435 "parser.cog"
     auto exp = 

#line 435 "parser.cog"
                                     

#line 435 "parser.cog"
               createObject<

#line 435 "parser.cog"
                            ErrorExp> ();


#line 436 "parser.cog"
        DEREF(

#line 436 "parser.cog"
     exp).loc = 

#line 436 "parser.cog"
                      

#line 436 "parser.cog"
               peekLoc(

#line 436 "parser.cog"
                       parser);


#line 437 "parser.cog"
     return 

#line 437 "parser.cog"
            exp;
}


#line 440 "parser.cog"
 

#line 441 "parser.cog"
    Arg parseArg(

#line 440 "parser.cog"
                             

#line 440 "parser.cog"
                       Parser

#line 440 "parser.cog"
                             * parser)
{


#line 443 "parser.cog"
     

#line 443 "parser.cog"
     auto argExp = 

#line 443 "parser.cog"
                          

#line 443 "parser.cog"
                  parseExp(

#line 443 "parser.cog"
                           parser);


#line 444 "parser.cog"
     return 

#line 444 "parser.cog"
                               

#line 444 "parser.cog"
            createPositionalArg(

#line 444 "parser.cog"
                                parser, 

#line 444 "parser.cog"
                                        argExp);
}


#line 447 "parser.cog"
 

#line 449 "parser.cog"
        SyntaxList<

#line 449 "parser.cog"
                   Arg>  parseArgs(

#line 448 "parser.cog"
                   

#line 448 "parser.cog"
             Parser

#line 448 "parser.cog"
                   * parser)
{


#line 451 "parser.cog"
     

#line 451 "parser.cog"
     

#line 451 "parser.cog"
               SyntaxListBuilder<

#line 451 "parser.cog"
                                 Arg>  args;


#line 452 "parser.cog"
     switch(

#line 452 "parser.cog"
                         

#line 452 "parser.cog"
            peekTokenCode(

#line 452 "parser.cog"
                          parser))
{
case 

#line 454 "parser.cog"
          kTokenCode_RParen:
case 

#line 455 "parser.cog"
          kTokenCode_RCurly:
case 

#line 456 "parser.cog"
          kTokenCode_RSquare:
case 

#line 457 "parser.cog"
          kTokenCode_EndOfFile:
{


#line 458 "parser.cog"
         return 

#line 458 "parser.cog"
                args;
}
default:
{


#line 461 "parser.cog"
         break;
}
}


#line 464 "parser.cog"
     {
for(;;)
{
{


#line 466 "parser.cog"
         

#line 466 "parser.cog"
         auto arg = 

#line 466 "parser.cog"
                           

#line 466 "parser.cog"
                   parseArg(

#line 466 "parser.cog"
                            parser);


#line 467 "parser.cog"
         if(

#line 467 "parser.cog"
            arg)
{


#line 469 "parser.cog"
                     

#line 469 "parser.cog"
                     

#line 469 "parser.cog"
                 DEREF(

#line 469 "parser.cog"
             args).add(

#line 469 "parser.cog"
                      arg);
}


#line 472 "parser.cog"
         switch(

#line 472 "parser.cog"
                             

#line 472 "parser.cog"
                peekTokenCode(

#line 472 "parser.cog"
                              parser))
{
case 

#line 474 "parser.cog"
              kTokenCode_RParen:
case 

#line 475 "parser.cog"
              kTokenCode_RCurly:
case 

#line 476 "parser.cog"
              kTokenCode_RSquare:
case 

#line 477 "parser.cog"
              kTokenCode_EndOfFile:
{


#line 478 "parser.cog"
             return 

#line 478 "parser.cog"
                    args;
}
default:
{


#line 481 "parser.cog"
             break;
}
}


#line 484 "parser.cog"
               

#line 484 "parser.cog"
               

#line 484 "parser.cog"
         expect(

#line 484 "parser.cog"
                parser, 

#line 484 "parser.cog"
                        kTokenCode_Comma);


#line 486 "parser.cog"
                         

#line 486 "parser.cog"
                         

#line 486 "parser.cog"
         tryRecoverBefore(

#line 486 "parser.cog"
                          parser, 

#line 486 "parser.cog"
                                  kTokenCode_RParen);
}
}}
}


#line 490 "parser.cog"
 

#line 491 "parser.cog"
        Arg parseGenericArg(

#line 490 "parser.cog"
                                    

#line 490 "parser.cog"
                              Parser

#line 490 "parser.cog"
                                    * parser)
{


#line 493 "parser.cog"
     

#line 493 "parser.cog"
     auto flags = 

#line 493 "parser.cog"
                       DEREF(

#line 493 "parser.cog"
                 parser).flags;


#line 494 "parser.cog"
                  

#line 494 "parser.cog"
                  

#line 494 "parser.cog"
           DEREF(

#line 494 "parser.cog"
     parser).flags 

#line 494 "parser.cog"
                  |= 

#line 494 "parser.cog"
                     kParserFlag_InsideGenericClause;


#line 495 "parser.cog"
     

#line 495 "parser.cog"
     auto arg = 

#line 495 "parser.cog"
                       

#line 495 "parser.cog"
               parseArg(

#line 495 "parser.cog"
                        parser);


#line 496 "parser.cog"
           DEREF(

#line 496 "parser.cog"
     parser).flags = 

#line 496 "parser.cog"
                    flags;


#line 497 "parser.cog"
     return 

#line 497 "parser.cog"
            arg;
}


#line 500 "parser.cog"
 

#line 502 "parser.cog"
        SyntaxList<

#line 502 "parser.cog"
                   Arg>  parseGenericArgs(

#line 501 "parser.cog"
                   

#line 501 "parser.cog"
             Parser

#line 501 "parser.cog"
                   * parser)
{


#line 504 "parser.cog"
     

#line 504 "parser.cog"
     

#line 504 "parser.cog"
               SyntaxListBuilder<

#line 504 "parser.cog"
                                 Arg>  args;


#line 505 "parser.cog"
     if(

#line 505 "parser.cog"
                        

#line 505 "parser.cog"
        peekGenericClose(

#line 505 "parser.cog"
                         parser))
{


#line 506 "parser.cog"
         return 

#line 506 "parser.cog"
                args;
}


#line 508 "parser.cog"
     {
for(;;)
{
{


#line 510 "parser.cog"
         

#line 510 "parser.cog"
         auto arg = 

#line 510 "parser.cog"
                                  

#line 510 "parser.cog"
                   parseGenericArg(

#line 510 "parser.cog"
                                   parser);


#line 511 "parser.cog"
         if(

#line 511 "parser.cog"
            arg)
{


#line 513 "parser.cog"
                     

#line 513 "parser.cog"
                     

#line 513 "parser.cog"
                 DEREF(

#line 513 "parser.cog"
             args).add(

#line 513 "parser.cog"
                      arg);
}


#line 516 "parser.cog"
         if(

#line 516 "parser.cog"
                            

#line 516 "parser.cog"
            peekGenericClose(

#line 516 "parser.cog"
                             parser))
{


#line 517 "parser.cog"
             return 

#line 517 "parser.cog"
                    args;
}


#line 519 "parser.cog"
               

#line 519 "parser.cog"
               

#line 519 "parser.cog"
         expect(

#line 519 "parser.cog"
                parser, 

#line 519 "parser.cog"
                        kTokenCode_Comma);
}
}}
}


#line 523 "parser.cog"
 

#line 525 "parser.cog"
        Bool peekGenericApp(

#line 524 "parser.cog"
                     

#line 524 "parser.cog"
               Parser

#line 524 "parser.cog"
                     * inParser)
{


#line 528 "parser.cog"
     

#line 528 "parser.cog"
     auto parserImpl = 

#line 528 "parser.cog"
                      

#line 528 "parser.cog"
                      *

#line 528 "parser.cog"
                       inParser;


#line 529 "parser.cog"
     

#line 529 "parser.cog"
     auto parser = 

#line 529 "parser.cog"
                  

#line 529 "parser.cog"
                  &

#line 529 "parser.cog"
                   parserImpl;


#line 532 "parser.cog"
     if(

#line 532 "parser.cog"
        

#line 532 "parser.cog"
        !

#line 532 "parser.cog"
                            

#line 532 "parser.cog"
         tryParseGenericOpen(

#line 532 "parser.cog"
                             parser))
{


#line 533 "parser.cog"
         return 

#line 533 "parser.cog"
                false;
}


#line 536 "parser.cog"
     {
for(;;)
{
{


#line 538 "parser.cog"
         if(

#line 538 "parser.cog"
                            

#line 538 "parser.cog"
            peekGenericClose(

#line 538 "parser.cog"
                             parser))
{


#line 539 "parser.cog"
             break;
}


#line 541 "parser.cog"
         switch(

#line 541 "parser.cog"
                             

#line 541 "parser.cog"
                peekTokenCode(

#line 541 "parser.cog"
                              parser))
{
case 

#line 543 "parser.cog"
              kTokenCode_EndOfFile:
case 

#line 544 "parser.cog"
              kTokenCode_RParen:
case 

#line 545 "parser.cog"
              kTokenCode_RSquare:
case 

#line 546 "parser.cog"
              kTokenCode_RCurly:
case 

#line 547 "parser.cog"
              kTokenCode_Semi:
{


#line 548 "parser.cog"
             return 

#line 548 "parser.cog"
                    false;
}
default:
{


#line 553 "parser.cog"
                            

#line 553 "parser.cog"
                            

#line 553 "parser.cog"
             advanceFragment(

#line 553 "parser.cog"
                             parser);
}
{


#line 554 "parser.cog"
             break;
}
}
}
}}


#line 559 "parser.cog"
                       

#line 559 "parser.cog"
                       

#line 559 "parser.cog"
     expectGenericClose(

#line 559 "parser.cog"
                        parser);


#line 565 "parser.cog"
     return 

#line 565 "parser.cog"
            true;
}


#line 568 "parser.cog"
 

#line 571 "parser.cog"
        Exp maybeParseGenericApp(

#line 569 "parser.cog"
                   

#line 569 "parser.cog"
             Parser

#line 569 "parser.cog"
                   * parser, 

#line 570 "parser.cog"
           Exp base)
{


#line 573 "parser.cog"
     if(

#line 573 "parser.cog"
        

#line 573 "parser.cog"
        !

#line 573 "parser.cog"
                       

#line 573 "parser.cog"
         peekGenericApp(

#line 573 "parser.cog"
                        parser))
{


#line 574 "parser.cog"
         return 

#line 574 "parser.cog"
                base;
}


#line 576 "parser.cog"
  

#line 576 "parser.cog"
  auto loc = 

#line 576 "parser.cog"
                   

#line 576 "parser.cog"
            peekLoc(

#line 576 "parser.cog"
                    parser);


#line 577 "parser.cog"
                        

#line 577 "parser.cog"
                        

#line 577 "parser.cog"
     tryParseGenericOpen(

#line 577 "parser.cog"
                         parser);


#line 580 "parser.cog"
     

#line 580 "parser.cog"
     auto args = 

#line 580 "parser.cog"
                                

#line 580 "parser.cog"
                parseGenericArgs(

#line 580 "parser.cog"
                                 parser);


#line 582 "parser.cog"
                       

#line 582 "parser.cog"
                       

#line 582 "parser.cog"
     expectGenericClose(

#line 582 "parser.cog"
                        parser);


#line 584 "parser.cog"
     

#line 584 "parser.cog"
     auto exp = 

#line 584 "parser.cog"
                                          

#line 584 "parser.cog"
               createObject<

#line 584 "parser.cog"
                            GenericAppExp> ();


#line 585 "parser.cog"
     DEREF(

#line 585 "parser.cog"
  exp).loc = 

#line 585 "parser.cog"
            loc;


#line 586 "parser.cog"
        DEREF(

#line 586 "parser.cog"
     exp).base = 

#line 586 "parser.cog"
                base;


#line 587 "parser.cog"
        DEREF(

#line 587 "parser.cog"
     exp).args = 

#line 587 "parser.cog"
                args;


#line 588 "parser.cog"
     return 

#line 588 "parser.cog"
            exp;
}


#line 589 "syntax.cog"
 typedef 

#line 589 "syntax.cog"
                       Int64 IntLitVal;


#line 591 "parser.cog"
 

#line 593 "parser.cog"
        IntLitVal getIntegerLiteralVal(

#line 592 "parser.cog"
            ConstRef<

#line 592 "parser.cog"
                     Token>  token)
{


#line 595 "parser.cog"
     

#line 595 "parser.cog"
     auto textBegin = 

#line 595 "parser.cog"
                     cast<

#line 595 "parser.cog"
                          ConstPtr<

#line 595 "parser.cog"
                                   Char> >(

#line 595 "parser.cog"
                                                DEREF(

#line 595 "parser.cog"
                                           token).rawData);


#line 596 "parser.cog"
     

#line 596 "parser.cog"
     auto textEnd = 

#line 596 "parser.cog"
                             

#line 596 "parser.cog"
                   textBegin 

#line 596 "parser.cog"
                             + 

#line 596 "parser.cog"
                                    DEREF(

#line 596 "parser.cog"
                               token).rawSize;


#line 598 "parser.cog"
     

#line 598 "parser.cog"
     

#line 598 "parser.cog"
               IntLitVal val = 

#line 598 "parser.cog"
                           0;


#line 599 "parser.cog"
     

#line 599 "parser.cog"
     auto base = 

#line 599 "parser.cog"
                10;


#line 601 "parser.cog"
     

#line 601 "parser.cog"
     auto tt = 

#line 601 "parser.cog"
              textBegin;


#line 602 "parser.cog"
     if(

#line 602 "parser.cog"
           

#line 602 "parser.cog"
        tt 

#line 602 "parser.cog"
           != 

#line 602 "parser.cog"
                      

#line 602 "parser.cog"
              textEnd 

#line 602 "parser.cog"
                      && 

#line 602 "parser.cog"
                             

#line 602 "parser.cog"
                         

#line 602 "parser.cog"
                         *

#line 602 "parser.cog"
                          tt 

#line 602 "parser.cog"
                             == 

#line 602 "parser.cog"
                                '0')
{


#line 604 "parser.cog"
         

#line 604 "parser.cog"
         

#line 604 "parser.cog"
         ++

#line 604 "parser.cog"
           tt;


#line 606 "parser.cog"
         if(

#line 606 "parser.cog"
               

#line 606 "parser.cog"
            tt 

#line 606 "parser.cog"
               == 

#line 606 "parser.cog"
                  textEnd)
{


#line 607 "parser.cog"
             return 

#line 607 "parser.cog"
                    0;
}


#line 609 "parser.cog"
         switch(

#line 609 "parser.cog"
                

#line 609 "parser.cog"
                *

#line 609 "parser.cog"
                 tt)
{
case 

#line 611 "parser.cog"
              'x':
case 

#line 611 "parser.cog"
                        'X':
{


#line 612 "parser.cog"
             base = 

#line 612 "parser.cog"
                    16;
}
{


#line 613 "parser.cog"
               

#line 613 "parser.cog"
               

#line 613 "parser.cog"
             tt

#line 613 "parser.cog"
               ++;
}
{


#line 614 "parser.cog"
             break;
}
case 

#line 615 "parser.cog"
              'b':
case 

#line 615 "parser.cog"
                        'B':
{


#line 616 "parser.cog"
             base = 

#line 616 "parser.cog"
                    2;
}
{


#line 617 "parser.cog"
               

#line 617 "parser.cog"
               

#line 617 "parser.cog"
             tt

#line 617 "parser.cog"
               ++;
}
{


#line 618 "parser.cog"
             break;
}
default:
{


#line 620 "parser.cog"
             break;
}
}
}


#line 624 "parser.cog"
     while(

#line 624 "parser.cog"
              

#line 624 "parser.cog"
           tt 

#line 624 "parser.cog"
              != 

#line 624 "parser.cog"
                 textEnd)
{
{


#line 626 "parser.cog"
         

#line 626 "parser.cog"
         auto c = 

#line 626 "parser.cog"
                 

#line 626 "parser.cog"
                 *

#line 626 "parser.cog"
                    

#line 626 "parser.cog"
                  tt

#line 626 "parser.cog"
                    ++;


#line 627 "parser.cog"
         if(

#line 627 "parser.cog"
                       

#line 627 "parser.cog"
            (

#line 627 "parser.cog"
               

#line 627 "parser.cog"
             c 

#line 627 "parser.cog"
               >= 

#line 627 "parser.cog"
                  '0') 

#line 627 "parser.cog"
                       && 

#line 627 "parser.cog"
                          (

#line 627 "parser.cog"
                             

#line 627 "parser.cog"
                           c 

#line 627 "parser.cog"
                             <= 

#line 627 "parser.cog"
                                '9'))
{


#line 629 "parser.cog"
             val = 

#line 629 "parser.cog"
                      

#line 629 "parser.cog"
                   val 

#line 629 "parser.cog"
                      * 

#line 629 "parser.cog"
                            

#line 629 "parser.cog"
                       base 

#line 629 "parser.cog"
                            + 

#line 629 "parser.cog"
                              (

#line 629 "parser.cog"
                                 

#line 629 "parser.cog"
                               c 

#line 629 "parser.cog"
                                 - 

#line 629 "parser.cog"
                                   '0');
}
}
}


#line 632 "parser.cog"
     return 

#line 632 "parser.cog"
            val;
}


#line 635 "parser.cog"
 

#line 637 "parser.cog"
        String getStringLiteralVal(

#line 636 "parser.cog"
            ConstRef<

#line 636 "parser.cog"
                     Token>  token)
{


#line 639 "parser.cog"
     

#line 639 "parser.cog"
     auto textBegin = 

#line 639 "parser.cog"
                     cast<

#line 639 "parser.cog"
                          ConstPtr<

#line 639 "parser.cog"
                                   Char> >(

#line 639 "parser.cog"
                                                DEREF(

#line 639 "parser.cog"
                                           token).rawData);


#line 640 "parser.cog"
     

#line 640 "parser.cog"
     auto textEnd = 

#line 640 "parser.cog"
                             

#line 640 "parser.cog"
                   textBegin 

#line 640 "parser.cog"
                             + 

#line 640 "parser.cog"
                                    DEREF(

#line 640 "parser.cog"
                               token).rawSize;


#line 644 "parser.cog"
     

#line 644 "parser.cog"
     auto cursor = 

#line 644 "parser.cog"
                  textBegin;


#line 646 "parser.cog"
     

#line 646 "parser.cog"
     

#line 646 "parser.cog"
               String val;


#line 648 "parser.cog"
     

#line 648 "parser.cog"
     auto delimeter = 

#line 648 "parser.cog"
                     

#line 648 "parser.cog"
                     *

#line 648 "parser.cog"
                            

#line 648 "parser.cog"
                      cursor

#line 648 "parser.cog"
                            ++;


#line 649 "parser.cog"
     {
for(;;)
{
{


#line 651 "parser.cog"
         

#line 651 "parser.cog"
         auto c = 

#line 651 "parser.cog"
                 

#line 651 "parser.cog"
                 *

#line 651 "parser.cog"
                        

#line 651 "parser.cog"
                  cursor

#line 651 "parser.cog"
                        ++;


#line 653 "parser.cog"
         if(

#line 653 "parser.cog"
              

#line 653 "parser.cog"
            c 

#line 653 "parser.cog"
              == 

#line 653 "parser.cog"
                 delimeter)
{


#line 654 "parser.cog"
             break;
}


#line 656 "parser.cog"
         switch(

#line 656 "parser.cog"
                c)
{
case 

#line 658 "parser.cog"
              '\\':
{
{


#line 660 "parser.cog"
                 

#line 660 "parser.cog"
                 auto d = 

#line 660 "parser.cog"
                         

#line 660 "parser.cog"
                         *

#line 660 "parser.cog"
                                

#line 660 "parser.cog"
                          cursor

#line 660 "parser.cog"
                                ++;


#line 661 "parser.cog"
                 switch(

#line 661 "parser.cog"
                        d)
{
case 

#line 663 "parser.cog"
                      'r':
{


#line 663 "parser.cog"
                                     

#line 663 "parser.cog"
                                     

#line 663 "parser.cog"
                              DEREF(

#line 663 "parser.cog"
                           val).append(

#line 663 "parser.cog"
                                      '\r');
}
{


#line 663 "parser.cog"
                                             break;
}
case 

#line 664 "parser.cog"
                      'n':
{


#line 664 "parser.cog"
                                     

#line 664 "parser.cog"
                                     

#line 664 "parser.cog"
                              DEREF(

#line 664 "parser.cog"
                           val).append(

#line 664 "parser.cog"
                                      '\n');
}
{


#line 664 "parser.cog"
                                             break;
}
case 

#line 665 "parser.cog"
                      't':
{


#line 665 "parser.cog"
                                     

#line 665 "parser.cog"
                                     

#line 665 "parser.cog"
                              DEREF(

#line 665 "parser.cog"
                           val).append(

#line 665 "parser.cog"
                                      '\t');
}
{


#line 665 "parser.cog"
                                             break;
}
case 

#line 666 "parser.cog"
                      '\\':
{


#line 666 "parser.cog"
                                      

#line 666 "parser.cog"
                                      

#line 666 "parser.cog"
                               DEREF(

#line 666 "parser.cog"
                            val).append(

#line 666 "parser.cog"
                                       '\\');
}
{


#line 666 "parser.cog"
                                              break;
}
case 

#line 667 "parser.cog"
                      '\"':
{


#line 667 "parser.cog"
                                      

#line 667 "parser.cog"
                                      

#line 667 "parser.cog"
                               DEREF(

#line 667 "parser.cog"
                            val).append(

#line 667 "parser.cog"
                                       '\"');
}
{


#line 667 "parser.cog"
                                              break;
}
case 

#line 668 "parser.cog"
                      '\'':
{


#line 668 "parser.cog"
                                      

#line 668 "parser.cog"
                                      

#line 668 "parser.cog"
                               DEREF(

#line 668 "parser.cog"
                            val).append(

#line 668 "parser.cog"
                                       '\'');
}
{


#line 668 "parser.cog"
                                              break;
}
default:
{


#line 671 "parser.cog"
                              

#line 671 "parser.cog"
                              

#line 671 "parser.cog"
                     cogAssert(

#line 671 "parser.cog"
                               

#line 671 "parser.cog"
                               !

#line 671 "parser.cog"
                                "unimplemented");
}
{


#line 672 "parser.cog"
                     break;
}
}
}
}
{


#line 675 "parser.cog"
             break;
}
default:
{


#line 677 "parser.cog"
                       

#line 677 "parser.cog"
                       

#line 677 "parser.cog"
                DEREF(

#line 677 "parser.cog"
             val).append(

#line 677 "parser.cog"
                        c);
}
{


#line 678 "parser.cog"
             break;
}
}
}
}}


#line 682 "parser.cog"
     return 

#line 682 "parser.cog"
            val;
}


#line 685 "parser.cog"
 

#line 687 "parser.cog"
        Exp parseAtomicExp(

#line 686 "parser.cog"
                   

#line 686 "parser.cog"
             Parser

#line 686 "parser.cog"
                   * parser)
{


#line 689 "parser.cog"
     switch(

#line 689 "parser.cog"
                         

#line 689 "parser.cog"
            peekTokenCode(

#line 689 "parser.cog"
                          parser))
{
case 

#line 691 "parser.cog"
          kTokenCode_Identifier:
{
{


#line 694 "parser.cog"
             

#line 694 "parser.cog"
             auto loc = 

#line 694 "parser.cog"
                              

#line 694 "parser.cog"
                       peekLoc(

#line 694 "parser.cog"
                               parser);


#line 695 "parser.cog"
             

#line 695 "parser.cog"
             auto name = 

#line 695 "parser.cog"
                        cast<

#line 695 "parser.cog"
                             Ptr<

#line 695 "parser.cog"
                                 Name> >(

#line 695 "parser.cog"
                                                     DEREF(

#line 695 "parser.cog"
                                               DEREF(

#line 695 "parser.cog"
                                         parser).token).rawData);


#line 696 "parser.cog"
             

#line 696 "parser.cog"
             auto result = 

#line 696 "parser.cog"
                                

#line 696 "parser.cog"
                          lookup(

#line 696 "parser.cog"
                                 parser, 

#line 696 "parser.cog"
                                         name);


#line 698 "parser.cog"
             if(auto syntax = 

#line 698 "parser.cog"
                                          

#line 698 "parser.cog"
                             getSyntaxDecl(

#line 698 "parser.cog"
                                           result))
{


#line 700 "parser.cog"
                 if(

#line 700 "parser.cog"
                              

#line 700 "parser.cog"
                    isSubClass(

#line 700 "parser.cog"
                                     DEREF(

#line 700 "parser.cog"
                               syntax).syntaxClass, 

#line 700 "parser.cog"
                                                                

#line 700 "parser.cog"
                                                   getClass<

#line 700 "parser.cog"
                                                            Exp> ()))
{


#line 702 "parser.cog"
                                 

#line 702 "parser.cog"
                                 

#line 702 "parser.cog"
                     advanceToken(

#line 702 "parser.cog"
                                  parser);


#line 704 "parser.cog"
                     

#line 704 "parser.cog"
                     auto result = 

#line 704 "parser.cog"
                                                 

#line 704 "parser.cog"
                                        DEREF(

#line 704 "parser.cog"
                                  syntax).callback(

#line 704 "parser.cog"
                                                  parser);


#line 705 "parser.cog"
                     

#line 705 "parser.cog"
                     auto resultExp = 

#line 705 "parser.cog"
                                            

#line 705 "parser.cog"
                                     as<

#line 705 "parser.cog"
                                        Exp> (

#line 705 "parser.cog"
                                             result);


#line 709 "parser.cog"
                              DEREF(

#line 709 "parser.cog"
                     resultExp).loc = 

#line 709 "parser.cog"
                                     loc;


#line 711 "parser.cog"
                     return 

#line 711 "parser.cog"
                            resultExp;
}
}


#line 716 "parser.cog"
             

#line 716 "parser.cog"
             auto nameToken = 

#line 716 "parser.cog"
                                         

#line 716 "parser.cog"
                             advanceToken(

#line 716 "parser.cog"
                                          parser);


#line 717 "parser.cog"
             

#line 717 "parser.cog"
             auto exp = 

#line 717 "parser.cog"
                                    

#line 717 "parser.cog"
                       createNameExp(

#line 717 "parser.cog"
                                     parser, 

#line 717 "parser.cog"
                                             nameToken);


#line 718 "parser.cog"
             return 

#line 718 "parser.cog"
                                        

#line 718 "parser.cog"
                    maybeParseGenericApp(

#line 718 "parser.cog"
                                         parser, 

#line 718 "parser.cog"
                                                 exp);
}
}
{


#line 720 "parser.cog"
         break;
}
case 

#line 726 "parser.cog"
          kTokenCode_IntegerLiteral:
{
{


#line 728 "parser.cog"
             

#line 728 "parser.cog"
             auto token = 

#line 728 "parser.cog"
                                     

#line 728 "parser.cog"
                         advanceToken(

#line 728 "parser.cog"
                                      parser);


#line 729 "parser.cog"
             

#line 729 "parser.cog"
             auto exp = 

#line 729 "parser.cog"
                                              

#line 729 "parser.cog"
                       createObject<

#line 729 "parser.cog"
                                    IntLitExp> ();


#line 730 "parser.cog"
                DEREF(

#line 730 "parser.cog"
             exp).loc = 

#line 730 "parser.cog"
                                   

#line 730 "parser.cog"
                            DEREF(

#line 730 "parser.cog"
                       token).getLoc();


#line 731 "parser.cog"
                DEREF(

#line 731 "parser.cog"
             exp).val = 

#line 731 "parser.cog"
                                           

#line 731 "parser.cog"
                       getIntegerLiteralVal(

#line 731 "parser.cog"
                                            

#line 731 "parser.cog"
                                            *

#line 731 "parser.cog"
                                             token);


#line 732 "parser.cog"
             return 

#line 732 "parser.cog"
                    exp;
}
}
case 

#line 735 "parser.cog"
          kTokenCode_StringLiteral:
{
{


#line 737 "parser.cog"
             

#line 737 "parser.cog"
             auto token = 

#line 737 "parser.cog"
                                     

#line 737 "parser.cog"
                         advanceToken(

#line 737 "parser.cog"
                                      parser);


#line 738 "parser.cog"
             

#line 738 "parser.cog"
             auto exp = 

#line 738 "parser.cog"
                                                 

#line 738 "parser.cog"
                       createObject<

#line 738 "parser.cog"
                                    StringLitExp> ();


#line 739 "parser.cog"
                DEREF(

#line 739 "parser.cog"
             exp).loc = 

#line 739 "parser.cog"
                                   

#line 739 "parser.cog"
                            DEREF(

#line 739 "parser.cog"
                       token).getLoc();


#line 740 "parser.cog"
                DEREF(

#line 740 "parser.cog"
             exp).val = 

#line 740 "parser.cog"
                                          

#line 740 "parser.cog"
                       getStringLiteralVal(

#line 740 "parser.cog"
                                           

#line 740 "parser.cog"
                                           *

#line 740 "parser.cog"
                                            token);


#line 741 "parser.cog"
             return 

#line 741 "parser.cog"
                    exp;
}
}
case 

#line 744 "parser.cog"
          kTokenCode_CharacterLiteral:
{
{


#line 746 "parser.cog"
             

#line 746 "parser.cog"
             auto token = 

#line 746 "parser.cog"
                                     

#line 746 "parser.cog"
                         advanceToken(

#line 746 "parser.cog"
                                      parser);


#line 747 "parser.cog"
             

#line 747 "parser.cog"
             auto exp = 

#line 747 "parser.cog"
                                                    

#line 747 "parser.cog"
                       createObject<

#line 747 "parser.cog"
                                    CharacterLitExp> ();


#line 748 "parser.cog"
                DEREF(

#line 748 "parser.cog"
             exp).loc = 

#line 748 "parser.cog"
                                   

#line 748 "parser.cog"
                            DEREF(

#line 748 "parser.cog"
                       token).getLoc();


#line 749 "parser.cog"
                DEREF(

#line 749 "parser.cog"
             exp).val = 

#line 749 "parser.cog"
                                          

#line 749 "parser.cog"
                       getStringLiteralVal(

#line 749 "parser.cog"
                                           

#line 749 "parser.cog"
                                           *

#line 749 "parser.cog"
                                            token);


#line 750 "parser.cog"
             return 

#line 750 "parser.cog"
                    exp;
}
}
case 

#line 753 "parser.cog"
          kTokenCode_LParen:
{
{


#line 755 "parser.cog"
             

#line 755 "parser.cog"
             auto open = 

#line 755 "parser.cog"
                                    

#line 755 "parser.cog"
                        advanceToken(

#line 755 "parser.cog"
                                     parser);


#line 756 "parser.cog"
             

#line 756 "parser.cog"
             auto inner = 

#line 756 "parser.cog"
                                 

#line 756 "parser.cog"
                         parseExp(

#line 756 "parser.cog"
                                  parser);


#line 757 "parser.cog"
                   

#line 757 "parser.cog"
                   

#line 757 "parser.cog"
             expect(

#line 757 "parser.cog"
                    parser, 

#line 757 "parser.cog"
                            kTokenCode_RParen);


#line 761 "parser.cog"
             

#line 761 "parser.cog"
             auto exp = 

#line 761 "parser.cog"
                                             

#line 761 "parser.cog"
                       createObject<

#line 761 "parser.cog"
                                    ParenExp> ();


#line 762 "parser.cog"
                DEREF(

#line 762 "parser.cog"
             exp).loc = 

#line 762 "parser.cog"
                                  

#line 762 "parser.cog"
                           DEREF(

#line 762 "parser.cog"
                       open).getLoc();


#line 763 "parser.cog"
                DEREF(

#line 763 "parser.cog"
             exp).base = 

#line 763 "parser.cog"
                        inner;


#line 765 "parser.cog"
             return 

#line 765 "parser.cog"
                    exp;
}
}
default:
{


#line 769 "parser.cog"
                   

#line 769 "parser.cog"
                   

#line 769 "parser.cog"
         unexpected(

#line 769 "parser.cog"
                    parser);
}
{


#line 770 "parser.cog"
         return 

#line 770 "parser.cog"
                              

#line 770 "parser.cog"
                createErrorExp(

#line 770 "parser.cog"
                               parser);
}
}
}


#line 774 "parser.cog"
 

#line 777 "parser.cog"
        Arg createPositionalArg(

#line 775 "parser.cog"
                   

#line 775 "parser.cog"
             Parser

#line 775 "parser.cog"
                   * parser, 

#line 776 "parser.cog"
          Exp exp)
{


#line 779 "parser.cog"
     

#line 779 "parser.cog"
     auto arg = 

#line 779 "parser.cog"
                                          

#line 779 "parser.cog"
               createObject<

#line 779 "parser.cog"
                            PositionalArg> ();


#line 780 "parser.cog"
        DEREF(

#line 780 "parser.cog"
     arg).loc = 

#line 780 "parser.cog"
                  DEREF(

#line 780 "parser.cog"
               exp).loc;


#line 781 "parser.cog"
        DEREF(

#line 781 "parser.cog"
     arg).exp = 

#line 781 "parser.cog"
               exp;


#line 782 "parser.cog"
     return 

#line 782 "parser.cog"
            arg;
}


#line 785 "parser.cog"
 

#line 790 "parser.cog"
        AppExpBase createApp(

#line 786 "parser.cog"
                   

#line 786 "parser.cog"
             Parser

#line 786 "parser.cog"
                   * parser, 

#line 787 "parser.cog"
          AppExpBase exp, 

#line 788 "parser.cog"
         ConstPtr<

#line 788 "parser.cog"
                  Token>  op, 

#line 789 "parser.cog"
             Exp argExp)
{


#line 792 "parser.cog"
        DEREF(

#line 792 "parser.cog"
     exp).loc = 

#line 792 "parser.cog"
                        

#line 792 "parser.cog"
                 DEREF(

#line 792 "parser.cog"
               op).getLoc();


#line 793 "parser.cog"
        DEREF(

#line 793 "parser.cog"
     exp).base = 

#line 793 "parser.cog"
                             

#line 793 "parser.cog"
                createNameExp(

#line 793 "parser.cog"
                              parser, 

#line 793 "parser.cog"
                                      op);


#line 795 "parser.cog"
     

#line 795 "parser.cog"
     

#line 795 "parser.cog"
               SyntaxListBuilder<

#line 795 "parser.cog"
                                 Arg>  args;


#line 796 "parser.cog"
             

#line 796 "parser.cog"
             

#line 796 "parser.cog"
         DEREF(

#line 796 "parser.cog"
     args).add(

#line 796 "parser.cog"
                                 

#line 796 "parser.cog"
              createPositionalArg(

#line 796 "parser.cog"
                                  parser, 

#line 796 "parser.cog"
                                          argExp));


#line 797 "parser.cog"
        DEREF(

#line 797 "parser.cog"
     exp).args = 

#line 797 "parser.cog"
                args;


#line 798 "parser.cog"
     return 

#line 798 "parser.cog"
            exp;
}


#line 801 "parser.cog"
 

#line 807 "parser.cog"
        AppExpBase createApp(

#line 802 "parser.cog"
                   

#line 802 "parser.cog"
             Parser

#line 802 "parser.cog"
                   * parser, 

#line 803 "parser.cog"
          AppExpBase exp, 

#line 804 "parser.cog"
         ConstPtr<

#line 804 "parser.cog"
                  Token>  op, 

#line 805 "parser.cog"
              Exp argExp0, 

#line 806 "parser.cog"
              Exp argExp1)
{


#line 809 "parser.cog"
        DEREF(

#line 809 "parser.cog"
     exp).loc = 

#line 809 "parser.cog"
                        

#line 809 "parser.cog"
                 DEREF(

#line 809 "parser.cog"
               op).getLoc();


#line 810 "parser.cog"
        DEREF(

#line 810 "parser.cog"
     exp).base = 

#line 810 "parser.cog"
                             

#line 810 "parser.cog"
                createNameExp(

#line 810 "parser.cog"
                              parser, 

#line 810 "parser.cog"
                                      op);


#line 812 "parser.cog"
     

#line 812 "parser.cog"
     

#line 812 "parser.cog"
               SyntaxListBuilder<

#line 812 "parser.cog"
                                 Arg>  args;


#line 813 "parser.cog"
             

#line 813 "parser.cog"
             

#line 813 "parser.cog"
         DEREF(

#line 813 "parser.cog"
     args).add(

#line 813 "parser.cog"
                                 

#line 813 "parser.cog"
              createPositionalArg(

#line 813 "parser.cog"
                                  parser, 

#line 813 "parser.cog"
                                          argExp0));


#line 814 "parser.cog"
             

#line 814 "parser.cog"
             

#line 814 "parser.cog"
         DEREF(

#line 814 "parser.cog"
     args).add(

#line 814 "parser.cog"
                                 

#line 814 "parser.cog"
              createPositionalArg(

#line 814 "parser.cog"
                                  parser, 

#line 814 "parser.cog"
                                          argExp1));


#line 815 "parser.cog"
        DEREF(

#line 815 "parser.cog"
     exp).args = 

#line 815 "parser.cog"
                args;


#line 816 "parser.cog"
     return 

#line 816 "parser.cog"
            exp;
}


#line 819 "parser.cog"
 

#line 821 "parser.cog"
        Bool isInGenericClause(

#line 820 "parser.cog"
                   

#line 820 "parser.cog"
             Parser

#line 820 "parser.cog"
                   * parser)
{


#line 823 "parser.cog"
     return 

#line 823 "parser.cog"
                                                             

#line 823 "parser.cog"
            (

#line 823 "parser.cog"
                          

#line 823 "parser.cog"
                   DEREF(

#line 823 "parser.cog"
             parser).flags 

#line 823 "parser.cog"
                          & 

#line 823 "parser.cog"
                            kParserFlag_InsideGenericClause) 

#line 823 "parser.cog"
                                                             != 

#line 823 "parser.cog"
                                                                0;
}


#line 826 "parser.cog"
 

#line 828 "parser.cog"
        Exp parsePostfixExp(

#line 827 "parser.cog"
                   

#line 827 "parser.cog"
             Parser

#line 827 "parser.cog"
                   * parser)
{


#line 830 "parser.cog"
     

#line 830 "parser.cog"
     auto exp = 

#line 830 "parser.cog"
                             

#line 830 "parser.cog"
               parseAtomicExp(

#line 830 "parser.cog"
                              parser);


#line 831 "parser.cog"
     {
for(;;)
{
{


#line 833 "parser.cog"
         switch(

#line 833 "parser.cog"
                             

#line 833 "parser.cog"
                peekTokenCode(

#line 833 "parser.cog"
                              parser))
{
case 

#line 835 "parser.cog"
              kTokenCode_PostfixOperator:
{
{


#line 838 "parser.cog"
                 if(

#line 838 "parser.cog"
                                              

#line 838 "parser.cog"
                                     

#line 838 "parser.cog"
                    isInGenericClause(

#line 838 "parser.cog"
                                      parser) 

#line 838 "parser.cog"
                                              && 

#line 838 "parser.cog"
                                                                 

#line 838 "parser.cog"
                                                 peekGenericClose(

#line 838 "parser.cog"
                                                                  parser))
{


#line 839 "parser.cog"
                     return 

#line 839 "parser.cog"
                            exp;
}


#line 841 "parser.cog"
                 

#line 841 "parser.cog"
                 auto op = 

#line 841 "parser.cog"
                                      

#line 841 "parser.cog"
                          advanceToken(

#line 841 "parser.cog"
                                       parser);


#line 842 "parser.cog"
                 exp = 

#line 842 "parser.cog"
                                

#line 842 "parser.cog"
                       createApp(

#line 842 "parser.cog"
                                 parser, 

#line 842 "parser.cog"
                                                                 

#line 842 "parser.cog"
                                         createObject<

#line 842 "parser.cog"
                                                      PostfixExp> (), 

#line 842 "parser.cog"
                                                                     op, 

#line 842 "parser.cog"
                                                                         exp);
}
}
{


#line 844 "parser.cog"
             break;
}
case 

#line 846 "parser.cog"
              kTokenCode_LParen:
{
{


#line 848 "parser.cog"
                 

#line 848 "parser.cog"
                 auto lParen = 

#line 848 "parser.cog"
                                          

#line 848 "parser.cog"
                              advanceToken(

#line 848 "parser.cog"
                                           parser);


#line 849 "parser.cog"
                 

#line 849 "parser.cog"
                 auto args = 

#line 849 "parser.cog"
                                     

#line 849 "parser.cog"
                            parseArgs(

#line 849 "parser.cog"
                                      parser);


#line 850 "parser.cog"
                       

#line 850 "parser.cog"
                       

#line 850 "parser.cog"
                 expect(

#line 850 "parser.cog"
                        parser, 

#line 850 "parser.cog"
                                kTokenCode_RParen);


#line 852 "parser.cog"
                 

#line 852 "parser.cog"
                 auto app = 

#line 852 "parser.cog"
                                               

#line 852 "parser.cog"
                           createObject<

#line 852 "parser.cog"
                                        AppExp> ();


#line 853 "parser.cog"
                    DEREF(

#line 853 "parser.cog"
                 app).loc = 

#line 853 "parser.cog"
                                        

#line 853 "parser.cog"
                                 DEREF(

#line 853 "parser.cog"
                           lParen).getLoc();


#line 854 "parser.cog"
                    DEREF(

#line 854 "parser.cog"
                 app).base = 

#line 854 "parser.cog"
                            exp;


#line 855 "parser.cog"
                    DEREF(

#line 855 "parser.cog"
                 app).args = 

#line 855 "parser.cog"
                            args;


#line 856 "parser.cog"
                 exp = 

#line 856 "parser.cog"
                       app;
}
}
{


#line 858 "parser.cog"
             break;
}
case 

#line 860 "parser.cog"
              kTokenCode_LSquare:
{
{


#line 862 "parser.cog"
                 

#line 862 "parser.cog"
                 auto lParen = 

#line 862 "parser.cog"
                                          

#line 862 "parser.cog"
                              advanceToken(

#line 862 "parser.cog"
                                           parser);


#line 863 "parser.cog"
                 

#line 863 "parser.cog"
                 auto args = 

#line 863 "parser.cog"
                                     

#line 863 "parser.cog"
                            parseArgs(

#line 863 "parser.cog"
                                      parser);


#line 864 "parser.cog"
                       

#line 864 "parser.cog"
                       

#line 864 "parser.cog"
                 expect(

#line 864 "parser.cog"
                        parser, 

#line 864 "parser.cog"
                                kTokenCode_RSquare);


#line 866 "parser.cog"
                 

#line 866 "parser.cog"
                 auto app = 

#line 866 "parser.cog"
                                                 

#line 866 "parser.cog"
                           createObject<

#line 866 "parser.cog"
                                        IndexExp> ();


#line 867 "parser.cog"
                    DEREF(

#line 867 "parser.cog"
                 app).loc = 

#line 867 "parser.cog"
                                        

#line 867 "parser.cog"
                                 DEREF(

#line 867 "parser.cog"
                           lParen).getLoc();


#line 868 "parser.cog"
                    DEREF(

#line 868 "parser.cog"
                 app).base = 

#line 868 "parser.cog"
                            exp;


#line 869 "parser.cog"
                    DEREF(

#line 869 "parser.cog"
                 app).args = 

#line 869 "parser.cog"
                            args;


#line 870 "parser.cog"
                 exp = 

#line 870 "parser.cog"
                       app;
}
}
{


#line 872 "parser.cog"
             break;
}
case 

#line 874 "parser.cog"
              kTokenCode_Arrow:
{


#line 875 "parser.cog"
                     

#line 875 "parser.cog"
                     

#line 875 "parser.cog"
             diagnose(

#line 875 "parser.cog"
                             

#line 875 "parser.cog"
                      getSink(

#line 875 "parser.cog"
                              parser), 

#line 875 "parser.cog"
                                              

#line 875 "parser.cog"
                                       peekLoc(

#line 875 "parser.cog"
                                               parser), 

#line 875 "parser.cog"
                                                        kDiagnostic_youMeanDot);
}
case 

#line 876 "parser.cog"
              kTokenCode_Dot:
{
{


#line 878 "parser.cog"
                 

#line 878 "parser.cog"
                 auto dot = 

#line 878 "parser.cog"
                                       

#line 878 "parser.cog"
                           advanceToken(

#line 878 "parser.cog"
                                        parser);


#line 879 "parser.cog"
                 

#line 879 "parser.cog"
                 auto memberName = 

#line 879 "parser.cog"
                                                  

#line 879 "parser.cog"
                                  expectIdentifier(

#line 879 "parser.cog"
                                                   parser);


#line 881 "parser.cog"
                 

#line 881 "parser.cog"
                 auto memberExp = 

#line 881 "parser.cog"
                                                        

#line 881 "parser.cog"
                                 createObject<

#line 881 "parser.cog"
                                              MemberExp> ();


#line 882 "parser.cog"
                          DEREF(

#line 882 "parser.cog"
                 memberExp).loc = 

#line 882 "parser.cog"
                                           

#line 882 "parser.cog"
                                    DEREF(

#line 882 "parser.cog"
                                 dot).getLoc();


#line 883 "parser.cog"
                          DEREF(

#line 883 "parser.cog"
                 memberExp).base = 

#line 883 "parser.cog"
                                  exp;


#line 884 "parser.cog"
                          DEREF(

#line 884 "parser.cog"
                 memberExp).memberName = 

#line 884 "parser.cog"
                                        memberName;


#line 886 "parser.cog"
                 exp = 

#line 886 "parser.cog"
                                           

#line 886 "parser.cog"
                       maybeParseGenericApp(

#line 886 "parser.cog"
                                            parser, 

#line 886 "parser.cog"
                                                    memberExp);
}
}
{


#line 888 "parser.cog"
             break;
}
default:
{


#line 891 "parser.cog"
             return 

#line 891 "parser.cog"
                    exp;
}
}
}
}}
}


#line 896 "parser.cog"
 

#line 898 "parser.cog"
        Exp parsePrefixExp(

#line 897 "parser.cog"
                   

#line 897 "parser.cog"
             Parser

#line 897 "parser.cog"
                   * parser)
{


#line 900 "parser.cog"
     if(

#line 900 "parser.cog"
                              

#line 900 "parser.cog"
                     

#line 900 "parser.cog"
        peekTokenCode(

#line 900 "parser.cog"
                      parser) 

#line 900 "parser.cog"
                              == 

#line 900 "parser.cog"
                                 kTokenCode_PrefixOperator)
{


#line 902 "parser.cog"
         

#line 902 "parser.cog"
         auto op = 

#line 902 "parser.cog"
                              

#line 902 "parser.cog"
                  advanceToken(

#line 902 "parser.cog"
                               parser);


#line 903 "parser.cog"
         

#line 903 "parser.cog"
         auto arg = 

#line 903 "parser.cog"
                                 

#line 903 "parser.cog"
                   parsePrefixExp(

#line 903 "parser.cog"
                                  parser);


#line 905 "parser.cog"
         return 

#line 905 "parser.cog"
                         

#line 905 "parser.cog"
                createApp(

#line 905 "parser.cog"
                          parser, 

#line 905 "parser.cog"
                                                         

#line 905 "parser.cog"
                                  createObject<

#line 905 "parser.cog"
                                               PrefixExp> (), 

#line 905 "parser.cog"
                                                             op, 

#line 905 "parser.cog"
                                                                 arg);
}
else
{


#line 909 "parser.cog"
         return 

#line 909 "parser.cog"
                               

#line 909 "parser.cog"
                parsePostfixExp(

#line 909 "parser.cog"
                                parser);
}
}


#line 913 "parser.cog"
 

#line 915 "parser.cog"
        Exp parseInfixExp(

#line 914 "parser.cog"
                   

#line 914 "parser.cog"
             Parser

#line 914 "parser.cog"
                   * parser)
{


#line 917 "parser.cog"
     

#line 917 "parser.cog"
     auto left = 

#line 917 "parser.cog"
                              

#line 917 "parser.cog"
                parsePrefixExp(

#line 917 "parser.cog"
                               parser);


#line 918 "parser.cog"
     {
for(;;)
{
{


#line 920 "parser.cog"
         switch(

#line 920 "parser.cog"
                             

#line 920 "parser.cog"
                peekTokenCode(

#line 920 "parser.cog"
                              parser))
{
case 

#line 922 "parser.cog"
              kTokenCode_InfixOperator:
{
{


#line 925 "parser.cog"
                 if(

#line 925 "parser.cog"
                                              

#line 925 "parser.cog"
                                     

#line 925 "parser.cog"
                    isInGenericClause(

#line 925 "parser.cog"
                                      parser) 

#line 925 "parser.cog"
                                              && 

#line 925 "parser.cog"
                                                                 

#line 925 "parser.cog"
                                                 peekGenericClose(

#line 925 "parser.cog"
                                                                  parser))
{


#line 926 "parser.cog"
                     return 

#line 926 "parser.cog"
                            left;
}


#line 928 "parser.cog"
                 

#line 928 "parser.cog"
                 auto op = 

#line 928 "parser.cog"
                                      

#line 928 "parser.cog"
                          advanceToken(

#line 928 "parser.cog"
                                       parser);


#line 929 "parser.cog"
                 

#line 929 "parser.cog"
                 auto right = 

#line 929 "parser.cog"
                                          

#line 929 "parser.cog"
                             parseInfixExp(

#line 929 "parser.cog"
                                           parser);


#line 931 "parser.cog"
                 left = 

#line 931 "parser.cog"
                                 

#line 931 "parser.cog"
                        createApp(

#line 931 "parser.cog"
                                  parser, 

#line 931 "parser.cog"
                                                                

#line 931 "parser.cog"
                                          createObject<

#line 931 "parser.cog"
                                                       InfixExp> (), 

#line 931 "parser.cog"
                                                                    op, 

#line 931 "parser.cog"
                                                                        left, 

#line 931 "parser.cog"
                                                                              right);
}
}
{


#line 933 "parser.cog"
             break;
}
case 

#line 935 "parser.cog"
              kTokenCode_Assign:
{
{


#line 939 "parser.cog"
                 

#line 939 "parser.cog"
                 auto op = 

#line 939 "parser.cog"
                                      

#line 939 "parser.cog"
                          advanceToken(

#line 939 "parser.cog"
                                       parser);


#line 941 "parser.cog"
                 

#line 941 "parser.cog"
                 auto assign = 

#line 941 "parser.cog"
                                                     

#line 941 "parser.cog"
                              createObject<

#line 941 "parser.cog"
                                           AssignExp> ();


#line 942 "parser.cog"
                       DEREF(

#line 942 "parser.cog"
                 assign).left = 

#line 942 "parser.cog"
                               left;


#line 943 "parser.cog"
                       DEREF(

#line 943 "parser.cog"
                 assign).right = 

#line 943 "parser.cog"
                                             

#line 943 "parser.cog"
                                parseInfixExp(

#line 943 "parser.cog"
                                              parser);


#line 945 "parser.cog"
                 left = 

#line 945 "parser.cog"
                        assign;
}
}
{


#line 947 "parser.cog"
             break;
}
default:
{


#line 950 "parser.cog"
             return 

#line 950 "parser.cog"
                    left;
}
}
}
}}


#line 953 "parser.cog"
     return 

#line 953 "parser.cog"
            left;
}


#line 956 "parser.cog"
 

#line 958 "parser.cog"
        Exp parseExp(

#line 957 "parser.cog"
                   

#line 957 "parser.cog"
             Parser

#line 957 "parser.cog"
                   * parser)
{


#line 960 "parser.cog"
     return 

#line 960 "parser.cog"
                         

#line 960 "parser.cog"
            parseInfixExp(

#line 960 "parser.cog"
                          parser);
}


#line 963 "parser.cog"
 

#line 965 "parser.cog"
        TypeExp parseType(

#line 964 "parser.cog"
                   

#line 964 "parser.cog"
             Parser

#line 964 "parser.cog"
                   * parser)
{


#line 967 "parser.cog"
     

#line 967 "parser.cog"
     auto exp = 

#line 967 "parser.cog"
                              

#line 967 "parser.cog"
               parsePostfixExp(

#line 967 "parser.cog"
                               parser);


#line 969 "parser.cog"
     

#line 969 "parser.cog"
     

#line 969 "parser.cog"
                   TypeExp typeExp;


#line 970 "parser.cog"
            DEREF(

#line 970 "parser.cog"
     typeExp).exp = 

#line 970 "parser.cog"
                   exp;


#line 971 "parser.cog"
     return 

#line 971 "parser.cog"
            typeExp;
}


#line 974 "parser.cog"
 

#line 976 "parser.cog"
        Decl parseDecl(

#line 975 "parser.cog"
                   

#line 975 "parser.cog"
             Parser

#line 975 "parser.cog"
                   * parser)
{


#line 978 "parser.cog"
     

#line 978 "parser.cog"
     

#line 978 "parser.cog"
                SyntaxListBuilder<

#line 978 "parser.cog"
                                  Attr>  attrs;


#line 980 "parser.cog"
     {
for(;;)
{
{


#line 982 "parser.cog"
         switch(

#line 982 "parser.cog"
                             

#line 982 "parser.cog"
                peekTokenCode(

#line 982 "parser.cog"
                              parser))
{
case 

#line 984 "parser.cog"
              kTokenCode_Identifier:
{
{


#line 986 "parser.cog"
             

#line 986 "parser.cog"
             auto loc = 

#line 986 "parser.cog"
                              

#line 986 "parser.cog"
                       peekLoc(

#line 986 "parser.cog"
                               parser);


#line 989 "parser.cog"
             

#line 989 "parser.cog"
             auto name = 

#line 989 "parser.cog"
                                        

#line 989 "parser.cog"
                        expectIdentifier(

#line 989 "parser.cog"
                                         parser);


#line 990 "parser.cog"
             

#line 990 "parser.cog"
             auto result = 

#line 990 "parser.cog"
                                

#line 990 "parser.cog"
                          lookup(

#line 990 "parser.cog"
                                 parser, 

#line 990 "parser.cog"
                                         name);


#line 992 "parser.cog"
             if(auto syntax = 

#line 992 "parser.cog"
                                          

#line 992 "parser.cog"
                             getSyntaxDecl(

#line 992 "parser.cog"
                                           result))
{


#line 995 "parser.cog"
                 

#line 995 "parser.cog"
                 auto syntaxClass = 

#line 995 "parser.cog"
                                         DEREF(

#line 995 "parser.cog"
                                   syntax).syntaxClass;


#line 996 "parser.cog"
                 if(

#line 996 "parser.cog"
                              

#line 996 "parser.cog"
                    isSubClass(

#line 996 "parser.cog"
                               syntaxClass, 

#line 996 "parser.cog"
                                                          

#line 996 "parser.cog"
                                            getClass<

#line 996 "parser.cog"
                                                     Decl> ()))
{


#line 999 "parser.cog"
                     

#line 999 "parser.cog"
                     auto result = 

#line 999 "parser.cog"
                                                 

#line 999 "parser.cog"
                                        DEREF(

#line 999 "parser.cog"
                                  syntax).callback(

#line 999 "parser.cog"
                                                  parser);


#line 1000 "parser.cog"
                     

#line 1000 "parser.cog"
                     auto resultDecl = 

#line 1000 "parser.cog"
                                              

#line 1000 "parser.cog"
                                      as<

#line 1000 "parser.cog"
                                         Decl> (

#line 1000 "parser.cog"
                                               result);


#line 1003 "parser.cog"
                     if(auto genericDecl = 

#line 1003 "parser.cog"
                                                         

#line 1003 "parser.cog"
                                          as<

#line 1003 "parser.cog"
                                             GenericDecl> (

#line 1003 "parser.cog"
                                                          resultDecl))
{


#line 1006 "parser.cog"
                                          DEREF(

#line 1006 "parser.cog"
                                    DEREF(

#line 1006 "parser.cog"
                         genericDecl).inner).attrs = 

#line 1006 "parser.cog"
                                                   attrs;
}
else
{


#line 1010 "parser.cog"
                                   DEREF(

#line 1010 "parser.cog"
                         resultDecl).attrs = 

#line 1010 "parser.cog"
                                            attrs;
}


#line 1013 "parser.cog"
                               DEREF(

#line 1013 "parser.cog"
                     resultDecl).loc = 

#line 1013 "parser.cog"
                                      loc;


#line 1014 "parser.cog"
                     return 

#line 1014 "parser.cog"
                            resultDecl;
}
else
{


#line 1016 "parser.cog"
                      if(

#line 1016 "parser.cog"
                                   

#line 1016 "parser.cog"
                         isSubClass(

#line 1016 "parser.cog"
                                    syntaxClass, 

#line 1016 "parser.cog"
                                                               

#line 1016 "parser.cog"
                                                 getClass<

#line 1016 "parser.cog"
                                                          Attr> ()))
{


#line 1018 "parser.cog"
                     

#line 1018 "parser.cog"
                     auto result = 

#line 1018 "parser.cog"
                                                 

#line 1018 "parser.cog"
                                        DEREF(

#line 1018 "parser.cog"
                                  syntax).callback(

#line 1018 "parser.cog"
                                                  parser);


#line 1019 "parser.cog"
                     

#line 1019 "parser.cog"
                     auto resultAttr = 

#line 1019 "parser.cog"
                                              

#line 1019 "parser.cog"
                                      as<

#line 1019 "parser.cog"
                                         Attr> (

#line 1019 "parser.cog"
                                               result);


#line 1020 "parser.cog"
                              

#line 1020 "parser.cog"
                              

#line 1020 "parser.cog"
                          DEREF(

#line 1020 "parser.cog"
                     attrs).add(

#line 1020 "parser.cog"
                               resultAttr);


#line 1023 "parser.cog"
                     continue;
}
}
}
else
{


#line 1033 "parser.cog"
                         

#line 1033 "parser.cog"
                         

#line 1033 "parser.cog"
                 diagnose(

#line 1033 "parser.cog"
                                 

#line 1033 "parser.cog"
                          getSink(

#line 1033 "parser.cog"
                                  parser), 

#line 1033 "parser.cog"
                                                  

#line 1033 "parser.cog"
                                           peekLoc(

#line 1033 "parser.cog"
                                                   parser), 

#line 1033 "parser.cog"
                                                            kDiagnostic_unexpectedDeclName, 

#line 1033 "parser.cog"
                                                                                            name);


#line 1035 "parser.cog"
                          

#line 1035 "parser.cog"
                          

#line 1035 "parser.cog"
                 cogAssert(

#line 1035 "parser.cog"
                           false);


#line 1036 "parser.cog"
                 return 

#line 1036 "parser.cog"
                        0;
}
}
}
{


#line 1039 "parser.cog"
         break;
}
default:
{


#line 1043 "parser.cog"
                       

#line 1043 "parser.cog"
                       

#line 1043 "parser.cog"
             unexpected(

#line 1043 "parser.cog"
                        parser);
}
{


#line 1044 "parser.cog"
             return 

#line 1044 "parser.cog"
                    0;
}
}
}
}}
}


#line 1049 "parser.cog"
 

#line 1053 "parser.cog"
        ModuleDecl findOrImportModule(

#line 1050 "parser.cog"
              Session session, 

#line 1051 "parser.cog"
          SourceLoc loc, 

#line 1052 "parser.cog"
               

#line 1052 "parser.cog"
           Name

#line 1052 "parser.cog"
               * name)
{


#line 1057 "parser.cog"
     {


#line 1057 "parser.cog"
         

#line 1057 "parser.cog"
         auto mm = 

#line 1057 "parser.cog"
                         DEREF(

#line 1057 "parser.cog"
                  session).loadedModules;
for(;

#line 1057 "parser.cog"
                                         mm;

#line 1057 "parser.cog"
                                             mm = 

#line 1057 "parser.cog"
                                                  cast<

#line 1057 "parser.cog"
                                                       ModuleDecl>(

#line 1057 "parser.cog"
                                                                     DEREF(

#line 1057 "parser.cog"
                                                                   mm).next))
{
{


#line 1059 "parser.cog"
         if(

#line 1059 "parser.cog"
                    

#line 1059 "parser.cog"
              DEREF(

#line 1059 "parser.cog"
            mm).name 

#line 1059 "parser.cog"
                    == 

#line 1059 "parser.cog"
                       name)
{


#line 1061 "parser.cog"
             return 

#line 1061 "parser.cog"
                    mm;
}
}
}}


#line 1067 "parser.cog"
     

#line 1067 "parser.cog"
     auto nameText = 

#line 1067 "parser.cog"
                           

#line 1067 "parser.cog"
                    getText(

#line 1067 "parser.cog"
                            name);


#line 1069 "parser.cog"
     

#line 1069 "parser.cog"
     

#line 1069 "parser.cog"
                FixedSizeArray<

#line 1069 "parser.cog"
                               1024, 

#line 1069 "parser.cog"
                                     Char>  path;


#line 1070 "parser.cog"
            

#line 1070 "parser.cog"
            

#line 1070 "parser.cog"
     sprintf(

#line 1070 "parser.cog"
             path, 

#line 1070 "parser.cog"
                   "../../source/%.*s/%.*s.cog", 

#line 1071 "parser.cog"
              

#line 1071 "parser.cog"
         (

#line 1071 "parser.cog"
          int)(

#line 1071 "parser.cog"
                            

#line 1071 "parser.cog"
                       DEREF(

#line 1071 "parser.cog"
               nameText).end 

#line 1071 "parser.cog"
                            - 

#line 1071 "parser.cog"
                                      DEREF(

#line 1071 "parser.cog"
                              nameText).begin), 

#line 1072 "parser.cog"
                 DEREF(

#line 1072 "parser.cog"
         nameText).begin, 

#line 1073 "parser.cog"
              

#line 1073 "parser.cog"
         (

#line 1073 "parser.cog"
          int)(

#line 1073 "parser.cog"
                            

#line 1073 "parser.cog"
                       DEREF(

#line 1073 "parser.cog"
               nameText).end 

#line 1073 "parser.cog"
                            - 

#line 1073 "parser.cog"
                                      DEREF(

#line 1073 "parser.cog"
                              nameText).begin), 

#line 1074 "parser.cog"
                 DEREF(

#line 1074 "parser.cog"
         nameText).begin);


#line 1076 "parser.cog"
     

#line 1076 "parser.cog"
     

#line 1076 "parser.cog"
                         

#line 1076 "parser.cog"
               SourceFile

#line 1076 "parser.cog"
                         * file = 

#line 1076 "parser.cog"
                                          

#line 1076 "parser.cog"
                             getSourceFile(

#line 1076 "parser.cog"
                                           session, 

#line 1076 "parser.cog"
                                                                        

#line 1076 "parser.cog"
                                                    TerminatedStringSpan(

#line 1076 "parser.cog"
                                                                         path));


#line 1077 "parser.cog"
     if(

#line 1077 "parser.cog"
        

#line 1077 "parser.cog"
        !

#line 1077 "parser.cog"
         file)
{


#line 1079 "parser.cog"
                

#line 1079 "parser.cog"
                

#line 1079 "parser.cog"
         sprintf(

#line 1079 "parser.cog"
                 path, 

#line 1079 "parser.cog"
                       "source/%.*s/%.*s.cog", 

#line 1080 "parser.cog"
         

#line 1080 "parser.cog"
    (

#line 1080 "parser.cog"
     int)(

#line 1080 "parser.cog"
                       

#line 1080 "parser.cog"
                  DEREF(

#line 1080 "parser.cog"
          nameText).end 

#line 1080 "parser.cog"
                       - 

#line 1080 "parser.cog"
                                 DEREF(

#line 1080 "parser.cog"
                         nameText).begin), 

#line 1081 "parser.cog"
            DEREF(

#line 1081 "parser.cog"
    nameText).begin, 

#line 1082 "parser.cog"
         

#line 1082 "parser.cog"
    (

#line 1082 "parser.cog"
     int)(

#line 1082 "parser.cog"
                       

#line 1082 "parser.cog"
                  DEREF(

#line 1082 "parser.cog"
          nameText).end 

#line 1082 "parser.cog"
                       - 

#line 1082 "parser.cog"
                                 DEREF(

#line 1082 "parser.cog"
                         nameText).begin), 

#line 1083 "parser.cog"
            DEREF(

#line 1083 "parser.cog"
    nameText).begin);


#line 1084 "parser.cog"
         file = 

#line 1084 "parser.cog"
                             

#line 1084 "parser.cog"
                getSourceFile(

#line 1084 "parser.cog"
                              session, 

#line 1084 "parser.cog"
                                                           

#line 1084 "parser.cog"
                                       TerminatedStringSpan(

#line 1084 "parser.cog"
                                                            path));
}


#line 1086 "parser.cog"
     if(

#line 1086 "parser.cog"
        

#line 1086 "parser.cog"
        !

#line 1086 "parser.cog"
         file)
{


#line 1088 "parser.cog"
                

#line 1088 "parser.cog"
                

#line 1088 "parser.cog"
         sprintf(

#line 1088 "parser.cog"
                 path, 

#line 1088 "parser.cog"
                       "../../source/thetalib/%.*s.cog", 

#line 1088 "parser.cog"
                                                              

#line 1088 "parser.cog"
                                                         (

#line 1088 "parser.cog"
                                                          int)(

#line 1088 "parser.cog"
                                                                            

#line 1088 "parser.cog"
                                                                       DEREF(

#line 1088 "parser.cog"
                                                               nameText).end 

#line 1088 "parser.cog"
                                                                            - 

#line 1088 "parser.cog"
                                                                                      DEREF(

#line 1088 "parser.cog"
                                                                              nameText).begin), 

#line 1088 "parser.cog"
                                                                                                       DEREF(

#line 1088 "parser.cog"
                                                                                               nameText).begin);


#line 1089 "parser.cog"
         file = 

#line 1089 "parser.cog"
                             

#line 1089 "parser.cog"
                getSourceFile(

#line 1089 "parser.cog"
                              session, 

#line 1089 "parser.cog"
                                                           

#line 1089 "parser.cog"
                                       TerminatedStringSpan(

#line 1089 "parser.cog"
                                                            path));
}


#line 1091 "parser.cog"
     if(

#line 1091 "parser.cog"
        

#line 1091 "parser.cog"
        !

#line 1091 "parser.cog"
         file)
{


#line 1093 "parser.cog"
                

#line 1093 "parser.cog"
                

#line 1093 "parser.cog"
         sprintf(

#line 1093 "parser.cog"
                 path, 

#line 1093 "parser.cog"
                       "source/thetalib/%.*s.cog", 

#line 1093 "parser.cog"
                                                        

#line 1093 "parser.cog"
                                                   (

#line 1093 "parser.cog"
                                                    int)(

#line 1093 "parser.cog"
                                                                      

#line 1093 "parser.cog"
                                                                 DEREF(

#line 1093 "parser.cog"
                                                         nameText).end 

#line 1093 "parser.cog"
                                                                      - 

#line 1093 "parser.cog"
                                                                                DEREF(

#line 1093 "parser.cog"
                                                                        nameText).begin), 

#line 1093 "parser.cog"
                                                                                                 DEREF(

#line 1093 "parser.cog"
                                                                                         nameText).begin);


#line 1094 "parser.cog"
         file = 

#line 1094 "parser.cog"
                             

#line 1094 "parser.cog"
                getSourceFile(

#line 1094 "parser.cog"
                              session, 

#line 1094 "parser.cog"
                                                           

#line 1094 "parser.cog"
                                       TerminatedStringSpan(

#line 1094 "parser.cog"
                                                            path));
}


#line 1096 "parser.cog"
     if(

#line 1096 "parser.cog"
        

#line 1096 "parser.cog"
        !

#line 1096 "parser.cog"
         file)
{


#line 1098 "parser.cog"
              

#line 1098 "parser.cog"
              

#line 1098 "parser.cog"
     cogAssert(

#line 1098 "parser.cog"
               

#line 1098 "parser.cog"
               !

#line 1098 "parser.cog"
                "unimplemented");
}


#line 1102 "parser.cog"
     

#line 1102 "parser.cog"
     auto moduleDecl = 

#line 1102 "parser.cog"
                                              

#line 1102 "parser.cog"
                      createObject<

#line 1102 "parser.cog"
                                   ModuleDecl> ();


#line 1103 "parser.cog"
               DEREF(

#line 1103 "parser.cog"
     moduleDecl).name = 

#line 1103 "parser.cog"
                       name;


#line 1105 "parser.cog"
                        

#line 1105 "parser.cog"
                        

#line 1105 "parser.cog"
     parseFileIntoModule(

#line 1105 "parser.cog"
                         session, 

#line 1105 "parser.cog"
                                  file, 

#line 1105 "parser.cog"
                                        moduleDecl);


#line 1111 "parser.cog"
               DEREF(

#line 1111 "parser.cog"
     moduleDecl).next = 

#line 1111 "parser.cog"
                              DEREF(

#line 1111 "parser.cog"
                       session).loadedModules;


#line 1112 "parser.cog"
            DEREF(

#line 1112 "parser.cog"
     session).loadedModules = 

#line 1112 "parser.cog"
                             moduleDecl;


#line 1115 "parser.cog"
                

#line 1115 "parser.cog"
                

#line 1115 "parser.cog"
     checkModule(

#line 1115 "parser.cog"
                 session, 

#line 1115 "parser.cog"
                          moduleDecl);


#line 1117 "parser.cog"
     return 

#line 1117 "parser.cog"
            moduleDecl;
}


#line 1120 "parser.cog"
 

#line 1122 "parser.cog"
        SyntaxList<

#line 1122 "parser.cog"
                   Decl>  parseDeclsInBody(

#line 1121 "parser.cog"
                   

#line 1121 "parser.cog"
             Parser

#line 1121 "parser.cog"
                   * parser)
{


#line 1124 "parser.cog"
     

#line 1124 "parser.cog"
     auto savedScope = 

#line 1124 "parser.cog"
                            DEREF(

#line 1124 "parser.cog"
                      parser).scope;


#line 1126 "parser.cog"
     

#line 1126 "parser.cog"
     

#line 1126 "parser.cog"
                SyntaxListBuilder<

#line 1126 "parser.cog"
                                  Decl>  decls;


#line 1127 "parser.cog"
     while(

#line 1127 "parser.cog"
           

#line 1127 "parser.cog"
           !

#line 1127 "parser.cog"
                   

#line 1127 "parser.cog"
            isAtEnd(

#line 1127 "parser.cog"
                    parser))
{
{


#line 1129 "parser.cog"
         switch(

#line 1129 "parser.cog"
                             

#line 1129 "parser.cog"
                peekTokenCode(

#line 1129 "parser.cog"
                              parser))
{
case 

#line 1131 "parser.cog"
              kTokenCode_RParen:
case 

#line 1132 "parser.cog"
              kTokenCode_RCurly:
case 

#line 1133 "parser.cog"
              kTokenCode_EndOfFile:
{


#line 1134 "parser.cog"
             return 

#line 1134 "parser.cog"
                    decls;
}
default:
{


#line 1137 "parser.cog"
             break;
}
}


#line 1140 "parser.cog"
         

#line 1140 "parser.cog"
         auto decl = 

#line 1140 "parser.cog"
                             

#line 1140 "parser.cog"
                    parseDecl(

#line 1140 "parser.cog"
                              parser);


#line 1141 "parser.cog"
         if(

#line 1141 "parser.cog"
            decl)
{


#line 1143 "parser.cog"
                 DEREF(

#line 1143 "parser.cog"
             decl).parent = 

#line 1143 "parser.cog"
                                                  DEREF(

#line 1143 "parser.cog"
                                       DEREF(

#line 1143 "parser.cog"
                                 DEREF(

#line 1143 "parser.cog"
                           parser).scope).directLink).container;


#line 1144 "parser.cog"
                      

#line 1144 "parser.cog"
                      

#line 1144 "parser.cog"
                  DEREF(

#line 1144 "parser.cog"
             decls).add(

#line 1144 "parser.cog"
                       decl);
}


#line 1148 "parser.cog"
                     

#line 1148 "parser.cog"
                     

#line 1148 "parser.cog"
         restoreScope(

#line 1148 "parser.cog"
                      parser, 

#line 1148 "parser.cog"
                              savedScope);


#line 1150 "parser.cog"
                   

#line 1150 "parser.cog"
                   

#line 1150 "parser.cog"
         tryRecover(

#line 1150 "parser.cog"
                    parser);
}
}


#line 1152 "parser.cog"
     return 

#line 1152 "parser.cog"
            decls;
}


#line 1155 "parser.cog"
 

#line 1157 "parser.cog"
        SyntaxList<

#line 1157 "parser.cog"
                   Decl>  parseDeclBody(

#line 1156 "parser.cog"
                   

#line 1156 "parser.cog"
             Parser

#line 1156 "parser.cog"
                   * parser)
{


#line 1159 "parser.cog"
           

#line 1159 "parser.cog"
           

#line 1159 "parser.cog"
     expect(

#line 1159 "parser.cog"
            parser, 

#line 1159 "parser.cog"
                    kTokenCode_LCurly);


#line 1160 "parser.cog"
     

#line 1160 "parser.cog"
     auto decls = 

#line 1160 "parser.cog"
                                 

#line 1160 "parser.cog"
                 parseDeclsInBody(

#line 1160 "parser.cog"
                                  parser);


#line 1161 "parser.cog"
           

#line 1161 "parser.cog"
           

#line 1161 "parser.cog"
     expect(

#line 1161 "parser.cog"
            parser, 

#line 1161 "parser.cog"
                    kTokenCode_RCurly);


#line 1162 "parser.cog"
     return 

#line 1162 "parser.cog"
            decls;
}


#line 1165 "parser.cog"
 void parseDeclBody(

#line 1166 "parser.cog"
                   

#line 1166 "parser.cog"
             Parser

#line 1166 "parser.cog"
                   * parser, 

#line 1167 "parser.cog"
           ContainerDecl decl)
{


#line 1169 "parser.cog"
              

#line 1169 "parser.cog"
              

#line 1169 "parser.cog"
     pushScope(

#line 1169 "parser.cog"
               parser, 

#line 1169 "parser.cog"
                       decl);


#line 1170 "parser.cog"
                  

#line 1170 "parser.cog"
         DEREF(

#line 1170 "parser.cog"
     decl).getDecls() = 

#line 1170 "parser.cog"
                                    

#line 1170 "parser.cog"
                       parseDeclBody(

#line 1170 "parser.cog"
                                     parser);


#line 1172 "parser.cog"
     for(auto dd : 

#line 1172 "parser.cog"
                                

#line 1172 "parser.cog"
                       DEREF(

#line 1172 "parser.cog"
                   decl).getDecls())
{
{


#line 1174 "parser.cog"
           DEREF(

#line 1174 "parser.cog"
         dd).parent = 

#line 1174 "parser.cog"
                     decl;
}
}


#line 1177 "parser.cog"
             

#line 1177 "parser.cog"
             

#line 1177 "parser.cog"
     popScope(

#line 1177 "parser.cog"
              parser);
}


#line 1180 "parser.cog"
 

#line 1182 "parser.cog"
        Stmt parseExpStmt(

#line 1181 "parser.cog"
                   

#line 1181 "parser.cog"
             Parser

#line 1181 "parser.cog"
                   * parser)
{


#line 1184 "parser.cog"
     

#line 1184 "parser.cog"
     auto exp = 

#line 1184 "parser.cog"
                       

#line 1184 "parser.cog"
               parseExp(

#line 1184 "parser.cog"
                        parser);


#line 1185 "parser.cog"
           

#line 1185 "parser.cog"
           

#line 1185 "parser.cog"
     expect(

#line 1185 "parser.cog"
            parser, 

#line 1185 "parser.cog"
                    kTokenCode_Semi);


#line 1186 "parser.cog"
     return 

#line 1186 "parser.cog"
            exp;
}


#line 1189 "parser.cog"
 

#line 1191 "parser.cog"
        Stmt parseStmt(

#line 1190 "parser.cog"
                   

#line 1190 "parser.cog"
             Parser

#line 1190 "parser.cog"
                   * parser)
{


#line 1193 "parser.cog"
     switch(

#line 1193 "parser.cog"
                         

#line 1193 "parser.cog"
            peekTokenCode(

#line 1193 "parser.cog"
                          parser))
{
case 

#line 1195 "parser.cog"
          kTokenCode_Identifier:
{
{


#line 1198 "parser.cog"
             

#line 1198 "parser.cog"
             auto loc = 

#line 1198 "parser.cog"
                              

#line 1198 "parser.cog"
                       peekLoc(

#line 1198 "parser.cog"
                               parser);


#line 1199 "parser.cog"
             

#line 1199 "parser.cog"
             auto name = 

#line 1199 "parser.cog"
                        cast<

#line 1199 "parser.cog"
                             Ptr<

#line 1199 "parser.cog"
                                 Name> >(

#line 1199 "parser.cog"
                                                     DEREF(

#line 1199 "parser.cog"
                                               DEREF(

#line 1199 "parser.cog"
                                         parser).token).rawData);


#line 1200 "parser.cog"
             

#line 1200 "parser.cog"
             auto result = 

#line 1200 "parser.cog"
                                

#line 1200 "parser.cog"
                          lookup(

#line 1200 "parser.cog"
                                 parser, 

#line 1200 "parser.cog"
                                         name);


#line 1202 "parser.cog"
             if(auto syntax = 

#line 1202 "parser.cog"
                                          

#line 1202 "parser.cog"
                             getSyntaxDecl(

#line 1202 "parser.cog"
                                           result))
{


#line 1204 "parser.cog"
                 if(

#line 1204 "parser.cog"
                              

#line 1204 "parser.cog"
                    isSubClass(

#line 1204 "parser.cog"
                                     DEREF(

#line 1204 "parser.cog"
                               syntax).syntaxClass, 

#line 1204 "parser.cog"
                                                                

#line 1204 "parser.cog"
                                                   getClass<

#line 1204 "parser.cog"
                                                            Exp> ()))
{
}
else
{


#line 1208 "parser.cog"
                      if(

#line 1208 "parser.cog"
                                   

#line 1208 "parser.cog"
                         isSubClass(

#line 1208 "parser.cog"
                                          DEREF(

#line 1208 "parser.cog"
                                    syntax).syntaxClass, 

#line 1208 "parser.cog"
                                                                      

#line 1208 "parser.cog"
                                                        getClass<

#line 1208 "parser.cog"
                                                                 Stmt> ()))
{


#line 1210 "parser.cog"
                                 

#line 1210 "parser.cog"
                                 

#line 1210 "parser.cog"
                     advanceToken(

#line 1210 "parser.cog"
                                  parser);


#line 1217 "parser.cog"
                     

#line 1217 "parser.cog"
                     auto result = 

#line 1217 "parser.cog"
                                                 

#line 1217 "parser.cog"
                                        DEREF(

#line 1217 "parser.cog"
                                  syntax).callback(

#line 1217 "parser.cog"
                                                  parser);


#line 1218 "parser.cog"
                     

#line 1218 "parser.cog"
                     auto resultStmt = 

#line 1218 "parser.cog"
                                              

#line 1218 "parser.cog"
                                      as<

#line 1218 "parser.cog"
                                         Stmt> (

#line 1218 "parser.cog"
                                               result);


#line 1222 "parser.cog"
                               DEREF(

#line 1222 "parser.cog"
                     resultStmt).loc = 

#line 1222 "parser.cog"
                                      loc;


#line 1224 "parser.cog"
                     return 

#line 1224 "parser.cog"
                            resultStmt;
}
}
}


#line 1229 "parser.cog"
             return 

#line 1229 "parser.cog"
                                

#line 1229 "parser.cog"
                    parseExpStmt(

#line 1229 "parser.cog"
                                 parser);
}
}
{


#line 1231 "parser.cog"
         break;
}
case 

#line 1233 "parser.cog"
          kTokenCode_LCurly:
{


#line 1234 "parser.cog"
         return 

#line 1234 "parser.cog"
                             

#line 1234 "parser.cog"
                parseStmtBody(

#line 1234 "parser.cog"
                              parser);
}
case 

#line 1236 "parser.cog"
          kTokenCode_PrefixOperator:
{


#line 1237 "parser.cog"
         return 

#line 1237 "parser.cog"
                            

#line 1237 "parser.cog"
                parseExpStmt(

#line 1237 "parser.cog"
                             parser);
}
default:
{


#line 1241 "parser.cog"
                   

#line 1241 "parser.cog"
                   

#line 1241 "parser.cog"
         unexpected(

#line 1241 "parser.cog"
                    parser);
}
{


#line 1242 "parser.cog"
         return 

#line 1242 "parser.cog"
                0;
}
}
}


#line 1246 "parser.cog"
 

#line 1248 "parser.cog"
        SyntaxListBuilder<

#line 1248 "parser.cog"
                          Stmt>  parseStmtsInBody(

#line 1247 "parser.cog"
                   

#line 1247 "parser.cog"
             Parser

#line 1247 "parser.cog"
                   * parser)
{


#line 1250 "parser.cog"
     

#line 1250 "parser.cog"
     

#line 1250 "parser.cog"
                SyntaxListBuilder<

#line 1250 "parser.cog"
                                  Stmt>  stmts;


#line 1251 "parser.cog"
     while(

#line 1251 "parser.cog"
           

#line 1251 "parser.cog"
           !

#line 1251 "parser.cog"
                   

#line 1251 "parser.cog"
            isAtEnd(

#line 1251 "parser.cog"
                    parser))
{
{


#line 1253 "parser.cog"
         switch(

#line 1253 "parser.cog"
                             

#line 1253 "parser.cog"
                peekTokenCode(

#line 1253 "parser.cog"
                              parser))
{
case 

#line 1255 "parser.cog"
              kTokenCode_RParen:
case 

#line 1256 "parser.cog"
              kTokenCode_RCurly:
case 

#line 1257 "parser.cog"
              kTokenCode_EndOfFile:
{


#line 1258 "parser.cog"
             return 

#line 1258 "parser.cog"
                    stmts;
}
default:
{


#line 1261 "parser.cog"
             break;
}
}


#line 1264 "parser.cog"
         

#line 1264 "parser.cog"
         auto stmt = 

#line 1264 "parser.cog"
                             

#line 1264 "parser.cog"
                    parseStmt(

#line 1264 "parser.cog"
                              parser);


#line 1265 "parser.cog"
         if(

#line 1265 "parser.cog"
            stmt)
{


#line 1267 "parser.cog"
                      

#line 1267 "parser.cog"
                      

#line 1267 "parser.cog"
                  DEREF(

#line 1267 "parser.cog"
             stmts).add(

#line 1267 "parser.cog"
                       stmt);
}


#line 1270 "parser.cog"
                   

#line 1270 "parser.cog"
                   

#line 1270 "parser.cog"
         tryRecover(

#line 1270 "parser.cog"
                    parser);
}
}


#line 1272 "parser.cog"
     return 

#line 1272 "parser.cog"
            stmts;
}


#line 1275 "parser.cog"
 

#line 1277 "parser.cog"
        Stmt parseStmtBody(

#line 1276 "parser.cog"
                   

#line 1276 "parser.cog"
             Parser

#line 1276 "parser.cog"
                   * parser)
{


#line 1279 "parser.cog"
     

#line 1279 "parser.cog"
     auto stmt = 

#line 1279 "parser.cog"
                                       

#line 1279 "parser.cog"
                createObject<

#line 1279 "parser.cog"
                             BlockStmt> ();


#line 1281 "parser.cog"
              

#line 1281 "parser.cog"
              

#line 1281 "parser.cog"
     pushScope(

#line 1281 "parser.cog"
               parser, 

#line 1281 "parser.cog"
                       stmt);


#line 1282 "parser.cog"
           

#line 1282 "parser.cog"
           

#line 1282 "parser.cog"
     expect(

#line 1282 "parser.cog"
            parser, 

#line 1282 "parser.cog"
                    kTokenCode_LCurly);


#line 1283 "parser.cog"
     

#line 1283 "parser.cog"
     auto stmts = 

#line 1283 "parser.cog"
                                 

#line 1283 "parser.cog"
                 parseStmtsInBody(

#line 1283 "parser.cog"
                                  parser);


#line 1284 "parser.cog"
           

#line 1284 "parser.cog"
           

#line 1284 "parser.cog"
     expect(

#line 1284 "parser.cog"
            parser, 

#line 1284 "parser.cog"
                    kTokenCode_RCurly);


#line 1285 "parser.cog"
             

#line 1285 "parser.cog"
             

#line 1285 "parser.cog"
     popScope(

#line 1285 "parser.cog"
              parser);


#line 1287 "parser.cog"
         DEREF(

#line 1287 "parser.cog"
     stmt).stmts = 

#line 1287 "parser.cog"
                  stmts;


#line 1289 "parser.cog"
     return 

#line 1289 "parser.cog"
            stmt;
}


#line 1292 "parser.cog"
 

#line 1292 "parser.cog"
                                           Bool peekGenericClose(

#line 1292 "parser.cog"
                                     

#line 1292 "parser.cog"
                               Parser

#line 1292 "parser.cog"
                                     * parser)
{


#line 1294 "parser.cog"
     switch(

#line 1294 "parser.cog"
                         

#line 1294 "parser.cog"
            peekTokenCode(

#line 1294 "parser.cog"
                          parser))
{
default:
{


#line 1298 "parser.cog"
         return 

#line 1298 "parser.cog"
                false;
}
case 

#line 1300 "parser.cog"
          kTokenCode_InfixOperator:
case 

#line 1301 "parser.cog"
          kTokenCode_PrefixOperator:
case 

#line 1302 "parser.cog"
          kTokenCode_PostfixOperator:
{


#line 1303 "parser.cog"
         break;
}
}


#line 1306 "parser.cog"
     

#line 1306 "parser.cog"
     auto name = 

#line 1306 "parser.cog"
                cast<

#line 1306 "parser.cog"
                     Ptr<

#line 1306 "parser.cog"
                         Name> >(

#line 1306 "parser.cog"
                                              DEREF(

#line 1306 "parser.cog"
                                        DEREF(

#line 1306 "parser.cog"
                                  parser).token).rawData);


#line 1307 "parser.cog"
     

#line 1307 "parser.cog"
     auto nameText = 

#line 1307 "parser.cog"
                           

#line 1307 "parser.cog"
                    getText(

#line 1307 "parser.cog"
                            name);


#line 1310 "parser.cog"
     if(

#line 1310 "parser.cog"
                 

#line 1310 "parser.cog"
        nameText 

#line 1310 "parser.cog"
                 != 

#line 1310 "parser.cog"
                                        

#line 1310 "parser.cog"
                    TerminatedStringSpan(

#line 1310 "parser.cog"
                                         ">"))
{


#line 1311 "parser.cog"
         return 

#line 1311 "parser.cog"
                false;
}


#line 1313 "parser.cog"
     return 

#line 1313 "parser.cog"
            true;
}


#line 1316 "parser.cog"
 

#line 1316 "parser.cog"
                                               Bool tryParseGenericClose(

#line 1316 "parser.cog"
                                         

#line 1316 "parser.cog"
                                   Parser

#line 1316 "parser.cog"
                                         * parser)
{


#line 1318 "parser.cog"
     if(

#line 1318 "parser.cog"
        

#line 1318 "parser.cog"
        !

#line 1318 "parser.cog"
                         

#line 1318 "parser.cog"
         peekGenericClose(

#line 1318 "parser.cog"
                          parser))
{


#line 1319 "parser.cog"
         return 

#line 1319 "parser.cog"
                false;
}


#line 1322 "parser.cog"
                 

#line 1322 "parser.cog"
                 

#line 1322 "parser.cog"
     advanceToken(

#line 1322 "parser.cog"
                  parser);


#line 1323 "parser.cog"
     return 

#line 1323 "parser.cog"
            true;
}


#line 1326 "parser.cog"
 void expectGenericClose(

#line 1326 "parser.cog"
                                       

#line 1326 "parser.cog"
                                 Parser

#line 1326 "parser.cog"
                                       * parser)
{


#line 1328 "parser.cog"
     if(

#line 1328 "parser.cog"
        

#line 1328 "parser.cog"
        !

#line 1328 "parser.cog"
                             

#line 1328 "parser.cog"
         tryParseGenericClose(

#line 1328 "parser.cog"
                              parser))
{


#line 1331 "parser.cog"
                   

#line 1331 "parser.cog"
                   

#line 1331 "parser.cog"
         unexpected(

#line 1331 "parser.cog"
                    parser);
}
}


#line 1335 "parser.cog"
 

#line 1335 "parser.cog"
                                            Decl parseGenericParam(

#line 1335 "parser.cog"
                                      

#line 1335 "parser.cog"
                                Parser

#line 1335 "parser.cog"
                                      * parser)
{


#line 1337 "parser.cog"
     

#line 1337 "parser.cog"
     auto loc = 

#line 1337 "parser.cog"
                      

#line 1337 "parser.cog"
               peekLoc(

#line 1337 "parser.cog"
                       parser);


#line 1338 "parser.cog"
     

#line 1338 "parser.cog"
     auto name = 

#line 1338 "parser.cog"
                                

#line 1338 "parser.cog"
                expectIdentifier(

#line 1338 "parser.cog"
                                 parser);


#line 1342 "parser.cog"
     

#line 1342 "parser.cog"
     auto decl = 

#line 1342 "parser.cog"
                                              

#line 1342 "parser.cog"
                createObject<

#line 1342 "parser.cog"
                             GenericParamDecl> ();


#line 1343 "parser.cog"
         DEREF(

#line 1343 "parser.cog"
     decl).loc = 

#line 1343 "parser.cog"
                loc;


#line 1344 "parser.cog"
         DEREF(

#line 1344 "parser.cog"
     decl).name = 

#line 1344 "parser.cog"
                 name;


#line 1345 "parser.cog"
     return 

#line 1345 "parser.cog"
            decl;
}


#line 1348 "parser.cog"
 void parseGenericParams(

#line 1348 "parser.cog"
                                       

#line 1348 "parser.cog"
                                 Parser

#line 1348 "parser.cog"
                                       * parser, 

#line 1348 "parser.cog"
                                                   Ptr<

#line 1348 "parser.cog"
                                                       SyntaxListBuilder<

#line 1348 "parser.cog"
                                                                         Decl> >  ioDecls)
{


#line 1351 "parser.cog"
     

#line 1351 "parser.cog"
     

#line 1351 "parser.cog"
                 ConstRef<

#line 1351 "parser.cog"
                          SyntaxListBuilder<

#line 1351 "parser.cog"
                                            Decl> >  decls = 

#line 1351 "parser.cog"
                                                      

#line 1351 "parser.cog"
                                                      *

#line 1351 "parser.cog"
                                                       ioDecls;


#line 1353 "parser.cog"
     if(

#line 1353 "parser.cog"
                        

#line 1353 "parser.cog"
        peekGenericClose(

#line 1353 "parser.cog"
                         parser))
{


#line 1354 "parser.cog"
         return;
}


#line 1356 "parser.cog"
     {
for(;;)
{
{


#line 1358 "parser.cog"
         

#line 1358 "parser.cog"
         auto decl = 

#line 1358 "parser.cog"
                                     

#line 1358 "parser.cog"
                    parseGenericParam(

#line 1358 "parser.cog"
                                      parser);


#line 1359 "parser.cog"
         if(

#line 1359 "parser.cog"
            decl)
{


#line 1361 "parser.cog"
                      

#line 1361 "parser.cog"
                      

#line 1361 "parser.cog"
                  DEREF(

#line 1361 "parser.cog"
             decls).add(

#line 1361 "parser.cog"
                       decl);
}


#line 1364 "parser.cog"
         if(

#line 1364 "parser.cog"
                            

#line 1364 "parser.cog"
            peekGenericClose(

#line 1364 "parser.cog"
                             parser))
{


#line 1365 "parser.cog"
             return;
}


#line 1367 "parser.cog"
               

#line 1367 "parser.cog"
               

#line 1367 "parser.cog"
         expect(

#line 1367 "parser.cog"
                parser, 

#line 1367 "parser.cog"
                        kTokenCode_Comma);
}
}}
}


#line 1371 "parser.cog"
 

#line 1371 "parser.cog"
                                              Bool tryParseGenericOpen(

#line 1371 "parser.cog"
                                        

#line 1371 "parser.cog"
                                  Parser

#line 1371 "parser.cog"
                                        * parser)
{


#line 1373 "parser.cog"
     switch(

#line 1373 "parser.cog"
                         

#line 1373 "parser.cog"
            peekTokenCode(

#line 1373 "parser.cog"
                          parser))
{
default:
{


#line 1378 "parser.cog"
         return 

#line 1378 "parser.cog"
                false;
}
case 

#line 1380 "parser.cog"
          kTokenCode_InfixOperator:
case 

#line 1381 "parser.cog"
          kTokenCode_PrefixOperator:
case 

#line 1382 "parser.cog"
          kTokenCode_PostfixOperator:
{


#line 1383 "parser.cog"
         break;
}
}


#line 1386 "parser.cog"
     

#line 1386 "parser.cog"
     auto name = 

#line 1386 "parser.cog"
                cast<

#line 1386 "parser.cog"
                     Ptr<

#line 1386 "parser.cog"
                         Name> >(

#line 1386 "parser.cog"
                                             DEREF(

#line 1386 "parser.cog"
                                       DEREF(

#line 1386 "parser.cog"
                                 parser).token).rawData);


#line 1387 "parser.cog"
     

#line 1387 "parser.cog"
     auto nameText = 

#line 1387 "parser.cog"
                           

#line 1387 "parser.cog"
                    getText(

#line 1387 "parser.cog"
                            name);


#line 1390 "parser.cog"
     if(

#line 1390 "parser.cog"
                 

#line 1390 "parser.cog"
        nameText 

#line 1390 "parser.cog"
                 != 

#line 1390 "parser.cog"
                                        

#line 1390 "parser.cog"
                    TerminatedStringSpan(

#line 1390 "parser.cog"
                                         "<"))
{


#line 1391 "parser.cog"
         return 

#line 1391 "parser.cog"
                false;
}


#line 1394 "parser.cog"
                 

#line 1394 "parser.cog"
                 

#line 1394 "parser.cog"
     advanceToken(

#line 1394 "parser.cog"
                  parser);


#line 1396 "parser.cog"
     return 

#line 1396 "parser.cog"
            true;
}


#line 1399 "parser.cog"
 

#line 1399 "parser.cog"
                                                             Decl maybeParseGenericParams(

#line 1399 "parser.cog"
                                            

#line 1399 "parser.cog"
                                      Parser

#line 1399 "parser.cog"
                                            * parser, 

#line 1399 "parser.cog"
                                                    Decl decl)
{


#line 1401 "parser.cog"
     if(

#line 1401 "parser.cog"
        

#line 1401 "parser.cog"
        !

#line 1401 "parser.cog"
                            

#line 1401 "parser.cog"
         tryParseGenericOpen(

#line 1401 "parser.cog"
                             parser))
{


#line 1402 "parser.cog"
         return 

#line 1402 "parser.cog"
                decl;
}


#line 1405 "parser.cog"
     

#line 1405 "parser.cog"
     auto genericDecl = 

#line 1405 "parser.cog"
                                                

#line 1405 "parser.cog"
                       createObject<

#line 1405 "parser.cog"
                                    GenericDecl> ();


#line 1407 "parser.cog"
     

#line 1407 "parser.cog"
     

#line 1407 "parser.cog"
                SyntaxListBuilder<

#line 1407 "parser.cog"
                                  Decl>  decls;


#line 1408 "parser.cog"
                       

#line 1408 "parser.cog"
                       

#line 1408 "parser.cog"
     parseGenericParams(

#line 1408 "parser.cog"
                        parser, 

#line 1408 "parser.cog"
                                

#line 1408 "parser.cog"
                                &

#line 1408 "parser.cog"
                                 decls);


#line 1410 "parser.cog"
                DEREF(

#line 1410 "parser.cog"
     genericDecl).name = 

#line 1410 "parser.cog"
                            DEREF(

#line 1410 "parser.cog"
                        decl).name;


#line 1411 "parser.cog"
                         

#line 1411 "parser.cog"
                DEREF(

#line 1411 "parser.cog"
     genericDecl).getDecls() = 

#line 1411 "parser.cog"
                              decls;


#line 1412 "parser.cog"
                DEREF(

#line 1412 "parser.cog"
     genericDecl).inner = 

#line 1412 "parser.cog"
                         decl;


#line 1414 "parser.cog"
         DEREF(

#line 1414 "parser.cog"
     decl).parent = 

#line 1414 "parser.cog"
                   genericDecl;


#line 1416 "parser.cog"
              

#line 1416 "parser.cog"
              

#line 1416 "parser.cog"
     pushScope(

#line 1416 "parser.cog"
               parser, 

#line 1416 "parser.cog"
                       genericDecl);


#line 1418 "parser.cog"
                       

#line 1418 "parser.cog"
                       

#line 1418 "parser.cog"
     expectGenericClose(

#line 1418 "parser.cog"
                        parser);


#line 1419 "parser.cog"
     return 

#line 1419 "parser.cog"
            genericDecl;
}


#line 1422 "parser.cog"
 

#line 1422 "parser.cog"
                                                                    Decl parseAggTypeDeclCommon(

#line 1422 "parser.cog"
                                           

#line 1422 "parser.cog"
                                     Parser

#line 1422 "parser.cog"
                                           * parser, 

#line 1422 "parser.cog"
                                                    AggTypeDecl decl)
{


#line 1424 "parser.cog"
         DEREF(

#line 1424 "parser.cog"
     decl).name = 

#line 1424 "parser.cog"
                                 

#line 1424 "parser.cog"
                 expectIdentifier(

#line 1424 "parser.cog"
                                  parser);


#line 1427 "parser.cog"
     

#line 1427 "parser.cog"
     auto result = 

#line 1427 "parser.cog"
                                         

#line 1427 "parser.cog"
                  maybeParseGenericParams(

#line 1427 "parser.cog"
                                          parser, 

#line 1427 "parser.cog"
                                                  decl);


#line 1430 "parser.cog"
     if(

#line 1430 "parser.cog"
               

#line 1430 "parser.cog"
        result 

#line 1430 "parser.cog"
               != 

#line 1430 "parser.cog"
                  decl)
{
}


#line 1436 "parser.cog"
     if(

#line 1436 "parser.cog"
                 

#line 1436 "parser.cog"
        advanceIf(

#line 1436 "parser.cog"
                  parser, 

#line 1436 "parser.cog"
                          kTokenCode_Colon))
{


#line 1438 "parser.cog"
             DEREF(

#line 1438 "parser.cog"
         decl).base = 

#line 1438 "parser.cog"
                              

#line 1438 "parser.cog"
                     parseType(

#line 1438 "parser.cog"
                               parser);
}


#line 1442 "parser.cog"
                  

#line 1442 "parser.cog"
                  

#line 1442 "parser.cog"
     parseDeclBody(

#line 1442 "parser.cog"
                   parser, 

#line 1442 "parser.cog"
                           decl);


#line 1444 "parser.cog"
     if(

#line 1444 "parser.cog"
               

#line 1444 "parser.cog"
        result 

#line 1444 "parser.cog"
               != 

#line 1444 "parser.cog"
                  decl)
{
}


#line 1449 "parser.cog"
     return 

#line 1449 "parser.cog"
            result;
}


#line 1452 "parser.cog"
 

#line 1452 "parser.cog"
                                         Syntax parseClassDecl(

#line 1452 "parser.cog"
                                   

#line 1452 "parser.cog"
                             Parser

#line 1452 "parser.cog"
                                   * parser)
{


#line 1454 "parser.cog"
     

#line 1454 "parser.cog"
     auto decl = 

#line 1454 "parser.cog"
                                       

#line 1454 "parser.cog"
                createObject<

#line 1454 "parser.cog"
                             ClassDecl> ();


#line 1455 "parser.cog"
     return 

#line 1455 "parser.cog"
                                  

#line 1455 "parser.cog"
            parseAggTypeDeclCommon(

#line 1455 "parser.cog"
                                   parser, 

#line 1455 "parser.cog"
                                           decl);
}


#line 1458 "parser.cog"
 

#line 1458 "parser.cog"
                                          Syntax parseStructDecl(

#line 1458 "parser.cog"
                                    

#line 1458 "parser.cog"
                              Parser

#line 1458 "parser.cog"
                                    * parser)
{


#line 1460 "parser.cog"
     

#line 1460 "parser.cog"
     auto decl = 

#line 1460 "parser.cog"
                                        

#line 1460 "parser.cog"
                createObject<

#line 1460 "parser.cog"
                             StructDecl> ();


#line 1461 "parser.cog"
     return 

#line 1461 "parser.cog"
                                  

#line 1461 "parser.cog"
            parseAggTypeDeclCommon(

#line 1461 "parser.cog"
                                   parser, 

#line 1461 "parser.cog"
                                           decl);
}


#line 1464 "parser.cog"
 

#line 1464 "parser.cog"
                                        SyntaxList<

#line 1464 "parser.cog"
                                                   Decl>  parseEnumTags(

#line 1464 "parser.cog"
                                  

#line 1464 "parser.cog"
                            Parser

#line 1464 "parser.cog"
                                  * parser)
{


#line 1466 "parser.cog"
     

#line 1466 "parser.cog"
     

#line 1466 "parser.cog"
                SyntaxListBuilder<

#line 1466 "parser.cog"
                                  Decl>  decls;


#line 1467 "parser.cog"
     {
for(;;)
{
{


#line 1469 "parser.cog"
         switch(

#line 1469 "parser.cog"
                              

#line 1469 "parser.cog"
                 peekTokenCode(

#line 1469 "parser.cog"
                               parser))
{
case 

#line 1471 "parser.cog"
              kTokenCode_RCurly:
case 

#line 1472 "parser.cog"
              kTokenCode_RParen:
case 

#line 1473 "parser.cog"
              kTokenCode_EndOfFile:
{


#line 1474 "parser.cog"
             return 

#line 1474 "parser.cog"
                    decls;
}
default:
{


#line 1477 "parser.cog"
             break;
}
}


#line 1481 "parser.cog"
         

#line 1481 "parser.cog"
         auto tag = 

#line 1481 "parser.cog"
                                            

#line 1481 "parser.cog"
                   createObject<

#line 1481 "parser.cog"
                                EnumTagDecl> ();


#line 1482 "parser.cog"
            DEREF(

#line 1482 "parser.cog"
         tag).name = 

#line 1482 "parser.cog"
                                    

#line 1482 "parser.cog"
                    expectIdentifier(

#line 1482 "parser.cog"
                                     parser);


#line 1483 "parser.cog"
         if(

#line 1483 "parser.cog"
                      

#line 1483 "parser.cog"
             advanceIf(

#line 1483 "parser.cog"
                       parser, 

#line 1483 "parser.cog"
                               kTokenCode_Assign))
{


#line 1485 "parser.cog"
                DEREF(

#line 1485 "parser.cog"
             tag).init = 

#line 1485 "parser.cog"
                                

#line 1485 "parser.cog"
                        parseExp(

#line 1485 "parser.cog"
                                 parser);
}


#line 1488 "parser.cog"
                  

#line 1488 "parser.cog"
                  

#line 1488 "parser.cog"
              DEREF(

#line 1488 "parser.cog"
         decls).add(

#line 1488 "parser.cog"
                   tag);


#line 1490 "parser.cog"
         switch(

#line 1490 "parser.cog"
                              

#line 1490 "parser.cog"
                 peekTokenCode(

#line 1490 "parser.cog"
                               parser))
{
case 

#line 1492 "parser.cog"
              kTokenCode_RCurly:
case 

#line 1493 "parser.cog"
              kTokenCode_RParen:
case 

#line 1494 "parser.cog"
              kTokenCode_EndOfFile:
{


#line 1495 "parser.cog"
             return 

#line 1495 "parser.cog"
                    decls;
}
default:
{


#line 1498 "parser.cog"
             break;
}
}


#line 1501 "parser.cog"
               

#line 1501 "parser.cog"
               

#line 1501 "parser.cog"
         expect(

#line 1501 "parser.cog"
                parser, 

#line 1501 "parser.cog"
                        kTokenCode_Comma);
}
}}
}


#line 1505 "parser.cog"
 

#line 1505 "parser.cog"
                                        Syntax parseEnumDecl(

#line 1505 "parser.cog"
                                  

#line 1505 "parser.cog"
                            Parser

#line 1505 "parser.cog"
                                  * parser)
{


#line 1507 "parser.cog"
     

#line 1507 "parser.cog"
     auto decl = 

#line 1507 "parser.cog"
                                      

#line 1507 "parser.cog"
                createObject<

#line 1507 "parser.cog"
                             EnumDecl> ();


#line 1509 "parser.cog"
         DEREF(

#line 1509 "parser.cog"
     decl).name = 

#line 1509 "parser.cog"
                                 

#line 1509 "parser.cog"
                 expectIdentifier(

#line 1509 "parser.cog"
                                  parser);


#line 1512 "parser.cog"
     

#line 1512 "parser.cog"
     auto result = 

#line 1512 "parser.cog"
                                         

#line 1512 "parser.cog"
                  maybeParseGenericParams(

#line 1512 "parser.cog"
                                          parser, 

#line 1512 "parser.cog"
                                                  decl);


#line 1516 "parser.cog"
     if(

#line 1516 "parser.cog"
                  

#line 1516 "parser.cog"
         advanceIf(

#line 1516 "parser.cog"
                   parser, 

#line 1516 "parser.cog"
                           kTokenCode_Colon))
{


#line 1518 "parser.cog"
             DEREF(

#line 1518 "parser.cog"
         decl).base = 

#line 1518 "parser.cog"
                              

#line 1518 "parser.cog"
                     parseType(

#line 1518 "parser.cog"
                               parser);
}


#line 1521 "parser.cog"
           

#line 1521 "parser.cog"
           

#line 1521 "parser.cog"
     expect(

#line 1521 "parser.cog"
            parser, 

#line 1521 "parser.cog"
                    kTokenCode_LCurly);


#line 1522 "parser.cog"
     

#line 1522 "parser.cog"
     auto decls = 

#line 1522 "parser.cog"
                              

#line 1522 "parser.cog"
                 parseEnumTags(

#line 1522 "parser.cog"
                               parser);


#line 1523 "parser.cog"
           

#line 1523 "parser.cog"
           

#line 1523 "parser.cog"
     expect(

#line 1523 "parser.cog"
            parser, 

#line 1523 "parser.cog"
                    kTokenCode_RCurly);


#line 1525 "parser.cog"
         DEREF(

#line 1525 "parser.cog"
     decl).stmts = 

#line 1525 "parser.cog"
                       DEREF(

#line 1525 "parser.cog"
                  decls).head;


#line 1527 "parser.cog"
     return 

#line 1527 "parser.cog"
            result;
}


#line 1530 "parser.cog"
 

#line 1530 "parser.cog"
                                          Syntax parseImportDecl(

#line 1530 "parser.cog"
                                    

#line 1530 "parser.cog"
                              Parser

#line 1530 "parser.cog"
                                    * parser)
{


#line 1532 "parser.cog"
     

#line 1532 "parser.cog"
     auto decl = 

#line 1532 "parser.cog"
                                        

#line 1532 "parser.cog"
                createObject<

#line 1532 "parser.cog"
                             ImportDecl> ();


#line 1533 "parser.cog"
         DEREF(

#line 1533 "parser.cog"
     decl).scope = 

#line 1533 "parser.cog"
                        DEREF(

#line 1533 "parser.cog"
                  parser).scope;


#line 1534 "parser.cog"
         DEREF(

#line 1534 "parser.cog"
     decl).name = 

#line 1534 "parser.cog"
                                 

#line 1534 "parser.cog"
                 expectIdentifier(

#line 1534 "parser.cog"
                                  parser);


#line 1535 "parser.cog"
           

#line 1535 "parser.cog"
           

#line 1535 "parser.cog"
     expect(

#line 1535 "parser.cog"
            parser, 

#line 1535 "parser.cog"
                    kTokenCode_Semi);


#line 1536 "parser.cog"
     return 

#line 1536 "parser.cog"
            decl;
}


#line 1540 "parser.cog"
 void parseVarDeclCommon(

#line 1540 "parser.cog"
                                       

#line 1540 "parser.cog"
                                 Parser

#line 1540 "parser.cog"
                                       * parser, 

#line 1540 "parser.cog"
                                                VarDeclBase decl)
{


#line 1542 "parser.cog"
         DEREF(

#line 1542 "parser.cog"
     decl).name = 

#line 1542 "parser.cog"
                                 

#line 1542 "parser.cog"
                 expectIdentifier(

#line 1542 "parser.cog"
                                  parser);


#line 1545 "parser.cog"
     if(

#line 1545 "parser.cog"
                 

#line 1545 "parser.cog"
        advanceIf(

#line 1545 "parser.cog"
                  parser, 

#line 1545 "parser.cog"
                          kTokenCode_Colon))
{


#line 1547 "parser.cog"
             DEREF(

#line 1547 "parser.cog"
         decl).type = 

#line 1547 "parser.cog"
                              

#line 1547 "parser.cog"
                     parseType(

#line 1547 "parser.cog"
                               parser);
}


#line 1551 "parser.cog"
     if(

#line 1551 "parser.cog"
                 

#line 1551 "parser.cog"
        advanceIf(

#line 1551 "parser.cog"
                  parser, 

#line 1551 "parser.cog"
                          kTokenCode_Assign))
{


#line 1553 "parser.cog"
             DEREF(

#line 1553 "parser.cog"
         decl).init = 

#line 1553 "parser.cog"
                             

#line 1553 "parser.cog"
                     parseExp(

#line 1553 "parser.cog"
                              parser);
}
}


#line 1557 "parser.cog"
 

#line 1557 "parser.cog"
                                       Syntax parseVarDecl(

#line 1557 "parser.cog"
                                 

#line 1557 "parser.cog"
                           Parser

#line 1557 "parser.cog"
                                 * parser)
{


#line 1559 "parser.cog"
     

#line 1559 "parser.cog"
     auto decl = 

#line 1559 "parser.cog"
                                     

#line 1559 "parser.cog"
                createObject<

#line 1559 "parser.cog"
                             VarDecl> ();


#line 1560 "parser.cog"
                       

#line 1560 "parser.cog"
                       

#line 1560 "parser.cog"
     parseVarDeclCommon(

#line 1560 "parser.cog"
                        parser, 

#line 1560 "parser.cog"
                                decl);


#line 1561 "parser.cog"
           

#line 1561 "parser.cog"
           

#line 1561 "parser.cog"
     expect(

#line 1561 "parser.cog"
            parser, 

#line 1561 "parser.cog"
                    kTokenCode_Semi);


#line 1562 "parser.cog"
     return 

#line 1562 "parser.cog"
            decl;
}


#line 1565 "parser.cog"
 

#line 1565 "parser.cog"
                                       Syntax parseLetDecl(

#line 1565 "parser.cog"
                                 

#line 1565 "parser.cog"
                           Parser

#line 1565 "parser.cog"
                                 * parser)
{


#line 1567 "parser.cog"
     

#line 1567 "parser.cog"
     auto decl = 

#line 1567 "parser.cog"
                                     

#line 1567 "parser.cog"
                createObject<

#line 1567 "parser.cog"
                             LetDecl> ();


#line 1568 "parser.cog"
                       

#line 1568 "parser.cog"
                       

#line 1568 "parser.cog"
     parseVarDeclCommon(

#line 1568 "parser.cog"
                        parser, 

#line 1568 "parser.cog"
                                decl);


#line 1569 "parser.cog"
           

#line 1569 "parser.cog"
           

#line 1569 "parser.cog"
     expect(

#line 1569 "parser.cog"
            parser, 

#line 1569 "parser.cog"
                    kTokenCode_Semi);


#line 1570 "parser.cog"
     return 

#line 1570 "parser.cog"
            decl;
}


#line 1573 "parser.cog"
 void parseTypeVarDeclSuffixCommon(

#line 1573 "parser.cog"
                                                 

#line 1573 "parser.cog"
                                           Parser

#line 1573 "parser.cog"
                                                 * parser, 

#line 1573 "parser.cog"
                                                          TypeVarDecl decl)
{


#line 1576 "parser.cog"
     if(

#line 1576 "parser.cog"
                 

#line 1576 "parser.cog"
        advanceIf(

#line 1576 "parser.cog"
                  parser, 

#line 1576 "parser.cog"
                          kTokenCode_Colon))
{


#line 1578 "parser.cog"
             DEREF(

#line 1578 "parser.cog"
         decl).bound = 

#line 1578 "parser.cog"
                               

#line 1578 "parser.cog"
                      parseType(

#line 1578 "parser.cog"
                                parser);
}


#line 1582 "parser.cog"
     if(

#line 1582 "parser.cog"
                 

#line 1582 "parser.cog"
        advanceIf(

#line 1582 "parser.cog"
                  parser, 

#line 1582 "parser.cog"
                          kTokenCode_Assign))
{


#line 1584 "parser.cog"
             DEREF(

#line 1584 "parser.cog"
         decl).init = 

#line 1584 "parser.cog"
                              

#line 1584 "parser.cog"
                     parseType(

#line 1584 "parser.cog"
                               parser);
}
}


#line 1588 "parser.cog"
 void parseTypeVarDeclCommon(

#line 1588 "parser.cog"
                                           

#line 1588 "parser.cog"
                                     Parser

#line 1588 "parser.cog"
                                           * parser, 

#line 1588 "parser.cog"
                                                    TypeVarDecl decl)
{


#line 1590 "parser.cog"
         DEREF(

#line 1590 "parser.cog"
     decl).name = 

#line 1590 "parser.cog"
                                 

#line 1590 "parser.cog"
                 expectIdentifier(

#line 1590 "parser.cog"
                                  parser);


#line 1591 "parser.cog"
                                 

#line 1591 "parser.cog"
                                 

#line 1591 "parser.cog"
     parseTypeVarDeclSuffixCommon(

#line 1591 "parser.cog"
                                  parser, 

#line 1591 "parser.cog"
                                          decl);
}


#line 1594 "parser.cog"
 

#line 1594 "parser.cog"
                                                         

#line 1594 "parser.cog"
                                                     Name

#line 1594 "parser.cog"
                                                         * expectOperatorOrIdentifier(

#line 1594 "parser.cog"
                                               

#line 1594 "parser.cog"
                                         Parser

#line 1594 "parser.cog"
                                               * parser)
{


#line 1596 "parser.cog"
     switch(

#line 1596 "parser.cog"
                         

#line 1596 "parser.cog"
            peekTokenCode(

#line 1596 "parser.cog"
                          parser))
{
default:
{


#line 1599 "parser.cog"
         return 

#line 1599 "parser.cog"
                                

#line 1599 "parser.cog"
                expectIdentifier(

#line 1599 "parser.cog"
                                 parser);
}
case 

#line 1601 "parser.cog"
          kTokenCode_Identifier:
case 

#line 1602 "parser.cog"
          kTokenCode_InfixOperator:
case 

#line 1603 "parser.cog"
          kTokenCode_PrefixOperator:
case 

#line 1604 "parser.cog"
          kTokenCode_PostfixOperator:
{


#line 1605 "parser.cog"
         return 

#line 1605 "parser.cog"
                cast<

#line 1605 "parser.cog"
                     Ptr<

#line 1605 "parser.cog"
                         Name> >(

#line 1605 "parser.cog"
                                                     DEREF(

#line 1605 "parser.cog"
                                             

#line 1605 "parser.cog"
                                 advanceToken(

#line 1605 "parser.cog"
                                              parser)).rawData);
}
}
}


#line 1609 "parser.cog"
 

#line 1609 "parser.cog"
                                             Syntax parseTypeAliasDecl(

#line 1609 "parser.cog"
                                       

#line 1609 "parser.cog"
                                 Parser

#line 1609 "parser.cog"
                                       * parser)
{


#line 1611 "parser.cog"
     

#line 1611 "parser.cog"
     auto decl = 

#line 1611 "parser.cog"
                                           

#line 1611 "parser.cog"
                createObject<

#line 1611 "parser.cog"
                             TypeAliasDecl> ();


#line 1613 "parser.cog"
         DEREF(

#line 1613 "parser.cog"
     decl).name = 

#line 1613 "parser.cog"
                                           

#line 1613 "parser.cog"
                 expectOperatorOrIdentifier(

#line 1613 "parser.cog"
                                            parser);


#line 1614 "parser.cog"
     

#line 1614 "parser.cog"
     auto result = 

#line 1614 "parser.cog"
                                         

#line 1614 "parser.cog"
                  maybeParseGenericParams(

#line 1614 "parser.cog"
                                          parser, 

#line 1614 "parser.cog"
                                                  decl);


#line 1616 "parser.cog"
                                 

#line 1616 "parser.cog"
                                 

#line 1616 "parser.cog"
     parseTypeVarDeclSuffixCommon(

#line 1616 "parser.cog"
                                  parser, 

#line 1616 "parser.cog"
                                          decl);


#line 1617 "parser.cog"
           

#line 1617 "parser.cog"
           

#line 1617 "parser.cog"
     expect(

#line 1617 "parser.cog"
            parser, 

#line 1617 "parser.cog"
                    kTokenCode_Semi);


#line 1618 "parser.cog"
     return 

#line 1618 "parser.cog"
            result;
}


#line 1621 "parser.cog"
 

#line 1621 "parser.cog"
                                      Syntax parseIfStmt(

#line 1621 "parser.cog"
                                

#line 1621 "parser.cog"
                          Parser

#line 1621 "parser.cog"
                                * parser)
{


#line 1623 "parser.cog"
           

#line 1623 "parser.cog"
           

#line 1623 "parser.cog"
     expect(

#line 1623 "parser.cog"
            parser, 

#line 1623 "parser.cog"
                    kTokenCode_LParen);


#line 1626 "parser.cog"
     if(

#line 1626 "parser.cog"
                  

#line 1626 "parser.cog"
         advanceIf(

#line 1626 "parser.cog"
                   parser, 

#line 1626 "parser.cog"
                                               

#line 1626 "parser.cog"
                           TerminatedStringSpan(

#line 1626 "parser.cog"
                                                "let")))
{


#line 1628 "parser.cog"
         

#line 1628 "parser.cog"
         auto stmt = 

#line 1628 "parser.cog"
                                           

#line 1628 "parser.cog"
                    createObject<

#line 1628 "parser.cog"
                                 IfLetStmt> ();


#line 1629 "parser.cog"
             DEREF(

#line 1629 "parser.cog"
         stmt).name = 

#line 1629 "parser.cog"
                                     

#line 1629 "parser.cog"
                     expectIdentifier(

#line 1629 "parser.cog"
                                      parser);


#line 1630 "parser.cog"
               

#line 1630 "parser.cog"
               

#line 1630 "parser.cog"
         expect(

#line 1630 "parser.cog"
                parser, 

#line 1630 "parser.cog"
                        kTokenCode_Assign);


#line 1631 "parser.cog"
             DEREF(

#line 1631 "parser.cog"
         stmt).init = 

#line 1631 "parser.cog"
                             

#line 1631 "parser.cog"
                     parseExp(

#line 1631 "parser.cog"
                              parser);


#line 1632 "parser.cog"
               

#line 1632 "parser.cog"
               

#line 1632 "parser.cog"
         expect(

#line 1632 "parser.cog"
                parser, 

#line 1632 "parser.cog"
                        kTokenCode_RParen);


#line 1633 "parser.cog"
             DEREF(

#line 1633 "parser.cog"
         stmt).thenStmt = 

#line 1633 "parser.cog"
                                  

#line 1633 "parser.cog"
                         parseStmt(

#line 1633 "parser.cog"
                                   parser);


#line 1634 "parser.cog"
         if(

#line 1634 "parser.cog"
                      

#line 1634 "parser.cog"
             advanceIf(

#line 1634 "parser.cog"
                       parser, 

#line 1634 "parser.cog"
                                                   

#line 1634 "parser.cog"
                               TerminatedStringSpan(

#line 1634 "parser.cog"
                                                    "else")))
{


#line 1636 "parser.cog"
                 DEREF(

#line 1636 "parser.cog"
             stmt).elseStmt = 

#line 1636 "parser.cog"
                                      

#line 1636 "parser.cog"
                             parseStmt(

#line 1636 "parser.cog"
                                       parser);
}


#line 1638 "parser.cog"
         return 

#line 1638 "parser.cog"
                stmt;
}
else
{


#line 1642 "parser.cog"
         

#line 1642 "parser.cog"
         auto stmt = 

#line 1642 "parser.cog"
                                        

#line 1642 "parser.cog"
                    createObject<

#line 1642 "parser.cog"
                                 IfStmt> ();


#line 1643 "parser.cog"
             DEREF(

#line 1643 "parser.cog"
         stmt).condition = 

#line 1643 "parser.cog"
                                  

#line 1643 "parser.cog"
                          parseExp(

#line 1643 "parser.cog"
                                   parser);


#line 1644 "parser.cog"
               

#line 1644 "parser.cog"
               

#line 1644 "parser.cog"
         expect(

#line 1644 "parser.cog"
                parser, 

#line 1644 "parser.cog"
                        kTokenCode_RParen);


#line 1645 "parser.cog"
             DEREF(

#line 1645 "parser.cog"
         stmt).thenStmt = 

#line 1645 "parser.cog"
                                  

#line 1645 "parser.cog"
                         parseStmt(

#line 1645 "parser.cog"
                                   parser);


#line 1646 "parser.cog"
         if(

#line 1646 "parser.cog"
                      

#line 1646 "parser.cog"
             advanceIf(

#line 1646 "parser.cog"
                       parser, 

#line 1646 "parser.cog"
                                                   

#line 1646 "parser.cog"
                               TerminatedStringSpan(

#line 1646 "parser.cog"
                                                    "else")))
{


#line 1648 "parser.cog"
                 DEREF(

#line 1648 "parser.cog"
             stmt).elseStmt = 

#line 1648 "parser.cog"
                                      

#line 1648 "parser.cog"
                             parseStmt(

#line 1648 "parser.cog"
                                       parser);
}


#line 1650 "parser.cog"
         return 

#line 1650 "parser.cog"
                stmt;
}
}


#line 1654 "parser.cog"
 

#line 1654 "parser.cog"
                                         Syntax parseWhileStmt(

#line 1654 "parser.cog"
                                   

#line 1654 "parser.cog"
                             Parser

#line 1654 "parser.cog"
                                   * parser)
{


#line 1656 "parser.cog"
     

#line 1656 "parser.cog"
     auto stmt = 

#line 1656 "parser.cog"
                                       

#line 1656 "parser.cog"
                createObject<

#line 1656 "parser.cog"
                             WhileStmt> ();


#line 1657 "parser.cog"
           

#line 1657 "parser.cog"
           

#line 1657 "parser.cog"
     expect(

#line 1657 "parser.cog"
            parser, 

#line 1657 "parser.cog"
                    kTokenCode_LParen);


#line 1658 "parser.cog"
         DEREF(

#line 1658 "parser.cog"
     stmt).condition = 

#line 1658 "parser.cog"
                              

#line 1658 "parser.cog"
                      parseExp(

#line 1658 "parser.cog"
                               parser);


#line 1659 "parser.cog"
           

#line 1659 "parser.cog"
           

#line 1659 "parser.cog"
     expect(

#line 1659 "parser.cog"
            parser, 

#line 1659 "parser.cog"
                    kTokenCode_RParen);


#line 1660 "parser.cog"
         DEREF(

#line 1660 "parser.cog"
     stmt).body = 

#line 1660 "parser.cog"
                          

#line 1660 "parser.cog"
                 parseStmt(

#line 1660 "parser.cog"
                           parser);


#line 1661 "parser.cog"
     return 

#line 1661 "parser.cog"
            stmt;
}


#line 1664 "parser.cog"
 

#line 1664 "parser.cog"
                                       Syntax parseForStmt(

#line 1664 "parser.cog"
                                 

#line 1664 "parser.cog"
                           Parser

#line 1664 "parser.cog"
                                 * parser)
{


#line 1666 "parser.cog"
     

#line 1666 "parser.cog"
     auto stmt = 

#line 1666 "parser.cog"
                                     

#line 1666 "parser.cog"
                createObject<

#line 1666 "parser.cog"
                             ForStmt> ();


#line 1667 "parser.cog"
           

#line 1667 "parser.cog"
           

#line 1667 "parser.cog"
     expect(

#line 1667 "parser.cog"
            parser, 

#line 1667 "parser.cog"
                    kTokenCode_LParen);


#line 1670 "parser.cog"
     switch(

#line 1670 "parser.cog"
                          

#line 1670 "parser.cog"
             peekTokenCode(

#line 1670 "parser.cog"
                           parser))
{
case 

#line 1672 "parser.cog"
          kTokenCode_Semi:
{


#line 1673 "parser.cog"
                     

#line 1673 "parser.cog"
                     

#line 1673 "parser.cog"
         advanceToken(

#line 1673 "parser.cog"
                      parser);
}
{


#line 1674 "parser.cog"
         break;
}
default:
{


#line 1678 "parser.cog"
             DEREF(

#line 1678 "parser.cog"
         stmt).init = 

#line 1678 "parser.cog"
                              

#line 1678 "parser.cog"
                     parseStmt(

#line 1678 "parser.cog"
                               parser);
}
{


#line 1679 "parser.cog"
         break;
}
}


#line 1683 "parser.cog"
     switch(

#line 1683 "parser.cog"
                          

#line 1683 "parser.cog"
             peekTokenCode(

#line 1683 "parser.cog"
                           parser))
{
case 

#line 1685 "parser.cog"
          kTokenCode_Semi:
{


#line 1686 "parser.cog"
                     

#line 1686 "parser.cog"
                     

#line 1686 "parser.cog"
         advanceToken(

#line 1686 "parser.cog"
                      parser);
}
{


#line 1687 "parser.cog"
         break;
}
default:
{


#line 1692 "parser.cog"
             DEREF(

#line 1692 "parser.cog"
         stmt).condition = 

#line 1692 "parser.cog"
                                  

#line 1692 "parser.cog"
                          parseExp(

#line 1692 "parser.cog"
                                   parser);
}
{


#line 1693 "parser.cog"
               

#line 1693 "parser.cog"
               

#line 1693 "parser.cog"
         expect(

#line 1693 "parser.cog"
                parser, 

#line 1693 "parser.cog"
                        kTokenCode_Semi);
}
{


#line 1694 "parser.cog"
         break;
}
}


#line 1698 "parser.cog"
     switch(

#line 1698 "parser.cog"
                          

#line 1698 "parser.cog"
             peekTokenCode(

#line 1698 "parser.cog"
                           parser))
{
case 

#line 1700 "parser.cog"
          kTokenCode_RParen:
{


#line 1701 "parser.cog"
         break;
}
default:
{


#line 1704 "parser.cog"
             DEREF(

#line 1704 "parser.cog"
         stmt).iter = 

#line 1704 "parser.cog"
                             

#line 1704 "parser.cog"
                     parseExp(

#line 1704 "parser.cog"
                              parser);
}
{


#line 1705 "parser.cog"
         break;
}
}


#line 1708 "parser.cog"
           

#line 1708 "parser.cog"
           

#line 1708 "parser.cog"
     expect(

#line 1708 "parser.cog"
            parser, 

#line 1708 "parser.cog"
                    kTokenCode_RParen);


#line 1709 "parser.cog"
         DEREF(

#line 1709 "parser.cog"
     stmt).body = 

#line 1709 "parser.cog"
                          

#line 1709 "parser.cog"
                 parseStmt(

#line 1709 "parser.cog"
                           parser);


#line 1710 "parser.cog"
     return 

#line 1710 "parser.cog"
            stmt;
}


#line 1713 "parser.cog"
 

#line 1713 "parser.cog"
                                           Syntax parseForEachStmt(

#line 1713 "parser.cog"
                                     

#line 1713 "parser.cog"
                               Parser

#line 1713 "parser.cog"
                                     * parser)
{


#line 1715 "parser.cog"
     

#line 1715 "parser.cog"
     auto stmt = 

#line 1715 "parser.cog"
                                         

#line 1715 "parser.cog"
                createObject<

#line 1715 "parser.cog"
                             ForEachStmt> ();


#line 1716 "parser.cog"
           

#line 1716 "parser.cog"
           

#line 1716 "parser.cog"
     expect(

#line 1716 "parser.cog"
            parser, 

#line 1716 "parser.cog"
                    kTokenCode_LParen);


#line 1718 "parser.cog"
         DEREF(

#line 1718 "parser.cog"
     stmt).name = 

#line 1718 "parser.cog"
                                 

#line 1718 "parser.cog"
                 expectIdentifier(

#line 1718 "parser.cog"
                                  parser);


#line 1720 "parser.cog"
     if(

#line 1720 "parser.cog"
         

#line 1720 "parser.cog"
         !

#line 1720 "parser.cog"
                   

#line 1720 "parser.cog"
          advanceIf(

#line 1720 "parser.cog"
                    parser, 

#line 1720 "parser.cog"
                                                

#line 1720 "parser.cog"
                            TerminatedStringSpan(

#line 1720 "parser.cog"
                                                 "in")))
{


#line 1722 "parser.cog"
               

#line 1722 "parser.cog"
               

#line 1722 "parser.cog"
         expect(

#line 1722 "parser.cog"
                parser, 

#line 1722 "parser.cog"
                        kTokenCode_Colon);
}


#line 1725 "parser.cog"
         DEREF(

#line 1725 "parser.cog"
     stmt).exp = 

#line 1725 "parser.cog"
                        

#line 1725 "parser.cog"
                parseExp(

#line 1725 "parser.cog"
                         parser);


#line 1727 "parser.cog"
           

#line 1727 "parser.cog"
           

#line 1727 "parser.cog"
     expect(

#line 1727 "parser.cog"
            parser, 

#line 1727 "parser.cog"
                    kTokenCode_RParen);


#line 1728 "parser.cog"
         DEREF(

#line 1728 "parser.cog"
     stmt).body = 

#line 1728 "parser.cog"
                          

#line 1728 "parser.cog"
                 parseStmt(

#line 1728 "parser.cog"
                           parser);


#line 1729 "parser.cog"
     return 

#line 1729 "parser.cog"
            stmt;
}


#line 1732 "parser.cog"
 

#line 1732 "parser.cog"
                                          Syntax parseSwitchStmt(

#line 1732 "parser.cog"
                                    

#line 1732 "parser.cog"
                              Parser

#line 1732 "parser.cog"
                                    * parser)
{


#line 1734 "parser.cog"
     

#line 1734 "parser.cog"
     auto stmt = 

#line 1734 "parser.cog"
                                        

#line 1734 "parser.cog"
                createObject<

#line 1734 "parser.cog"
                             SwitchStmt> ();


#line 1735 "parser.cog"
           

#line 1735 "parser.cog"
           

#line 1735 "parser.cog"
     expect(

#line 1735 "parser.cog"
            parser, 

#line 1735 "parser.cog"
                    kTokenCode_LParen);


#line 1736 "parser.cog"
         DEREF(

#line 1736 "parser.cog"
     stmt).condition = 

#line 1736 "parser.cog"
                              

#line 1736 "parser.cog"
                      parseExp(

#line 1736 "parser.cog"
                               parser);


#line 1737 "parser.cog"
           

#line 1737 "parser.cog"
           

#line 1737 "parser.cog"
     expect(

#line 1737 "parser.cog"
            parser, 

#line 1737 "parser.cog"
                    kTokenCode_RParen);


#line 1739 "parser.cog"
           

#line 1739 "parser.cog"
           

#line 1739 "parser.cog"
     expect(

#line 1739 "parser.cog"
            parser, 

#line 1739 "parser.cog"
                    kTokenCode_LCurly);


#line 1741 "parser.cog"
     

#line 1741 "parser.cog"
     auto caseLink = 

#line 1741 "parser.cog"
                    

#line 1741 "parser.cog"
                    &

#line 1741 "parser.cog"
                         DEREF(

#line 1741 "parser.cog"
                     stmt).cases;


#line 1743 "parser.cog"
     {
for(;;)
{
{


#line 1745 "parser.cog"
         switch(

#line 1745 "parser.cog"
                              

#line 1745 "parser.cog"
                 peekTokenCode(

#line 1745 "parser.cog"
                               parser))
{
case 

#line 1747 "parser.cog"
              kTokenCode_RCurly:
case 

#line 1748 "parser.cog"
              kTokenCode_RParen:
case 

#line 1749 "parser.cog"
              kTokenCode_EndOfFile:
{


#line 1750 "parser.cog"
                   

#line 1750 "parser.cog"
                   

#line 1750 "parser.cog"
             expect(

#line 1750 "parser.cog"
                    parser, 

#line 1750 "parser.cog"
                            kTokenCode_RCurly);
}
{


#line 1751 "parser.cog"
             return 

#line 1751 "parser.cog"
                    stmt;
}
default:
{


#line 1754 "parser.cog"
             break;
}
}


#line 1757 "parser.cog"
         

#line 1757 "parser.cog"
         auto caseStart = 

#line 1757 "parser.cog"
                                

#line 1757 "parser.cog"
                         peekLoc(

#line 1757 "parser.cog"
                                 parser);


#line 1758 "parser.cog"
         

#line 1758 "parser.cog"
         auto c = 

#line 1758 "parser.cog"
                                         

#line 1758 "parser.cog"
                 createObject<

#line 1758 "parser.cog"
                              SwitchCase> ();


#line 1759 "parser.cog"
          DEREF(

#line 1759 "parser.cog"
         c).loc = 

#line 1759 "parser.cog"
                 caseStart;


#line 1761 "parser.cog"
         

#line 1761 "parser.cog"
         auto valueLink = 

#line 1761 "parser.cog"
                         

#line 1761 "parser.cog"
                         &

#line 1761 "parser.cog"
                           DEREF(

#line 1761 "parser.cog"
                          c).values;


#line 1764 "parser.cog"
         {
for(;;)
{
{


#line 1766 "parser.cog"
             

#line 1766 "parser.cog"
             

#line 1766 "parser.cog"
                       Arg arg = 

#line 1766 "parser.cog"
                             nullptr;


#line 1767 "parser.cog"
             if(

#line 1767 "parser.cog"
                          

#line 1767 "parser.cog"
                 advanceIf(

#line 1767 "parser.cog"
                           parser, 

#line 1767 "parser.cog"
                                                       

#line 1767 "parser.cog"
                                   TerminatedStringSpan(

#line 1767 "parser.cog"
                                                        "case")))
{


#line 1769 "parser.cog"
                 arg = 

#line 1769 "parser.cog"
                                        

#line 1769 "parser.cog"
                       createObject<

#line 1769 "parser.cog"
                                    Arg> ();


#line 1770 "parser.cog"
                    DEREF(

#line 1770 "parser.cog"
                 arg).exp = 

#line 1770 "parser.cog"
                                   

#line 1770 "parser.cog"
                           parseExp(

#line 1770 "parser.cog"
                                    parser);


#line 1771 "parser.cog"
                       

#line 1771 "parser.cog"
                       

#line 1771 "parser.cog"
                 expect(

#line 1771 "parser.cog"
                        parser, 

#line 1771 "parser.cog"
                                kTokenCode_Colon);
}
else
{


#line 1773 "parser.cog"
                  if(

#line 1773 "parser.cog"
                               

#line 1773 "parser.cog"
                      advanceIf(

#line 1773 "parser.cog"
                                parser, 

#line 1773 "parser.cog"
                                                            

#line 1773 "parser.cog"
                                        TerminatedStringSpan(

#line 1773 "parser.cog"
                                                             "default")))
{


#line 1775 "parser.cog"
                 arg = 

#line 1775 "parser.cog"
                                        

#line 1775 "parser.cog"
                       createObject<

#line 1775 "parser.cog"
                                    Arg> ();


#line 1776 "parser.cog"
                    DEREF(

#line 1776 "parser.cog"
                 arg).exp = 

#line 1776 "parser.cog"
                           nullptr;


#line 1777 "parser.cog"
                       

#line 1777 "parser.cog"
                       

#line 1777 "parser.cog"
                 expect(

#line 1777 "parser.cog"
                        parser, 

#line 1777 "parser.cog"
                                kTokenCode_Colon);
}
else
{


#line 1782 "parser.cog"
                 break;
}
}


#line 1785 "parser.cog"
             

#line 1785 "parser.cog"
             *

#line 1785 "parser.cog"
              valueLink = 

#line 1785 "parser.cog"
                          arg;


#line 1786 "parser.cog"
             valueLink = 

#line 1786 "parser.cog"
                         

#line 1786 "parser.cog"
                         &

#line 1786 "parser.cog"
                             DEREF(

#line 1786 "parser.cog"
                          arg).next;
}
}}


#line 1789 "parser.cog"
         if(

#line 1789 "parser.cog"
             

#line 1789 "parser.cog"
             !*

#line 1789 "parser.cog"
               valueLink)
{
}


#line 1796 "parser.cog"
          DEREF(

#line 1796 "parser.cog"
         c).body = 

#line 1796 "parser.cog"
                           

#line 1796 "parser.cog"
                  parseStmt(

#line 1796 "parser.cog"
                            parser);


#line 1798 "parser.cog"
         

#line 1798 "parser.cog"
         *

#line 1798 "parser.cog"
          caseLink = 

#line 1798 "parser.cog"
                     c;


#line 1799 "parser.cog"
         caseLink = 

#line 1799 "parser.cog"
                    

#line 1799 "parser.cog"
                    &

#line 1799 "parser.cog"
                      DEREF(

#line 1799 "parser.cog"
                     c).next;


#line 1801 "parser.cog"
                   

#line 1801 "parser.cog"
                   

#line 1801 "parser.cog"
         tryRecover(

#line 1801 "parser.cog"
                    parser);
}
}}
}


#line 1805 "parser.cog"
 

#line 1805 "parser.cog"
                                          Syntax parseReturnStmt(

#line 1805 "parser.cog"
                                    

#line 1805 "parser.cog"
                              Parser

#line 1805 "parser.cog"
                                    * parser)
{


#line 1807 "parser.cog"
     

#line 1807 "parser.cog"
     auto stmt = 

#line 1807 "parser.cog"
                                        

#line 1807 "parser.cog"
                createObject<

#line 1807 "parser.cog"
                             ReturnStmt> ();


#line 1808 "parser.cog"
     if(

#line 1808 "parser.cog"
                              

#line 1808 "parser.cog"
                     

#line 1808 "parser.cog"
        peekTokenCode(

#line 1808 "parser.cog"
                      parser) 

#line 1808 "parser.cog"
                              != 

#line 1808 "parser.cog"
                                 kTokenCode_Semi)
{


#line 1810 "parser.cog"
             DEREF(

#line 1810 "parser.cog"
         stmt).value = 

#line 1810 "parser.cog"
                              

#line 1810 "parser.cog"
                      parseExp(

#line 1810 "parser.cog"
                               parser);
}


#line 1812 "parser.cog"
           

#line 1812 "parser.cog"
           

#line 1812 "parser.cog"
     expect(

#line 1812 "parser.cog"
            parser, 

#line 1812 "parser.cog"
                    kTokenCode_Semi);


#line 1813 "parser.cog"
     return 

#line 1813 "parser.cog"
            stmt;
}


#line 1816 "parser.cog"
 

#line 1816 "parser.cog"
                                         Syntax parseBreakStmt(

#line 1816 "parser.cog"
                                   

#line 1816 "parser.cog"
                             Parser

#line 1816 "parser.cog"
                                   * parser)
{


#line 1818 "parser.cog"
     

#line 1818 "parser.cog"
     auto stmt = 

#line 1818 "parser.cog"
                                       

#line 1818 "parser.cog"
                createObject<

#line 1818 "parser.cog"
                             BreakStmt> ();


#line 1819 "parser.cog"
           

#line 1819 "parser.cog"
           

#line 1819 "parser.cog"
     expect(

#line 1819 "parser.cog"
            parser, 

#line 1819 "parser.cog"
                    kTokenCode_Semi);


#line 1820 "parser.cog"
     return 

#line 1820 "parser.cog"
            stmt;
}


#line 1823 "parser.cog"
 

#line 1823 "parser.cog"
                                            Syntax parseContinueStmt(

#line 1823 "parser.cog"
                                      

#line 1823 "parser.cog"
                                Parser

#line 1823 "parser.cog"
                                      * parser)
{


#line 1825 "parser.cog"
     

#line 1825 "parser.cog"
     auto stmt = 

#line 1825 "parser.cog"
                                          

#line 1825 "parser.cog"
                createObject<

#line 1825 "parser.cog"
                             ContinueStmt> ();


#line 1826 "parser.cog"
           

#line 1826 "parser.cog"
           

#line 1826 "parser.cog"
     expect(

#line 1826 "parser.cog"
            parser, 

#line 1826 "parser.cog"
                    kTokenCode_Semi);


#line 1827 "parser.cog"
     return 

#line 1827 "parser.cog"
            stmt;
}


#line 1830 "parser.cog"
 

#line 1830 "parser.cog"
                                           Syntax parseBuiltinAttr(

#line 1830 "parser.cog"
                                     

#line 1830 "parser.cog"
                               Parser

#line 1830 "parser.cog"
                                     * parser)
{


#line 1832 "parser.cog"
     

#line 1832 "parser.cog"
     auto attr = 

#line 1832 "parser.cog"
                                         

#line 1832 "parser.cog"
                createObject<

#line 1832 "parser.cog"
                             BuiltinAttr> ();


#line 1833 "parser.cog"
           

#line 1833 "parser.cog"
           

#line 1833 "parser.cog"
     expect(

#line 1833 "parser.cog"
            parser, 

#line 1833 "parser.cog"
                    kTokenCode_LParen);


#line 1834 "parser.cog"
         DEREF(

#line 1834 "parser.cog"
     attr).name = 

#line 1834 "parser.cog"
                                 

#line 1834 "parser.cog"
                 expectIdentifier(

#line 1834 "parser.cog"
                                  parser);


#line 1835 "parser.cog"
           

#line 1835 "parser.cog"
           

#line 1835 "parser.cog"
     expect(

#line 1835 "parser.cog"
            parser, 

#line 1835 "parser.cog"
                    kTokenCode_RParen);


#line 1836 "parser.cog"
     return 

#line 1836 "parser.cog"
            attr;
}


#line 1839 "parser.cog"
 

#line 1839 "parser.cog"
                                     ParamDecl parseParam(

#line 1839 "parser.cog"
                               

#line 1839 "parser.cog"
                         Parser

#line 1839 "parser.cog"
                               * parser)
{


#line 1841 "parser.cog"
     

#line 1841 "parser.cog"
     auto decl = 

#line 1841 "parser.cog"
                                       

#line 1841 "parser.cog"
                createObject<

#line 1841 "parser.cog"
                             ParamDecl> ();


#line 1842 "parser.cog"
                       

#line 1842 "parser.cog"
                       

#line 1842 "parser.cog"
     parseVarDeclCommon(

#line 1842 "parser.cog"
                        parser, 

#line 1842 "parser.cog"
                                decl);


#line 1843 "parser.cog"
     return 

#line 1843 "parser.cog"
            decl;
}


#line 1846 "parser.cog"
 void parseParams(

#line 1846 "parser.cog"
                                

#line 1846 "parser.cog"
                          Parser

#line 1846 "parser.cog"
                                * parser, 

#line 1846 "parser.cog"
                                         ContainerDecl decl)
{


#line 1848 "parser.cog"
     

#line 1848 "parser.cog"
     

#line 1848 "parser.cog"
                 SyntaxListBuilder<

#line 1848 "parser.cog"
                                   Decl>  params;


#line 1850 "parser.cog"
     switch(

#line 1850 "parser.cog"
                         

#line 1850 "parser.cog"
            peekTokenCode(

#line 1850 "parser.cog"
                          parser))
{
case 

#line 1852 "parser.cog"
          kTokenCode_RCurly:
case 

#line 1853 "parser.cog"
          kTokenCode_RParen:
case 

#line 1854 "parser.cog"
          kTokenCode_EndOfFile:
{


#line 1855 "parser.cog"
         return;
}
default:
{


#line 1858 "parser.cog"
         break;
}
}


#line 1862 "parser.cog"
     {
for(;;)
{
{


#line 1864 "parser.cog"
         

#line 1864 "parser.cog"
         auto param = 

#line 1864 "parser.cog"
                               

#line 1864 "parser.cog"
                     parseParam(

#line 1864 "parser.cog"
                                parser);


#line 1865 "parser.cog"
         if(

#line 1865 "parser.cog"
            param)
{


#line 1867 "parser.cog"
                       

#line 1867 "parser.cog"
                       

#line 1867 "parser.cog"
                   DEREF(

#line 1867 "parser.cog"
             params).add(

#line 1867 "parser.cog"
                        param);
}


#line 1870 "parser.cog"
                   

#line 1870 "parser.cog"
                   

#line 1870 "parser.cog"
         tryRecover(

#line 1870 "parser.cog"
                    parser);


#line 1872 "parser.cog"
         switch(

#line 1872 "parser.cog"
                             

#line 1872 "parser.cog"
                peekTokenCode(

#line 1872 "parser.cog"
                              parser))
{
case 

#line 1874 "parser.cog"
              kTokenCode_RCurly:
case 

#line 1875 "parser.cog"
              kTokenCode_RParen:
case 

#line 1876 "parser.cog"
              kTokenCode_EndOfFile:
{
{


#line 1878 "parser.cog"
                              

#line 1878 "parser.cog"
                     DEREF(

#line 1878 "parser.cog"
                 decl).getDecls() = 

#line 1878 "parser.cog"
                                   params;
}
}
{


#line 1880 "parser.cog"
             return;
}
default:
{


#line 1883 "parser.cog"
             break;
}
}


#line 1886 "parser.cog"
               

#line 1886 "parser.cog"
               

#line 1886 "parser.cog"
         expect(

#line 1886 "parser.cog"
                parser, 

#line 1886 "parser.cog"
                        kTokenCode_Comma);
}
}}


#line 1890 "parser.cog"
                  

#line 1890 "parser.cog"
         DEREF(

#line 1890 "parser.cog"
     decl).getDecls() = 

#line 1890 "parser.cog"
                       params;
}


#line 1895 "parser.cog"
 

#line 1895 "parser.cog"
                                        Syntax parseFuncDecl(

#line 1895 "parser.cog"
                                  

#line 1895 "parser.cog"
                            Parser

#line 1895 "parser.cog"
                                  * parser)
{


#line 1897 "parser.cog"
     

#line 1897 "parser.cog"
     auto decl = 

#line 1897 "parser.cog"
                                      

#line 1897 "parser.cog"
                createObject<

#line 1897 "parser.cog"
                             FuncDecl> ();


#line 1898 "parser.cog"
         DEREF(

#line 1898 "parser.cog"
     decl).loc = 

#line 1898 "parser.cog"
                       

#line 1898 "parser.cog"
                peekLoc(

#line 1898 "parser.cog"
                        parser);


#line 1900 "parser.cog"
         DEREF(

#line 1900 "parser.cog"
     decl).name = 

#line 1900 "parser.cog"
                                           

#line 1900 "parser.cog"
                 expectOperatorOrIdentifier(

#line 1900 "parser.cog"
                                            parser);


#line 1903 "parser.cog"
     

#line 1903 "parser.cog"
     auto result = 

#line 1903 "parser.cog"
                                         

#line 1903 "parser.cog"
                  maybeParseGenericParams(

#line 1903 "parser.cog"
                                          parser, 

#line 1903 "parser.cog"
                                                  decl);


#line 1905 "parser.cog"
              

#line 1905 "parser.cog"
              

#line 1905 "parser.cog"
     pushScope(

#line 1905 "parser.cog"
               parser, 

#line 1905 "parser.cog"
                       decl);


#line 1907 "parser.cog"
     if(

#line 1907 "parser.cog"
              

#line 1907 "parser.cog"
        expect(

#line 1907 "parser.cog"
               parser, 

#line 1907 "parser.cog"
                       kTokenCode_LParen))
{


#line 1909 "parser.cog"
                    

#line 1909 "parser.cog"
                    

#line 1909 "parser.cog"
         parseParams(

#line 1909 "parser.cog"
                     parser, 

#line 1909 "parser.cog"
                             decl);
}


#line 1911 "parser.cog"
           

#line 1911 "parser.cog"
           

#line 1911 "parser.cog"
     expect(

#line 1911 "parser.cog"
            parser, 

#line 1911 "parser.cog"
                    kTokenCode_RParen);


#line 1913 "parser.cog"
     if(

#line 1913 "parser.cog"
                 

#line 1913 "parser.cog"
        advanceIf(

#line 1913 "parser.cog"
                  parser, 

#line 1913 "parser.cog"
                          kTokenCode_Arrow))
{


#line 1915 "parser.cog"
             DEREF(

#line 1915 "parser.cog"
         decl).resultType = 

#line 1915 "parser.cog"
                                    

#line 1915 "parser.cog"
                           parseType(

#line 1915 "parser.cog"
                                     parser);
}


#line 1918 "parser.cog"
     if(

#line 1918 "parser.cog"
                     

#line 1918 "parser.cog"
        peekTokenCode(

#line 1918 "parser.cog"
                      parser, 

#line 1918 "parser.cog"
                              kTokenCode_LCurly))
{


#line 1920 "parser.cog"
             DEREF(

#line 1920 "parser.cog"
         decl).body = 

#line 1920 "parser.cog"
                                  

#line 1920 "parser.cog"
                     parseStmtBody(

#line 1920 "parser.cog"
                                   parser);
}
else
{


#line 1924 "parser.cog"
               

#line 1924 "parser.cog"
               

#line 1924 "parser.cog"
         expect(

#line 1924 "parser.cog"
                parser, 

#line 1924 "parser.cog"
                        kTokenCode_Semi);
}


#line 1927 "parser.cog"
             

#line 1927 "parser.cog"
             

#line 1927 "parser.cog"
     popScope(

#line 1927 "parser.cog"
              parser);


#line 1929 "parser.cog"
     return 

#line 1929 "parser.cog"
            result;
}


#line 1932 "parser.cog"
 

#line 1932 "parser.cog"
                                             Syntax parseSubscriptDecl(

#line 1932 "parser.cog"
                                       

#line 1932 "parser.cog"
                                 Parser

#line 1932 "parser.cog"
                                       * parser)
{


#line 1934 "parser.cog"
     

#line 1934 "parser.cog"
     auto decl = 

#line 1934 "parser.cog"
                                           

#line 1934 "parser.cog"
                createObject<

#line 1934 "parser.cog"
                             SubscriptDecl> ();


#line 1936 "parser.cog"
              

#line 1936 "parser.cog"
              

#line 1936 "parser.cog"
     pushScope(

#line 1936 "parser.cog"
               parser, 

#line 1936 "parser.cog"
                       decl);


#line 1938 "parser.cog"
     if(

#line 1938 "parser.cog"
              

#line 1938 "parser.cog"
        expect(

#line 1938 "parser.cog"
               parser, 

#line 1938 "parser.cog"
                       kTokenCode_LParen))
{


#line 1940 "parser.cog"
                    

#line 1940 "parser.cog"
                    

#line 1940 "parser.cog"
         parseParams(

#line 1940 "parser.cog"
                     parser, 

#line 1940 "parser.cog"
                             decl);
}


#line 1942 "parser.cog"
           

#line 1942 "parser.cog"
           

#line 1942 "parser.cog"
     expect(

#line 1942 "parser.cog"
            parser, 

#line 1942 "parser.cog"
                    kTokenCode_RParen);


#line 1944 "parser.cog"
     if(

#line 1944 "parser.cog"
                 

#line 1944 "parser.cog"
        advanceIf(

#line 1944 "parser.cog"
                  parser, 

#line 1944 "parser.cog"
                          kTokenCode_Arrow))
{


#line 1946 "parser.cog"
             DEREF(

#line 1946 "parser.cog"
         decl).resultType = 

#line 1946 "parser.cog"
                                    

#line 1946 "parser.cog"
                           parseType(

#line 1946 "parser.cog"
                                     parser);
}


#line 1949 "parser.cog"
     if(

#line 1949 "parser.cog"
                     

#line 1949 "parser.cog"
        peekTokenCode(

#line 1949 "parser.cog"
                      parser, 

#line 1949 "parser.cog"
                              kTokenCode_LCurly))
{


#line 1951 "parser.cog"
             DEREF(

#line 1951 "parser.cog"
         decl).body = 

#line 1951 "parser.cog"
                                  

#line 1951 "parser.cog"
                     parseStmtBody(

#line 1951 "parser.cog"
                                   parser);
}
else
{


#line 1955 "parser.cog"
               

#line 1955 "parser.cog"
               

#line 1955 "parser.cog"
         expect(

#line 1955 "parser.cog"
                parser, 

#line 1955 "parser.cog"
                        kTokenCode_Semi);
}


#line 1958 "parser.cog"
             

#line 1958 "parser.cog"
             

#line 1958 "parser.cog"
     popScope(

#line 1958 "parser.cog"
              parser);


#line 1960 "parser.cog"
     return 

#line 1960 "parser.cog"
            decl;
}


#line 1963 "parser.cog"
 

#line 1963 "parser.cog"
                                               Syntax parseInitializerDecl(

#line 1963 "parser.cog"
                                         

#line 1963 "parser.cog"
                                   Parser

#line 1963 "parser.cog"
                                         * parser)
{


#line 1965 "parser.cog"
     

#line 1965 "parser.cog"
     auto decl = 

#line 1965 "parser.cog"
                                             

#line 1965 "parser.cog"
                createObject<

#line 1965 "parser.cog"
                             InitializerDecl> ();


#line 1967 "parser.cog"
              

#line 1967 "parser.cog"
              

#line 1967 "parser.cog"
     pushScope(

#line 1967 "parser.cog"
               parser, 

#line 1967 "parser.cog"
                       decl);


#line 1969 "parser.cog"
     if(

#line 1969 "parser.cog"
              

#line 1969 "parser.cog"
        expect(

#line 1969 "parser.cog"
               parser, 

#line 1969 "parser.cog"
                       kTokenCode_LParen))
{


#line 1971 "parser.cog"
                    

#line 1971 "parser.cog"
                    

#line 1971 "parser.cog"
         parseParams(

#line 1971 "parser.cog"
                     parser, 

#line 1971 "parser.cog"
                             decl);
}


#line 1973 "parser.cog"
           

#line 1973 "parser.cog"
           

#line 1973 "parser.cog"
     expect(

#line 1973 "parser.cog"
            parser, 

#line 1973 "parser.cog"
                    kTokenCode_RParen);


#line 1976 "parser.cog"
     if(

#line 1976 "parser.cog"
                 

#line 1976 "parser.cog"
        advanceIf(

#line 1976 "parser.cog"
                  parser, 

#line 1976 "parser.cog"
                          kTokenCode_Arrow))
{


#line 1978 "parser.cog"
             DEREF(

#line 1978 "parser.cog"
         decl).resultType = 

#line 1978 "parser.cog"
                                    

#line 1978 "parser.cog"
                           parseType(

#line 1978 "parser.cog"
                                     parser);
}


#line 1981 "parser.cog"
     if(

#line 1981 "parser.cog"
                     

#line 1981 "parser.cog"
        peekTokenCode(

#line 1981 "parser.cog"
                      parser, 

#line 1981 "parser.cog"
                              kTokenCode_LCurly))
{


#line 1983 "parser.cog"
             DEREF(

#line 1983 "parser.cog"
         decl).body = 

#line 1983 "parser.cog"
                                  

#line 1983 "parser.cog"
                     parseStmtBody(

#line 1983 "parser.cog"
                                   parser);
}
else
{


#line 1987 "parser.cog"
               

#line 1987 "parser.cog"
               

#line 1987 "parser.cog"
         expect(

#line 1987 "parser.cog"
                parser, 

#line 1987 "parser.cog"
                        kTokenCode_Semi);
}


#line 1990 "parser.cog"
             

#line 1990 "parser.cog"
             

#line 1990 "parser.cog"
     popScope(

#line 1990 "parser.cog"
              parser);


#line 1992 "parser.cog"
     return 

#line 1992 "parser.cog"
            decl;
}


#line 1995 "parser.cog"
 

#line 1995 "parser.cog"
                                        Syntax parseThisExpr(

#line 1995 "parser.cog"
                                  

#line 1995 "parser.cog"
                            Parser

#line 1995 "parser.cog"
                                  * parser)
{


#line 1997 "parser.cog"
     

#line 1997 "parser.cog"
     auto expr = 

#line 1997 "parser.cog"
                                      

#line 1997 "parser.cog"
                createObject<

#line 1997 "parser.cog"
                             ThisExpr> ();


#line 1998 "parser.cog"
         DEREF(

#line 1998 "parser.cog"
     expr).scope = 

#line 1998 "parser.cog"
                        DEREF(

#line 1998 "parser.cog"
                  parser).scope;


#line 1999 "parser.cog"
     return 

#line 1999 "parser.cog"
            expr;
}


#line 2002 "parser.cog"
 

#line 2002 "parser.cog"
                                        Syntax parseCastExpr(

#line 2002 "parser.cog"
                                  

#line 2002 "parser.cog"
                            Parser

#line 2002 "parser.cog"
                                  * parser)
{


#line 2004 "parser.cog"
                        

#line 2004 "parser.cog"
                        

#line 2004 "parser.cog"
     tryParseGenericOpen(

#line 2004 "parser.cog"
                         parser);


#line 2005 "parser.cog"
     

#line 2005 "parser.cog"
     auto args = 

#line 2005 "parser.cog"
                                

#line 2005 "parser.cog"
                parseGenericArgs(

#line 2005 "parser.cog"
                                 parser);


#line 2006 "parser.cog"
                       

#line 2006 "parser.cog"
                       

#line 2006 "parser.cog"
     expectGenericClose(

#line 2006 "parser.cog"
                        parser);


#line 2008 "parser.cog"
     

#line 2008 "parser.cog"
     auto expr = 

#line 2008 "parser.cog"
                                      

#line 2008 "parser.cog"
                createObject<

#line 2008 "parser.cog"
                             CastExpr> ();


#line 2009 "parser.cog"
                DEREF(

#line 2009 "parser.cog"
         DEREF(

#line 2009 "parser.cog"
     expr).toType).exp = 

#line 2009 "parser.cog"
                                DEREF(

#line 2009 "parser.cog"
                           DEREF(

#line 2009 "parser.cog"
                       args).head).exp;


#line 2010 "parser.cog"
           

#line 2010 "parser.cog"
           

#line 2010 "parser.cog"
     expect(

#line 2010 "parser.cog"
            parser, 

#line 2010 "parser.cog"
                    kTokenCode_LParen);


#line 2011 "parser.cog"
         DEREF(

#line 2011 "parser.cog"
     expr).arg = 

#line 2011 "parser.cog"
                        

#line 2011 "parser.cog"
                parseExp(

#line 2011 "parser.cog"
                         parser);


#line 2012 "parser.cog"
           

#line 2012 "parser.cog"
           

#line 2012 "parser.cog"
     expect(

#line 2012 "parser.cog"
            parser, 

#line 2012 "parser.cog"
                    kTokenCode_RParen);


#line 2014 "parser.cog"
     return 

#line 2014 "parser.cog"
            expr;
}


#line 2017 "parser.cog"
 

#line 2022 "parser.cog"
        SyntaxDecl createSyntaxDecl(

#line 2018 "parser.cog"
              Session session, 

#line 2019 "parser.cog"
           ConstPtr<

#line 2019 "parser.cog"
                    Char>  name, 

#line 2020 "parser.cog"
               SyntaxCallback callback, 

#line 2021 "parser.cog"
                       

#line 2021 "parser.cog"
                  Class

#line 2021 "parser.cog"
                       * syntaxClass)
{


#line 2024 "parser.cog"
     

#line 2024 "parser.cog"
     auto syntaxDecl = 

#line 2024 "parser.cog"
                                              

#line 2024 "parser.cog"
                      createObject<

#line 2024 "parser.cog"
                                   SyntaxDecl> ();


#line 2025 "parser.cog"
               DEREF(

#line 2025 "parser.cog"
     syntaxDecl).name = 

#line 2025 "parser.cog"
                              

#line 2025 "parser.cog"
                       getName(

#line 2025 "parser.cog"
                               session, 

#line 2025 "parser.cog"
                                               

#line 2025 "parser.cog"
                                        UNCONST(

#line 2025 "parser.cog"
                                                name));


#line 2026 "parser.cog"
               DEREF(

#line 2026 "parser.cog"
     syntaxDecl).syntaxClass = 

#line 2026 "parser.cog"
                              syntaxClass;


#line 2027 "parser.cog"
               DEREF(

#line 2027 "parser.cog"
     syntaxDecl).callback = 

#line 2027 "parser.cog"
                           callback;


#line 2028 "parser.cog"
     return 

#line 2028 "parser.cog"
            syntaxDecl;
}


#line 2031 "parser.cog"
 

#line 2031 "parser.cog"
      template<typename T > 

#line 2035 "parser.cog"
        SyntaxDecl createSyntaxDecl(

#line 2032 "parser.cog"
              Session session, 

#line 2033 "parser.cog"
           ConstPtr<

#line 2033 "parser.cog"
                    Char>  name, 

#line 2034 "parser.cog"
               SyntaxCallback callback)
{


#line 2037 "parser.cog"
     return 

#line 2037 "parser.cog"
                            

#line 2037 "parser.cog"
            createSyntaxDecl(

#line 2037 "parser.cog"
                             session, 

#line 2037 "parser.cog"
                                      name, 

#line 2037 "parser.cog"
                                            callback, 

#line 2037 "parser.cog"
                                                                 

#line 2037 "parser.cog"
                                                      getClass<

#line 2037 "parser.cog"
                                                               T> ());
}


#line 2040 "parser.cog"
 void parseFileIntoModule(

#line 2041 "parser.cog"
              Session session, 

#line 2042 "parser.cog"
                     

#line 2042 "parser.cog"
           SourceFile

#line 2042 "parser.cog"
                     * file, 

#line 2043 "parser.cog"
                 ModuleDecl moduleDecl)
{


#line 2045 "parser.cog"
     

#line 2045 "parser.cog"
     

#line 2045 "parser.cog"
                 Parser parser;


#line 2046 "parser.cog"
                     

#line 2046 "parser.cog"
                     

#line 2046 "parser.cog"
     initializeParser(

#line 2046 "parser.cog"
                      

#line 2046 "parser.cog"
                      &

#line 2046 "parser.cog"
                       parser, 

#line 2046 "parser.cog"
                               session, 

#line 2046 "parser.cog"
                                        file);


#line 2049 "parser.cog"
     

#line 2049 "parser.cog"
     

#line 2049 "parser.cog"
                         SyntaxListBuilder<

#line 2049 "parser.cog"
                                           Decl>  moduleDeclList;


#line 2050 "parser.cog"
                   DEREF(

#line 2050 "parser.cog"
     moduleDeclList).head = 

#line 2050 "parser.cog"
                                                DEREF(

#line 2050 "parser.cog"
                                              

#line 2050 "parser.cog"
                                     DEREF(

#line 2050 "parser.cog"
                           moduleDecl).getDecls()).head;


#line 2054 "parser.cog"
     if(

#line 2054 "parser.cog"
                      DEREF(

#line 2054 "parser.cog"
        moduleDeclList).head)
{


#line 2056 "parser.cog"
                       DEREF(

#line 2056 "parser.cog"
         moduleDeclList).link = 

#line 2056 "parser.cog"
                               cast<

#line 2056 "parser.cog"
                                    Ptr<

#line 2056 "parser.cog"
                                        Decl> >(

#line 2056 "parser.cog"
                                                       DEREF(

#line 2056 "parser.cog"
                                                session).moduleDeclLink);
}
else
{


#line 2060 "parser.cog"
                       DEREF(

#line 2060 "parser.cog"
         moduleDeclList).link = 

#line 2060 "parser.cog"
                               

#line 2060 "parser.cog"
                               &

#line 2060 "parser.cog"
                                              DEREF(

#line 2060 "parser.cog"
                                moduleDeclList).head;
}


#line 2067 "parser.cog"
     

#line 2067 "parser.cog"
     auto globals = 

#line 2067 "parser.cog"
                                              

#line 2067 "parser.cog"
                   createObject<

#line 2067 "parser.cog"
                                ContainerDecl> ();


#line 2068 "parser.cog"
     

#line 2068 "parser.cog"
     

#line 2068 "parser.cog"
                      SyntaxListBuilder<

#line 2068 "parser.cog"
                                        Decl>  globalDecls;


#line 2071 "parser.cog"
                    

#line 2071 "parser.cog"
                    

#line 2071 "parser.cog"
                DEREF(

#line 2071 "parser.cog"
     globalDecls).add(

#line 2071 "parser.cog"
                                           

#line 2071 "parser.cog"
                     createSyntaxDecl<

#line 2071 "parser.cog"
                                      Decl> (

#line 2071 "parser.cog"
                                            session, 

#line 2071 "parser.cog"
                                                     "import", 

#line 2071 "parser.cog"
                                                               

#line 2071 "parser.cog"
                                                               &

#line 2071 "parser.cog"
                                                                parseImportDecl));


#line 2072 "parser.cog"
                    

#line 2072 "parser.cog"
                    

#line 2072 "parser.cog"
                DEREF(

#line 2072 "parser.cog"
     globalDecls).add(

#line 2072 "parser.cog"
                                           

#line 2072 "parser.cog"
                     createSyntaxDecl<

#line 2072 "parser.cog"
                                      Decl> (

#line 2072 "parser.cog"
                                            session, 

#line 2072 "parser.cog"
                                                     "class", 

#line 2072 "parser.cog"
                                                              

#line 2072 "parser.cog"
                                                              &

#line 2072 "parser.cog"
                                                               parseClassDecl));


#line 2073 "parser.cog"
                    

#line 2073 "parser.cog"
                    

#line 2073 "parser.cog"
                DEREF(

#line 2073 "parser.cog"
     globalDecls).add(

#line 2073 "parser.cog"
                                           

#line 2073 "parser.cog"
                     createSyntaxDecl<

#line 2073 "parser.cog"
                                      Decl> (

#line 2073 "parser.cog"
                                            session, 

#line 2073 "parser.cog"
                                                     "struct", 

#line 2073 "parser.cog"
                                                               

#line 2073 "parser.cog"
                                                               &

#line 2073 "parser.cog"
                                                                parseStructDecl));


#line 2074 "parser.cog"
                    

#line 2074 "parser.cog"
                    

#line 2074 "parser.cog"
                DEREF(

#line 2074 "parser.cog"
     globalDecls).add(

#line 2074 "parser.cog"
                                           

#line 2074 "parser.cog"
                     createSyntaxDecl<

#line 2074 "parser.cog"
                                      Decl> (

#line 2074 "parser.cog"
                                            session, 

#line 2074 "parser.cog"
                                                     "enum", 

#line 2074 "parser.cog"
                                                             

#line 2074 "parser.cog"
                                                             &

#line 2074 "parser.cog"
                                                              parseEnumDecl));


#line 2075 "parser.cog"
                    

#line 2075 "parser.cog"
                    

#line 2075 "parser.cog"
                DEREF(

#line 2075 "parser.cog"
     globalDecls).add(

#line 2075 "parser.cog"
                                           

#line 2075 "parser.cog"
                     createSyntaxDecl<

#line 2075 "parser.cog"
                                      Decl> (

#line 2075 "parser.cog"
                                            session, 

#line 2075 "parser.cog"
                                                     "var", 

#line 2075 "parser.cog"
                                                            

#line 2075 "parser.cog"
                                                            &

#line 2075 "parser.cog"
                                                             parseVarDecl));


#line 2076 "parser.cog"
                    

#line 2076 "parser.cog"
                    

#line 2076 "parser.cog"
                DEREF(

#line 2076 "parser.cog"
     globalDecls).add(

#line 2076 "parser.cog"
                                           

#line 2076 "parser.cog"
                     createSyntaxDecl<

#line 2076 "parser.cog"
                                      Decl> (

#line 2076 "parser.cog"
                                            session, 

#line 2076 "parser.cog"
                                                     "let", 

#line 2076 "parser.cog"
                                                            

#line 2076 "parser.cog"
                                                            &

#line 2076 "parser.cog"
                                                             parseLetDecl));


#line 2077 "parser.cog"
                    

#line 2077 "parser.cog"
                    

#line 2077 "parser.cog"
                DEREF(

#line 2077 "parser.cog"
     globalDecls).add(

#line 2077 "parser.cog"
                                           

#line 2077 "parser.cog"
                     createSyntaxDecl<

#line 2077 "parser.cog"
                                      Decl> (

#line 2077 "parser.cog"
                                            session, 

#line 2077 "parser.cog"
                                                     "func", 

#line 2077 "parser.cog"
                                                             

#line 2077 "parser.cog"
                                                             &

#line 2077 "parser.cog"
                                                              parseFuncDecl));


#line 2078 "parser.cog"
                    

#line 2078 "parser.cog"
                    

#line 2078 "parser.cog"
                DEREF(

#line 2078 "parser.cog"
     globalDecls).add(

#line 2078 "parser.cog"
                                           

#line 2078 "parser.cog"
                     createSyntaxDecl<

#line 2078 "parser.cog"
                                      Decl> (

#line 2078 "parser.cog"
                                            session, 

#line 2078 "parser.cog"
                                                     "subscript", 

#line 2078 "parser.cog"
                                                                  

#line 2078 "parser.cog"
                                                                  &

#line 2078 "parser.cog"
                                                                   parseSubscriptDecl));


#line 2079 "parser.cog"
                    

#line 2079 "parser.cog"
                    

#line 2079 "parser.cog"
                DEREF(

#line 2079 "parser.cog"
     globalDecls).add(

#line 2079 "parser.cog"
                                           

#line 2079 "parser.cog"
                     createSyntaxDecl<

#line 2079 "parser.cog"
                                      Decl> (

#line 2079 "parser.cog"
                                            session, 

#line 2079 "parser.cog"
                                                     "init", 

#line 2079 "parser.cog"
                                                             

#line 2079 "parser.cog"
                                                             &

#line 2079 "parser.cog"
                                                              parseInitializerDecl));


#line 2080 "parser.cog"
                    

#line 2080 "parser.cog"
                    

#line 2080 "parser.cog"
                DEREF(

#line 2080 "parser.cog"
     globalDecls).add(

#line 2080 "parser.cog"
                                           

#line 2080 "parser.cog"
                     createSyntaxDecl<

#line 2080 "parser.cog"
                                      Decl> (

#line 2080 "parser.cog"
                                            session, 

#line 2080 "parser.cog"
                                                     "typealias", 

#line 2080 "parser.cog"
                                                                  

#line 2080 "parser.cog"
                                                                  &

#line 2080 "parser.cog"
                                                                   parseTypeAliasDecl));


#line 2081 "parser.cog"
                    

#line 2081 "parser.cog"
                    

#line 2081 "parser.cog"
                DEREF(

#line 2081 "parser.cog"
     globalDecls).add(

#line 2081 "parser.cog"
                                           

#line 2081 "parser.cog"
                     createSyntaxDecl<

#line 2081 "parser.cog"
                                      Stmt> (

#line 2081 "parser.cog"
                                            session, 

#line 2081 "parser.cog"
                                                     "if", 

#line 2081 "parser.cog"
                                                           

#line 2081 "parser.cog"
                                                           &

#line 2081 "parser.cog"
                                                            parseIfStmt));


#line 2082 "parser.cog"
                    

#line 2082 "parser.cog"
                    

#line 2082 "parser.cog"
                DEREF(

#line 2082 "parser.cog"
     globalDecls).add(

#line 2082 "parser.cog"
                                           

#line 2082 "parser.cog"
                     createSyntaxDecl<

#line 2082 "parser.cog"
                                      Stmt> (

#line 2082 "parser.cog"
                                            session, 

#line 2082 "parser.cog"
                                                     "while", 

#line 2082 "parser.cog"
                                                              

#line 2082 "parser.cog"
                                                              &

#line 2082 "parser.cog"
                                                               parseWhileStmt));


#line 2083 "parser.cog"
                    

#line 2083 "parser.cog"
                    

#line 2083 "parser.cog"
                DEREF(

#line 2083 "parser.cog"
     globalDecls).add(

#line 2083 "parser.cog"
                                           

#line 2083 "parser.cog"
                     createSyntaxDecl<

#line 2083 "parser.cog"
                                      Stmt> (

#line 2083 "parser.cog"
                                            session, 

#line 2083 "parser.cog"
                                                     "for", 

#line 2083 "parser.cog"
                                                            

#line 2083 "parser.cog"
                                                            &

#line 2083 "parser.cog"
                                                             parseForStmt));


#line 2084 "parser.cog"
                    

#line 2084 "parser.cog"
                    

#line 2084 "parser.cog"
                DEREF(

#line 2084 "parser.cog"
     globalDecls).add(

#line 2084 "parser.cog"
                                           

#line 2084 "parser.cog"
                     createSyntaxDecl<

#line 2084 "parser.cog"
                                      Stmt> (

#line 2084 "parser.cog"
                                            session, 

#line 2084 "parser.cog"
                                                     "foreach", 

#line 2084 "parser.cog"
                                                                

#line 2084 "parser.cog"
                                                                &

#line 2084 "parser.cog"
                                                                 parseForEachStmt));


#line 2085 "parser.cog"
                    

#line 2085 "parser.cog"
                    

#line 2085 "parser.cog"
                DEREF(

#line 2085 "parser.cog"
     globalDecls).add(

#line 2085 "parser.cog"
                                           

#line 2085 "parser.cog"
                     createSyntaxDecl<

#line 2085 "parser.cog"
                                      Stmt> (

#line 2085 "parser.cog"
                                            session, 

#line 2085 "parser.cog"
                                                     "return", 

#line 2085 "parser.cog"
                                                               

#line 2085 "parser.cog"
                                                               &

#line 2085 "parser.cog"
                                                                parseReturnStmt));


#line 2086 "parser.cog"
                    

#line 2086 "parser.cog"
                    

#line 2086 "parser.cog"
                DEREF(

#line 2086 "parser.cog"
     globalDecls).add(

#line 2086 "parser.cog"
                                           

#line 2086 "parser.cog"
                     createSyntaxDecl<

#line 2086 "parser.cog"
                                      Stmt> (

#line 2086 "parser.cog"
                                            session, 

#line 2086 "parser.cog"
                                                     "break", 

#line 2086 "parser.cog"
                                                              

#line 2086 "parser.cog"
                                                              &

#line 2086 "parser.cog"
                                                               parseBreakStmt));


#line 2087 "parser.cog"
                    

#line 2087 "parser.cog"
                    

#line 2087 "parser.cog"
                DEREF(

#line 2087 "parser.cog"
     globalDecls).add(

#line 2087 "parser.cog"
                                           

#line 2087 "parser.cog"
                     createSyntaxDecl<

#line 2087 "parser.cog"
                                      Stmt> (

#line 2087 "parser.cog"
                                            session, 

#line 2087 "parser.cog"
                                                     "continue", 

#line 2087 "parser.cog"
                                                                 

#line 2087 "parser.cog"
                                                                 &

#line 2087 "parser.cog"
                                                                  parseContinueStmt));


#line 2088 "parser.cog"
                    

#line 2088 "parser.cog"
                    

#line 2088 "parser.cog"
                DEREF(

#line 2088 "parser.cog"
     globalDecls).add(

#line 2088 "parser.cog"
                                           

#line 2088 "parser.cog"
                     createSyntaxDecl<

#line 2088 "parser.cog"
                                      Stmt> (

#line 2088 "parser.cog"
                                            session, 

#line 2088 "parser.cog"
                                                     "switch", 

#line 2088 "parser.cog"
                                                               

#line 2088 "parser.cog"
                                                               &

#line 2088 "parser.cog"
                                                                parseSwitchStmt));


#line 2089 "parser.cog"
                    

#line 2089 "parser.cog"
                    

#line 2089 "parser.cog"
                DEREF(

#line 2089 "parser.cog"
     globalDecls).add(

#line 2089 "parser.cog"
                                           

#line 2089 "parser.cog"
                     createSyntaxDecl<

#line 2089 "parser.cog"
                                      Attr> (

#line 2089 "parser.cog"
                                            session, 

#line 2089 "parser.cog"
                                                     "@__builtin", 

#line 2089 "parser.cog"
                                                                   

#line 2089 "parser.cog"
                                                                   &

#line 2089 "parser.cog"
                                                                    parseBuiltinAttr));


#line 2091 "parser.cog"
                    

#line 2091 "parser.cog"
                    

#line 2091 "parser.cog"
                DEREF(

#line 2091 "parser.cog"
     globalDecls).add(

#line 2091 "parser.cog"
                                          

#line 2091 "parser.cog"
                     createSyntaxDecl<

#line 2091 "parser.cog"
                                      Exp> (

#line 2091 "parser.cog"
                                           session, 

#line 2091 "parser.cog"
                                                    "this", 

#line 2091 "parser.cog"
                                                            

#line 2091 "parser.cog"
                                                            &

#line 2091 "parser.cog"
                                                             parseThisExpr));


#line 2092 "parser.cog"
                    

#line 2092 "parser.cog"
                    

#line 2092 "parser.cog"
                DEREF(

#line 2092 "parser.cog"
     globalDecls).add(

#line 2092 "parser.cog"
                                          

#line 2092 "parser.cog"
                     createSyntaxDecl<

#line 2092 "parser.cog"
                                      Exp> (

#line 2092 "parser.cog"
                                           session, 

#line 2092 "parser.cog"
                                                    "cast", 

#line 2092 "parser.cog"
                                                            

#line 2092 "parser.cog"
                                                            &

#line 2092 "parser.cog"
                                                             parseCastExpr));


#line 2094 "parser.cog"
                     

#line 2094 "parser.cog"
            DEREF(

#line 2094 "parser.cog"
     globals).getDecls() = 

#line 2094 "parser.cog"
                          globalDecls;


#line 2096 "parser.cog"
     

#line 2096 "parser.cog"
     auto globalScope = 

#line 2096 "parser.cog"
                                   

#line 2096 "parser.cog"
                       alloc<

#line 2096 "parser.cog"
                             Scope> ();


#line 2097 "parser.cog"
                DEREF(

#line 2097 "parser.cog"
     globalScope).parent = 

#line 2097 "parser.cog"
                          0;


#line 2098 "parser.cog"
                           DEREF(

#line 2098 "parser.cog"
                DEREF(

#line 2098 "parser.cog"
     globalScope).directLink).container = 

#line 2098 "parser.cog"
                                        globals;


#line 2100 "parser.cog"
           DEREF(

#line 2100 "parser.cog"
     parser).scope = 

#line 2100 "parser.cog"
                    globalScope;


#line 2106 "parser.cog"
              

#line 2106 "parser.cog"
              

#line 2106 "parser.cog"
     pushScope(

#line 2106 "parser.cog"
               

#line 2106 "parser.cog"
               &

#line 2106 "parser.cog"
                parser, 

#line 2106 "parser.cog"
                        moduleDecl);


#line 2107 "parser.cog"
     

#line 2107 "parser.cog"
     auto fileDecls = 

#line 2107 "parser.cog"
                                     

#line 2107 "parser.cog"
                     parseDeclsInBody(

#line 2107 "parser.cog"
                                      

#line 2107 "parser.cog"
                                      &

#line 2107 "parser.cog"
                                       parser);


#line 2108 "parser.cog"
     for(auto dd : 

#line 2108 "parser.cog"
                   fileDecls)
{


#line 2109 "parser.cog"
           DEREF(

#line 2109 "parser.cog"
         dd).parent = 

#line 2109 "parser.cog"
                     moduleDecl;
}


#line 2110 "parser.cog"
             

#line 2110 "parser.cog"
             

#line 2110 "parser.cog"
     popScope(

#line 2110 "parser.cog"
              

#line 2110 "parser.cog"
              &

#line 2110 "parser.cog"
               parser);


#line 2112 "parser.cog"
           

#line 2112 "parser.cog"
           

#line 2112 "parser.cog"
     expect(

#line 2112 "parser.cog"
            

#line 2112 "parser.cog"
            &

#line 2112 "parser.cog"
             parser, 

#line 2112 "parser.cog"
                     kTokenCode_EndOfFile);


#line 2114 "parser.cog"
                          

#line 2114 "parser.cog"
                          

#line 2114 "parser.cog"
                   DEREF(

#line 2114 "parser.cog"
     moduleDeclList).append(

#line 2114 "parser.cog"
                           fileDecls);


#line 2116 "parser.cog"
                        

#line 2116 "parser.cog"
               DEREF(

#line 2116 "parser.cog"
     moduleDecl).getDecls() = 

#line 2116 "parser.cog"
                             moduleDeclList;


#line 2118 "parser.cog"
                   

#line 2118 "parser.cog"
                   

#line 2118 "parser.cog"
     finalizeParser(

#line 2118 "parser.cog"
                    

#line 2118 "parser.cog"
                    &

#line 2118 "parser.cog"
                     parser);
}


#line 2121 "parser.cog"
 void parseFile(

#line 2122 "parser.cog"
              Session session, 

#line 2123 "parser.cog"
                     

#line 2123 "parser.cog"
           SourceFile

#line 2123 "parser.cog"
                     * file)
{


#line 2128 "parser.cog"
     

#line 2128 "parser.cog"
     auto moduleDecl = 

#line 2128 "parser.cog"
                             DEREF(

#line 2128 "parser.cog"
                      session).moduleDecl;


#line 2129 "parser.cog"
     if(

#line 2129 "parser.cog"
        

#line 2129 "parser.cog"
        !

#line 2129 "parser.cog"
         moduleDecl)
{


#line 2131 "parser.cog"
         moduleDecl = 

#line 2131 "parser.cog"
                                              

#line 2131 "parser.cog"
                      createObject<

#line 2131 "parser.cog"
                                   ModuleDecl> ();


#line 2132 "parser.cog"
                   DEREF(

#line 2132 "parser.cog"
         moduleDecl).name = 

#line 2132 "parser.cog"
                                        

#line 2132 "parser.cog"
                           getModuleName(

#line 2132 "parser.cog"
                                         session);


#line 2133 "parser.cog"
                DEREF(

#line 2133 "parser.cog"
         session).moduleDecl = 

#line 2133 "parser.cog"
                              moduleDecl;


#line 2134 "parser.cog"
                DEREF(

#line 2134 "parser.cog"
         session).moduleDeclLink = 

#line 2134 "parser.cog"
                                  

#line 2134 "parser.cog"
                                  &

#line 2134 "parser.cog"
                                                        DEREF(

#line 2134 "parser.cog"
                                                      

#line 2134 "parser.cog"
                                             DEREF(

#line 2134 "parser.cog"
                                   moduleDecl).getDecls()).head;
}


#line 2137 "parser.cog"
                        

#line 2137 "parser.cog"
                        

#line 2137 "parser.cog"
     parseFileIntoModule(

#line 2137 "parser.cog"
                         session, 

#line 2137 "parser.cog"
                                  file, 

#line 2137 "parser.cog"
                                        moduleDecl);
}


#line 15 "scope.cog"
 void lookupDirectImpl(

#line 16 "scope.cog"
             ContainerStmt container, 

#line 17 "scope.cog"
        Ptr<

#line 17 "scope.cog"
            Name>  name, 

#line 18 "scope.cog"
            Ptr<

#line 18 "scope.cog"
                LookupResult>  ioResult)
{


#line 23 "scope.cog"
     for(auto dd : 

#line 23 "scope.cog"
                                     

#line 23 "scope.cog"
                            DEREF(

#line 23 "scope.cog"
                   container).getDecls())
{
{


#line 25 "scope.cog"
         if(

#line 25 "scope.cog"
                    

#line 25 "scope.cog"
              DEREF(

#line 25 "scope.cog"
            dd).name 

#line 25 "scope.cog"
                    == 

#line 25 "scope.cog"
                       name)
{


#line 27 "scope.cog"
                                  

#line 27 "scope.cog"
                                  

#line 27 "scope.cog"
                           DEREF(

#line 27 "scope.cog"
                     DEREF(

#line 27 "scope.cog"
             ioResult).items).append(

#line 27 "scope.cog"
                                                   

#line 27 "scope.cog"
                                   LookupResultItem(

#line 27 "scope.cog"
                                                    dd));
}
}
}
}


#line 32 "scope.cog"
 

#line 35 "scope.cog"
     LookupResult lookupDirect(

#line 33 "scope.cog"
             ContainerStmt container, 

#line 34 "scope.cog"
        Ptr<

#line 34 "scope.cog"
            Name>  name)
{


#line 37 "scope.cog"
     

#line 37 "scope.cog"
     

#line 37 "scope.cog"
                  LookupResult result;


#line 38 "scope.cog"
                     

#line 38 "scope.cog"
                     

#line 38 "scope.cog"
     lookupDirectImpl(

#line 38 "scope.cog"
                      container, 

#line 38 "scope.cog"
                                 name, 

#line 38 "scope.cog"
                                       

#line 38 "scope.cog"
                                       &

#line 38 "scope.cog"
                                        result);


#line 39 "scope.cog"
     return 

#line 39 "scope.cog"
            result;
}


#line 42 "scope.cog"
 

#line 45 "scope.cog"
     LookupResult lookupDirect(

#line 43 "scope.cog"
         Ptr<

#line 43 "scope.cog"
             Scope>  scope, 

#line 44 "scope.cog"
        Ptr<

#line 44 "scope.cog"
            Name>  name)
{


#line 47 "scope.cog"
     

#line 47 "scope.cog"
     

#line 47 "scope.cog"
                  LookupResult result;


#line 48 "scope.cog"
     {


#line 48 "scope.cog"
         

#line 48 "scope.cog"
         auto ll = 

#line 48 "scope.cog"
                  

#line 48 "scope.cog"
                  &

#line 48 "scope.cog"
                        DEREF(

#line 48 "scope.cog"
                   scope).directLink;
for(;

#line 48 "scope.cog"
                                     ll;

#line 48 "scope.cog"
                                         ll = 

#line 48 "scope.cog"
                                                DEREF(

#line 48 "scope.cog"
                                              ll).next)
{
{


#line 50 "scope.cog"
                         

#line 50 "scope.cog"
                         

#line 50 "scope.cog"
         lookupDirectImpl(

#line 51 "scope.cog"
               DEREF(

#line 51 "scope.cog"
             ll).container, 

#line 52 "scope.cog"
             name, 

#line 53 "scope.cog"
             

#line 53 "scope.cog"
             &

#line 53 "scope.cog"
              result);
}
}}


#line 55 "scope.cog"
     return 

#line 55 "scope.cog"
            result;
}


#line 58 "scope.cog"
 

#line 61 "scope.cog"
     LookupResult lookup(

#line 59 "scope.cog"
         Ptr<

#line 59 "scope.cog"
             Scope>  scope, 

#line 60 "scope.cog"
        Ptr<

#line 60 "scope.cog"
            Name>  name)
{


#line 63 "scope.cog"
  {


#line 63 "scope.cog"
      

#line 63 "scope.cog"
      auto ss = 

#line 63 "scope.cog"
               scope;
for(;

#line 63 "scope.cog"
                      ss;

#line 63 "scope.cog"
                          ss = 

#line 63 "scope.cog"
                                 DEREF(

#line 63 "scope.cog"
                               ss).parent)
{
{


#line 65 "scope.cog"
         

#line 65 "scope.cog"
         auto result = 

#line 65 "scope.cog"
                                  

#line 65 "scope.cog"
                      lookupDirect(

#line 65 "scope.cog"
                                   ss, 

#line 65 "scope.cog"
                                       name);


#line 68 "scope.cog"
         if(

#line 68 "scope.cog"
            

#line 68 "scope.cog"
            !

#line 68 "scope.cog"
                           

#line 68 "scope.cog"
                   DEREF(

#line 68 "scope.cog"
             result).isEmpty())
{


#line 69 "scope.cog"
             return 

#line 69 "scope.cog"
                    result;
}
}
}}


#line 72 "scope.cog"
     return 

#line 72 "scope.cog"
                        

#line 72 "scope.cog"
            LookupResult();
}


#line 2 "session.cog"
 

#line 22 "session.cog"
 

#line 22 "session.cog"
                         Session createSession()
{


#line 24 "session.cog"
  

#line 24 "session.cog"
  auto session = 

#line 24 "session.cog"
                                     

#line 24 "session.cog"
                createObject<

#line 24 "session.cog"
                             Session> ();


#line 25 "session.cog"
              DEREF(

#line 25 "session.cog"
         DEREF(

#line 25 "session.cog"
  session).sink).session = 

#line 25 "session.cog"
                         session;


#line 26 "session.cog"
  return 

#line 26 "session.cog"
         session;
}


#line 29 "session.cog"
 void destroySession(

#line 29 "session.cog"
                              Session session)
{


#line 31 "session.cog"
      

#line 31 "session.cog"
      

#line 31 "session.cog"
  free(

#line 31 "session.cog"
       session);
}


#line 34 "session.cog"
 void setModulePath(

#line 35 "session.cog"
           Session session, 

#line 36 "session.cog"
         StringSpan path)
{


#line 38 "session.cog"
         DEREF(

#line 38 "session.cog"
  session).modulePath2 = 

#line 38 "session.cog"
                               

#line 38 "session.cog"
                        getName(

#line 38 "session.cog"
                                session, 

#line 38 "session.cog"
                                         path);


#line 40 "session.cog"
  

#line 40 "session.cog"
  auto name = 

#line 40 "session.cog"
             path;


#line 41 "session.cog"
  name = 

#line 41 "session.cog"
                             

#line 41 "session.cog"
             DEREF(

#line 41 "session.cog"
         name).suffixAfterLast(

#line 41 "session.cog"
                              '/');


#line 42 "session.cog"
  name = 

#line 42 "session.cog"
                             

#line 42 "session.cog"
             DEREF(

#line 42 "session.cog"
         name).suffixAfterLast(

#line 42 "session.cog"
                              '\\');


#line 43 "session.cog"
         DEREF(

#line 43 "session.cog"
  session).moduleName2 = 

#line 43 "session.cog"
                               

#line 43 "session.cog"
                        getName(

#line 43 "session.cog"
                                session, 

#line 43 "session.cog"
                                         name);
}


#line 46 "session.cog"
 void setModulePath(

#line 47 "session.cog"
           Session session, 

#line 48 "session.cog"
        TerminatedStringSpan path)
{


#line 50 "session.cog"
               

#line 50 "session.cog"
               

#line 50 "session.cog"
  setModulePath(

#line 50 "session.cog"
                session, 

#line 50 "session.cog"
                                   

#line 50 "session.cog"
                         StringSpan(

#line 50 "session.cog"
                                    path));
}


#line 53 "session.cog"
 

#line 55 "session.cog"
     Ptr<

#line 55 "session.cog"
         Name>  getModulePath(

#line 54 "session.cog"
           Session session)
{


#line 57 "session.cog"
  return 

#line 57 "session.cog"
                DEREF(

#line 57 "session.cog"
         session).modulePath2;
}


#line 60 "session.cog"
 

#line 62 "session.cog"
     Ptr<

#line 62 "session.cog"
         Name>  getModuleName(

#line 61 "session.cog"
           Session session)
{


#line 64 "session.cog"
  return 

#line 64 "session.cog"
                DEREF(

#line 64 "session.cog"
         session).moduleName2;
}


#line 67 "session.cog"
 void setEvaluate(

#line 68 "session.cog"
           Session session)
{


#line 70 "session.cog"
         DEREF(

#line 70 "session.cog"
  session).eval = 

#line 70 "session.cog"
                 true;
}


#line 73 "session.cog"
 void loadSourceFile(

#line 74 "session.cog"
           Session session, 

#line 75 "session.cog"
        TerminatedStringSpan path)
{


#line 77 "session.cog"
  

#line 77 "session.cog"
  auto file = 

#line 77 "session.cog"
                          

#line 77 "session.cog"
             getSourceFile(

#line 77 "session.cog"
                           session, 

#line 77 "session.cog"
                                    path);


#line 78 "session.cog"
  if(

#line 78 "session.cog"
     

#line 78 "session.cog"
     !

#line 78 "session.cog"
      file)
{


#line 78 "session.cog"
            return;
}


#line 80 "session.cog"
           

#line 80 "session.cog"
           

#line 80 "session.cog"
  parseFile(

#line 80 "session.cog"
            session, 

#line 80 "session.cog"
                     file);
}


#line 83 "session.cog"
 

#line 85 "session.cog"
     Int getErrorCount(

#line 84 "session.cog"
           Session session)
{


#line 87 "session.cog"
     return 

#line 87 "session.cog"
                        DEREF(

#line 87 "session.cog"
                   DEREF(

#line 87 "session.cog"
            session).sink).errorCount;
}


#line 3 "source.cog"
 

#line 17 "source.cog"
 

#line 19 "source.cog"
 

#line 42 "source.cog"
 

#line 45 "source.cog"
     Ptr<

#line 45 "source.cog"
         SourceFile>  getSourceFile(

#line 43 "source.cog"
           Session session, 

#line 44 "source.cog"
        TerminatedStringSpan path)
{


#line 50 "source.cog"
  

#line 50 "source.cog"
  auto file = 

#line 50 "source.cog"
                  

#line 50 "source.cog"
             fopen(

#line 50 "source.cog"
                       DEREF(

#line 50 "source.cog"
                   path).begin, 

#line 50 "source.cog"
                               "rb");


#line 51 "source.cog"
  if(

#line 51 "source.cog"
     

#line 51 "source.cog"
     !

#line 51 "source.cog"
      file)
{


#line 55 "source.cog"
           

#line 55 "source.cog"
           

#line 55 "source.cog"
   diagnose(

#line 55 "source.cog"
            

#line 55 "source.cog"
            &

#line 55 "source.cog"
                    DEREF(

#line 55 "source.cog"
             session).sink, 

#line 55 "source.cog"
                                    

#line 55 "source.cog"
                           SourceLoc(

#line 55 "source.cog"
                                     0), 

#line 55 "source.cog"
                                         kDiagnostic_unimplemented, 

#line 55 "source.cog"
                                                                    path);


#line 57 "source.cog"
   return 

#line 57 "source.cog"
          0;
}


#line 61 "source.cog"
       

#line 61 "source.cog"
       

#line 61 "source.cog"
  fseek(

#line 61 "source.cog"
        file, 

#line 61 "source.cog"
              0, 

#line 61 "source.cog"
                 SEEK_END);


#line 62 "source.cog"
  

#line 62 "source.cog"
  auto fileSize = 

#line 62 "source.cog"
                      

#line 62 "source.cog"
                 ftell(

#line 62 "source.cog"
                       file);


#line 63 "source.cog"
       

#line 63 "source.cog"
       

#line 63 "source.cog"
  fseek(

#line 63 "source.cog"
        file, 

#line 63 "source.cog"
              0, 

#line 63 "source.cog"
                 SEEK_SET);


#line 68 "source.cog"
  

#line 68 "source.cog"
  auto pathSize = 

#line 68 "source.cog"
                          

#line 68 "source.cog"
                     DEREF(

#line 68 "source.cog"
                 path).end 

#line 68 "source.cog"
                          - 

#line 68 "source.cog"
                                DEREF(

#line 68 "source.cog"
                            path).begin;


#line 70 "source.cog"
  

#line 70 "source.cog"
  auto sourceFile = 

#line 70 "source.cog"
                   cast<

#line 70 "source.cog"
                        Ptr<

#line 70 "source.cog"
                            SourceFile> >(

#line 71 "source.cog"
         

#line 71 "source.cog"
   malloc(

#line 73 "source.cog"
   

#line 72 "source.cog"
                     

#line 72 "source.cog"
   sizeOf<

#line 72 "source.cog"
          SourceFile> () 

#line 73 "source.cog"
   + 

#line 73 "source.cog"
              

#line 73 "source.cog"
     pathSize 

#line 73 "source.cog"
              + 

#line 74 "source.cog"
   

#line 73 "source.cog"
                1 

#line 74 "source.cog"
   + 

#line 74 "source.cog"
              

#line 74 "source.cog"
     fileSize 

#line 74 "source.cog"
              + 

#line 74 "source.cog"
                1));


#line 75 "source.cog"
     

#line 75 "source.cog"
     auto pathData = 

#line 75 "source.cog"
                    cast<

#line 75 "source.cog"
                         Ptr<

#line 75 "source.cog"
                             Char> >(

#line 75 "source.cog"
                                                

#line 75 "source.cog"
                                     sourceFile 

#line 75 "source.cog"
                                                + 

#line 75 "source.cog"
                                                  1);


#line 76 "source.cog"
  

#line 76 "source.cog"
  auto fileData = 

#line 76 "source.cog"
                          

#line 76 "source.cog"
                 pathData 

#line 76 "source.cog"
                          + 

#line 76 "source.cog"
                                     

#line 76 "source.cog"
                            pathSize 

#line 76 "source.cog"
                                     + 

#line 76 "source.cog"
                                       1;


#line 78 "source.cog"
        

#line 78 "source.cog"
        

#line 78 "source.cog"
  memcpy(

#line 78 "source.cog"
         pathData, 

#line 78 "source.cog"
                       DEREF(

#line 78 "source.cog"
                   path).begin, 

#line 78 "source.cog"
                               pathSize);


#line 79 "source.cog"
          

#line 79 "source.cog"
  pathData[

#line 79 "source.cog"
           pathSize] = 

#line 79 "source.cog"
                       0;


#line 81 "source.cog"
       

#line 81 "source.cog"
       

#line 81 "source.cog"
  fread(

#line 81 "source.cog"
        fileData, 

#line 81 "source.cog"
                  fileSize, 

#line 81 "source.cog"
                            1, 

#line 81 "source.cog"
                               file);


#line 82 "source.cog"
           

#line 82 "source.cog"
           

#line 82 "source.cog"
     fclose(

#line 82 "source.cog"
            file);


#line 83 "source.cog"
          

#line 83 "source.cog"
  fileData[

#line 83 "source.cog"
           fileSize] = 

#line 83 "source.cog"
                       0;


#line 86 "source.cog"
            DEREF(

#line 86 "source.cog"
  sourceFile).path = 

#line 86 "source.cog"
                                        

#line 86 "source.cog"
                    TerminatedStringSpan(

#line 86 "source.cog"
                                         pathData, 

#line 86 "source.cog"
                                                            

#line 86 "source.cog"
                                                   pathData 

#line 86 "source.cog"
                                                            + 

#line 86 "source.cog"
                                                              pathSize);


#line 87 "source.cog"
            DEREF(

#line 87 "source.cog"
  sourceFile).text = 

#line 87 "source.cog"
                                        

#line 87 "source.cog"
                    TerminatedStringSpan(

#line 87 "source.cog"
                                         fileData, 

#line 87 "source.cog"
                                                            

#line 87 "source.cog"
                                                   fileData 

#line 87 "source.cog"
                                                            + 

#line 87 "source.cog"
                                                              fileSize);


#line 88 "source.cog"
                     DEREF(

#line 88 "source.cog"
            DEREF(

#line 88 "source.cog"
  sourceFile).firstLoc).raw = 

#line 88 "source.cog"
                                                  

#line 88 "source.cog"
                                   DEREF(

#line 88 "source.cog"
                            session).lastSourceLoc 

#line 88 "source.cog"
                                                  + 

#line 88 "source.cog"
                                                    1;


#line 89 "source.cog"
                    DEREF(

#line 89 "source.cog"
            DEREF(

#line 89 "source.cog"
  sourceFile).lastLoc).raw = 

#line 89 "source.cog"
                                                   

#line 89 "source.cog"
                                              DEREF(

#line 89 "source.cog"
                                     DEREF(

#line 89 "source.cog"
                           sourceFile).firstLoc).raw 

#line 89 "source.cog"
                                                   + 

#line 89 "source.cog"
                                                              

#line 89 "source.cog"
                                                     fileSize 

#line 89 "source.cog"
                                                              + 

#line 89 "source.cog"
                                                                1;


#line 91 "source.cog"
         DEREF(

#line 91 "source.cog"
  session).lastSourceLoc = 

#line 91 "source.cog"
                                            DEREF(

#line 91 "source.cog"
                                    DEREF(

#line 91 "source.cog"
                          sourceFile).lastLoc).raw;


#line 93 "source.cog"
            DEREF(

#line 93 "source.cog"
  sourceFile).next = 

#line 93 "source.cog"
                           DEREF(

#line 93 "source.cog"
                    session).sourceFiles;


#line 94 "source.cog"
         DEREF(

#line 94 "source.cog"
  session).sourceFiles = 

#line 94 "source.cog"
                        sourceFile;


#line 96 "source.cog"
  return 

#line 96 "source.cog"
         sourceFile;
}


#line 99 "source.cog"
 

#line 102 "source.cog"
     ExpandedSourceLoc expandLoc(

#line 100 "source.cog"
           Session session, 

#line 101 "source.cog"
       SourceLoc loc)
{


#line 104 "source.cog"
  

#line 104 "source.cog"
  

#line 104 "source.cog"
                 ExpandedSourceLoc expanded;


#line 105 "source.cog"
  if(

#line 105 "source.cog"
             

#line 105 "source.cog"
        DEREF(

#line 105 "source.cog"
     loc).raw 

#line 105 "source.cog"
             == 

#line 105 "source.cog"
                0)
{


#line 107 "source.cog"
           DEREF(

#line 107 "source.cog"
   expanded).file = 

#line 107 "source.cog"
                                       

#line 107 "source.cog"
                   TerminatedStringSpan(

#line 107 "source.cog"
                                        "");


#line 108 "source.cog"
           DEREF(

#line 108 "source.cog"
   expanded).line = 

#line 108 "source.cog"
                   0;


#line 109 "source.cog"
           DEREF(

#line 109 "source.cog"
   expanded).column = 

#line 109 "source.cog"
                     0;


#line 110 "source.cog"
   return 

#line 110 "source.cog"
          expanded;
}


#line 115 "source.cog"
  {


#line 115 "source.cog"
      

#line 115 "source.cog"
      auto f = 

#line 115 "source.cog"
                     DEREF(

#line 115 "source.cog"
              session).sourceFiles;
for(;

#line 115 "source.cog"
                                   f;

#line 115 "source.cog"
                                      f = 

#line 115 "source.cog"
                                           DEREF(

#line 115 "source.cog"
                                          f).next)
{
{


#line 117 "source.cog"
   if(

#line 117 "source.cog"
              

#line 117 "source.cog"
         DEREF(

#line 117 "source.cog"
      loc).raw 

#line 117 "source.cog"
              < 

#line 117 "source.cog"
                          DEREF(

#line 117 "source.cog"
                 DEREF(

#line 117 "source.cog"
                f).firstLoc).raw)
{


#line 118 "source.cog"
    continue;
}


#line 120 "source.cog"
   if(

#line 120 "source.cog"
              

#line 120 "source.cog"
         DEREF(

#line 120 "source.cog"
      loc).raw 

#line 120 "source.cog"
              > 

#line 120 "source.cog"
                         DEREF(

#line 120 "source.cog"
                 DEREF(

#line 120 "source.cog"
                f).lastLoc).raw)
{


#line 121 "source.cog"
    continue;
}


#line 123 "source.cog"
   

#line 123 "source.cog"
   auto line = 

#line 123 "source.cog"
              1;


#line 124 "source.cog"
   

#line 124 "source.cog"
   auto column = 

#line 124 "source.cog"
                1;


#line 125 "source.cog"
   

#line 125 "source.cog"
   auto cursor = 

#line 125 "source.cog"
                      DEREF(

#line 125 "source.cog"
                 DEREF(

#line 125 "source.cog"
                f).text).begin;


#line 126 "source.cog"
   

#line 126 "source.cog"
   auto offset = 

#line 126 "source.cog"
                        

#line 126 "source.cog"
                   DEREF(

#line 126 "source.cog"
                loc).raw 

#line 126 "source.cog"
                        - 

#line 126 "source.cog"
                                    DEREF(

#line 126 "source.cog"
                           DEREF(

#line 126 "source.cog"
                          f).firstLoc).raw;


#line 127 "source.cog"
   {


#line 127 "source.cog"
       

#line 127 "source.cog"
       auto ii = 

#line 127 "source.cog"
                0;
for(;

#line 127 "source.cog"
                      

#line 127 "source.cog"
                   ii 

#line 127 "source.cog"
                      < 

#line 127 "source.cog"
                        offset;

#line 127 "source.cog"
                                

#line 127 "source.cog"
                                ++

#line 127 "source.cog"
                                  ii)
{
{


#line 129 "source.cog"
    

#line 129 "source.cog"
    auto c = 

#line 129 "source.cog"
            

#line 129 "source.cog"
            *

#line 129 "source.cog"
             cursor;


#line 130 "source.cog"
    switch(

#line 130 "source.cog"
           c)
{
case 

#line 132 "source.cog"
         '\r':
case 

#line 132 "source.cog"
                    '\n':
{
{


#line 134 "source.cog"
      

#line 134 "source.cog"
      auto d = 

#line 134 "source.cog"
                    

#line 134 "source.cog"
              cursor[

#line 134 "source.cog"
                     1];


#line 135 "source.cog"
      if(

#line 135 "source.cog"
                 

#line 135 "source.cog"
         (

#line 135 "source.cog"
            

#line 135 "source.cog"
          c 

#line 135 "source.cog"
            ^ 

#line 135 "source.cog"
              d) 

#line 135 "source.cog"
                 == 

#line 135 "source.cog"
                    (

#line 135 "source.cog"
                          

#line 135 "source.cog"
                     '\r' 

#line 135 "source.cog"
                          ^ 

#line 135 "source.cog"
                            '\n'))
{


#line 137 "source.cog"
                           

#line 137 "source.cog"
                           

#line 137 "source.cog"
                         ii

#line 137 "source.cog"
                           ++;


#line 138 "source.cog"
             

#line 138 "source.cog"
             

#line 138 "source.cog"
       cursor

#line 138 "source.cog"
             ++;
}


#line 140 "source.cog"
          

#line 140 "source.cog"
          

#line 140 "source.cog"
      line

#line 140 "source.cog"
          ++;


#line 141 "source.cog"
      column = 

#line 141 "source.cog"
               1;
}
}
{


#line 143 "source.cog"
     break;
}
default:
{


#line 146 "source.cog"
           

#line 146 "source.cog"
           

#line 146 "source.cog"
     column

#line 146 "source.cog"
           ++;
}
{


#line 147 "source.cog"
     break;
}
}


#line 149 "source.cog"
          

#line 149 "source.cog"
          

#line 149 "source.cog"
    cursor

#line 149 "source.cog"
          ++;
}
}}


#line 152 "source.cog"
           DEREF(

#line 152 "source.cog"
   expanded).file = 

#line 152 "source.cog"
                    DEREF(

#line 152 "source.cog"
                   f).path;


#line 153 "source.cog"
           DEREF(

#line 153 "source.cog"
   expanded).line = 

#line 153 "source.cog"
                   line;


#line 154 "source.cog"
           DEREF(

#line 154 "source.cog"
   expanded).column = 

#line 154 "source.cog"
                     column;


#line 155 "source.cog"
   return 

#line 155 "source.cog"
          expanded;
}
}}


#line 159 "source.cog"
           

#line 159 "source.cog"
           

#line 159 "source.cog"
  cogAssert(

#line 159 "source.cog"
            false);


#line 160 "source.cog"
  return 

#line 160 "source.cog"
         expanded;
}


#line 3 "string.cog"
 

#line 70 "string.cog"
 

#line 70 "string.cog"
                                                 Bool operator==(

#line 70 "string.cog"
               StringSpan left, 

#line 70 "string.cog"
                                  StringSpan right)
{


#line 72 "string.cog"
  

#line 72 "string.cog"
  auto leftSize = 

#line 72 "string.cog"
                               

#line 72 "string.cog"
                     DEREF(

#line 72 "string.cog"
                 left).getLength();


#line 73 "string.cog"
  

#line 73 "string.cog"
  auto rightSize = 

#line 73 "string.cog"
                                 

#line 73 "string.cog"
                       DEREF(

#line 73 "string.cog"
                  right).getLength();


#line 75 "string.cog"
  if(

#line 75 "string.cog"
              

#line 75 "string.cog"
     leftSize 

#line 75 "string.cog"
              != 

#line 75 "string.cog"
                 rightSize)
{


#line 76 "string.cog"
   return 

#line 76 "string.cog"
          false;
}


#line 78 "string.cog"
  return 

#line 78 "string.cog"
                                                   

#line 78 "string.cog"
               

#line 78 "string.cog"
         memcmp(

#line 78 "string.cog"
                    DEREF(

#line 78 "string.cog"
                left).begin, 

#line 78 "string.cog"
                                 DEREF(

#line 78 "string.cog"
                            right).begin, 

#line 78 "string.cog"
                                         leftSize) 

#line 78 "string.cog"
                                                   == 

#line 78 "string.cog"
                                                      0;
}


#line 81 "string.cog"
 

#line 81 "string.cog"
                                                 Bool operator!=(

#line 81 "string.cog"
               StringSpan left, 

#line 81 "string.cog"
                                  StringSpan right)
{


#line 83 "string.cog"
  return 

#line 83 "string.cog"
         

#line 83 "string.cog"
         !

#line 83 "string.cog"
          (

#line 83 "string.cog"
                

#line 83 "string.cog"
           left 

#line 83 "string.cog"
                == 

#line 83 "string.cog"
                   right);
}


#line 16 "syntax.cog"
 

#line 16 "syntax.cog"
                                  Bool asBool(

#line 16 "syntax.cog"
                      TypeExp typeExp)
{


#line 18 "syntax.cog"
  return 

#line 18 "syntax.cog"
                DEREF(

#line 18 "syntax.cog"
         typeExp).exp;
}


#line 21 "syntax.cog"
 

#line 25 "syntax.cog"
  template<typename T > SyntaxListIterator<T > ::SyntaxListIterator(

#line 26 "syntax.cog"
            T current)
{


#line 28 "syntax.cog"
       DEREF(

#line 28 "syntax.cog"
   this).current = 

#line 28 "syntax.cog"
                  current;
}


#line 31 "syntax.cog"
  template<typename T > 

#line 31 "syntax.cog"
                                           Bool SyntaxListIterator<T > ::operator!=(

#line 31 "syntax.cog"
                 SyntaxListIterator<

#line 31 "syntax.cog"
                                    T>  other)
{


#line 33 "syntax.cog"
   return 

#line 33 "syntax.cog"
                  

#line 33 "syntax.cog"
          current 

#line 33 "syntax.cog"
                  != 

#line 33 "syntax.cog"
                          DEREF(

#line 33 "syntax.cog"
                     other).current;
}


#line 36 "syntax.cog"
  template<typename T > 

#line 36 "syntax.cog"
              T SyntaxListIterator<T > ::operator*()
{


#line 38 "syntax.cog"
   return 

#line 38 "syntax.cog"
          current;
}


#line 41 "syntax.cog"
  template<typename T > void SyntaxListIterator<T > ::operator++()
{


#line 43 "syntax.cog"
   current = 

#line 43 "syntax.cog"
             cast<

#line 43 "syntax.cog"
                  T>(

#line 43 "syntax.cog"
                            DEREF(

#line 43 "syntax.cog"
                     current).next);
}


#line 128 "syntax.cog"
 

#line 132 "syntax.cog"
  template<typename T, typename U > FilteredSyntaxListIterator<T, U > ::FilteredSyntaxListIterator(

#line 132 "syntax.cog"
                U current)
{


#line 134 "syntax.cog"
       DEREF(

#line 134 "syntax.cog"
   this).current = 

#line 134 "syntax.cog"
                        

#line 134 "syntax.cog"
                  adjust(

#line 134 "syntax.cog"
                         current);
}


#line 137 "syntax.cog"
  template<typename T, typename U > 

#line 137 "syntax.cog"
                                                     Bool FilteredSyntaxListIterator<T, U > ::operator!=(

#line 137 "syntax.cog"
                 FilteredSyntaxListIterator<

#line 137 "syntax.cog"
                                            T, 

#line 137 "syntax.cog"
                                              U>  other)
{


#line 139 "syntax.cog"
         return 

#line 139 "syntax.cog"
                        

#line 139 "syntax.cog"
                current 

#line 139 "syntax.cog"
                        != 

#line 139 "syntax.cog"
                                DEREF(

#line 139 "syntax.cog"
                           other).current;
}


#line 142 "syntax.cog"
     template<typename T, typename U > 

#line 142 "syntax.cog"
                 T FilteredSyntaxListIterator<T, U > ::operator*()
{


#line 142 "syntax.cog"
                     return 

#line 142 "syntax.cog"
                            current;
}


#line 144 "syntax.cog"
  template<typename T, typename U > void FilteredSyntaxListIterator<T, U > ::operator++()
{


#line 146 "syntax.cog"
         current = 

#line 146 "syntax.cog"
                         

#line 146 "syntax.cog"
                   adjust(

#line 146 "syntax.cog"
                                 DEREF(

#line 146 "syntax.cog"
                          current).next);
}


#line 149 "syntax.cog"
  template<typename T, typename U > 

#line 149 "syntax.cog"
                         T FilteredSyntaxListIterator<T, U > ::adjust(

#line 149 "syntax.cog"
                   U obj)
{


#line 151 "syntax.cog"
   while(

#line 151 "syntax.cog"
         obj)
{
{


#line 153 "syntax.cog"
    

#line 153 "syntax.cog"
    auto t = 

#line 153 "syntax.cog"
                 

#line 153 "syntax.cog"
            as<

#line 153 "syntax.cog"
               T> (

#line 153 "syntax.cog"
                  obj);


#line 154 "syntax.cog"
    if(

#line 154 "syntax.cog"
       t)
{


#line 155 "syntax.cog"
     return 

#line 155 "syntax.cog"
            t;
}


#line 156 "syntax.cog"
    obj = 

#line 156 "syntax.cog"
             DEREF(

#line 156 "syntax.cog"
          obj).next;
}
}


#line 158 "syntax.cog"
   return 

#line 158 "syntax.cog"
          nullptr;
}


#line 205 "syntax.cog"
 

#line 269 "syntax.cog"
 

#line 306 "syntax.cog"
 

#line 311 "syntax.cog"
  template<typename T > DeclRefListIterator<T > ::DeclRefListIterator(

#line 311 "syntax.cog"
             Decl decl, 

#line 311 "syntax.cog"
                                    Specializations specializations)
{


#line 313 "syntax.cog"
       DEREF(

#line 313 "syntax.cog"
   this).decl = 

#line 313 "syntax.cog"
               decl;


#line 314 "syntax.cog"
       DEREF(

#line 314 "syntax.cog"
   this).specializations = 

#line 314 "syntax.cog"
                          specializations;


#line 316 "syntax.cog"
         

#line 316 "syntax.cog"
         

#line 316 "syntax.cog"
   adjust();
}


#line 319 "syntax.cog"
  template<typename T > void DeclRefListIterator<T > ::operator++()
{


#line 321 "syntax.cog"
   if(

#line 321 "syntax.cog"
      

#line 321 "syntax.cog"
      !

#line 321 "syntax.cog"
       decl)
{


#line 322 "syntax.cog"
    return;
}


#line 323 "syntax.cog"
   decl = 

#line 323 "syntax.cog"
          cast<

#line 323 "syntax.cog"
               Decl>(

#line 323 "syntax.cog"
                         DEREF(

#line 323 "syntax.cog"
                     decl).next);


#line 324 "syntax.cog"
         

#line 324 "syntax.cog"
         

#line 324 "syntax.cog"
   adjust();
}


#line 327 "syntax.cog"
  template<typename T > 

#line 327 "syntax.cog"
              DeclRefValImpl<

#line 327 "syntax.cog"
                             T>  DeclRefListIterator<T > ::operator*()
{


#line 329 "syntax.cog"
   return 

#line 329 "syntax.cog"
                           

#line 329 "syntax.cog"
          DeclRefValImpl<

#line 329 "syntax.cog"
                         T> (

#line 330 "syntax.cog"
    cast<

#line 330 "syntax.cog"
         T>(

#line 330 "syntax.cog"
            decl), 

#line 331 "syntax.cog"
    specializations);
}


#line 334 "syntax.cog"
  template<typename T > void DeclRefListIterator<T > ::adjust()
{


#line 336 "syntax.cog"
   while(

#line 336 "syntax.cog"
         decl)
{
{


#line 338 "syntax.cog"
    

#line 338 "syntax.cog"
    auto declAsT = 

#line 338 "syntax.cog"
                       

#line 338 "syntax.cog"
                  as<

#line 338 "syntax.cog"
                     T> (

#line 338 "syntax.cog"
                        decl);


#line 339 "syntax.cog"
    if(

#line 339 "syntax.cog"
       declAsT)
{


#line 340 "syntax.cog"
     return;
}


#line 342 "syntax.cog"
    decl = 

#line 342 "syntax.cog"
           cast<

#line 342 "syntax.cog"
                Decl>(

#line 342 "syntax.cog"
                          DEREF(

#line 342 "syntax.cog"
                      decl).next);
}
}
}


#line 347 "syntax.cog"
 

#line 352 "syntax.cog"
  template<typename T > 

#line 352 "syntax.cog"
                  DeclRefListIterator<

#line 352 "syntax.cog"
                                      T>  DeclRefList<T > ::begin()
{


#line 354 "syntax.cog"
   return 

#line 354 "syntax.cog"
                                

#line 354 "syntax.cog"
          DeclRefListIterator<

#line 354 "syntax.cog"
                              T> (

#line 354 "syntax.cog"
                                 decl, 

#line 354 "syntax.cog"
                                       specializations);
}


#line 357 "syntax.cog"
  template<typename T > 

#line 357 "syntax.cog"
                DeclRefListIterator<

#line 357 "syntax.cog"
                                    T>  DeclRefList<T > ::end()
{


#line 359 "syntax.cog"
   return 

#line 359 "syntax.cog"
                                

#line 359 "syntax.cog"
          DeclRefListIterator<

#line 359 "syntax.cog"
                              T> (

#line 359 "syntax.cog"
                                 nullptr, 

#line 359 "syntax.cog"
                                          nullptr);
}


#line 362 "syntax.cog"
  template<typename T > DeclRefList<T > ::DeclRefList()
{


#line 364 "syntax.cog"
       DEREF(

#line 364 "syntax.cog"
   this).decl = 

#line 364 "syntax.cog"
               nullptr;


#line 365 "syntax.cog"
       DEREF(

#line 365 "syntax.cog"
   this).specializations = 

#line 365 "syntax.cog"
                          nullptr;
}


#line 368 "syntax.cog"
  template<typename T > DeclRefList<T > ::DeclRefList(

#line 368 "syntax.cog"
             Decl decl, 

#line 368 "syntax.cog"
                                    Specializations specializations)
{


#line 370 "syntax.cog"
       DEREF(

#line 370 "syntax.cog"
   this).decl = 

#line 370 "syntax.cog"
               decl;


#line 371 "syntax.cog"
       DEREF(

#line 371 "syntax.cog"
   this).specializations = 

#line 371 "syntax.cog"
                          specializations;
}


#line 375 "syntax.cog"
 

#line 375 "syntax.cog"
      template<typename T > 

#line 377 "syntax.cog"
                                    Bool operator!=(

#line 376 "syntax.cog"
        DeclRefListIterator<

#line 376 "syntax.cog"
                            T>  left, 

#line 377 "syntax.cog"
         DeclRefListIterator<

#line 377 "syntax.cog"
                             T>  right)
{


#line 379 "syntax.cog"
  return 

#line 379 "syntax.cog"
                   

#line 379 "syntax.cog"
             DEREF(

#line 379 "syntax.cog"
         left).decl 

#line 379 "syntax.cog"
                   != 

#line 379 "syntax.cog"
                           DEREF(

#line 379 "syntax.cog"
                      right).decl;
}


#line 382 "syntax.cog"
 

#line 383 "syntax.cog"
     DeclRefList<

#line 383 "syntax.cog"
                 Decl>  getDecls(

#line 382 "syntax.cog"
                          DeclRefValImpl<

#line 382 "syntax.cog"
                                         ContainerDecl>  container)
{


#line 385 "syntax.cog"
  return 

#line 385 "syntax.cog"
                          

#line 385 "syntax.cog"
         DeclRefList<

#line 385 "syntax.cog"
                     Decl> (

#line 386 "syntax.cog"
                                 DEREF(

#line 386 "syntax.cog"
                               

#line 386 "syntax.cog"
                      DEREF(

#line 386 "syntax.cog"
                    

#line 386 "syntax.cog"
            DEREF(

#line 386 "syntax.cog"
   container).getDecl()).getDecls()).head, 

#line 387 "syntax.cog"
            DEREF(

#line 387 "syntax.cog"
   container).specializations);
}


#line 395 "syntax.cog"
 

#line 396 "syntax.cog"
     DeclRefVal getInner(

#line 395 "syntax.cog"
                        DeclRefValImpl<

#line 395 "syntax.cog"
                                       GenericDecl>  declRef)
{


#line 398 "syntax.cog"
  return 

#line 398 "syntax.cog"
                   

#line 398 "syntax.cog"
         DeclRefVal(

#line 399 "syntax.cog"
                    DEREF(

#line 399 "syntax.cog"
                  

#line 399 "syntax.cog"
          DEREF(

#line 399 "syntax.cog"
   declRef).getDecl()).inner, 

#line 400 "syntax.cog"
          DEREF(

#line 400 "syntax.cog"
   declRef).specializations);
}


#line 409 "syntax.cog"
 

#line 452 "syntax.cog"
 

#line 454 "syntax.cog"
     Type getResultType(

#line 453 "syntax.cog"
           DeclRefValImpl<

#line 453 "syntax.cog"
                          FuncDeclBase>  declRef)
{


#line 456 "syntax.cog"
  return 

#line 456 "syntax.cog"
                       

#line 456 "syntax.cog"
         specializeType(

#line 457 "syntax.cog"
                               DEREF(

#line 457 "syntax.cog"
                    DEREF(

#line 457 "syntax.cog"
                  

#line 457 "syntax.cog"
          DEREF(

#line 457 "syntax.cog"
   declRef).getDecl()).resultType).type, 

#line 458 "syntax.cog"
          DEREF(

#line 458 "syntax.cog"
   declRef).specializations);
}


#line 479 "syntax.cog"
 

#line 479 "syntax.cog"
                                                       Type getType(

#line 479 "syntax.cog"
                       DeclRefValImpl<

#line 479 "syntax.cog"
                                      VarDeclBase>  declRef)
{


#line 481 "syntax.cog"
  return 

#line 481 "syntax.cog"
                       

#line 481 "syntax.cog"
         specializeType(

#line 482 "syntax.cog"
                         DEREF(

#line 482 "syntax.cog"
                    DEREF(

#line 482 "syntax.cog"
                  

#line 482 "syntax.cog"
          DEREF(

#line 482 "syntax.cog"
   declRef).getDecl()).type).type, 

#line 483 "syntax.cog"
          DEREF(

#line 483 "syntax.cog"
   declRef).specializations);
}


#line 486 "syntax.cog"
 

#line 506 "syntax.cog"
 

#line 513 "syntax.cog"
 

#line 518 "syntax.cog"
 

#line 525 "syntax.cog"
 

#line 531 "syntax.cog"
 

#line 539 "syntax.cog"
 

#line 544 "syntax.cog"
 

#line 548 "syntax.cog"
 

#line 552 "syntax.cog"
 

#line 559 "syntax.cog"
 

#line 573 "syntax.cog"
 

#line 585 "syntax.cog"
 

#line 591 "syntax.cog"
 

#line 596 "syntax.cog"
 

#line 601 "syntax.cog"
 

#line 613 "syntax.cog"
 

#line 617 "syntax.cog"
 

#line 621 "syntax.cog"
 

#line 625 "syntax.cog"
 

#line 629 "syntax.cog"
 

#line 633 "syntax.cog"
 

#line 637 "syntax.cog"
 

#line 641 "syntax.cog"
 

#line 665 "syntax.cog"
 

#line 715 "syntax.cog"
 

#line 735 "syntax.cog"
 

#line 747 "syntax.cog"
 

#line 753 "syntax.cog"
 

#line 758 "syntax.cog"
 

#line 765 "syntax.cog"
 

#line 768 "syntax.cog"
 

#line 771 "syntax.cog"
 

#line 778 "syntax.cog"
 

#line 785 "syntax.cog"
 

#line 790 "syntax.cog"
 

#line 5 "token.cog"
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
