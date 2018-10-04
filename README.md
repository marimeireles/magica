## Magic the Gathering Simplificado

O jogo contém 4 terrenos e 20 monstros diferentes, 5 monstros para cada cor.

Um baralho possui 60 cartas no total, e possui apenas dois tipos de terrenos. Possui 20 terrenos e 40 monstros.

### Classes

Jogador
    Baralho
        Carta
            Terreno
                Floresta
                Cemitério
                Ilha
                Montanha
            Monstro
                Dragão
                Zumbi
                Elfo
                Peixe

### Objetos

Jogador
    Pontos de vida
    Nome
    Cartas na mão
    Cartas na mesa
    Baralho

Baralho
    Cartas []
    Contagem cartas no deck

Carta
    Tipo(Terreno/Monstro)

Terreno
    Tipo

Monstro
    Nome
    Tipo
    Defesa
    Ataque
    Custo de mana

### Terrenos

Hierarquia de terrenos:
Floresta > Ilha > Montanha > Cemitério > Floresta

### Monstros

(Custo de mana vai de 1 a 5)
(Ataque e defesa somado <= 7)





