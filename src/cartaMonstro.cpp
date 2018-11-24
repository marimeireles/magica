#include "cartaMonstro.h"

CartaMonstro::CartaMonstro(std::string nome, int tipoDeMana, int IDJogador, 
    int custoDeMana, int ataque, int defesa, std::string fraseDeAtaque, 
    std::string descricao) : Carta(nome, tipoDeMana, IDJogador)
{
    _custoDeMana = custoDeMana;
    _tipoDeMana = tipoDeMana;
    _ataque = ataque;
    _defesa = defesa;
    _fraseDeAtaque = fraseDeAtaque;
    _descricao = descricao;
}

CartaMonstro::~CartaMonstro()
{
}