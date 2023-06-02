#pragma once
#ifndef _CIRCLEPARSER_H
#define _CIRCLEPARSER_H
#include "IParsable.h"

class CircleParser : public IParsable {
public:
    CircleParser() {}
    ~CircleParser() {}
    string toString() override { return "CircleParser"; }
    Object* parse(string) override;
};

#endif // !_CIRCLEPARSER_H