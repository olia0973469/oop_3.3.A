//////////////////////////////////////////////////////////////////////////////
// Money.cpp
// פאיכ נואכ³חאצ³¿ – נואכ³חאצ³ÿ לועמה³ג ךכאסף

#include "Money.h"
#include <sstream>


Money::Money()
	: hr(0), kop(0)
{}

Money::Money(const long hr)
	: hr(hr), kop(0)
{}

Money::Money(const int kop)
	: hr(0), kop(kop)
{}

Money::Money(const long hr, const int kop)
	: hr(hr), kop(kop)
{}

Money::Money(const Money& m)
	: hr(m.hr), kop(m.kop)
{}

Money& Money::operator =(const Money& m)
{
	this->hr = m.hr;
	this->kop = m.kop;
	return *this;
}

ostream& operator <<(ostream& out, const Money& m)
{
	out << string(m);
	return out;
}

istream& operator >>(istream& in, Money& m)
{
	long hr;
	int kop;
	cout << endl;
	cout << "hr = "; in >> hr;
	cout << "kop = "; in >> kop;

	m.SetHr(hr);

	m.SetKop(kop);
	return in;
}

Money::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "hr = " << hr << endl;
	ss << "kop = " << kop << endl;
	return ss.str();
}

Money::~Money(void)
{}
