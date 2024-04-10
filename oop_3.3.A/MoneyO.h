#pragma once
#include "Money.h"
class MoneyO :
    public Money
{
public:
	MoneyO();
	MoneyO(const long hr, const int kop);
	MoneyO(const MoneyO& m);
	friend MoneyO operator +(const MoneyO& that, const MoneyO& other);
	friend double operator /(const MoneyO& that, const MoneyO& other);
	friend MoneyO operator /(const MoneyO& that, double division);
	MoneyO& operator ++ ();
	MoneyO& operator -- ();
	MoneyO operator ++ (int);
	MoneyO operator -- (int);
};

