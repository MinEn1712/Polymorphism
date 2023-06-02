#pragma once
#ifndef _REMOVE_H
#define _REMOVE_H
#include "IRule.h"

class Replace : public IRule {
private:
	string _pattern;
	string _replace;
public:
	Replace() { this->_pattern = " "; this->_replace = " "; };
	Replace(string pattern, string replace) { this->_pattern = pattern; this->_replace = replace; };
	~Replace() { }
	string toString() override { return "Replace"; }
	string rename(string) override;
};

#endif // !_REMOVE_H
