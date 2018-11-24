/* Simulation a player
This file has player name and lifepoints, and defines player actions*/
#pragma once

#include "baralho.h"

class Jogador
{
protected:
    std::string _nome; // Nome do Jogador
    Baralho *_baralho;

public:
    int _pontosDeVida; // Pontos de Vida do jogador

    Jogador(std::string nome, Baralho *baralho, int pontosDeVida);
    // Baralho baralho;
    // void setNome(char*);
    // const char * getJogadorNome(); // Retorna o nome do jogador.
    // int getPontosDeVida(); // Retorna os pontos de vida do jogador.
    // void addPontosDeVida(int); // Mudar os pontos de vida do jogador selecionado durante o jogo.
    // void loadBaralho(); // Carrega o baralho do jogador.
    // void getMao(); // Pega as cartas do baralho.
    // void mostrarMao(int); // Mostra a mão do jogador selecionado.
};
