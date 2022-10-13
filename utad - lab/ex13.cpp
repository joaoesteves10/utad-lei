#include <stdio.h>
#include <locale.h>
/* 13. Um grupo de 20 alunos fez um exame. Escreva um programa que apresente no ecrã o número de
alunos que passaram no exame (>= 9,5). */
# define N 20


int main()
{
  setlocale(LC_ALL, "Portuguese");

  float nota;
  int i, c;

  printf("notas:\n");

  for (i=0; i < N; i++) { // roda vinte vezes, incrementando i como se fosse while com um i+= 1 dentro
    scanf_s("%f", &nota);

    if (nota < 0 || nota > 20) {
      printf("valor inválido\n");
      continue;
    }
    if (nota >= 9.5) {
      c++;
    }
  }

  printf("------\npassaram %d alunos", c);

  return 0;
}
