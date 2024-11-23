#pragma once

class Data {
	private:
	int giorno;
	int mese;
	int anno;

	public:
	Data(int giorno, int mese, int anno);

	void avanzamento(int giorno, int mese, int anno);
};
