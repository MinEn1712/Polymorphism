#include "ManagerParser.h"

Object* ManagerParser::parse(string data) {
	istringstream managerData(data);
	string employeeCount, paymentPerEmployee, baseSalary;
	stringstream employeeCountString, paymentPerEmployeeString, baseSalaryString;

	getline(managerData, employeeCount, ',');
	getline(managerData, paymentPerEmployee, ',');
	getline(managerData, baseSalary, '\n');

	for (int i = 14; i < employeeCount.length(); i++) {
		employeeCountString << employeeCount[i];
	}
	for (int i = 20; i < paymentPerEmployee.length(); i++) {
		paymentPerEmployeeString << paymentPerEmployee[i];
	}
	for (int i = 12; i < baseSalary.length(); i++) {
		baseSalaryString << baseSalary[i];
	}

	int employeeCountInt = stoi(employeeCountString.str());
	int paymentPerEmployeeInt = stoi(paymentPerEmployeeString.str());
	int baseSalaryInt = stoi(baseSalaryString.str());

	Object* createManager = new Manager(employeeCountInt, paymentPerEmployeeInt, baseSalaryInt);
	return createManager;
}
