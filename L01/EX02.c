/*
Descrição:
Faça um programa que receba o salário de um funcionário, calcule e imprima o valor 
do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do salário.

Entrada:
A entrada deve conter um número real.

Saída:
A saída deve conter um número real com o valor do imposto de renda.

Exemplo:
Entrada:
2000.00
Saída:
100.00
*/

#include <stdio.h>

int main() {
    float salario, imposto;

    // Leitura do salário
    scanf("%f", &salario);

    // Cálculo do imposto de renda (5% do salário)
    imposto = salario * 0.05;

    // Impressão do valor do imposto
    printf("%.2f\n", imposto);
    return 0;
}