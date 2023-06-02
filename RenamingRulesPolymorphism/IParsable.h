#pragma once
#ifndef _IPARSABLE_H
#define _IPARSABLE_H
#include "RemoveSpecialChars.h"
#include "OneSpaceOnly.h"
#include "AddCurrentMonth.h"
#include "AddPrefix.h"
#include "Replace.h"

class IParsable : public Object{
public:
	virtual string toString() = 0;
	virtual Object* parse(string) = 0;
};

#endif // !_IPARSABLE_H
