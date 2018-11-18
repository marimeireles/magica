// Simulação da carta monstro

#include "carta.h"

class CartaMonstro :public Carta {
private:
	int ataque;
	int defesa;
	bool atkStatus;
	bool defStatus;
public:
	CartaMonstro(char *, int, int);
	int get_atk();
	int get_def();
};
