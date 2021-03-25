#include <iostream>
#include "Partida.hpp"
#include "Jogador.hpp"

using namespace std;

int main() {

	int numero_cartas_por_jogador;
	int numero_jogadores;
	
	cin >> numero_jogadores;
	cin >> numero_cartas_por_jogador;
	
	Partida *p = new Partida(numero_jogadores);
	
	string nomeJogador;
	int numero_pontos_carta;
	int i, j;
	string naipe;

	for(int i=0; i< numero_jogadores; i++) {
	    cin >> nomeJogador;

	    for(int j=0; j<numero_cartas_por_jogador; j++){
	        cin >> numero_pontos_carta;
		    cin >> naipe;

		    p->addJogadorCarta(nomeJogador, numero_pontos_carta, naipe);
	    }
	}
	
	p->imprimeJogadoresOrdenados();
	
	Jogador vencedor = p->getCampeao();
	cout << vencedor.getNomeJogador() << endl;

	delete p;
	return 0;
}