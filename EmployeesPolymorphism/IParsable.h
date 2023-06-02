#pragma once
#ifndef _IPARSABLE_H
#define _IPARSABLE_H
#include "Manager.h"
#include "DailyEmployee.h"
#include "ProductEmployee.h"

class IParsable : public Object{
public:
	virtual string toString() = 0;
	virtual Object* parse(string) = 0;
};

#endif // !_IPARSABLE_H
