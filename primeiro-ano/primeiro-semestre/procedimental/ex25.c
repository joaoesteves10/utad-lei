/* 25. Implemente um programa que permita calcular a soma dos 20 primeiros números pares positivos. */

#include <stdio.h>

int main() {

  int soma = 0, i;

  for (i = 0; i <= 20; i++) {
    soma += i*2;
  }

  printf("%d", soma);

  return 0;
}
