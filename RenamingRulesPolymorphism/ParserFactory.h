#pragma once
#ifndef _PARSERFACTORY_H
#define _PARSERFACTORY_H
#include <map>
#include "RemoveSpecialCharsParser.h"
#include "OneSpaceOnlyParser.h"
#include "AddCurrentMonthParser.h"
#include "AddPrefixParser.h"
#include "ReplaceParser.h"

class ParserFactory : public Object {
private:
	map<string, IParsable*> _container;
public:
	void registerWith(IParsable* parser);
	string toString() override { return "ParserFactory"; }
    IParsable* create(string);
};

#endif // !_PARSERFACTORY_H
