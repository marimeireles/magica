#include "cartaMonstro.h"
#include "baralho.h"
#include "jogador.h"
#include <iostream>

int main(int argc, char const *argv[])
{

    //testa cria monstro
    CartaMonstro cartaMonstro("Virgulino, cangaceiro arretado", 3, 3, 2, 3,
        "Virgulino, cangaceiro arretado enfia a pexeira em",
        "O cangaceiro mais arretado do sertão.");
    std::cout << cartaMonstro.getNome() << std::endl;

    //testa cria baralho
    Baralho baralho = Baralho::criaBaralhoSerrado();
    printf("%d\n", baralho.tamanho());

    //testa cria jogador
    Jogador jogador1("Bruxonilda", &baralho, 20);

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