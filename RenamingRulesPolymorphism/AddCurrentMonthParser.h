#pragma once
#ifndef _ADDCURRENTMONTHPARSER_H
#define _ADDCURRENTMONTHPARSER_H
#include "IParsable.h"

class AddCurrentMonthParser : public IParsable {
public:
	string toString() override { return "AddCurrentMonth"; }
	Object* parse(string) override;
};

#endif // !_ADDCURRENTMONTHPARSER_H
