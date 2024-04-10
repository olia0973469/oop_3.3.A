//////////////////////////////////////////////////////////////////////////////
// Money.h
// заголовний файл Ц визначенн€ класу

#pragma once
#include <string>
#include <iostream>

using namespace std;

class Money
{
private:
	long hr;
	int kop;
public:
	long GetHr() const { return hr; }
	int GetKop() const { return kop; }
	void SetHr(long value) { hr = value; }
	void SetKop(int value) { kop = value; }
	void Init(long hr, int kop);
	void Display() const;
	void Read();
	Money();
	Money(const long hr);
	Money(const int kop);
	Money(const long hr, const int kop);
	Money(const Money& m);
	Money& operator = (const Money& m);
	friend ostream& operator << (ostream& out, const Money& m);
	friend istream& operator >> (istream& in, Money& m);
	operator string () const;
	~Money(void);
};
