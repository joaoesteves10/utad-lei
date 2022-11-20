/* 28. Implemente um programa que permita aceitar um valor numérico que apenas pode ser positivo. Se não for positivo deve insistir na leitura. */

#include <stdio.h>

int main() {

  int numero;

  do {
    printf("Introduza um valor positivo: ");
    scanf_s("%d", &numero);
  } while (numero < 0);

  return 0;
}
