#pragma once
#ifndef _ONESPACEONLY_H
#define _ONESPACEONLY_H
#include "IRule.h"

class OneSpaceOnly : public IRule {
public:
	string toString() override { return "OneSpaceOnly"; }
	string rename(string) override;
};

#endif // !_ONESPACEONLY_H
