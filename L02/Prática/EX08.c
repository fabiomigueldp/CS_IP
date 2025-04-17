/*
DESCRIÇÃO
Yagoo é o CEO de uma famosa empresa e precisa de ajuda para construir casas ou prédios. Ele já planejou qual vai ser o tamanho das construções que vai fazer, mas ainda não 
sabe quantos tijolos serão necessários para isso, então decidiu lhe contratar para fazer um programa que calcule isso para ele. Calcule o número necessário de tijolos para as 
quatro paredes de uma construção, lembrando que ele sempre deve ser arredondado para cima.

ENTRADA
A entrada é composta por duas linhas. A primeira contém três números separados por espaço, essas são as medidas de largura, comprimento e altura da construção em metros. 
A segunda contém as medidas dos tijolos, em centímetros, que vão ser usados para a construção.

SAÍDA
A saída do programa será apenas um número contendo a quantidade de tijolos necessários para construir as quatro paredes de uma construção e uma quebra de linha no final ("\n").

EXEMPLO DE E/S
(os comentários entre parênteses não deverão ser exibidos):
Entrada
1.00 1.00 1.00 (Largura, comprimento e altura do prédio em Metros)
100.00 100.00 (Largura e comprimento dos tijolos)
Saída
4 (Quantidade necessária de tijolos)

OBSERVAÇÃO
* Não devem ser utilizados comandos condicionais ou bibliotecas além da "stdio.h" para efetuar o arredondamento.
* Como as medidas do prédio estão em metros, você deve se atentar à conversão para efetuar os cálculos.
* Não pense na profundidade dos tijolos ou algo do tipo, considere apenas a área para esse problema.

Por exemplo:

Input                   | Resultado
------------------------|-----------
1.50 1.50 3.00          |
80.00 80.00             | 29
------------------------|-----------
114.11 154.20 223.60    |
60.82 47.12             | 418685
------------------------|-----------
45.50 5.70 55.40        |
37.70 21.20             | 70980
------------------------|-----------
15.20 15.20 228.30      |
62.22 35.33             | 63145
------------------------|-----------
72.45 12.63 421.10      |
28.30 100.00            | 253196
------------------------|-----------
15.20 30.40 45.60       |
12.22 48.66             | 69939
------------------------|-----------
31.31 22.22 74.74       |
12.12 63.63             | 103757
------------------------|-----------
32.00 32.00 64.00       |
10.00 40.00             | 204800
------------------------|-----------
12.31 18.22 70.00       |
25.00 22.50             | 75986
------------------------|-----------
12.34 56.78 90.12       |
34.56 78.90             | 45689
------------------------|-----------

*/

#include <stdio.h>

int main(void) {
    double largura_m, comprimento_m, altura_m;
    double tijolo_l_cm, tijolo_c_cm;

    scanf("%lf %lf %lf", &largura_m, &comprimento_m, &altura_m);
    scanf("%lf %lf", &tijolo_l_cm, &tijolo_c_cm);

    long long l_cm = (long long)(largura_m * 100.0 + 0.5);
    long long c_cm = (long long)(comprimento_m * 100.0 + 0.5);
    long long h_cm = (long long)(altura_m * 100.0 + 0.5);

    long long P = 2LL * (l_cm + c_cm) * h_cm;

    long long t1 = (long long)(tijolo_l_cm * 100.0 + 0.5);
    long long t2 = (long long)(tijolo_c_cm * 100.0 + 0.5);
    long long N = t1 * t2;

    long long qtd = (P * 10000LL + N - 1) / N;

    printf("%lld\n", qtd);
    return 0;
}
