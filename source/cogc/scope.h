// scope.h
#ifndef COGC_SCOPE_H_INCLUDED
#define COGC_SCOPE_H_INCLUDED

#include "array.h"
#include "syntax.h"

#include <assert.h>

namespace cogc {

struct ContainerStmt;
struct Decl;
struct Name;

struct ScopeLink
{
	ContainerStmt*	container;
    ScopeLink*      next = 0;
};

struct Scope
{
	Scope*			parent;
    ScopeLink       directLink;
};

LookupResult lookupDirect(
	ContainerStmt*	container,
    Name*           name);
LookupResult lookupDirect(Scope* scope, Name* name);
LookupResult lookup(Scope* scope, Name* name);

}

#endif
