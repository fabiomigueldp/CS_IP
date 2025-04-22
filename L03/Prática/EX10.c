/*
  DESCRIÇÃO

  José gosta muito de matemática e está estudando geometria analítica na sua graduação.
  Durante o semestre ele se deparou com o estudo das retas, e a posição relativa entre elas no plano.
  Quando temos duas retas, conseguimos definir se elas são paralelas, perpendiculares ou concorrentes
  usando seu coeficiente angular.

  Para auxiliar na correção de alguns exercícios sobre o tema, José pediu para você, um curioso desenvolvedor,
  que criasse um sistema que trabalhe com duas opções:
    A) A partir do coeficiente angular de duas retas, verificar a posição relativa.
    B) A partir de 4 pontos (dois de cada reta), verificar a posição relativa.

  ENTRADA

    • Uma letra (opção):  
        'A' para usar coeficiente angular  
        'B' para usar quatro pontos  
    • Se for 'A': dois números reais m1 e m2 (coeficientes angulares das retas).  
    • Se for 'B': quatro pares de coordenadas reais:
        (x1, y1), (x2, y2) — pontos da primeira reta  
        (x3, y3), (x4, y4) — pontos da segunda reta  

  SAÍDA

    • RETAS PARALELAS     (se coeficientes angulares iguais)  
    • RETAS PERPENDICULARES (se m1 * m2 == -1)  
    • RETAS CONCORRENTES   (caso contrário)  
    • OPCAO INVALIDA       (se a letra de opção não for 'A' nem 'B')

  EXEMPLO DE E/S

    Entrada:           Saída:
    A                  RETAS CONCORRENTES
    2
    3

    Entrada:           Saída:
    B                  RETAS PARALELAS
    1
    1
    2
    2
    2
    1
    3
    2
*/

#include <stdio.h>

int main() {
    char opcao;
    float coef1, coef2, x1, y1, x2, y2, x3, y3, x4, y4;

    scanf(" %c", &opcao);

    if (opcao == 'A') {

        scanf(" %f %f", &coef1, &coef2);

        if (coef1 == coef2) {
            printf("RETAS PARALELAS");
        }
        else if (coef1 * coef2 == -1) {
            printf("RETAS PERPENDICULARES");
        }
        else {
            printf("RETAS CONCORRENTES");
        }

    }
    else if (opcao == 'B') {

        scanf(" %f %f %f %f %f %f %f %f",
              &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

        if (x2 == x1 && x4 == x3) {
            printf("RETAS PARALELAS");
        }
        else if ((x2 == x1 && (y4 - y3) == 0) ||
                 (x4 == x3 && (y2 - y1) == 0)) {
            printf("RETAS PERPENDICULARES");
        }
        else {
            coef1 = (y2 - y1) / (x2 - x1);
            coef2 = (y4 - y3) / (x4 - x3);

            if (coef1 == coef2) {
                printf("RETAS PARALELAS");
            }
            else if (coef1 * coef2 == -1) {
                printf("RETAS PERPENDICULARES");
            }
            else {
                printf("RETAS CONCORRENTES");
            }
        }

    }
    else {
        printf("OPCAO INVALIDA");
    }

    return 0;
}
