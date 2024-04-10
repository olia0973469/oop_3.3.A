#include "MoneyO.h"

MoneyO::MoneyO(const long hr, const int kop)
{
	SetHr(hr);
	SetKop(kop);
}

MoneyO::MoneyO(const MoneyO& m)
{
	SetHr(m.GetHr());
	SetKop(m.GetKop());
}

MoneyO::MoneyO()
{
	SetHr(0);
	SetKop(0);
}

MoneyO& MoneyO::operator ++ ()
{
	SetHr(GetHr() + 1);
	return *this;
}

MoneyO& MoneyO::operator -- ()
{
	SetHr(GetHr() - 1);
	return *this;
}

MoneyO MoneyO::operator ++ (int)
{
	MoneyO t(*this);
	SetHr(GetHr() + 1);
	return t;
}

MoneyO MoneyO::operator -- (int)
{
	MoneyO t(*this);
	SetHr(GetHr() - 1);
	return t;
}

MoneyO operator+(const MoneyO& that, const MoneyO& other)
{
	/*MoneyO res;
	res.SetHr(that.GetHr() + other.GetHr());
	res.SetKop(that.GetKop() + other.GetKop());*/
	MoneyO res;
	long t1 = that.GetHr() + other.GetHr();
	int t2 = that.GetKop() + other.GetKop();
	res.SetHr(t1);
	res.SetKop(t2);
	return res;
}

double operator /(const MoneyO& that, const MoneyO& other)
{
	long hr = that.GetHr() * 1.0 / other.GetHr();
	int kop = that.GetKop() * 1.0 / other.GetKop();
	double res = hr + kop / 100;
	return res;
}

MoneyO operator /(const MoneyO& that, double division)
{
	if (that.GetHr() == 0 && that.GetKop() == 0)
	{
		throw invalid_argument("Division by zero");
	}
	long hr = (that.GetHr() * 100) / division;
	int kop = (that.GetKop()) / division;
	MoneyO res(hr, kop);
	return res;
}
