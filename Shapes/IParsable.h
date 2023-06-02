#pragma once
#ifndef _IPARSABLE_H
#define _IPARSABLE_H
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

class IParsable : public Object {
public:
    string toString() override { return "IParsable"; }
    virtual Object* parse(string) = 0;
};

#endif // !_IPARSABLE_H
