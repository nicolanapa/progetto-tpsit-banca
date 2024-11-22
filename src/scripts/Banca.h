#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include "Utente.h"

using namespace std;

class Banca {
	private:
	double soldi;
	Utente utente;
	//time_t tempo;

	public:
	Banca(double soldi, Utente utente = Utente());

	void deposito(double somma);

	void prelievo(double sottrazione);

	void investimento(string durata, string rischio);

	void avanzamento();

	double getSoldi();

	double getPortafoglio();
};
