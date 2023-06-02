#pragma once
#ifndef _DAILYEMPLOYEE_H
#define _DAILYEMPLOYEE_H
#include "Employee.h"

class DailyEmployee : public Employee {
private:
	int _dayCount;
	int _paymentPerDay;
public:
	DailyEmployee() {
		this->_dayCount = 0;
		this->_paymentPerDay = 0;
	}
	DailyEmployee(int dayCount, int paymentPerDay) {
		this->_dayCount = dayCount;
		this->_paymentPerDay = paymentPerDay;
	}
	~DailyEmployee() { }
	string toString() override { return "Daily Employee"; }
	int salary() override { return _dayCount * _paymentPerDay; };
};

#endif // !_DAILYEMPLOYEE_H