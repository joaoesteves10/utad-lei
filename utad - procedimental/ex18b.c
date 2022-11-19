/* 18. Implemente um programa que indique se um determinado número aleatório é
divisível por 3. */

/* como o enunciado é unclear, em (a) vou fazer para um número introduzido pelo
utilizador e em (b) para um número aleatório */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  /* gera um número aleatório
  https://cplusplus.com/reference/cstdlib/rand/ */
  srand(time(NULL));
  int numero = rand() % 1000 + 1; // de 0 a 1000 (porque sim)
  printf("número gerado: %d\n", numero);

  if (numero % 3 == 0) {
    printf("é divisível por 3");
  } else if (numero % 3 != 0){
    printf("não é divisível por 3");
  } else {
    printf("valor inválido");
  }

  return 0;
}
