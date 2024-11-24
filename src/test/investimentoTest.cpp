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

		cout << breachDiSicurezza.getPortafoglio() << endl;

		breachDiSicurezza.deposito(1500);

		cout << breachDiSicurezza.getSoldi() << endl;
		cout << breachDiSicurezza.getPortafoglio() << endl;
	}

	Banca aiutoRichiesto(50);

	cout << aiutoRichiesto.getPortafoglio() << endl;

	aiutoRichiesto.avanzamento(0, 2);

	cout << aiutoRichiesto.getPortafoglio() << endl;

	aiutoRichiesto.avanzamento(0, 0, 1);

	cout << aiutoRichiesto.getPortafoglio() << endl;

	aiutoRichiesto.avanzamento(0, 2, 1);

	cout << aiutoRichiesto.getPortafoglio() << endl;

	aiutoRichiesto.avanzamento(62);

	cout << aiutoRichiesto.getPortafoglio() << endl;

	aiutoRichiesto.avanzamento(62, 24, 2);

	cout << aiutoRichiesto.getPortafoglio() << endl;

	aiutoRichiesto.deposito(7000);
	aiutoRichiesto.investimento(7000, "lunga", "alto");

	cout << aiutoRichiesto.getPortafoglio() << endl;

	aiutoRichiesto.investimento(100, "lunga", "alto");
}