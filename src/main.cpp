#include <iostream>
#include "scripts/Banca.h"
#include "scripts/Utente.h"

using namespace std;

void prelievoDepositoTest();

void dataTest();

void investimentoTest();

int main() {
	srand(time(NULL));

	prelievoDepositoTest();

	cout << endl;

	dataTest();

	cout << endl;

	investimentoTest();

	return 0;
}