#ifndef _jogador_h
#define _jogador_h

#include <string>
#include "carta.h"

class Jogador {

    public:
        const std::string nome;
        int pontosDeVida;
        Carta *cartasNaMao, *cartasNaMesa, *cartasNoCemiterio;
        int terrenosDisponiveis;
        Baralho baralho;

};

#endif