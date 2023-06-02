#pragma once
#ifndef _PARSERFACTORY_H
#define _PARSERFACTORY_H
#include <map>
#include <vector>
#include "ManagerParser.h"
#include "DailyEmployeeParser.h"
#include "ProductEmployeeParser.h"
#include "IntegerToCurrencyConverter.h"

class ParserFactory : public Object {
private:
	map<string, IParsable*> _container;
public:
	void registerWith(IParsable* parser);
	IParsable* create(string type);
	string toString() override { return "ParserFactory"; };
};

#endif // !_PARSERFACTORY_H
