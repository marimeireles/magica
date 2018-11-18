/* Simulation a player
This file has player name and lifepoints, and defines player actions*/


#include "carta.h"
#include "baralho.h"

#ifndef JOGADOR_H
#define JOGADOR_H
class Jogador {

private:
	const char * nome; // Nome do Jogador
	int pontosdevida; // Pontos de Vida do jogador


public:
	Jogador();
	Jogador(const char*); // Nome do jogador
	Carta mao[4];
	Baralho baralho;
	void setNome(char*);
	const char * getJogadorNome(); // Retorna o nome do jogador.
	int getPontosDeVida(); // Retorna os pontos de vida do jogador.
	void addPontosDeVida(int); // Mudar os pontos de vida do jogador selecionado durante o jogo.
	void loadBaralho(); // Carrega o baralho do jogador.
	void getMao(); // Pega as cartas do baralho.
	void mostrarMao(int); // Mostra a mão do jogador selecionado.
};

#endif
