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

void Banca::investimento(string durata, string rischio) {
	if (this->soldi <= 0) {
		cout << "Nessun investimento disponibile: ";
		cout << "Conto inferiore o uguale a 0" << endl;

		return;
	}

	if (durata == "breve") {
		this->avanzamento(/*1 mese*/);
	} else if (durata == "media") {
		this->avanzamento(/*6 mese*/);
	} else if (durata == "lunga") {
		this->avanzamento(/*12 mese*/);
	}

	// calcolazione rischio e guadagno
}

void Banca::avanzamento() {}

double Banca::getSoldi() {
	return this->soldi;
}

double Banca::getPortafoglio() {
	return this->utente.getPortafoglio();
}
