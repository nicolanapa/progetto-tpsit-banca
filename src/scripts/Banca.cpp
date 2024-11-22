#include "Banca.h"

Banca::Banca(double soldi, Utente utente) {
	this->soldi = soldi;
	this->utente = utente;
}

void Banca::deposito(double somma) {
	if (this->utente.getPortafoglio() - somma >= 0) {
		this->soldi += somma;
		this->utente.addToPortafoglio(-somma);
	} else {
		cout << "Non hai abbastanza soldi per depositare" << endl;
	}
}

void Banca::prelievo(double sottrazione) {
	if (this->soldi - sottrazione >= 0) {
		this->soldi -= sottrazione;
		this->utente.addToPortafoglio(sottrazione);
	} else {
		cout << "Non hai abbastanza soldi per fare il prelievo" << endl;
	}
}

void Banca::investimento() {}

void Banca::avanzamento() {}

double Banca::getSoldi() {
	return this->soldi;
}
