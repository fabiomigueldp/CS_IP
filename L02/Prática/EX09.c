/*
Descrição
Faça um programa que receba um número inteiro, calcule e imprima a raiz quadrada desse número e, esse número elevado ao quadrado.

Entrada
A entrada deve conter um número inteiro.

Saída
A primeira linha deve conter um número real indicando a raiz quadrada da entrada.
A segunda linha deve conter um número inteiro indicando a entrada elevada ao quadrado.

Exemplo
terminal@linux:~$ ./program
2
1.41
4

Por exemplo:

Input   | Resultado
--------|-----------
24981   | 158.05
        | 624050361
--------|-----------
27943   | 167.16
        | 780811249
--------|-----------
12490   | 111.76
        | 156000100
--------|-----------
30660   | 175.10
        | 940035600
--------|-----------
4196    | 64.78
        | 17606416
--------|-----------

*/

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    double x = n > 0 ? n : 1;
    for (int i = 0; i < 20; i++) {
        x = (x + n / x) / 2.0;
    }

    printf("%.2f\n", x);
    long long sq = (long long)n * n;
    printf("%lld\n", sq);
    return 0;
}
