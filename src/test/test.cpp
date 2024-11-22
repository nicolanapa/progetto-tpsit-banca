#include "test.h"

void test() {
	Banca giornoFelice(0);

	cout << giornoFelice.getSoldi() << endl;

	giornoFelice.prelievo(20);

	cout << giornoFelice.getSoldi() << endl;

	giornoFelice.deposito(50.99);

	cout << giornoFelice.getSoldi() << endl;

	giornoFelice.prelievo(20.2);

	cout << giornoFelice.getSoldi() << endl;
}