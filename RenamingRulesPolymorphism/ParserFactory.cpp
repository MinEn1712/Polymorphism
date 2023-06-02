#include "ParserFactory.h"

void ParserFactory::registerWith(IParsable* parser) {
    _container.insert({ parser->toString(), parser });
}
IParsable* ParserFactory::create(string type) {
    return _container[type];
}
//IParsable* ParserFactory::create(string type) {
//    IParsable* parser = NULL;
//
//    if ("RemoveSpecialChars" == type) {
//        parser = new RemoveSpecialCharsParser();
//    }
//    else if ("OneSpaceOnly" == type) {
//        parser = new OneSpaceOnlyParser();
//    }
//    else if ("AddCurrentMonth" == type) {
//        parser = new AddCurrentMonthParser();
//    }
//    else if ("AddPrefix" == type) {
//        parser = new AddPrefixParser();
//    }
//    else if ("Replace" == type) {
//        parser = new ReplaceParser();
//    }
//
//    return parser;
//}

