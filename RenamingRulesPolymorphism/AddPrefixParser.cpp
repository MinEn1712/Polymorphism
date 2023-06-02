#include "AddPrefixParser.h"

Object* AddPrefixParser::parse(string prefix) {
	Object* createAddPrefix = new AddPrefix(prefix);
	return createAddPrefix;
}