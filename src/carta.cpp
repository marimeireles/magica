#include "carta.h"
#include "cartaMonstro.h"
#include "cartaTerreno.h"

Carta::Carta(std::string nome, int tipoDeMana, int IDJogador)
{
    _nome = nome;
    _IDJogador = IDJogador;
    _tipoDeMana = tipoDeMana;
}

Carta::~Carta()
{
}


/** retorna nome da carta **/
std::string Carta::getNome()
{
    return this->_nome;
}

int Carta::getTipoDeMana()
{
    return this->_tipoDeMana;
}

int Carta::getPessoaDonaDaCarta()
{
    return this->_IDJogador;
}

void Carta::imprimeCarta()
{
    std::cout << this->_nome << std::endl;
    std::cout << this->_tipoDeMana << std::endl;
    std::cout << this->_IDJogador << std::endl;
    imprimeCartaEspecifica();
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
