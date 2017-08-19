// name.cpp
#include "name.h"

#include "session.h"

#include <stdlib.h>
#include <string.h>

namespace cogc {

Name* getName(Session* session, StringSpan text)
{
	for(auto nn = session->names; nn; nn = nn->next)
	{
		if(nn->text == text)
			return nn;
	}

	// create a new one
	size_t textSize = text.end - text.begin;
	Name* name = (Name*) malloc(sizeof(Name) + textSize + 1);

	char* textBegin = (char*) (name + 1);
	char* textEnd = textBegin + textSize;

	memcpy(textBegin, text.begin, textSize);
	*textEnd = 0;

	name->text = TerminatedStringSpan(textBegin, textEnd);
	name->next = session->names;
	session->names = name;
	return name;
}

TerminatedStringSpan getText(Name* name)
{
	return name->text;
}

}
