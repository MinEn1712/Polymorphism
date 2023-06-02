#pragma once
#ifndef _REMOVESPECIALCHARSPARSER_H
#define _REMOVESPECIALCHARSPARSER_H
#include "IParsable.h"

class RemoveSpecialCharsParser : public IParsable {
public:
	string toString() override { return "RemoveSpecialChars"; }
	Object* parse(string) override;
};

#endif // !_REMOVESPECIALCHARSPARSER_H
