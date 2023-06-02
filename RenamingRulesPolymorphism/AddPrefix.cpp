#include "AddPrefix.h"

string AddPrefix::rename(string name) {
	stringstream builder;
	builder << this->_prefix << " " << name;
	return builder.str();
}
