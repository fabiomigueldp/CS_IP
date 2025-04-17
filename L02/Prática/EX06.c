/*
Descrição
Faça um programa que receba o salário de um funcionário, calcule e imprima o valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do salário.

Entrada
A entrada deve conter um número real.

Saída
A saída deve conter um número real com o valor do imposto de renda.

Exemplo
terminal@linux:~$ ./program
2000.00
100.00

Por exemplo:

Input       Resultado
----------|-----------
2000.00   | 100.00
9999.00   | 499.95
12540.00  | 627.00
258763.00 | 12938.15
0.00      | 0.00
----------|-----------

*/

#include <stdio.h>

int main() {

    float sal;

    scanf ("%f", &sal);

    printf ("%.2f\n", sal * 0.05);

    return 0;
}