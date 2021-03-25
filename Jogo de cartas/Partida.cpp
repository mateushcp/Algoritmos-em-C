#include "Partida.hpp"
#include "Jogador.hpp"
#include <algorithm>



Partida::Partida(int num_jogadores){
   	this -> _jogadores = NULL;
	_num_jogadores = num_jogadores;
	_atualSize = 0;
    _jogadores = new Jogador[num_jogadores];
}

Partida::~Partida(){
    delete[] _jogadores;
}

int Partida::getNumJogadores(){
    return _num_jogadores;
}

void Partida::setJogadores(Jogador* Jogadores){
    _jogadores = Jogadores;
}

Jogador* Partida::getJogadores(){
    return _jogadores;
}

Jogador Partida::getCampeao(){
    
    Jogador* jogadores_ordenados = getJogadoresOrdenados();
    Jogador campeao = jogadores_ordenados[_num_jogadores-1];
    return campeao;
}
bool comparaJogador(Jogador j1, Jogador j2){
    return j1.calcularPontuacao()<j2.calcularPontuacao();
}

Jogador* Partida::getJogadoresOrdenados(){
   Jogador* jogadores_ordenados = new Jogador[_num_jogadores];
    for (int i = 0; i < _num_jogadores; i++){
        jogadores_ordenados[i].setNomeJogador(this->_jogadores[i].getNomeJogador()); 

        vector<Carta> cartasAux = this->_jogadores[i].getCartas();

        for(Carta& carta : cartasAux){
            jogadores_ordenados[i].adicionaCarta(carta);

        }
    }std::sort(jogadores_ordenados,&(jogadores_ordenados[_num_jogadores]),comparaJogador);


    return jogadores_ordenados;
    

}

void Partida::imprimeJogadoresOrdenados(){
    Jogador* jogadores_ordenados = getJogadoresOrdenados();
    for (int i=0; i<_num_jogadores; i++){
        std::cout << jogadores_ordenados[i].getNomeJogador()<<' '<< jogadores_ordenados[i].calcularPontuacao() << std::endl;   
    }

    delete[] jogadores_ordenados;
}

void Partida::addJogadorCarta(string nomeJogador, int numero_pontos_carta, string naipe){
    Carta* carta = new Carta(numero_pontos_carta, naipe);
    bool encontrouJogador = false;

    for(int i = 0; i < _num_jogadores; i++) {
        if(_jogadores[i].getNomeJogador().compare(nomeJogador) == 0){
            _jogadores[i].adicionaCarta(*carta);
            encontrouJogador = true;
        }
    }

    if(!encontrouJogador){
        _jogadores[_atualSize].setNomeJogador(nomeJogador);
        _jogadores[_atualSize].adicionaCarta(*carta);
        this->_atualSize += 1;
    }
}