/*
  DESCRIÇÃO

  Cheetara e Panthro gostam de jogar pedra, papel e tesoura. Entretanto, perceberam que conseguem jogar apenas quando ambos estão juntos 
  presencialmente. Para acabar com essa limitação, pediram a você, programador(a) serelepe, para fazer um programa que simule o jogo, de tal forma 
  que eles possam jogar quando quiserem, presencialmente ou não.

  Antes de construir o jogo completo, você decide fazer uma versão MVP (Minimum Viable Product) em C para testar as suas habilidades.

  ENTRADA

    Seu programa deverá receber dois caracteres, cada um em sua própria linha, representando a escolha de Panthro e Cheetara, respectivamente.  
    Os caracteres aceitos são:
      R — Rock (pedra)
      P — Paper (papel)
      S — Scissors (tesoura)

  SAÍDA

    - Se houver vitória de um dos jogadores, imprima o nome do vencedor em maiúsculas (CHEETARA ou PANTHRO).  
    - Se houver empate, imprima EMPATE.  
    - Se um ou ambos escolherem caractere inválido, imprima INVALIDA e encerre o programa sem mais saída.

  EXEMPLO DE E/S

    Entrada:         Saída:
    R                CHEETARA
    P

    Entrada:         Saída:
    P                EMPATE
    P

    Entrada:         Saída:
    A                INVALIDA
    S

    Outros casos:

    Entrada: S\nS\n    Saída: EMPATE
    Entrada: P\nR\n    Saída: PANTHRO
    Entrada: S\nR\n    Saída: CHEETARA
    Entrada: S\nP\n    Saída: PANTHRO

  DETALHES

    • A verificação de validade deve ocorrer antes de qualquer comparação de jogadas.  
    • Ao detectar caractere inválido (não R, P ou S), imprima apenas INVALIDA e termine.  
    • Em caso de empate (mesma letra válida), imprima EMPATE.  
    • Caso contrário, aplique as regras clássicas:
        – R vence S  
        – S vence P  
        – P vence R  
*/

#include <stdio.h>

int main () {
  char panthro, cheetara;
  scanf ("%c %c", &panthro, &cheetara);

  // Verificação de validade
  if ((panthro != 'R' && panthro != 'P' && panthro != 'S') || (cheetara != 'R' && cheetara != 'P' && cheetara != 'S')) {
    printf ("INVALIDA\n");
  }

  // Comparador
  if (panthro == cheetara) {
    printf("EMPATE\n");
  } else if (
    (panthro == 'R' && cheetara == 'S') ||
    (panthro == 'P' && cheetara == 'R') ||
    (panthro == 'S' && cheetara == 'P') 
  ) {
      printf ("PANTHRO\n");
    } else {
      printf ("CHEETARA\n");
    }

  return 0;

}
