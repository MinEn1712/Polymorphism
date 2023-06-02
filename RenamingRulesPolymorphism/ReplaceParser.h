#pragma once
#ifndef _REPLACEPARSER_H
#define _REPLACEPARSER_H
#include "IParsable.h"

class ReplaceParser : public IParsable {
public:
	string toString() override { return "Replace"; }
	Object* parse(string) override;
};

#endif // !_REPLACEPARSER_H
