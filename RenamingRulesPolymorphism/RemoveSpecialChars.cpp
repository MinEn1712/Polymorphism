#include "RemoveSpecialChars.h"

string RemoveSpecialChars::rename(string name) {
	stringstream builder;
	int change = 0;

	for (int i = 0; i < name.length(); i++) {
		stringstream nameLetter;
		nameLetter << name[i];
		for (int j = 1; j < _specialChars.size(); j++) {
			if (nameLetter.str() == _specialChars[j]) {
				builder << " ";
				change = 1;
			}
		}
		if (change == 0) builder << name[i];
		change = 0;
	}

	return builder.str();
}

