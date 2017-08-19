// session.h
#ifndef COGC_SESSION_H
#define COGC_SESSION_H

#include "diagnostic.h"
#include "string.h"

#include <stdint.h>

namespace cogc {

struct Decl;
struct ModuleDecl;
struct Name;
struct SourceFile;

struct Session
{
	SourceFile* 	sourceFiles;
	Name*			names;
	uintptr_t 		lastSourceLoc;
	DiagnosticSink 	sink;
	ModuleDecl*		moduleDecl;
	Decl**			moduleDeclLink;

	Name*			moduleName2;
	Name*			modulePath2;

    ModuleDecl*     loadedModules;
};

// Create a new compilation session
Session* createSession();

// Destroy a compilation session, and
// free all allocated memory
void destroySession(Session* session);

void setModulePath(
	Session*	session,
	StringSpan	path);

void setModulePath(
	Session*				session,
	TerminatedStringSpan	path);

Name* getModulePath(
	Session*	session);

Name* getModuleName(
	Session*	session);

// Load source code into the session
void loadSourceFile(
	Session* 				session,
	TerminatedStringSpan 	path);

int getErrorCount(
    Session* session);

}

#endif
