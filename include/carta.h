#pragma once

#include <string>
#include <iostream>

class Carta
{
protected:
    std::string _nome; // Nome da carta.
    int _tipoDeMana; /*isso ficaria melhor como um enum, se alguém puder implementar*/
    int _IDJogador;

public:
    Carta(std::string nome, int tipoDeMana, int IDJogador);
    virtual ~Carta();
    std::string getNome(); // Nome da carta
    int getTipoDeMana();
    int getPessoaDonaDaCarta();
    void imprimeCarta();
    virtual void imprimeCartaEspecifica() = 0;

/**
    So funciona se formos fazer um sistema de construcao de cartas de outra forma
    nao vale a pena recriar o deck toda vez que quiser jogar. Por isso criamos as
    cartas no README, sao constantes em um deck.

    const void setNome(const char*); // Nome da carta
    void setTipo(cardTipo); // Tipo da carta
    void setAtaque(int); // Ataque da carta
    void setDefesa(int); // Defesa da carta
**/
};

