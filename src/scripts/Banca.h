#pragma once
#include <iostream>

using namespace std;

class Banca {
	private:
	double soldi;
	double portafoglio;

	public:
	void investimento();

	void avanzamento();

	double getSoldi();

	double getPortafoglio();
};
