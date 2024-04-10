#include "MoneyC.h"

MoneyC::MoneyC()
{
	SetHr(0);
	SetKop(0);
}

MoneyC::MoneyC(const long hr, const int kop)
{
	SetHr(0);
	SetKop(0);
}

MoneyC::MoneyC(const MoneyC& m)
{
	SetHr(m.GetHr());
	SetKop(m.GetKop());
}

MoneyC& MoneyC::operator ++ ()
{
	SetHr(GetHr()+1);
	return *this;
}

MoneyC& MoneyC::operator -- ()
{
	SetHr(GetHr() - 1);
	return *this;
}

MoneyC MoneyC::operator ++ (int)
{
	MoneyC t(*this);
	SetHr(GetHr() + 1);
	return t;
}

MoneyC MoneyC::operator -- (int)
{
	MoneyC t(*this);
	SetHr(GetHr() - 1);
	return t;
}

MoneyC operator+(const MoneyC& that, const MoneyC& other)
{
	MoneyC res;
	long t1 = that.GetHr() + other.GetHr();
	int t2 = that.GetKop() + other.GetKop();
	res.SetHr(t1);
	res.SetKop(t2);
	return res;
}

double operator /(const MoneyC& that, const MoneyC& other)
{
	long hr = that.GetHr() * 1.0 / other.GetHr();
	int kop = that.GetKop() * 1.0 / other.GetKop();
	double res = hr + kop / 100;
	return res;
}

MoneyC operator /(const MoneyC& that, double division)
{
	if (that.GetHr() == 0 && that.GetKop() == 0)
	{
		throw invalid_argument("Division by zero");
	}
	long hr = (that.GetHr() * 100) / division;
	int kop = (that.GetKop()) / division;
	MoneyC res(hr, kop);
	return res;
}
