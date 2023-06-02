#pragma once
#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
#include "Object.h"

class Employee : public Object {
public:
	string toString() override { return "Employee"; }
	virtual int salary() = 0;
};

#endif // !_EMPLOYEE_H
