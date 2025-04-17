/*
DESCRIÇÃO
Em um jogo, as posições do jogador e do inimigo podem ser representadas por pares ordenados, por exemplo J=(x1,y1) e I=(x2,y2).
Sabendo disso, um time de desenvolvedores de jogos decidiu criar um jogo no qual o jogador tem uma quantidade limitada de movimentos para poder concluir a fase e vencer o inimigo.
Porém, achando essa mecânica muito fácil, resolveram adaptá-la da seguinte maneira: quando o jogador se movimentar com um número de casas ímpar, o total descontado será o dobro do que ele andou!
O jogador só pode se movimentar nos eixos X e Y, não podendo andar na diagonal e possui uma quantidade pré-determinada de movimentos que pode realizar em cada eixo.
Os desenvolvedores decidiram que a quantidade máxima de movimentos seria 100 para cada eixo, ou seja, o jogador pode andar 100 casas no eixo X e 100 casas no eixo Y, em cada fase.
Por exemplo, considerando que o inimigo se encontra nas coordenadas I=(29,10), para o jogador, a partir da posição (0,0) se locomover até ele, teria que andar 29 casas no eixo X e 10 no eixo Y,
mas pela regra do jogo, ele gastaria o dobro de casas no eixo X, descontando não 29 do seu limite de movimentos e sim 58 (29*2).
Para facilitar a programação do jogo, o time decidiu contratar você, um programador muitíssimo experiente em C para fazer uma parte do trabalho.

ENTRADA
A entrada será composta por uma linha, contendo a posição I=(x2,y2) do inimigo, com os números separados por um espaço.

SAÍDA
A saída deve informar os movimentos restantes que o jogador terá no eixo X e no eixo Y, respectivamente, se ele andar até o inimigo.

EXEMPLO DE E/S
(os comentários entre parênteses não deverão ser exibidos):
Entrada
29 (posição do inimigo: eixo x)
10 (posição do inimigo: eixo y)
Saída
42 (movimentos restantes no eixo x)
90 (movimentos restantes no eixo y)

DETALHES
Neste jogo, o jogador sempre começa na posição (0,0).

Por exemplo:

Input   | Resultado
--------|-----------
40      |
43      | 60
        | 14
--------|-----------
19      |
68      | 62
        | 32
--------|-----------
27      |
45      | 46
        | 10
--------|-----------
98      |
52      | 2
        | 48
--------|-----------
87      |
68      | -74
        | 32
--------|-----------
63      |
27      | -26
        | 46
--------|-----------
36      |
64      | 64
        | 36
--------|-----------
67      |
40      | -34
        | 60
--------|-----------
44      |
87      | 56
        | -74
--------|-----------
43      |
37      | 14
        | 26
--------|-----------

*/

#include <stdio.h>

int main(void) {
    int x2, y2;
    scanf("%d", &x2);
    scanf("%d", &y2);

    int dx = x2 < 0 ? -x2 : x2;
    int dy = y2 < 0 ? -y2 : y2;

    int costx = (dx % 2) ? dx * 2 : dx;
    int costy = (dy % 2) ? dy * 2 : dy;

    int remx = 100 - costx;
    int remy = 100 - costy;

    printf("%d\n%d\n", remx, remy);
    return 0;
}
