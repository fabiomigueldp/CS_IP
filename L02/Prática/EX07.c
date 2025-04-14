/*
DESCRIÇÃO
Mefistofélio Credolfo, um calouro da UFSCar que mora longe do campus, diariamente precisa calcular o horário que deverá acordar para ir às aulas. Cansado de ter que refazer os cálculos com frequência, Mefis (para os íntimos!) decide pedir a você - serelepe programador(a) - para criar um programa que calcule o horário que ele deverá acordar para chegar na faculdade.

ENTRADA
O seu programa deverá receber:
1. O tempo previsto para chegar no campus (em minutos), esse número será um inteiro 0 < n <= 300; e
2. O horário em que Mefis precisa estar na faculdade. Esse número será recebido como dois inteiros: um representando as horas (h) e o outro representando os minutos (m), sendo que 8 <= h < 22 e 0 <= m < 60.

SAÍDA
O programa deve imprimir o horário que Mefis deverá sair de casa para chegar na faculdade na hora desejada. A hora deverá estar no formato de hh:mm (horas e minutos).

EXEMPLO DE E/S
(os comentários entre parênteses não deverão ser exibidos):
Entrada                                         Saída
90 (tempo, em minutos, para chegar na faculdade)
12 30 (horário da aula = 12:30)                  11:00  (horario que Mefis precisa sair)

DICA
Utilize a máscara %02d para imprimir dois dígitos de um número inteiro.

Por exemplo:

Input      | Resultado
-----------|-----------
70         |
10 40      | 9:30
-----------|-----------
15         |
10 5       | 9:50
-----------|-----------
15         |
13 10      | 12:55
-----------|-----------
75         |
8 5        | 6:50
-----------|-----------
140        |
8 40       | 6:20
-----------|-----------
15         |
15 45      | 15:30
-----------|-----------
90         |
7 15       | 5:45
-----------|-----------
60         |
8 25       | 7:25
-----------|-----------
110        |
11 40      | 9:50
-----------|-----------
165        |
14 10      | 11:25
-----------|-----------

*/