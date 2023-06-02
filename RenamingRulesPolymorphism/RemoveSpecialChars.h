#pragma once
#ifndef _REMOVESPECIALCHARS_H
#define _REMOVESPECIALCHARS_H
#include "IRule.h"
#include <vector>

class RemoveSpecialChars : public IRule {
private:
	vector<string> _specialChars;
public:
	RemoveSpecialChars() {}
	RemoveSpecialChars(vector<string> specialChars) {
		this->_specialChars = specialChars;
	}
	~RemoveSpecialChars() {}
	string toString() override { return "RemoveSpecialChars"; }
	string rename(string) override;
};

#endif // !_REMOVESPECIALCHARS_H
