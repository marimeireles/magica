/* Simulation a player
This file has player name and lifepoints, and defines player actions*/
#pragma once

#include "baralho.h"

class Jogador
{
protected:
    std::string _nome; // Nome do Jogador
    Baralho *_baralho;
    std::vector<Carta> _cartasNaMao;

public:
    int _pontosDeVida; // Pontos de Vida do jogador

    Jogador(std::string nome, Baralho *baralho, int pontosDeVida);
    void setNome();
    std::string getNome();
    int getPontosDeVida(); // Retorna os pontos de vida do jogador.
    void compraCarta();
    void mostrarMao(); // Mostra a mão do jogador selecionado.
};
