#include "RectangleParser.h"

Object* RectangleParser::parse(string shape) {
    istringstream recValueString(shape);
    string width, height;
    stringstream widthValueString, heightValueString;

    getline(recValueString, width, ',');
    getline(recValueString, height, '\n');

    for (int i = 2; i < width.length(); i++)
        widthValueString << width[i];
    for (int i = 3; i < height.length(); i++)
        heightValueString << height[i];

    double widthValueDouble = stod(widthValueString.str());
    double heightValueDouble = stod(heightValueString.str());

    Rectangle* createRectangle = new Rectangle(widthValueDouble, heightValueDouble);
    return createRectangle;
}