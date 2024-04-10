//////////////////////////////////////////////////////////////////////////////
// Source.cpp
// головний файл проекту – функція main
#include "Money.h"
#include "MoneyO.h"
#include "MoneyC.h"
using namespace std;
int main()
{
	Money t;
	MoneyO mon1;
	MoneyO mon;
	MoneyO mon2(mon);
	MoneyO mon3(mon2);
	int d;
	cout << " Hryvni = "; cin >> d;
	t.SetHr(d);
	cout << " Kopijky = "; cin >> d;
	t.SetKop(d);
	MoneyO add;
	add = mon1 + mon2;
	cout << "Add: " << add << endl;
	
	cout << "Divide: " << mon2 / mon3 << endl;
    
	cout << "Divide fraction: " <<  mon1 / 2 << endl;
	return 0;
}
