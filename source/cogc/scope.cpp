// scope.cpp
#include "scope.h"

#include "syntax.h"

#include "name.h"
#include <stdio.h>

namespace cogc {

void lookupDirectImpl(
    ContainerStmt*  container,
    Name*                           name,
    LookupResult*                   ioResult)
{
//        fprintf(stderr, "LOOKUP '%s' IN: %s\n",
//            getText(name).begin,
//            ll->container->directClass->name);
    for(auto dd : container->getDecls())
    {
        if(dd->name == name)
        {
            ioResult->items.append(LookupResultItem(dd));
        }
    }
}

LookupResult lookupDirect(
    ContainerStmt*   container,
    Name*                           name)
{
    LookupResult result;
    lookupDirectImpl(container, name, &result);
    return result;    
}

LookupResult lookupDirect(Scope* scope, Name* name)
{
    LookupResult result;
    for(auto ll = &scope->directLink; ll; ll = ll->next)
    {
        lookupDirectImpl(
            ll->container,
            name,
            &result);
    }
    return result;
}

LookupResult lookup(Scope* scope, Name* name)
{
	for(auto ss = scope; ss; ss = ss->parent)
	{
        LookupResult result = lookupDirect(ss, name);

        // don't look in outer scopes if we found a hit inside...
        if(!result.isEmpty())
            return result;
	}

    return LookupResult();
}


}
