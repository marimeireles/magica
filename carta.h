// Tentativa de fazer a carta.h

#include "define.h"

#ifndef CARTA_H
#define CARTA_H
class Carta {
private:
	const char* nome; // Nome da carta.
	cartaTipo tipo; // Tipo da carta, floresta, ilha, cemitério ou montanha.
	int ataque; // Ataque da Carta
	int defesa; // Defesa da Carta
public:
	Carta();
	Carta(char*, cartaTipo);
	Carta(char*, cartaTipo, int, int);
	const char* getNome(); // Nome da carta
	cartaTipo getTipo();	 // Tipo da carta
	int getAtaque(); // Ataque da carta
	int getDefesa(); // Defesa da carta
	const void setNome(const char*); // Nome da carta
	void setTipo(cardTipo);	// Tipo da carta
	void setAtaque(int); // Ataque da carta
	void setDefesa(int); // Defesa da carta
};
#endif
