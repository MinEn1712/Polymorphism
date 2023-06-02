#pragma once
#ifndef _INTEGER_H
#define _INTEGER_H
#include "Object.h"

class Integer : public Object {
private:
	int _value;
public:
	Integer(int value) { this->_value = value; }
	int value() { return _value; }
	string toString() override { return "Integer"; }
};

#endif // !_INTEGER_H
