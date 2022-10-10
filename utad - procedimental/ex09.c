#include <stdio.h>
#include <locale.h>
/* 9. Implemente um programa que peça ao utilizador uma nota de avaliação
(numérica) e que indique se o aluno está APROVADO ou REPROVADO.
Nota: Este exercício pode ser desenvolvido para outras situações como por exemplo ORAL. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float nota;

  printf("nota (-,-): ");
  scanf_s("%f", &nota);

  if (nota >= 9.5) {
    printf("APROVADO");
  } else {
    printf("REPROVADO");
  }

  return 0;
}
