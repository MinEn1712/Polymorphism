#pragma once
#ifndef _ONESPACEONLYPARSER_H
#define _ONESPACEONLYPARSER_H
#include "IParsable.h"

class OneSpaceOnlyParser : public IParsable {
public:
	string toString() override { return "OneSpaceOnly"; }
	Object* parse(string) override;
};

#endif // !_ONESPACEONLYPARSER_H
