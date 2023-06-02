#pragma once
#ifndef _ISHAPE_H
#define _ISHAPE_H
#include "Object.h"

class IShape : public Object {
public:
    string toString() override { return "IShape"; }
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

#endif // !_ISHAPE_H
