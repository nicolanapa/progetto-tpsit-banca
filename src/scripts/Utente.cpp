#include "Utente.h"

Utente::Utente(double portafoglio) {
	this->portafoglio = portafoglio;
}

void Utente::addToPortafoglio(double portafoglio) {
	this->portafoglio += portafoglio;
}

double Utente::getPortafoglio() {
	return this->portafoglio;
}
