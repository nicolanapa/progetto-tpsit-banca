#include <string>
#include "Banca.h"
#include "Data.h"

Banca::Banca(double soldi, Utente utente, Data tempo) {
	this->soldi = soldi;
	this->utente = utente;
	this->tempo = tempo;
}

void Banca::gui() {
	cout << "Scegli una di queste opzioni:" << endl;
	cout << "1 - deposito      2 - prelievo" << endl;
	cout << "3 - investimento  4 - avanzamento nel tempo" << endl;
	cout << "    5 - controlla il tuo conto" << endl;
	cout << "    6 - controlla il tuo portafoglio" << endl;
	cout << "    7 - logout" << endl;

	int scelta;
	int soldi = 0;

	cin >> scelta;

	while (scelta != 7) {
		switch (scelta) {
			case 1:
				cout << "Quando vuoi depositare dal tuo portafoglio?" << endl;
				cout << "Ricordati che hai " << this->getPortafoglio()
					 << " euro" << endl;

				cin >> soldi;

				this->deposito(soldi);

				break;
			case 2:
				cout << "Quando soldi vuoi prelevare verso il tuo portafoglio?"
					 << endl;
				cout << "Ricordati che hai " << this->getSoldi() << " euro"
					 << endl;

				cin >> soldi;

				this->prelievo(soldi);

				break;
			case 3: {
				cout << "Puoi scegliere" << endl;
				cout << " - quanto investire" << endl;
				cout << " - la durata dell'investimento" << endl;
				cout << "   breve, media, lunga" << endl;
				cout << " - il rischio dell'investimento" << endl;
				cout << "   basso, medio, alto" << endl;
				cout << "Ricordati che hai " << this->getSoldi() << " euro"
					 << endl;

				string durata;
				string rischio;

				cin >> soldi >> durata >> rischio;

				this->investimento(soldi, durata, rischio);

				break;
			}
			case 4:
				this->avanzamento(1);

				break;
			case 5:
				cout << "Nel tuo conto hai " << this->getSoldi() << " euro"
					 << endl;

				break;
			case 6:
				cout << "Nel tuo portafoglio hai " << this->getPortafoglio()
					 << " euro" << endl;

				break;
			default:
				cout << "Valore invalido" << endl;

				break;
		}

		cin >> scelta;
	}
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

void Banca::investimento(double soldi, string durata, string rischioTeorico) {
	if (this->soldi <= 0 || soldi <= 0 || this->soldi - soldi < 0) {
		cout << "Nessun investimento disponibile: ";
		cout << "Conto inferiore o uguale a 0" << endl;

		return;
	}

	double guadagno = 1;
	double rischio = 0;

	if (durata == "breve") {
		this->avanzamento(0, 1, 0);

		guadagno = 1.05;
	} else if (durata == "media") {
		this->avanzamento(0, 6, 0);

		guadagno = 1.25;
	} else if (durata == "lunga") {
		this->avanzamento(0, 0, 1);

		guadagno = 1.4;
	}

	double investimentoFinale = (soldi * guadagno) - soldi;

	if (rischioTeorico == "basso") {
		rischio = 1;
		investimentoFinale *= 1.5;
	} else if (rischioTeorico == "medio") {
		rischio = 1.5;
		investimentoFinale *= 2.5;
	} else if (rischioTeorico == "alto") {
		rischio = 3;
		investimentoFinale *= 4;
	}

	double randomValue = (rand() % 8000) * rischio;

	cout << "Calcolazione perdita o guadagno finale..." << endl;

	if (randomValue < 4500) {
		cout << "Guadagno!" << endl;
		cout << "Hai guadagnato ";
	} else {
		cout << "Perdita!" << endl;
		cout << "Hai perso ";

		investimentoFinale = -investimentoFinale;
	}

	cout << investimentoFinale << " euro" << endl;

	this->soldi += investimentoFinale;

	cout << "Conto attuale: " << this->getSoldi() << " euro" << endl;
}

void Banca::avanzamento(int giorno, int mese, int anno) {
	Data temp = this->tempo;

	this->tempo.avanzamento(giorno, mese, anno);

	int bonus = this->tempo.getDifferenzaMesi(temp) * 100;

	this->utente.addToPortafoglio(bonus);

	cout << "Bonus di " << bonus << " euro aggiunti al Portafoglio!" << endl;
}

double Banca::getSoldi() {
	return this->soldi;
}

double Banca::getPortafoglio() {
	return this->utente.getPortafoglio();
}
