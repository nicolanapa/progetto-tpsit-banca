#include "Data.h"

Data::Data(int giorno, int mese, int anno) {
	this->giorno = giorno;
	this->mese = mese;
	this->anno = anno;
}

void Data::avanzamento(int giorno, int mese, int anno) {
	if (this->giorno + giorno > 31) {
		int tempGiorno = (this->giorno + giorno) / 31;

		this->giorno = (this->giorno + giorno % 365) % 30;
		this->mese += tempGiorno;
	} else {
		this->giorno += giorno;
	}

	if (this->mese + mese > 12) {
		int tempMese = (this->mese + mese) / 12;

		this->mese = (this->mese + mese) - (tempMese * 12);
		this->anno += tempMese;
	} else {
		this->mese += mese;
	}

	this->anno += anno;
}

void Data::getTime() {
	cout << giorno << "/" << mese << "/" << anno << endl;
}
