#include "RemoveSpecialCharsParser.h"

// data = "blacklist=-_+"
Object* RemoveSpecialCharsParser::parse(string data) {
	vector<string> specialChar;
	stringstream builder;
	for (int i = 0; i < data.length() - 4; i++) {
		builder << data[i];
	}
	specialChar.push_back(builder.str());

	for (int i = data.length() - 4; i < data.length(); i++) {
		stringstream builder;
		builder << data[i];
		specialChar.push_back(builder.str());
	}

	RemoveSpecialChars* removeSpecialChars = new RemoveSpecialChars(specialChar);
	return removeSpecialChars;
}
