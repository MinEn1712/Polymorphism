#pragma once
#ifndef _PRODUCTEMPLOYEE_H
#define _PRODUCTEMPLOYEE_H
#include "Employee.h"

class ProductEmployee : public Employee {
private:
	int _productCount;
	int _paymentPerProduct;
public:
	ProductEmployee() {
		this->_productCount = 0;
		this->_paymentPerProduct = 0;
	}
	ProductEmployee(int productCount, int paymentPerProduct) {
		this->_productCount = productCount;
		this->_paymentPerProduct = paymentPerProduct;
	}
	~ProductEmployee() { }
	string toString() override { return "Product Employee"; }
	int salary() override { return _productCount * _paymentPerProduct; }
};

#endif // !_PRODUCTEMPLOYEE_H