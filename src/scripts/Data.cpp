#include "Data.h"

Data::Data(int giorno, int mese, int anno) {
	this->giorno = giorno;
	this->mese = mese;
	this->anno = anno;
}

void Data::avanzamento(int giorno, int mese, int anno) {
	if (this->giorno + giorno > 31) {
		int meseCalcolato = (this->giorno + giorno) / 31;

		this->giorno = (this->giorno + giorno % 365) % 30;
		this->mese += meseCalcolato;
	} else {
		this->giorno += giorno;
	}

	if (this->mese + mese > 12) {
		int annoCalcolato = (this->mese + mese) / 12;

		this->mese = (this->mese + mese) - (annoCalcolato * 12);
		this->anno += annoCalcolato;
	} else {
		this->mese += mese;
	}

	this->anno += anno;
}

void Data::getTime() {
	cout << giorno << "/" << mese << "/" << anno << endl;
}

int Data::getDifferenzaMesi(Data dataPrecedente) {
	return (this->mese - dataPrecedente.mese) +
		   (this->anno - dataPrecedente.anno) * 12;
}
