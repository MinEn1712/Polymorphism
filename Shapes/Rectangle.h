#pragma once
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "IShape.h"

class Rectangle : public IShape {
protected:
    double _width;
    double _height;
public:
    Rectangle() { this->_width = 0; this->_height = 0; }
    Rectangle(double width, double height) { this->_width = width; this->_height = height; }
    ~Rectangle() {}
    string toString() override;
    double area() const override { return _width * _height; }
    double perimeter() const override { return (_width + _height) * 2; }
};

#endif // !_RECTANGLE_H
