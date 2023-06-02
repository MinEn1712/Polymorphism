#pragma once
#ifndef _INTEGERTOCURRENCYCONVERTER_H
#define _INTEGERTOCURRENCYCONVERTER_H
#include <regex>
#include "Integer.h"
#include "IValueConverter.h"
#include "NumberFormatInfo.h"

class IntegerToCurrencyConverter : public IValueConverter {
public:
	string convert(const int&) override;
};

#endif // !_INTEGERTOCURRENCYCONVERTER_H
