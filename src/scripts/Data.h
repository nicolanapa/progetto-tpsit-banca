#pragma once

class Data {
	private:
	int giorno;
	int mese;
	int anno;

	public:
	Data(int giorno = 1, int mese = 1, int anno = 2024);

	void avanzamento(int giorno, int mese, int anno);
};
