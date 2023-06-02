#pragma once
#ifndef _OBJECT_H
#define _OBJECT_H
#include <iostream>
#include <ctime>
#include <string>
#include <sstream>
#include <regex>
using namespace std;

class Object {
public:
	virtual string toString() = 0;
};

#endif // !_OBJECT_H
