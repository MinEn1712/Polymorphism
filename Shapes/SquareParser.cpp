#include "SquareParser.h"

Object* SquareParser::parse(string shape) {
    stringstream aValueString;
    for (int i = 2; i < shape.length(); i++)
        aValueString << shape[i];
    double aValueDouble = stod(aValueString.str());

    Square* createSquare = new Square(aValueDouble);
    return createSquare;
}
