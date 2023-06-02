#pragma once
#ifndef _IVALUECONVERTER_H
#define _IVALUECONVERTER_H
#include "Object.h"

class IValueConverter : public Object {
public:
	virtual string convert(const int&) = 0;
	string toString() override { return "IValueConverter"; }
};

#endif // !_IVALUECONVERTER_H
