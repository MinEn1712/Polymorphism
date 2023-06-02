#include "AddCurrentMonthParser.h"

Object* AddCurrentMonthParser::parse(string) {
	Object* createAddCurrentMonth = new AddCurrentMonth();
	return createAddCurrentMonth;
}
