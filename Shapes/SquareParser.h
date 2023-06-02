#pragma once
#ifndef _SQUAREPARSER_H
#define _SQUAREPARSER_H
#include "IParsable.h"

class SquareParser : public IParsable {
public:
    SquareParser() {}
    ~SquareParser() {}
    string toString() override { return "SquareParser"; }
    Object* parse(string) override;
};
#endif // !_SQUAREPARSER_H