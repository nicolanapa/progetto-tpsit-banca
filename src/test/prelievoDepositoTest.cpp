#pragma once
#include "../scripts/Banca.h"

void prelievoDepositoTest() {
	Banca giornoFelice(0, Utente(), Data(23, 11));

	cout << "Conto: " << giornoFelice.getSoldi() << endl;

	giornoFelice.prelievo(20);

	cout << "Conto: " << giornoFelice.getSoldi() << endl;

	giornoFelice.deposito(50.99);

	cout << "Portafoglio: " << giornoFelice.getPortafoglio() << endl;

	cout << "Conto: " << giornoFelice.getSoldi() << endl;

	giornoFelice.prelievo(20.2);

	cout << "Portafoglio: " << giornoFelice.getPortafoglio() << endl;

	cout << "Conto: " << giornoFelice.getSoldi() << endl;

	giornoFelice.avanzamento(0, 3, 0);

	cout << "Portafoglio: " << giornoFelice.getPortafoglio() << endl;

	cout << "Conto: " << giornoFelice.getSoldi() << endl;

	giornoFelice.avanzamento(0, 0, 1);

	cout << "Portafoglio: " << giornoFelice.getPortafoglio() << endl;

	cout << "Conto: " << giornoFelice.getSoldi() << endl;
}