#pragma once
#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "IShape.h"

class Circle : public IShape {
public:
    const double PI = 3.14;
protected:
    double _radius;
public:
    Circle() { this->_radius = 0; }
    Circle(double radius) { this->_radius = radius; }
    ~Circle() {}
    string toString() override;
    double area() const override { return _radius * _radius * PI; }
    double perimeter() const override { return 2 * _radius * PI; }
};

#endif // !_CIRCLE_H
