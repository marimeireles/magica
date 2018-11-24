#include <iostream>
#include "jogador.h"

Jogador::Jogador(std::string nome, Baralho *baralho, int pontosDeVida)
{
    _nome = nome;
    _baralho = baralho;
    _pontosDeVida = pontosDeVida;
}

void Jogador::setNome()
{
    std::cin >> this->_nome;
}

std::string Jogador::getNome()
{
    return this->_nome;
}

int Jogador::getPontosDeVida()
{
    return this->_pontosDeVida;
}

void Jogador::compraCarta()
{
    this->_cartasNaMao.push_back(*this->_baralho->_cartas.back());
}