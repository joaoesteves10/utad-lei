#include <stdio.h>
#include <locale.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
/* 18. Implemente um programa que indique se um determinado número aleatório é
divisível por 3. */
/* como o enunciado é confuso, em (a) vou fazer para um número introduzido pelo
utilizador e em (b) para um número aleatório */

int main()
{
  setlocale(LC_ALL, "Portuguese");

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
