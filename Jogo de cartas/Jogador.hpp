#ifndef JOGADOR
#define JOGADOR

#include <string>
#include <vector>
#include "Carta.hpp"

using namespace std;

class Jogador {
private:
	string _nomeJogador;
	vector<Carta> _cartas;

public:

	Jogador();
	void adicionaCarta (Carta carta);
	
	vector<Carta> getCartas();
	void setCartas(vector<Carta> cartas);
	
	string getNomeJogador();
	void setNomeJogador(string nome);
	
	int calcularPontuacao();
};

#endif
