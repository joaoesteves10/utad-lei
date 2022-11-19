/* 9. Implemente um programa que peça ao utilizador uma nota de avaliação
(numérica) e que indique se o aluno está APROVADO ou REPROVADO.
Nota: Este exercício pode ser desenvolvido para outras situações como por exemplo ORAL. */

#include <stdio.h>

int main() {

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
