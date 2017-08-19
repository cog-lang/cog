// syntax.h
#ifndef COGC_SYNTAX_H_INCLUDED
#define COGC_SYNTAX_H_INCLUDED

#include "alloc.h"
#include "array.h"
#include "object.h"
#include "source.h"

namespace cogc {

struct Arg;
struct Exp;
struct Name;
struct Scope;
struct Token;

struct TypeExp
{
	Exp* 	exp;

	operator Exp*()
	{
		return exp;
	}
};

template<typename T>
struct SyntaxList
{
	T* head;

	struct Iterator
	{
		T* current;

		Iterator(T* current)
			: current(current)
		{}

		bool operator!=(Iterator other)
		{
			return current != other.current;
		}

		T* operator*() { return current; }

		void operator++()
		{
			current = (T*) current->next;
		}
	};

    T* operator[](size_t index)
    {
        T* item = head;
        for(size_t ii = 0; ii < index; ++ii)
        {
            item = (T*) item->next;
        }
        return item;
    }

	Iterator begin() { return Iterator(head); }
	Iterator end() { return Iterator(0); }

	SyntaxList()
		: head(0)
	{}

	SyntaxList(T* head)
		: head(head)
	{}
};

template<typename T>
struct SyntaxListBuilder : SyntaxList<T>
{
	T** link;

	SyntaxListBuilder()
		: link(0)
	{
		link = &this->head;
	}

    SyntaxListBuilder(SyntaxList<T> const& other)
        : SyntaxList<T>(other)
        , link(0)
    {
        link = &this->head;
        while(*link)
            link = (T**) &(*link)->next;
    }

	void add(T* element)
	{
		while (*link)
			link = (T**) &(*link)->next;

		*link = element;
		element->next = 0;
		link = (T**) &element->next;
	}

	void append(SyntaxListBuilder<T> other)
	{
		while (*link)
			link = (T**) &(*link)->next;


		if(other.head)
		{
			*link = other.head;
			link = other.link;
		}
	}
};

// A list that exposes just the `T` values in a list of `U`
template<typename T, typename U>
struct FilteredSyntaxList
{
    U* head;

    struct Iterator
    {
        T* current;

        Iterator(T* current)
            : current(current)
        {}

        bool operator!=(Iterator other)
        {
            return current != other.current;
        }

        T* operator*() { return current; }

        void operator++()
        {
            current = adjust(current->next);
        }
    };

    Iterator begin() { return Iterator(adjust(head)); }
    Iterator end() { return Iterator(0); }

    FilteredSyntaxList()
        : head(0)
    {}

    FilteredSyntaxList(U* head)
        : head(head)
    {}

    FilteredSyntaxList(SyntaxList<U> const& list)
        : head(list.head)
    {}

private:
    static T* adjust(U* obj)
    {
        while(obj)
        {
            auto t = as<T>(obj);
            if(t)
                return t;
            obj = obj->next;
        }
        return nullptr;
    }
};

struct Syntax : Object
{
	COGC_DECLARE_CLASS(Syntax, Object);

	SourceLoc loc;
};

struct Attr : Syntax
{
    COGC_DECLARE_CLASS(Attr, Syntax);

    Attr* next;
};

struct BuiltinAttr : Attr
{
    COGC_DECLARE_CLASS(BuiltinAttr, Attr);

    Name* name;
};

struct Stmt : Syntax
{
	COGC_DECLARE_CLASS(Stmt, Syntax);

    SyntaxList<Attr> attrs;
    Stmt* next;

    Attr* findAttrImpl(Class* attrClass);

    template<typename T>
    T* findAttr() { return (T*) findAttrImpl(getClass<T>()); }
};

struct ContainerStmt;

struct Decl : Stmt
{
	COGC_DECLARE_CLASS(Decl, Stmt);

	Name* name;
    ContainerStmt*  parent;

	ContainerStmt*  getParent();


	// extra state for emit logic
	bool isAlreadySelected = false;
};

//

// Values

// A value is a literal, and thus not syntax
// the intention is that values are hashed so
// that we can compare them with pointer equality
struct Val : Object
{
    COGC_DECLARE_CLASS(Val, Object);
};

struct GenericDecl;


//

struct ContainerStmt : Decl
{
	COGC_DECLARE_CLASS(ContainerStmt, Decl);

	SyntaxList<Stmt> stmts;

	SyntaxList<Stmt>& getStmts() { return stmts; }

    FilteredSyntaxList<Decl, Stmt> getDecls() { return FilteredSyntaxList<Decl, Stmt>(stmts); }
};

struct ContainerDecl : ContainerStmt
{
	COGC_DECLARE_CLASS(ContainerDecl, ContainerStmt);

	SyntaxList<Decl>& getDecls() { return *(SyntaxList<Decl>*)(&stmts); }
};

struct GenericDecl : ContainerDecl
{
	COGC_DECLARE_CLASS(GenericDecl, ContainerDecl);

	Decl* inner;
};

struct TypeVarDecl : Decl
{
	COGC_DECLARE_CLASS(TypeVarDecl, Decl);

	TypeExp bound;
	TypeExp init;
};

struct ImportDecl : Decl
{
    COGC_DECLARE_CLASS(ImportDecl, Decl);

    Name* name;
};

struct GenericParamDecl : TypeVarDecl
{
	COGC_DECLARE_CLASS(GenericParamDecl, TypeVarDecl);
};

struct TypeAliasDecl : TypeVarDecl
{
	COGC_DECLARE_CLASS(TypeAliasDecl, TypeVarDecl);
};

struct ModuleDecl : ContainerDecl
{
	COGC_DECLARE_CLASS(ModuleDecl, ContainerDecl);
};

struct PatternDecl : ContainerDecl
{
	COGC_DECLARE_CLASS(PatternDecl, ContainerDecl);
};

struct AggTypeDecl : PatternDecl
{
	COGC_DECLARE_CLASS(AggTypeDecl, PatternDecl);

	TypeExp base;
};

struct ClassDecl : AggTypeDecl
{
	COGC_DECLARE_CLASS(ClassDecl, AggTypeDecl);
};

struct StructDecl : AggTypeDecl
{
	COGC_DECLARE_CLASS(StructDecl, AggTypeDecl);
};

struct EnumDecl : AggTypeDecl
{
	COGC_DECLARE_CLASS(EnumDecl, AggTypeDecl);
};

struct FuncDeclBase : PatternDecl
{
    COGC_DECLARE_CLASS(FuncDeclBase, ContainerDecl);

    TypeExp resultType;
    Stmt*	body;
};

struct FuncDecl : FuncDeclBase
{
    COGC_DECLARE_CLASS(FuncDecl, FuncDeclBase);
};

struct SubscriptDecl : FuncDeclBase
{
    COGC_DECLARE_CLASS(SubscriptDecl, FuncDeclBase);
};

struct InitializerDecl : FuncDeclBase
{
    COGC_DECLARE_CLASS(InitializerDecl, FuncDeclBase);
};

struct VarDeclBase : Decl
{
    COGC_DECLARE_CLASS(VarDeclBase, Decl);

	TypeExp type;
	Exp*	init;
};

struct EnumTagDecl : VarDeclBase
{
	COGC_DECLARE_CLASS(EnumTagDecl, VarDeclBase);
};


struct VarDecl : VarDeclBase
{
    COGC_DECLARE_CLASS(VarDecl, VarDeclBase);
};

struct LetDecl : VarDeclBase
{
    COGC_DECLARE_CLASS(LetDecl, VarDeclBase);
};

struct ParamDecl : LetDecl
{
    COGC_DECLARE_CLASS(ParamDecl, LetDecl);
};

struct Parser;
typedef Syntax* (*SyntaxCallback)(Parser* parser);

struct SyntaxDecl : Decl
{
	COGC_DECLARE_CLASS(SyntaxDecl, Decl);

    Class*          syntaxClass;
	SyntaxCallback  callback;
};

// Statements

struct IfStmtBase : Stmt
{
	COGC_DECLARE_CLASS(IfStmtBase, Stmt);

	Stmt* thenStmt;
	Stmt* elseStmt;
};


struct IfStmt : IfStmtBase
{
    COGC_DECLARE_CLASS(IfStmt, IfStmtBase);

    Exp* condition;
};

struct IfLetStmt : IfStmtBase
{
	COGC_DECLARE_CLASS(IfLetStmt, IfStmtBase);

	Name* name;
	Exp* init;
};

struct WhileStmt : Stmt
{
    COGC_DECLARE_CLASS(WhileStmt, Stmt);

    Exp* condition;
    Stmt* body;
};

struct ForStmt : Stmt
{
	COGC_DECLARE_CLASS(ForStmt, Stmt);

	Stmt*	init;
	Exp* condition;
	Exp* iter;
	Stmt* body;
};

struct ForEachStmt : Stmt
{
	COGC_DECLARE_CLASS(ForEachStmt, Stmt);

	Name* name;
	Exp* exp;
	Stmt* body;
};

struct ReturnStmt : Stmt
{
    COGC_DECLARE_CLASS(ReturnStmt, Stmt);

    Exp* value;
};

struct BreakStmt : Stmt
{
    COGC_DECLARE_CLASS(BreakStmt, Stmt);
};

struct ContinueStmt : Stmt
{
    COGC_DECLARE_CLASS(ContinueStmt, Stmt);
};

struct SwitchCase : Syntax
{
	COGC_DECLARE_CLASS(SwitchCase, Syntax);

	Arg* values;
	Stmt* body;
	SwitchCase* next;
};

struct SwitchStmt : Stmt
{
	COGC_DECLARE_CLASS(SwitchStmt, Stmt);

	Exp* condition;
	SwitchCase* cases;
};

// Arguments

struct Arg : Syntax
{
	COGC_DECLARE_CLASS(Arg, Syntax);
	Exp* exp;
	Arg* next;
};

struct PositionalArg : Arg
{
	COGC_DECLARE_CLASS(PositionalArg, Arg);
};


// expressions

struct Exp : Stmt
{
    COGC_DECLARE_CLASS(Exp, Stmt);
};

struct LitExp : Exp
{
    COGC_DECLARE_CLASS(LitExp, Exp);

};

typedef int64_t IntLitVal;

struct IntLitExp : LitExp
{
    COGC_DECLARE_CLASS(IntLitExp, LitExp);

    IntLitVal val;
};

struct StringLitExp : LitExp
{
    COGC_DECLARE_CLASS(StringLitExp, LitExp);

    String val;
};

struct CharacterLitExp : LitExp
{
    COGC_DECLARE_CLASS(CharacterLitExp, LitExp);

    String val;
};

struct ParenExp : Exp
{
	COGC_DECLARE_CLASS(ParenExp, Exp);

	Exp* base;
};

struct AppExpBase : Exp
{
	COGC_DECLARE_CLASS(AppExpBase, Exp);

	Exp* 			base;
	SyntaxList<Arg> args;
};

struct GenericAppExp : AppExpBase
{
    COGC_DECLARE_CLASS(GenericAppExp, AppExpBase);
};

struct AppExp : AppExpBase
{
	COGC_DECLARE_CLASS(AppExp, AppExpBase);
};

struct IndexExp : AppExpBase
{
    COGC_DECLARE_CLASS(IndexExp, AppExpBase);
};

struct OperatorAppExp : AppExp
{
    COGC_DECLARE_CLASS(OperatorAppExp, AppExps);
};

struct InfixExp : OperatorAppExp
{
	COGC_DECLARE_CLASS(InfixExp, OperatorAppExp);
};

struct PrefixExp : OperatorAppExp
{
	COGC_DECLARE_CLASS(PrefixExp, OperatorAppExp);
};

struct PostfixExp : OperatorAppExp
{
	COGC_DECLARE_CLASS(PostfixExp, OperatorAppExp);
};

struct AssignExp : Exp
{
    COGC_DECLARE_CLASS(AssignExp, Exp);

    Exp* left;
    Exp* right;
};

struct NameExp : Exp
{
    COGC_DECLARE_CLASS(NameExp, Exp);

	Name*	name;
	Scope*	scope;
};


struct MemberExp : Exp
{
    COGC_DECLARE_CLASS(MemberExp, Exp);

    Exp*    base;
    Name*   memberName;
};

struct ErrorExp : Exp
{
    COGC_DECLARE_CLASS(ErrorExp, Exp);
};

struct LookupResultItem
{
    Decl*   decl;

    LookupResultItem()
        : decl(nullptr)
    {}

    LookupResultItem(
        LookupResultItem const& other) = default;

    LookupResultItem(Decl* decl)
        : decl(decl)
    {}
};

struct LookupResult
{
    Array<LookupResultItem> items;

    LookupResultItem const* begin() const { return items.begin(); }
    LookupResultItem const* end() const { return items.end(); }

    bool isEmpty() { return items.getCount() == 0; }
    bool isUnique() { return items.getCount() == 1; }
    bool isOverloaded() { return items.getCount() > 1; }

    Decl* getDecl()
    {
        assert(isUnique());
        return items[0].decl;
    }

    void filterImpl(Class* _class);

    template<typename T>
    void filter() { filterImpl(COGC_GET_CLASS(T)); }
};


struct OverloadedExpr : Exp
{
    COGC_DECLARE_CLASS(OverloadedExpr, Exp);

    LookupResult lookupResult;
    Exp* base;
};

// Statements

struct BlockStmt : ContainerDecl
{
    COGC_DECLARE_CLASS(BlockStmt, ContainerDecl);
};

// Types

#if 0
// A type is a value, since it is immutable
struct Type : Val
{
	COGC_DECLARE_CLASS(Type, Val);	
};

// A type that is formed via a declaration reference
struct DeclRefType : Type
{
    COGC_DECLARE_CLASS(DeclRefType, Type);

    CompactDeclRef declRef;
};

// the "type" of another type
struct TypeType : Type
{
	COGC_DECLARE_CLASS(TypeType, Type);

	Type* type;
};

// the type of a function
struct FuncType : Type
{
    COGC_DECLARE_CLASS(FuncType, Type);

    // TODO: domain/range types here
};

// the tyep of an errorneous term
struct ErrorType : Type
{
    COGC_DECLARE_CLASS(ErrorType, Type);
};

// the type of a reference to an overload group
struct OverloadGroupType : Type
{
    COGC_DECLARE_CLASS(OverloadGroupType, Type);
};

#endif

#define COGC_ALLOC_SYNTAX(T) \
	createObject<T>()


//

}

#endif
