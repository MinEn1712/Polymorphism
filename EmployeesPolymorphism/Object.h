#pragma once
#ifndef _OBJECT_H
#define _OBJECT_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Object {
	virtual string toString() = 0;
};

#endif // !_OBJECT_H
