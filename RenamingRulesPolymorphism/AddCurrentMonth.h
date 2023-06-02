#pragma once
#ifndef _ADDCURRENTMONTH_H
#define _ADDCURRENTMONTH_H
#include "IRule.h"

class AddCurrentMonth : public IRule {
private:
	string _currentMonth;
public:
	string toString() override { return "AddCurrentMonth"; }
	string rename(string) override;
};

#endif // !_ADDCURRENTMONTH_H
