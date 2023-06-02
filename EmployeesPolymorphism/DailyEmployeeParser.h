#pragma once
#ifndef _DAILYEMPLOYEEPARSER_H
#define _DAILYEMPLOYEEPARSER_H
#include "IParsable.h"

class DailyEmployeeParser : public IParsable {
public:
	string toString() override { return "DailyEmployee"; }
	Object* parse(string); 
};

#endif // !_DAILYEMPLOYEEPARSER_H