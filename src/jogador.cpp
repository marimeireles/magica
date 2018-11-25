#include "jogador.h"

Jogador::Jogador(std::string nome, int IDJogador, Baralho *baralho, int pontosDeVida)
{
    _nome = nome;
    _IDJogador = IDJogador;
    _baralho = baralho;
    _pontosDeVida = pontosDeVida;
}

Jogador::Jogador(const Jogador& outro)
{
    _nome = outro._nome;
    _IDJogador = outro._IDJogador;
    _baralho = outro._baralho;
    _pontosDeVida = outro._pontosDeVida;
    _cartasNaMao = outro._cartasNaMao;
    _cemiterio = outro._cemiterio;
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
    this->_cartasNaMao.push_back(this->_baralho->getCarta());
    this->_baralho->removeCarta();
}

void Jogador::mostraMao() {
    for (int i = 0; i < this->_cartasNaMao.size(); ++i)
        this->_cartasNaMao[i]->imprimeCarta();
}