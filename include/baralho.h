#pragma once

#include <vector>
#include <memory>
#include "carta.h"

class Baralho
{
protected:
    std::vector<std::shared_ptr<Carta>> _cartas;

public:
    Baralho();
    ~Baralho();
    static Baralho criaBaralhoSerrado(int IDJogador);
    static Baralho criaBaralhoFloresta(int IDJogador);
    static Baralho criaBaralhoIlha(int IDJogador);
    static Baralho criaBaralhoPantanal(int IDJogador);
    std::shared_ptr<Carta> getCarta();
    void removeCarta();
    void embaralha(); //Embaralha o baralho
    int tamanho(); // Tamanho do baralho
    void imprimeCarta(); // Printa a carta
};