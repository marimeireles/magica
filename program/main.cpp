#include "cartaMonstro.h"
#include "baralho.h"
#include <iostream>

int main(int argc, char const *argv[]) {

    //testa cria monstro
    CartaMonstro cartaMonstro("Virgulino, cangaceiro arretado", 3, 3, 2, 3,
        "Virgulino, cangaceiro arretado enfia a pexeira em",
        "O cangaceiro mais arretado do sertão.");
    std::cout << cartaMonstro.getNome() << std::endl;

    //testa cria baralho
    Baralho baralho = Baralho::criaBaralhoSerrado();
    std::cout << "working!\n" << std::endl;
    return 0;
}