#include "Replace.h"

string Replace::rename(string name) {
	string result = regex_replace(name, regex(_pattern), _replace);
	return result;
}


