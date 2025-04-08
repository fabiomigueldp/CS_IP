/*
 * Descrição:
 * Escreva um programa que receba o valor do salário de um funcionário e o valor do salário mínimo.
 * Calcule e imprima quantos salários mínimos ganha esse funcionário.
 *
 * Entrada:
 * A entrada deve conter dois números reais separados por um espaço, representando respectivamente
 * o salário do funcionário e o salário mínimo.
 *
 * Saída:
 * A saída deve conter um número real indicando quantos salários mínimos o funcionário ganha.
 *
 * Exemplo:
 * Entrada:
 * 2000.00 1500.00
 * Saída:
 * 1.33
 */

 #include <stdio.h>

 int main() {
    float salario, salario_minimo, salarios_minimos;

    // Leitura do salário do funcionário
    scanf("%f", &salario);
    // Leitura do salário mínimo
    scanf("%f", &salario_minimo);

    // Cálculo de quantos salários mínimos o funcionário ganha
    salarios_minimos = salario / salario_minimo;

    // Impressão do resultado
    printf("%.2f\n", salarios_minimos);
    return 0;
 }
