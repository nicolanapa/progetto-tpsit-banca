#pragma once
#include <iostream>
#include <string>
#include "Utente.h"
#include "Data.h"

using namespace std;

class Banca {
	private:
	double soldi;
	Utente utente;
	Data tempo;

	public:
	Banca(double soldi = 0, Utente utente = Utente(), Data tempo = Data());

	void gui();

	void deposito(double somma);

	void prelievo(double sottrazione);

	void investimento(double soldi, string durata, string rischio = "basso");

	void avanzamento(int giorno, int mese = 0, int anno = 0);

	double getSoldi();

	double getPortafoglio();
};
