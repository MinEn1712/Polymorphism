#pragma once
#ifndef _MANAGERPARSER_H
#define _MANAGERPARSER_H
#include "IParsable.h"

class ManagerParser : public IParsable {
public:
	string toString() override { return "Manager"; }
	Object* parse(string);
};

#endif // !_MANAGERPARSER_H
