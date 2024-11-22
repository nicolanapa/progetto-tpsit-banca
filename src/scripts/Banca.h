#pragma once
#include <iostream>
#include <ctime>
#include "Utente.h"

using namespace std;

class Banca {
	private:
	double soldi;
	Utente utente;
	time_t tempo;

	public:
	Banca(double soldi, Utente utente = Utente());

	void deposito(double somma);

	void prelievo(double sottrazione);

	void investimento();

	void avanzamento();

	double getSoldi();
};
