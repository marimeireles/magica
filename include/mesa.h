// Aqui é onde estão os metodos para adicionar e excluir as cartas quando 
// desejado, isto é movelas de posição no tabuleiro. Deixei definido que quando
//a carta "morre" ela vai para o lixo, e não cemitério, apenas para evitarmos 
//alguma confusão. Eu havia escrito isso no README, agora o terreno cemiterio se
//chama pantanal, entao podemos usar cemiterio para tratar das criaturas mortas
//em campo.
#pragma once

#include "jogador.h"

class Mesa {
public:
    Jogador _jogador;
    std::vector<std::shared_ptr<Carta>> _cartasNaMesa;

    Mesa(Jogador jogador);
    std::vector<std::shared_ptr<Carta>> criaCartasNaMesa();
    void jogaCarta(int indexDaCarta);
    void printMesaJogador0();
    void printMesaJogador1();
    void printMesa(); // Printa TODAS as cartas do tabuleiro.
};
