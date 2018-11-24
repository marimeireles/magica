#pragma once

#include "carta.h"

class CartaMonstro : public Carta
{
protected:
    int _custoDeMana;
    int _tipoDeMana;
    int _ataque; // Ataque da Carta
    int _defesa; // Defesa da Carta
    std::string _fraseDeAtaque;
    std::string _descricao;

public:
    CartaMonstro(std::string nome, int tipoDeMana, int custoDeMana, int ataque,
        int defesa, std::string fraseDeAtaque, std::string descricao);
    virtual ~CartaMonstro();
};
