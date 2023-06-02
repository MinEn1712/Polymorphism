#include "Circle.h"

string Circle::toString() {
	stringstream builder;
	builder << "Circle r=" << _radius;
	return builder.str();
}