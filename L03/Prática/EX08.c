/*
  DESCRIÇÃO

  Mefistofélio está estudando cálculo proposicional em Lógica Matemática.  
  Cansado de ter que perguntar para os monitores se suas equivalências lógicas estão corretas,  
  ele decidiu implementar um interpretador de tabela-verdade para as operações:
    – E (conjunção)
    – O (disjunção)
    – I (implicação)
    – B (bicondicional)

  ENTRADA

    • Três caracteres, cada um em sua própria linha, na ordem:
      1) Valor lógico A: 'V' (verdadeiro) ou 'F' (falso)  
      2) Valor lógico B: 'V' (verdadeiro) ou 'F' (falso)  
      3) Operador lógico:  
         'E' para conjunção (A ∧ B)  
         'O' para disjunção   (A ∨ B)  
         'I' para implicação  (A → B)  
         'B' para bicondicional (A ↔ B)

  SAÍDA

    • Se todas as entradas forem válidas, imprima o resultado da operação:  
      'V' se o resultado for verdadeiro,  
      'F' se o resultado for falso.  
    • Se qualquer caractere de entrada for diferente de 'V', 'F', 'E', 'O', 'I' ou 'B',  
      imprima apenas:
        entrada inválida!

  EXEMPLOS DE E/S

    Entrada:         Saída:
    F                V
    F
    B

    Entrada:         Saída:
    C                entrada inválida!
    V
    O

    Entrada:         Saída:
    V                F
    V
    E

    Entrada:         Saída:
    V                V
    F
    I

    Entrada:         Saída:
    F                V
    F
    O

  DETALHES

    1. Valide os três caracteres antes de calcular qualquer operação.  
    2. Em caso de caractere inválido EM QUALQUER POSIÇÃO, só imprima "entrada inválida!"  
       e encerre-se.  
    3. Regras lógicas:
       – Conjunção (E):       V ∧ V = V, senão = F  
       – Disjunção (O):       F ∨ F = F, senão = V  
       – Implicação (I):      A → B = F apenas quando A = V e B = F; senão = V  
       – Bicondicional (B):   V ↔ V = V, F ↔ F = V; senão = F  
*/

#include <stdio.h>

int main() {
    char a, b, o, r;
    scanf(" %c %c %c", &a, &b, &o);
    if (!(a == 'V' || a == 'F') ||
        !(b == 'V' || b == 'F') ||
        !(o == 'E' || o == 'O' || o == 'I' || o == 'B')) {
        printf("entrada inválida!");
        return 0;
    }
    switch (o) {
        case 'E':
            if (a == 'V' && b == 'V') r = 'V';
            else r = 'F';
            break;
        case 'O':
            if (a == 'F' && b == 'F') r = 'F';
            else r = 'V';
            break;
        case 'I':
            if (a == 'V' && b == 'F') r = 'F';
            else r = 'V';
            break;
        case 'B':
            if (a == b) r = 'V';
            else r = 'F';
            break;
    }
    printf("%c", r);
    return 0;
}
