#pragma once
#include "Money.h"
class MoneyC :
    private Money
{
public:
	MoneyC();
	MoneyC(const long hr, const int kop);
	MoneyC(const MoneyC& m);
	MoneyC& operator = (const MoneyC& m);
	friend ostream& operator << (ostream& out, const MoneyC& m);
	friend istream& operator >> (istream& in, MoneyC& m);
	friend MoneyC operator +(const MoneyC& that, const MoneyC& other);
	friend double operator /(const MoneyC& that, const MoneyC& other);
	friend MoneyC operator /(const MoneyC& that, double division);
	operator string () const;
	MoneyC& operator ++ ();
	MoneyC& operator -- ();
	MoneyC operator ++ (int);
	MoneyC operator -- (int);
};

