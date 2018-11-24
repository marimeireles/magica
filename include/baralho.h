#pragma once

#include <vector>
#include "carta.h"

class Baralho
{
protected:
    std::vector<Carta*> _cartas;
    Baralho();

public:
    ~Baralho();
    static Baralho criaBaralhoSerrado();
    static Baralho criaBaralhoFloresta();
    static Baralho criaBaralhoIlha();
    static Baralho criaBaralhoPantanal();
    void shuffle(); //Embaralha o baralho
    int size(); // Tamanho do baralho
    Carta pop(); // Pega a carta da parte de cima do baralho
    void printCarta(); // Printa a carta
};