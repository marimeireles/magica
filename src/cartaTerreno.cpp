#include "cartaTerreno.h"

CartaTerreno::CartaTerreno(std::string nome, int tipoDeMana, int IDJogador, 
    int disponibilidade) : Carta(nome, tipoDeMana, IDJogador)
{
    _disponibilidade = disponibilidade;
}

bool CartaTerreno::checaDisponibilidade()
{
    return this->_disponibilidade;
}

CartaTerreno::~CartaTerreno()
{
}