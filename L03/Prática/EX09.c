/*
  DESCRIÇÃO

  Pedro gosta de se organizar quanto ao pagamento de suas contas de energia, fazendo previsões de quanto
  ele terá que desembolsar para pagá‑las. A empresa de fornecimento de energia de sua cidade tem:
    • Tarifa base: R$ 0,429 por kWh
    • Bandeiras tarifárias adicionais (por 100 kWh):
        – G: R$ 0,00
        – Y: R$ 0,996
        – R: R$ 4,599
        – D: R$ 7,571
    • Tarifa adicional percentual sobre o valor (já incluindo bandeira):
        – 0–40 kWh:   0%
        – 41–100 kWh: 7%
        – 101–250 kWh: 11%
        – >250 kWh:   15%

  Seu programa deve calcular o valor total a pagar, dado o consumo em kWh e a bandeira.

  ENTRADA

    • Um inteiro N: consumo de energia em kWh
    • Um caractere C: bandeira tarifária ('G', 'Y', 'R' ou 'D')

  SAÍDA

    • O valor total a pagar, no formato:
        R$ XX.XX
      com duas casas decimais.

  EXEMPLOS DE E/S

    Entrada:         Saída:
    157              R$ 74.76
    R

    Entrada:         Saída:
    25               R$ 10.72
    G

    Entrada:         Saída:
    125              R$ 60.63
    Y

    Entrada:         Saída:
    380              R$ 213.59
    D

    Entrada:         Saída:
    40               R$ 17.16
    Y

    Entrada:         Saída:
    41               R$ 18.82
    Y

    Entrada:         Saída:
    165              R$ 83.68
    R

    Entrada:         Saída:
    600              R$ 302.88
    Y

    Entrada:         Saída:
    251              R$ 134.41
    R

    Entrada:         Saída:
    15               R$ 6.43
    D
*/

#include <stdio.h>

int main() {
    int consumo, blocos;
    char bandeira;
    double tarifa_base, valor_bandeira, subtotal, percentual, valor_total;

    scanf(" %d %c", &consumo, &bandeira);

    blocos = consumo / 100;

    tarifa_base = consumo * 0.429;

    switch (bandeira) {
        case 'G':
            valor_bandeira = 0.00 * blocos;
            break;
        case 'Y':
            valor_bandeira = 0.996 * blocos;
            break;
        case 'R':
            valor_bandeira = 4.599 * blocos;
            break;
        case 'D':
            valor_bandeira = 7.571 * blocos;
            break;
        default:
            printf("entrada inválida!");
            return 0;
    }

    subtotal = tarifa_base + valor_bandeira;

    if (consumo <= 40) {
        percentual = 0.00;
    } 
    else if (consumo <= 100) {
        percentual = 0.07;
    } 
    else if (consumo <= 250) {
        percentual = 0.11;
    } 
    else {
        percentual = 0.15;
    }

    valor_total = subtotal + subtotal * percentual;

    printf("R$ %.2f", valor_total);

    return 0;
}