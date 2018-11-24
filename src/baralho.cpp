#include "baralho.h"
#include "carta.h"
#include "cartaTerreno.h"
#include "cartaMonstro.h"

Baralho::Baralho() {}

Baralho::~Baralho()
{
}

Baralho Baralho::criaBaralhoSerrado()
{
    Baralho baralho;

    for (int i = 0; i < 20; ++i)
    {
        baralho._cartas.push_back(std::make_shared<CartaTerreno>("Serrado", 3, true));
    }

    for (int i = 0; i < 8; ++i)
    {
        baralho._cartas.push_back(std::make_shared<CartaMonstro>("Virgulino, cangaceiro arretado",
            3, 3, 2, 3, "Virgulino, cangaceiro arretado enfia a pexeira em",
            "O cangaceiro mais arretado do sertão."));
        baralho._cartas.push_back(std::make_shared<CartaMonstro>("Charía", 5, 3, 4, 3,
            "A onça vai fazer o mesmo que fez com os irmãos sol e lua",
            "O espírito maléfico, o eclipse significa muito mais que a morte da lua."));
        baralho._cartas.push_back(std::make_shared<CartaMonstro>("Cuca", 3, 3, 2, 3,
            "Mais sombria e cruel que as outras só o que acontecerá com",
            "Ótimo técnico de futebol."));
        baralho._cartas.push_back(std::make_shared<CartaMonstro>("Saci-Pererê", 2, 3, 2, 2,
            "Suas brincadeiras irritam de forma absurda o",
            "Um menino serelepe que causa caos e diversão por onde passa."));
        baralho._cartas.push_back(std::make_shared<CartaMonstro>("Pisadeira", 1, 3, 1, 1,
            "Ela ira sapatear sobre o seu estômago",
            "Feia que nem uma bruxa, porém com um pé que causa dor e sofrimento."));
    }

    return baralho;
}

int Baralho::tamanho()
{
    return this->_cartas.size();
}