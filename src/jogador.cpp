#include "jogador.h"

Jogador::Jogador(std::string nome, int IDJogador, Baralho *baralho,
     int pontosDeVida)
{
    _nome = nome;
    _IDJogador = IDJogador;
    _baralho = baralho;
    // _cartasNaMao = cartasNaMao;
    _pontosDeVida = pontosDeVida;
    // _cartasNaMesa = cartasNaMesa;
}

Jogador::Jogador(const Jogador& outro0)
{
    _nome = outro0._nome;
    _IDJogador = outro0._IDJogador;
    _baralho = outro0._baralho;
    _pontosDeVida = outro0._pontosDeVida;
    _cartasNaMao = outro0._cartasNaMao;
    _cartasNaMesa = outro0._cartasNaMesa;
    // _nome = outro1._nome;
    // _IDJogador = outro1._IDJogador;
    // _baralho = outro1._baralho;
    // _pontosDeVida = outro1._pontosDeVida;
    // _cartasNaMao = outro1._cartasNaMao;
    // _cartasNaMesa = outro1._cartasNaMesa;
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

void Jogador::mostraMao()
{
    for (int i = 0; i < this->_cartasNaMao.size(); ++i)
        this->_cartasNaMao[i]->imprimeCarta();
}

std::shared_ptr<Carta> Jogador::getCartaNaMao(int indexDaCarta)
{
    return this->_cartasNaMao[indexDaCarta];
}

void Jogador::removeCartaDaMao(int indexDaCarta)
{
    this->_cartasNaMao.erase(this->_cartasNaMao.begin() + indexDaCarta);
}

void Jogador::jogaCarta(int indexDaCarta)
{
    this->_cartasNaMesa.push_back(this->_cartasNaMao[indexDaCarta]);
    this->removeCartaDaMao(indexDaCarta);
}