#include "Carta.hpp"

Carta::Carta(int numeroPontosPadrao, string naipe){
	this->_numeroPontosPadrao = numeroPontosPadrao;
	this->_naipe = naipe;
}
string Carta::getNaipe(){
	return this->_naipe;
}

void Carta::setNaipe(string naipe){
	this->_naipe = naipe;
}	

int Carta::getNumeroPontosPadrao(){
	return this->_numeroPontosPadrao;
}

void Carta::setNumeroPontosPadrao(int numeroPontosPadrao){
	this->_numeroPontosPadrao = numeroPontosPadrao;
}

int Carta::getTotalPontos(){
	if (this->_naipe == "ouros") return this->_numeroPontosPadrao + 2;
	else if (this->_naipe == "espadas") return this->_numeroPontosPadrao - 3;
	else if (this->_naipe == "copas") return this->_numeroPontosPadrao + 5;
	return this->_numeroPontosPadrao -1;

}
