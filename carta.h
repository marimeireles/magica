// Tentativa de fazer a carta.h

#include "define.h"

#ifndef CARD_H
#define CARD_H
class Card {
private:
	const char* nome; // Nome da carta.
	cartaTipo type; // Tipo da carta, floresta, ilha, cemitério ou montanha.
	int ataque; // Ataque da Carta
	int defesa; // Defesa da Carta
public:
	Card();
	Card(char*, cartaTipo);
	Card(char*, cartaTipo, int, int);
	const char* getNome(); // Nome da carta
	cartaTipo getTipo();	 // Tipo da carta
	int getAtaque(); // Ataque da carta
	int getDefesa(); // Defesa da carta
	const void setName(const char*); // Nome da carta
	void setTipo(cardTipo);	// Tipo da carta
	void setAtaque(int); // Ataque da carta
	void setDefesa(int); // Defesa da carta
};
#endif
