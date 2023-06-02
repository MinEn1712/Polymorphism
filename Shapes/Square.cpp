#include "Square.h"

string Square::toString() {
	stringstream builder;
	builder << "Square a=" << _a;
	return builder.str();
}
