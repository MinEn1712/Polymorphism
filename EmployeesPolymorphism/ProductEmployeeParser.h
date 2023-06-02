#pragma once
#ifndef _PRODUCTEMPLOYEEPARSER_H
#define _PRODUCTEMPLOYEEPARSER_H
#include "IParsable.h"

class ProductEmployeeParser : public IParsable {
public:
	string toString() override { return "ProductEmployee"; }
	Object* parse(string); 
};

#endif // !_PRODUCTEMPLOYEEPARSER_H