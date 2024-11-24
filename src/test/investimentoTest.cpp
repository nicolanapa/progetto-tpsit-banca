#pragma once
#include "../scripts/Banca.h"

void investimentoTest() {
	Banca breachDiSicurezza(10000, Utente(), Data(23, 11));

	breachDiSicurezza.deposito(50);

	breachDiSicurezza.investimento(100, "breve");
	breachDiSicurezza.investimento(50, "media");
	breachDiSicurezza.investimento(50, "lunga");

	breachDiSicurezza.investimento(120, "breve", "alto");
	breachDiSicurezza.investimento(50, "media", "alto");
	breachDiSicurezza.investimento(7000, "lunga", "alto");

	if (breachDiSicurezza.getSoldi() <= 0) {
		breachDiSicurezza.investimento(100, "breve");

		breachDiSicurezza.deposito(1500);

		cout << breachDiSicurezza.getSoldi() << endl;
	}
}