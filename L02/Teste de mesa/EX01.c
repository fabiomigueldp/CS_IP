/*
Simulando o trecho de código abaixo, qual(ais) será(ão) a(s) saída(s) se as variáveis inteiras R = 23 e U = 4?

01 ...
02 N = R;
03
04 R += U;
05 U = R - U;
06 R -= U;
07
08 N /= U;
09
10 printf("%d", N);
11 ...
*/

#include <stdio.h>

int main () {
    int R = 23, U = 4, N;

    N = R;

    R += U;
    U = R - U;
    R-= U;

    N /= U;

    printf("%d", N);
    return 0;
}