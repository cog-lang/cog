// check.h
#ifndef COGC_CHECK_H_INCLUDED
#define COGC_CHECK_H_INCLUDED

// Interface for semantic checking

namespace cogc {

struct ModuleDecl;
struct Session;

// Check code that has been loaded into
// a compilation session.
void checkModule(
	Session* session);

// Explicit entry point for checking a given module
void checkModule(
    Session*    session,
    ModuleDecl* moduleDecl);


}

#endif
