/*
  DESCRIÇÃO

  Obi‑Ruan Kanobison encontrou um velho jogo de tabuleiro chamado “Buraco da Lacraia”.  
  Nesse jogo há um ponto de início e vários caminhos numerados que levam a outros nós.  
  Alguns caminhos levam a nós sem saída (buracos) e um caminho leva ao “Fim” (saída).  
  Obi deve escolher uma sequência de números, seguindo cada aresta na ordem,  
  sem repetir um mesmo número (não é permitido “voltar”).  
  Sua tarefa é determinar se Obi:
    – Caiu num buraco (nó sem saídas);  
    – Seguiu uma opção inválida (não havia aresta com aquele número);  
    – Chegou ao Fim com sucesso.

  ENTRADA

    Série de inteiros, um por linha, correspondendo aos números dos caminhos escolhidos por Obi.  
    A primeira escolha parte do “Início”. Cada número indica qual aresta seguir no nó atual.

  SAÍDA

    • “Caiu no Buraco!”   — se chegar a um nó sem saídas antes de atingir o Fim.  
    • “Caminho Invalido!” — se em algum nó não existir uma aresta com o número escolhido.  
    • “Parabens!”         — se atingir o nó “Fim”.

  EXEMPLOS DE E/S

    Entrada:       Saída:
    3              Caiu no Buraco!
    5
    9
    17

    Entrada:       Saída:
    2              Caminho Invalido!
    7

    Entrada:       Saída:
    3              Parabens!
    5
    9
    0

  DETALHES

    • Não é permitido usar estruturas de repetição.  
    • Não se pode escolher duas vezes o mesmo número (sem “voltar” aos nós anteriores).  
    • O programa deve processar cada escolha na ordem recebida e terminar imediatamente
      ao detectar um buraco, caminho inválido ou ao alcançar o Fim.
*/

#include <stdio.h>

int main() {
    int e1, e2, e3, e4;
    scanf(" %d", &e1);

    if (e1 == 1) {
        printf("Caiu no Buraco!");
    } else if (e1 == 2) {
        scanf(" %d", &e2);
        if (e2 == 6) {
            scanf(" %d", &e3);
            if (e3 == 4) {
                printf("Caiu no Buraco!");
            } else if (e3 == 8) {
                scanf(" %d", &e4);
                if (e4 == 0) {
                    printf("Parabens!");
                } else if (e4 == 12) {
                    printf("Caiu no Buraco!");
                } else {
                    printf("Caminho Invalido!");
                }
            } else {
                printf("Caminho Invalido!");
            }
        } else {
            printf("Caminho Invalido!");
        }
    } else if (e1 == 3) {
        scanf(" %d", &e2);
        if (e2 == 11) {
            printf("Caiu no Buraco!");
        } else if (e2 == 5) {
            scanf(" %d", &e3);
            if (e3 == 7) {
                printf("Caiu no Buraco!");
            } else if (e3 == 9) {
                scanf(" %d", &e4);
                if (e4 == 0) {
                    printf("Parabens!");
                } else if (e4 == 17) {
                    printf("Caiu no Buraco!");
                } else {
                    printf("Caminho Invalido!");
                }
            } else {
                printf("Caminho Invalido!");
            }
        } else {
            printf("Caminho Invalido!");
        }
    } else {
        printf("Caminho Invalido!");
    }

    return 0;
}
