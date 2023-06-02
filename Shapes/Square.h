#pragma once
#ifndef _SQUARE_H
#define _SQUARE_H
#include "IShape.h"

class Square : public IShape {
protected:
    double _a;
public:
    Square() { this->_a = 0; }
    Square(double a) { this->_a = a; }
    ~Square() {}
    string toString() override;
    double area() const override { return _a * _a; }
    double perimeter() const override { return _a * 4; }
};

#endif // !_SQUARE_H
