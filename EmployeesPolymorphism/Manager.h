#pragma once
#ifndef _MANAGER_H
#define _MANAGER_H
#include "Employee.h"

class Manager : public Employee {
private:
	int _employeeCount;
	int _paymentPerEmployee;
	int _baseSalary;
public:
	Manager() {
		this->_employeeCount = 0;
		this->_paymentPerEmployee = 0;
		this->_baseSalary = 0;
	}
	Manager(int employeeCount, int paymentPerEmployee, int baseSalary) {
		this->_employeeCount = employeeCount;
		this->_paymentPerEmployee = paymentPerEmployee;
		this->_baseSalary = baseSalary;
	}
	~Manager() { }
	string toString() override { return "Manager"; }
	int salary() override { return _employeeCount * _paymentPerEmployee + _baseSalary; }
};

#endif // !_MANAGER_H
