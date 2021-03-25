#ifndef PARTIDA
#define PARTIDA

#include <string>
#include <iostream>
#include "Jogador.hpp"

using namespace std;

class Partida {
	
private:
	Jogador *_jogadores;
	int _num_jogadores = 0;
	int _atualSize = 0;

public:
	
	Partida(int num_jogadores);
	~Partida();
	void addJogadorCarta(string nomeJogador, int numero_pontos_carta, string naipe);
	
	int getNumJogadores();
	int getNumAtualJogadores();
	void setJogadores(Jogador* jogadores);
	Jogador* getJogadores();
	Jogador getCampeao();
	Jogador* getJogadoresOrdenados();
	void imprimeJogadoresOrdenados();
};

#endif