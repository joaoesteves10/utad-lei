/* 18. Implemente um programa que indique se um determinado número é divisível por 3. */

/* como o enunciado é unclear, em (a) vou fazer para um número introduzido pelo utilizador e em (b) para um número aleatório */

#include <stdio.h>

int main() {

  int numero;

  printf("número: ");
  scanf_s("%d", &numero);

  if (numero % 3 == 0) {
    printf("é divisível por 3");
  } else if (numero % 3 != 0){
    printf("não é divisível por 3");
  } else {
    printf("valor inválido");
  }

  return 0;
}
