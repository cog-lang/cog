// session.cpp
#include "session.h"

#include "alloc.h"
#include "name.h"
#include "parser.h"
#include "source.h"

#include <string.h>

#include <stdio.h>

namespace cogc {

Session* createSession()
{
	Session* session = COGC_ALLOC(Session);
	memset(session, 0, sizeof(Session));

	session->sink.session = session;

	return session;
}

void destroySession(Session* session)
{
	COGC_FREE(session);
}

void setModulePath(
	Session*	session,
	StringSpan	path)
{
	session->modulePath2 = getName(session, path);

	auto name = path;
	name = name.suffixAfterLast('/');
	name = name.suffixAfterLast('\\');
	session->moduleName2 = getName(session, name);
}

void setModulePath(
	Session*				session,
	TerminatedStringSpan	path)
{
	setModulePath(session, StringSpan(path));
}


Name* getModulePath(
	Session*	session)
{
	return session->modulePath2;
}

Name* getModuleName(
	Session*	session)
{
	return session->moduleName2;
}

void loadSourceFile(
	Session* 				session,
	TerminatedStringSpan 	path)
{
	SourceFile* file = getSourceFile(session, path);
	if(!file) return;

	parseFile(session, file);
}

int getErrorCount(
    Session* session)
{
    return session->sink.errorCount;
}


// ings that only exist as temporary work-arounds

void exit(int code)
{
	::exit(code);
}

int strcmp(char* left, char* right)
{
	return ::strcmp(left, right);
}

struct FILE;
void fprintf(FILE* file, char* message)
{
	::fprintf((::FILE*)file, "%s", message);
}


	
}
