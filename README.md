## As batalhas épicas de Pindorama

As batalhas épicas de Pindorama é um jogo de cartas para terminal similar ao jogo Magic the Gathering.

### Regras

O jogo contém 4 terrenos e 20 monstros diferentes, 5 monstros para cada cor.

Um baralho possui 60 cartas no total (20 terrenos e 40 monstros), e pode conter apenas dois tipos diferentes de terrenos.

O primeiro jogador é definido aleatoriamente por meio de uma "jogada de moeda". Ímpar equivale ao jogador 1 e par ao jogador 2.

Os jogadores não são obrigados a atacar nem defender em seus turnos.

O jogador atacante escolhe com quais criaturas deseja atacar e o jogador defensor pode escolher entre defender com uma ou mais de suas criaturas ou tomar o dano diretamente nos seus pontos de vida.

O jogo acaba quando a vida de um dos jogadores é =<0 ou todo o baralho de um dos jogadores está no cemitério.

O jogador pode escolher conceder em seu turno, garantindo vitória imediata ao outro jogador.

### Classes

    Mesa
        Carta
    Jogador
        Baralho
            Carta
                Terreno
                Monstro

### Objetos

    Mesa
        Cartas na mesa

    Jogador
        Pontos de vida
        Nome
        Cartas na mão
        Cartas na mesa
        Cartas no cemitério
        Terrenos disponíveis nesse turno
        Baralho

    Baralho
        Cartas
        Contagem de cartas no deck

    Carta
        Tipo (Terreno/Monstro)
        Terreno
            Tipo (Floresta/Pantanal/Ilha/Serrado)
        Monstro
            Nome
            Custo de mana
            Tipo de mana
            Ataque
            Defesa
            Pontos de vida
            Frase de ataque
            Descrição


### Terrenos

Hierarquia de terrenos:
Floresta > Ilha > Serrado > Pantanal > Floresta

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
```
Nome: Curupira 
Custo de mana: 2 florestas 
Ataque: 2 
Defesa: 2 
Frase de ataque: Sem dó alguma ele da uma voadora invertida no %s 
Descrição: O maior protetor das florestas, só fica atrás apenas para a Marina Silva.

```
```
Nome: Boitatá 
Custo de mana: 1 floresta 
Ataque: 1 
Defesa: 1 
Frase de ataque: De forma implacável ela deixa cego e louco o %s 
Descrição: A grande serpente de fogo que é contra as queimadas.
```
#### Cemitério
```
Nome: Morcego de fruta
Custo de mana: 1 cemitério
Ataque: 1
Defesa: 1
Frase de ataque: O morcego de fruta deixa uma porção considerável de guano cair sobre os olhos de %s
Descrição: Pequeno mamífero horrendo comedor de frutas.
```
```
Nome: Lobisomem 
Custo de mana: 5 cemitérios 
Ataque: 4  
Defesa: 3 
Frase de ataque: A mordida feroz acaba com o %s 
Descrição: Feroz e maldoso, não teme nada
```

#### Montanha
```
Nome: Virgulino, cangaceiro arretado
Custo de mana: 3 serrados
Ataque: 3
Defesa: 2
Frase de ataque: Virgulino, cangaceiro arretado enfia a pexeira em %s
Descrição: O cangaceiro mais arretado do sertão.
```
```
Nome: Saci-Pererê 
Custo de mana: 1 serrado 
Ataque: 1 
Defesa: 1 
Frase de ataque: Suas brincadeiras irritam de forma absurda o %s 
Descrição: Um menino serelepe que causa caos e diversão por onde passa
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
Nome: Boto cor de rosa 
Custo de mana: 2 ilhas 
Ataque: 2 
Defesa: 2 
Frase de ataque: De forma audaciosa o boto tenta engravidar o %s 
Descrição: Emergindo das águas como um jovem bonito tenta encantar mulheres.
```
```
Nome: Iara das águas
Custo de mana: 4 ilhas
Ataque: 3
Defesa: 3
Frase de ataque: Iara canta uma canção desafinada machucando os tímpanos de %s
Descrição: Último lugar no Show de Calouros do programa do Raul Gil.
```
