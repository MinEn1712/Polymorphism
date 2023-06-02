#pragma once
#ifndef _ADDPREFIXPARSER_H
#define _ADDPREFIXPARSER_H
#include "IParsable.h"

class AddPrefixParser : public IParsable {
public:
	string toString() override { return "AddPrefix"; }
	Object* parse(string) override;
};

#endif // !_ADDPREFIXPARSER_H
