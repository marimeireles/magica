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
    std::vector<std::shared_ptr<Carta>> _cemiterio;

public:
    int _pontosDeVida; // Pontos de Vida do jogador
    std::vector<std::shared_ptr<Carta>> _cartasNaMao; /*idealmente isso é protected e a gente tem
        que fazer um get pra pegá-lo*/

    Jogador(std::string nome, int IDJogador, Baralho *baralho, int pontosDeVida);
    Jogador(const Jogador& outro);
    void setNome();
    std::string getNome();
    int getPontosDeVida(); // Retorna os pontos de vida do jogador.
    void compraCarta();
    void mostraMao(); // Mostra a mão do jogador selecionado.
};
