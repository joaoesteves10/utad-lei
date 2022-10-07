#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <locale.h>
#include <math.h>
/* 10. Escreva um programa que gere aleatoriamente um inteiro designativo do dia
da semana (1 a 7) e apresente no ecrã a designação desse dia.
Exemplo: 6 deve aparecer sexta. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  /* gera um número aleatório entre 1 e 7
  https://cplusplus.com/reference/cstdlib/rand/ */
  srand(time(NULL));
  int dia = rand() % 7 + 1;
  printf("número gerado: %d\n", dia);

  // começamos no domingo por causa do enunciado
  switch (dia) {
    case 1: printf("domingo"); break;
    case 2: printf("segunda"); break;
    case 3: printf("terça"); break;
    case 4: printf("quarta"); break;
    case 5: printf("quinta"); break;
    case 6: printf("sexta"); break;
    case 7: printf("sábado"); break;
  };

  return 0;
}
