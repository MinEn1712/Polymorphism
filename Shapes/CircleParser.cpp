#include "CircleParser.h"

Object* CircleParser::parse(string shape) {
    stringstream rValueString;
    for (int i = 2; i < shape.length(); i++)
        rValueString << shape[i];
    double rValueDouble = stod(rValueString.str());

    Circle* createCircle = new Circle(rValueDouble);
    return createCircle;
}