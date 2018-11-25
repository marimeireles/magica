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
    std::vector<std::shared_ptr<Carta>> _cartasNaMao;
    int _pontosDeVida;

public:
    std::vector<std::shared_ptr<Carta>> _cartasNaMesa;

    Jogador(std::string nome, int IDJogador, Baralho *baralho, int pontosDeVida);
    Jogador(const Jogador& outro0);
    void setNome();
    std::string getNome();
    int getPontosDeVida();
    std::shared_ptr<Carta> getCartaNaMao(int indexDaCarta);
    void removeCartaDaMao(int indexDaCarta);
    void compraCarta();
    void mostraMao();
    void jogaCarta(int indexDaCarta);
    void jogaCartaNoCemiterio(int indexDaCarta);
};
