#include "jogador.h"

Jogador::Jogador(std::string nome, Baralho baralho, int pontosDeVida)
{
    _nome = nome;
    _baralho = baralho;
    _pontosDeVida = pontosDeVida;
}