#include "ProductEmployeeParser.h"

Object* ProductEmployeeParser::parse(string data) {
	istringstream productEmployeeData(data);
	string productCount, paymentPerProduct;
	stringstream productCountString, paymentPerProductString;

	getline(productEmployeeData, productCount, ',');
	getline(productEmployeeData, paymentPerProduct, '\n');

	for (int i = 13; i < productCount.length(); i++) {
		productCountString << productCount[i];
	}
	for (int i = 19; i < paymentPerProduct.length(); i++) {
		paymentPerProductString << paymentPerProduct[i];
	}

	int productCountInt = stoi(productCountString.str());
	int paymentPerProductInt = stoi(paymentPerProductString.str());

	Object* createProductEmployee = new ProductEmployee(productCountInt, paymentPerProductInt);
	return createProductEmployee;
}