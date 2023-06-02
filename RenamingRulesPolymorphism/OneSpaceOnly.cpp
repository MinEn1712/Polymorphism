#include "OneSpaceOnly.h"

string OneSpaceOnly::rename(string name) {
	stringstream builder;
	for (int i = 0; i < name.length(); i++) {
		if (i == 0 && name[i] == ' ') {
			while (name[i] == ' ') {
				i++;
				continue;
			}
		}
		if (name[i] == ' ' && name[i + 1] == ' ') continue;
		builder << name[i];
	}
	return builder.str();
}
