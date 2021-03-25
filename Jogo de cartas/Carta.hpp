#ifndef CARTA
#define CARTA

#include <string>

using namespace std;

class Carta {
private:
	int _numeroPontosPadrao;
	string _naipe;

public:

	Carta(int numeroPontosPadrao, string naipe);
	
	string getNaipe();
	void setNaipe(string naipe);
	
	int getNumeroPontosPadrao();
	void setNumeroPontosPadrao(int numeroPontosPadrao);
	
	int getTotalPontos();
};

#endif