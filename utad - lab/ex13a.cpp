#include <stdio.h>
#include <locale.h>
/* 13. Um grupo de 20 alunos fez um exame. Escreva um programa que apresente no ecrã o número de
alunos que passaram no exame (>= 9,5). */
# define N 20
// a: com while

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float nota;
  int i = 0, c;

  printf("notas:\n");

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

  printf("------\npassaram %d alunos", c);

  return 0;
}
