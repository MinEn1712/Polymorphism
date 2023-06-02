#include "DailyEmployeeParser.h"

Object* DailyEmployeeParser::parse(string data) {
	istringstream dailyEmployeeData(data);
	string dayCount, paymentPerDay;
	stringstream dayCountString, paymentPerDayString;

	getline(dailyEmployeeData, dayCount, ',');
	getline(dailyEmployeeData, paymentPerDay, '\n');

	for (int i = 9; i < dayCount.length(); i++) {
		dayCountString << dayCount[i];
	}
	for (int i = 15; i < paymentPerDay.length(); i++) {
		paymentPerDayString << paymentPerDay[i];
	}

	int dayCountInt = stoi(dayCountString.str());
	int paymentPerDayInt = stoi(paymentPerDayString.str());

	Object* createDailyEmployee = new DailyEmployee(dayCountInt, paymentPerDayInt);
	return createDailyEmployee;
}