#ifndef BARALHO_H
#define BARALHO_H

#include <vector>
#include <iostream>
#include <random>

#include "carta.h"

class Baralho {
	Carta cartas[60];
private:
	int cartaIndex;
public:
	Baralho()
	{
		for (cartaIndex = 0; cartaIndex < 60; cartaIndex++)
			cartas[cartaIndex] = Carta();
	}

	void load(); // Carrega o baralho
	void shuffle(); //Embaralha o baralho
	const int size(); // Tamanho do baralho
	Carta pop(); // Pega a carta da parte de cima do baralho
	int getCartaIndex() { return this->cartaIndex; } //
	void printCarta(); // Printa a carta
};


#endif
