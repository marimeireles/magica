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
        Custo de mana
        Ataque
        Defesa
        Frase de ataque
        Descrição


### Terrenos

Hierarquia de terrenos:
Floresta > Ilha > Montanha > Cemitério > Floresta

### Monstros

(Custo de mana vai de 1 a 5)
(Ataque e defesa somado <= 7)

Você pode usar esse template para criar seus monstros:

```
Nome:
Custo de mana:
Ataque:
Defesa:
Frase de ataque:
Descrição:
```

#### Floresta
```
Nome: Mula-sem-cabeça
Custo de mana: 3 florestas
Ataque: 3
Defesa: 2
Frase de ataque: A mula-sem-cabeça dá um coice em %s
Descrição: Uma mula com uma chama azul no lugar da cabeça.
```
#### Cemitério
```
Nome: Morcego-de-fruta
Custo de mana: 1 cemitério
Ataque: 1
Defesa: 1
Frase de ataque: O morcego-de-fruta deixa uma porção considerável de guano cair sobre os olhos de %s
Descrição: Pequeno mamífero horrendo comedor de frutas.
```
#### Montanha
```
Nome: Virgulino, cangaceiro arretado
Custo de mana: 3 montanhas
Ataque: 3
Defesa: 2
Frase de ataque: Virgulino, cangaceiro arretado enfia a pexeira em %s
Descrição: O cangaceiro mais arretado do sertão.
```
#### Ilha
```
Nome: Capivara atroz
Custo de mana: 2 ilhas
Ataque: 2
Defesa: 2
Frase de ataque: Os carrapatos-estrela da capivara atroz mordem %s
Descrição: A capivara é um roedor dócil, mas que contém carrapatos ferozes.
```
```
Nome: Iara das águas
Custo de mana: 4 ilhas
Ataque: 3
Defesa: 3
Frase de ataque: Iara canta uma canção desafinada machucando os tímpanos de %s
Descrição: Último lugar no Show de Calouros do programa do Raul Gil.
```
