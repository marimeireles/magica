#include "carta.h"

Carta::Carta()
{
	this->nome;
	this->ataque = 0;
	this->defesa = 0;
}

Carta::Carta(char* nome, cartaTipo tipo)
{
	this->nome = nome;
	this->tipo = tipo;
}

Carta::Carta(char* nome, cartaTipo tipo, int atk, int def)
{
	this->nome = nome;
	this->tipo = tipo;
	if (type == monstro) {
		this->attack = atk;
		this->defense = def;
	}
	else
	{
		this->ataque = 0;
		this->defesa = 0;
	}
}

/** retorna nome da carta **/
 const char* Card::getNome() {
	return this->nome;
}

/** retorna tipo da carta **/
cartaTipo Carta::getTipo() {
	return this->tipo;
}

/** retorna ataque da carta **/
int Carta::getAtaque()
{
	return this->ataque;
}

/** Retorna defesa da carta **/
int Carta::getDefesa()
{
	return this->defesa;
}

/** Define nome da carta **/
const void Carta::setNome(const char * nome)
{
	this->nome = nome;
}

/** Define tipo da carta **/
void Carta::setTipo(cardTipo tipo)
{
	this->tipo = tipo;
}

/** Define ataque da carta **/
void Carta::setAtaque(int atk)
{
	this->ataque = atk;
}

/** Define defesa da carta **/
void Carta::setDefesa(int def)
{
	this->defesa = def;
}
