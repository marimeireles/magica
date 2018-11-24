#pragma once

#include "carta.h"

class CartaTerreno : public Carta
{
protected:
    bool _disponibilidade;

public:
    CartaTerreno(std::string nome, int tipoDeMana, int IDJogador, int disponibilidade);
    virtual ~CartaTerreno();
    bool checaDisponibilidade();
};
