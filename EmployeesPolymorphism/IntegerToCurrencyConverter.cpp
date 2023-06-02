#include "IntegerToCurrencyConverter.h"

string IntegerToCurrencyConverter::convert(const int& number) {
	int value = number;
	stringstream builder;
	NumberFormatInfo info;
	int count = 0;

	while (value != 0) {
		int lastDigit = value % 10;
		builder << lastDigit;

		count++;

		if (count == 3) {
			builder << info.currencyDecimalSeparator();
			count = 0;
		}

		value /= 10;
	}

	string numberSeparated = builder.str(); // "000.000.1"
	reverse(numberSeparated.begin(), numberSeparated.end());

	string format = info.currencyPositiveFormat(); //"n $" ==> "1.000.000 d"
		string symbol = info.currencySymbol(); // "d"

	string result = regex_replace(format, regex("n"), numberSeparated);
	result = regex_replace(result, regex("\\$"), symbol);

	return result;
}