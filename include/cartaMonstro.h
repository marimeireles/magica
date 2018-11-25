#pragma once

#include <iostream>
#include "carta.h"

class CartaMonstro : public Carta
{
protected:
    int _custoDeMana;
    int _ataque; // Ataque da Carta
    int _defesa; // Defesa da Carta
    std::string _fraseDeAtaque;
    std::string _descricao;

public:
    CartaMonstro(std::string nome, int tipoDeMana, int IDJogador, int custoDeMana, int ataque,
        int defesa, std::string fraseDeAtaque, std::string descricao);
    int getCustoDeMana();
    int getAtaque();
    int getDefesa();
    std::string getFraseDeAtaque();
    std::string getDescricao();
    virtual ~CartaMonstro();
    virtual void imprimeCartaEspecifica();
};
