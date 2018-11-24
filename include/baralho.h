#pragma once

#include <vector>
#include <memory>
#include "carta.h"

class Baralho
{
public:
    std::vector<std::shared_ptr<Carta>> _cartas;

    Baralho();
    ~Baralho();
    static Baralho criaBaralhoSerrado(int IDJogador);
    static Baralho criaBaralhoFloresta(int IDJogador);
    static Baralho criaBaralhoIlha(int IDJogador);
    static Baralho criaBaralhoPantanal(int IDJogador);
    void shuffle(); //Embaralha o baralho
    int tamanho(); // Tamanho do baralho
    Carta pop(); // Pega a carta da parte de cima do baralho
    void printCarta(); // Printa a carta
};