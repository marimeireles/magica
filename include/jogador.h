/* Simulation a player
This file has player name and lifepoints, and defines player actions*/
#pragma once

#include "baralho.h"

class Jogador
{
protected:
    std::string _nome; // Nome do Jogador
    int _IDJogador;
    Baralho *_baralho;
    std::vector<Carta> _cartasNaMao;
    std::vector<Carta> _cemiterio;

public:
    int _pontosDeVida; // Pontos de Vida do jogador

    Jogador(std::string nome, int IDJogador, Baralho *baralho, int pontosDeVida);
    void setNome();
    std::string getNome();
    int getPontosDeVida(); // Retorna os pontos de vida do jogador.
    void compraCarta();
    void mostraMao(); // Mostra a mão do jogador selecionado.
    void jogaCarta();
};
