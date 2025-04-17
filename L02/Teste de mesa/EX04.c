/*
Simulando o trecho de código abaixo, qual(ais) será(ão) a(s) saída(s) se as variáveis inteiras D = 56 e A = 76?

01 ...
02 N = (3 * D + A) / A ;
03 O = (A + D) * 3 / N + N % D;
04
05 printf("%d", O);
06 ...
*/
#include <stdio.h>

int main () {
    int D = 56, A = 76, N, O;

    N = (3 * D + A) / A ;
    O = (A + D) * 3 / N + N % D;

    printf("%d", O);

    return 0;
}