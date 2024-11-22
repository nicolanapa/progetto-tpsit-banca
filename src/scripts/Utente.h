#pragma once

class Utente {
	private:
	double portafoglio;

	public:
	Utente(double portafoglio = 100);

	void addToPortafoglio(double portafoglio);

	double getPortafoglio();
};
