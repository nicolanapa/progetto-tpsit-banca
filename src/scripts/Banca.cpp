#include "Banca.h"
#include "Data.h"

Banca::Banca(double soldi, Utente utente, Data tempo) {
	this->soldi = soldi;
	this->utente = utente;
	this->tempo = tempo;
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

void Banca::investimento(string durata, string rischioTeorico) {
	if (this->soldi <= 0) {
		cout << "Nessun investimento disponibile: ";
		cout << "Conto inferiore o uguale a 0" << endl;

		return;
	}

	double guadagno = 1;
	double rischio = 0;

	if (durata == "breve") {
		this->avanzamento(0, 1, 0);

		guadagno = 1.0002;
	} else if (durata == "media") {
		this->avanzamento(0, 6, 0);

		guadagno = 1.002;
	} else if (durata == "lunga") {
		this->avanzamento(0, 0, 1);

		guadagno = 1.2;
	}

	if (rischioTeorico == "basso") {
		rischio = 0.75;
	} else if (rischioTeorico == "medio") {
		rischio = 1.5;
	} else if (rischioTeorico == "alto") {
		rischio = 3;
	}

	cout << "Calcolazione perdita o guadagno finale..." << endl;
	if (/*rand()*/1) {
		cout << "Guadagno!" << endl;
	} else {
		cout << "Perdita!" << endl;
	}
}

void Banca::avanzamento(int giorno, int mese, int anno) {
	// temp save valori vecchi per la comparazione
	this->tempo.avanzamento(giorno, mese, anno);
	// comparazione e aggiunta bonus 100 euro
	// this->utente.addToPortafoglio(100);
	// cout << "Bonus 100 euro aggiunti al Portafoglio!" << endl;
}

double Banca::getSoldi() {
	return this->soldi;
}

double Banca::getPortafoglio() {
	return this->utente.getPortafoglio();
}
