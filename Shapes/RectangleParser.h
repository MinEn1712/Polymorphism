#pragma once
#ifndef _RECTANGLEPARSER_H
#define _RECTANGLEPARSER_H
#include "IParsable.h"

class RectangleParser : public IParsable {
public:
    RectangleParser() {}
    ~RectangleParser() {}
    string toString() override { return "RectangleParser"; }
    Object* parse(string) override;
};

#endif // !_RECTANGLEPARSER_H