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
    static Baralho criaBaralhoSerrado();
    static Baralho criaBaralhoFloresta();
    static Baralho criaBaralhoIlha();
    static Baralho criaBaralhoPantanal();
    void shuffle(); //Embaralha o baralho
    int tamanho(); // Tamanho do baralho
    Carta pop(); // Pega a carta da parte de cima do baralho
    void printCarta(); // Printa a carta
};