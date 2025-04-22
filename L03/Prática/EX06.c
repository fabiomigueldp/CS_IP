/*
  DESCRIÇÃO

  Senhor Lorenzo é um idoso bastante azarado que teve a infelicidade de ter sua lixeira da área externa roubada.

  Para repô-la, ele pensou que valeria a pena ir em lojas físicas, porém ficou assustado com os preços praticados nas lojas da região.

  Tendo em vista a situação, ele pediu ao seu neto, Lorenzinho Neto, para encomendar uma lixeira nova pela Internet. Porém, como eles moram em Cuiabá-MT, o frete mais rápido disponível demora uma semana.

  Por isso, Sr. Lorenzo terá que entregar o saco de lixo nas mãos do gari que passa na sua rua. O problema disso é que, em cada dia, ele passa num horário diferente, o que fará com que o Sr. Lorenzo 
  precise prever a chegada dele. Com o coração repleto de solidariedade, você resolve criar um programa para ajudá-lo.

  Cronograma do gari:

    Dia da semana | Horário   | Peso máximo
    --------------|-----------|-------------
    Domingo (1)   | 14:30      | 50 kg
    Segunda (2)   | 08:30      | 15 kg
                  | 19:00      | 30 kg
    Terça (3)     | 16:45      | 25 kg
    Quarta (4)    | 18:00      | 5 kg
    Quinta (5)    | 06:00      | 60 kg
                  | 21:15      | 100 kg
    Sexta (6)     | 15:30      | 20 kg
    Sábado (7)    | 10:00      | 80 kg


  Frases quando o Sr. Lorenzo “caduca”:
    Data inválida:       "Seu Lorenzo caducou com o calor de Cuiaba, o dia nem existe!!!"
    Hora inválida:       "Seu Lorenzo caducou com o calor de Cuiaba, essa hora nem existe!!!"
    Peso acima do limite:"Seu Lorenzo caducou com o calor de Cuiaba, eh peso demais!!!"
    Peso negativo:       "Seu Lorenzo caducou com o calor de Cuiaba, o peso nem existe!!!"

  ENTRADA
    - Um número inteiro, representando o dia da semana (1 a 7);
    - Dois números reais, representando respectivamente a hora (0 a 24) e o peso (0 a 100).

  SAÍDA
    - Se deu certo:      "Deu certo!"
    - Se deu errado:     "Deu errado :("
    - Se caducou, imprimir apenas a frase de erro correspondente, seguindo a prioridade:
        1) Data inválida
        2) Hora inválida
        3) Peso negativo
        4) Peso acima do limite

  EXEMPLOS DE E/S

    Entrada: 2 19 15
    Saída:   Deu certo!

    Entrada: 9 15 20
    Saída:   Seu Lorenzo caducou com o calor de Cuiaba, o dia nem existe!!!

    Entrada: 7 10 90
    Saída:   Deu errado :(

  DETALHES
    Após imprimir uma mensagem de “caducada”, caso haja outra condição de erro, ela não deve ser impressa.
*/

#include <stdio.h>

int main () {

    int dia;
    float hora, peso;

    scanf("%d %f %f", &dia, &hora, &peso);

    if (dia < 1 || dia > 7) {
        printf ("Seu Lorenzo caducou com o calor de Cuiaba, o dia nem existe!!!\n");
        return 0;
    } else if (hora < 0 || hora > 24) {
        printf ("Seu Lorenzo caducou com o calor de Cuiaba, essa hora nem existe!!!\n");
        return 0;
    } else if (peso < 0) {
      printf ("Seu Lorenzo caducou com o calor de Cuiaba, o peso nem existe!!!\n");
    } else if (peso > 100) {
      printf ("Seu Lorenzo caducou com o calor de Cuiaba, eh peso demais!!!\n");
    } else {

      int ok = 0;

      switch (dia) {
        case 1:
        if (hora == 14.5 && peso <= 50) ok++;
        break;

        case 2:
        if ((hora == 8.5 && peso <= 15) || (hora == 19 && peso <= 30)) ok++;
        break;

        case 3:
        if (hora == 16.75 && peso <= 25) ok++;
        break;

        case 4:
        if (hora == 18 && peso <= 5) ok ++;
        break;

        case 5:
        if ((hora == 6 && peso <= 60) || (hora == 21.25 && peso <= 100)) ok++;
        break;

        case 6:
        if (hora == 15.5 && peso <= 20) ok++;
        break;

        case 7:
        if (hora == 10 && peso <= 80) ok++;
        break;
      }
      if (ok > 0) {
        printf ("Deu certo!\n");
      } else {
        printf ("Deu errado :(\n");
      }
    }

    return 0;
}