#pragma once
#ifndef _PARSERFACTORY_H
#define _PARSERFACTORY_H
#include <vector>
#include "RectangleParser.h"
#include "CircleParser.h"
#include "SquareParser.h"

class ParserFactory : public Object {
public:
    string toString() override { return "ParserFactory"; }
    IParsable* create(string);
};

#endif // !_PARSERFACTORY_H
