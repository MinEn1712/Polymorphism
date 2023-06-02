#pragma once
#ifndef _IRULE_H
#define _IRULE_H
#include "Object.h"

class IRule : public Object {
public:
	virtual string toString() = 0;
	virtual string rename(string) = 0;
};

#endif // !_IRULE_H
