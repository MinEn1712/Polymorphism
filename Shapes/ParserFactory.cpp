#include "ParserFactory.h"

IParsable* ParserFactory::create(string type) {
    IParsable* parser = NULL;

    if ("Rectangle" == type) {
        parser = new RectangleParser();
    }
    else if ("Square" == type) {
        parser = new SquareParser();
    }
    else if ("Circle" == type) {
        parser = new CircleParser();
    }

    return parser;
}
