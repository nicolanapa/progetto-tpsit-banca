#pragma once
#include "../scripts/Banca.h"


void test() {
	Banca giornoFelice(0);

	cout << "Conto: " << giornoFelice.getSoldi() << endl;

	giornoFelice.investimento("lunga", "alto");

	giornoFelice.prelievo(20);

	cout << "Conto: " << giornoFelice.getSoldi() << endl;

	giornoFelice.deposito(50.99);

	cout << "Portafoglio: " << giornoFelice.getPortafoglio() << endl;

	cout << "Conto: " << giornoFelice.getSoldi() << endl;

	giornoFelice.prelievo(20.2);

	cout << "Portafoglio: " << giornoFelice.getPortafoglio() << endl;

	cout << "Conto: " << giornoFelice.getSoldi() << endl;
}