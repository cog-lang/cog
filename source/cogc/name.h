// name.h
#ifndef COGC_NAME_H_INCLUDED
#define COGC_NAME_H_INCLUDED

#include "string.h"

namespace cogc {

struct Session;

struct Name
{
	TerminatedStringSpan	text;
	Name*					next;
};

Name* getName(Session* session, StringSpan text);
TerminatedStringSpan getText(Name* name);

inline Name* getName(Session* session, char const* text)
{
	return getName(session, TerminatedStringSpan(text));
}

}

#endif
