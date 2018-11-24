#include "cartaTerreno.h"

CartaTerreno::CartaTerreno(std::string nome, int tipoDeMana, int disponibilidade) :
Carta(nome, tipoDeMana)
{
    _disponibilidade = disponibilidade;
}

bool CartaTerreno::checaDisponibilidade(){
    return this->_disponibilidade;
}

CartaTerreno::~CartaTerreno()
{
}