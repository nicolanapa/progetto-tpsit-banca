#pragma once
#include "../scripts/Banca.h"

void investimentoTest() {
	Banca breachDiSicurezza(100, Utente(), Data(23, 11));

	breachDiSicurezza.deposito(50);

	cout << breachDiSicurezza.getSoldi() << endl;
}