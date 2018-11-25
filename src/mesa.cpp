#include "mesa.h"

Mesa::Mesa(Jogador jogador)
    : _jogador(jogador)
{
}

std::vector<std::shared_ptr<Carta>> Mesa::criaCartasNaMesa()
{
    std::vector<std::shared_ptr<Carta>> cartasNaMesa;
    return cartasNaMesa;
}

void Mesa::jogaCarta(int indexDaCarta) {
    this->_cartasNaMesa.push_back(this->_jogador._cartasNaMao[indexDaCarta]);
}
