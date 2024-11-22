#pragma once
#include <iostream>
#include "Utente.h"

using namespace std;

class Banca {
	private:
	double soldi;
	Utente utente;

	public:
	Banca(double soldi, Utente utente);

	void deposito();

	void prelievo();

	void investimento();

	void avanzamento();

	double getSoldi();
};
