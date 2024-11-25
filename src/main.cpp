#include <iostream>
#include "scripts/Banca.h"
#include "scripts/Utente.h"

using namespace std;

void prelievoDepositoTest();

void dataTest();

void investimentoTest();

void guiTest();

int main() {
	srand(time(NULL));

	prelievoDepositoTest();

	cout << endl;

	dataTest();

	cout << endl;

	investimentoTest();

	cout << endl;

	guiTest();

	return 0;
}