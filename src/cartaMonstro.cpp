#include "cartaMonstro.h"

CartaMonstro::CartaMonstro(std::string nome, int tipoDeMana, int IDJogador, 
    int custoDeMana, int ataque, int defesa, std::string fraseDeAtaque, 
    std::string descricao) : Carta(nome, tipoDeMana, IDJogador)
{
    _custoDeMana = custoDeMana;
    _ataque = ataque;
    _defesa = defesa;
    _fraseDeAtaque = fraseDeAtaque;
    _descricao = descricao;
}

CartaMonstro::~CartaMonstro()
{
}

int CartaMonstro::getAtaque()
{
    return this->_ataque;
}

int CartaMonstro::getDefesa()
{
    return this->_defesa;
}

std::string CartaMonstro::getFraseDeAtaque()
{
    return this->_fraseDeAtaque;
}

std::string CartaMonstro::getDescricao()
{
    return this->_descricao;
}

void CartaMonstro::imprimeCartaEspecifica()
{
    std::cout << "Tipo da carta: Carta Monstro" << std::endl;
    std::cout << "Custo de mana: " << this->_custoDeMana << std::endl;
    std::cout << "Ataque: " << this->_ataque << std::endl;
    std::cout << "Defesa: " << this->_defesa << std::endl;
    std::cout << "Descrição: " << this->_descricao << std::endl;
}