#include "AddCurrentMonth.h"

string AddCurrentMonth::rename(string name) {
	time_t t = time(NULL);
	tm now;
	localtime_s(&now, &t);

	stringstream builder;
	builder << (now.tm_mon + 1) << (now.tm_year + 1900 - 2000) << " " << name;
	return builder.str();
}
