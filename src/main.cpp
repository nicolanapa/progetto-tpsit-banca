#include <iostream>
#include "scripts/Banca.h"
#include "scripts/Utente.h"

using namespace std;

void test();

void dataTest();

void investimentoTest();

int main() {
	srand(time(NULL));

	test();

	cout << endl;

	dataTest();

	cout << endl;

	investimentoTest();

	return 0;
}