// Aqui é onde estão os metodos para adicionar e excluir as cartas quando desejado, isto é movelas de posição no tabuleiro. Deixei definido que quando a carta "morre" ela vai para o lixo, e não cemitério, apenas para evitarmos alguma confusão.
#include "carta.h"

#ifndef MESA_H
#define MESA_H

class Mesa {
private:
	Carta lixo[60]; // Deixa as cartas no lixo.
	Carta lado1[6]; // Deixa as cartas no lado 1 do tabuleiro.
	Carta lado2[6]; // Deixa as cartas no lado 2 do tabuleiro.
	int lixoIndex;
  
public:
	Mesa();

	Carta getLado1(int); // Pega a carta do lado 1 do tabuleiro.
	Carta getLado2(int); // Pega a carta do lado 2 do tabuleiro.
  
	void setCartaLixo(Carta); // Manda a carta para o lixo quando necessário.	

	void setCartaLado1(Carta, int); // Coloca a carta no lado 1 do tabuleiro.
	void setCartaLado2(Carta, int); // Coloca a carta no lado 2 do tabuleiro.
	void TiraLado1(int); // Retira a carta do lado 1 do tabuleiro.
	void TiraLado2(int); // Retira a carta do lado 2 do tabuleiro.

	void printMesa(); // Printa TODAS as cartas do tabuleiro.
};

#endif
