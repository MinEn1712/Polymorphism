#pragma once
#ifndef _ADDPREFIX_H
#define _ADDPREFIX_H
#include "IRule.h"

class AddPrefix : public IRule {
private:
	string _prefix;
public:
	AddPrefix() { }
	AddPrefix(string prefix) { this->_prefix = prefix; }
	~AddPrefix() { }
	string toString() override { return "AddPrefix"; }
	string rename(string) override;
};

#endif // !_ADDPREFIX_H
