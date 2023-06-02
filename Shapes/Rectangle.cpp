#include "Rectangle.h"

string Rectangle::toString() {
	stringstream builder;
	builder << "Rectangle w=" << _width << ", " << "h=" << _height;
	return builder.str();
}