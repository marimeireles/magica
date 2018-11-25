#include "cartaMonstro.h"
#include "baralho.h"
#include "jogador.h"
#include "mesa.h"
#include <iostream>

int main(int argc, char const *argv[])
{

    //testa cria monstro
    CartaMonstro cartaMonstro("Virgulino, cangaceiro arretado", 3, 0, 3, 2, 3,
        "Virgulino, cangaceiro arretado enfia a pexeira em",
        "O cangaceiro mais arretado do sertão.");
    std::cout << cartaMonstro.getNome() << std::endl;
    std::cout << cartaMonstro.getPessoaDonaDaCarta() << std::endl;

    //testa cria baralho
    Baralho baralho0 = Baralho::criaBaralhoSerrado(0);
    Baralho baralho1 = Baralho::criaBaralhoSerrado(1);
    printf("%d\n", baralho0.tamanho());

    //testa cria jogador
    Jogador jogador0("Bruxonilda", 0, &baralho0, 20);
    Jogador jogador1("Reuben", 1, &baralho1, 20);
    // jogador0.setNome();
    std::cout << jogador0.getNome() << std::endl;

    //testa compra e joga carta
    for (int i = 0; i < 5; ++i)
        jogador0.compraCarta();
    jogador0.mostraMao();
    jogador0.jogaCarta(0);
    printf("===============================\n");
    jogador0.mostraMao();

    //testa mesa
    Mesa mesa(jogador0, jogador1);




    /**
        Pra iniciar o jogo podemos fazer um loop.
        Dentro desse loop um switch com as opções impressas para o jogador do
        que ele pode fazer. Sendo que cada caso do switch só pode ser ativado
        uma única vez, ou seja, cada número do switch é uma parte de um turno
        Uma vez que o jogador tiver passado da fase de ataque saímos do switch
        dele e iniciamos o switch do outro jogador que funciona da mesma forma.
        Uma vez que um dos baralhos tenha 0 cartas ou um dos jogadores tenha 0
        vida o loop acaba e anunciamos o vencedor.
    **/

    return 0;
}