#pragma once

#include "jogador.h"

class Mesa {
private:
    Jogador _jogador0, _jogador1;

public:
    Mesa(Jogador jogador0, Jogador jogador1);
    void printMesa();
};
