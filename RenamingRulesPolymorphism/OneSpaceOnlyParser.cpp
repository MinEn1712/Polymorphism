#include "OneSpaceOnlyParser.h"

Object* OneSpaceOnlyParser::parse(string) {
	Object* createOneSpaceOnly = new OneSpaceOnly();
	return createOneSpaceOnly;
}
