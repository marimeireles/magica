#include "monster_card.h"

CartaMonstro::CartaMonstro(char * nome, int ataque, int defesa) :Carta(nome, monstro) {

	this->ataque = ataque;    // Pontos de ataque
	this->defesa = defesa;  // Pontos de defesa

	this->atkStatus = true;   // Status de ataque
	this->defStatus = false;  // Status de defesa
}
int CartaMonstro::get_atk() {
	return this->ataque;
}
int CartaMonstro::get_def() {
	return this->defesa;
}
