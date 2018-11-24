#include "carta.h"

Carta::Carta(std::string nome, int tipoDeMana)
{
    _nome = nome;
    _tipoDeMana = tipoDeMana;
}

/** retorna nome da carta **/
std::string Carta::getNome()
{
    return this->_nome;
}

Carta::~Carta()
{
}

/**
    So funciona se formos fazer um sistema de construcao de cartas de outra forma
    nao vale a pena recriar o deck toda vez que quiser jogar. Por isso criamos as
    cartas no README, sao constantes em um deck.
**/
// /** Define nome da carta **/
// const void Carta::setNome(const char * nome)
// {
//  this->nome = nome;
// }

// /** Define tipo da carta **/
// void Carta::setTipo(cardTipo tipo)
// {
//  this->tipo = tipo;
// }

// /** Define ataque da carta **/
// void Carta::setAtaque(int atk)
// {
//  this->ataque = atk;
// }

// /** Define defesa da carta **/
// void Carta::setDefesa(int def)
// {
//  this->defesa = def;
// }
