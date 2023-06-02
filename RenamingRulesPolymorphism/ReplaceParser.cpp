#include "ReplaceParser.h"

//pattern=773423, to=devops

Object* ReplaceParser::parse(string name) {
	istringstream replaceData(name);
	string patternString, replaceString;
	stringstream pattern, replace;

	getline(replaceData, patternString, ',');
	getline(replaceData, replaceString, '\n');

	for (int i = 8; i < patternString.length(); i++) {
		pattern << patternString[i];
	}
	for (int i = 4; i < replaceString.length(); i++) {
		replace << replaceString[i];
	}

	Object* createReplace = new Replace(pattern.str(), replace.str());
	return createReplace;
}
