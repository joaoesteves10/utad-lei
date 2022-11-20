/* 13. Um grupo de 20 alunos fez um exame. Escreva um programa que apresente no ecrã o número de
alunos que passaram no exame (>= 9,5). */

#include <stdio.h>
# define N 20

int main()
{

  float nota;
  int i, c;

  printf("notas:\n");

  for (i=0; i < N; i++) {
    scanf_s("%f", &nota);

    if (nota < 0 || nota > 20) {
      printf("valor inválido\n");
      continue;
    }
    if (nota >= 9.5) {
      c++;
    }
  }

  /* com while:
    while (i < N) {
    scanf_s("%f", &nota);

    if (nota < 0 || nota > 20) {
      printf("valor inválido\n");
      continue;
    }
    if (nota >= 9.5) {
      c++;
    }
    i++;
  }
  */

  printf("------\npassaram %d alunos", c);

  return 0;
}
