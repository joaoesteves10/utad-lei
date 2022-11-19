/* 17. Escreva um programa que gere aleatoriamente um inteiro de 4 dígitos e diga se ele é capicua. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  srand(time(NULL));
  int gerado = rand() % 9000 + 1000;
  printf("gerado: %d\n", gerado);
  int geradoOriginal = gerado;
  int invertido = 0;

  // código do professor, sei o que faz? não
  while (gerado > 0) {
    invertido = invertido * 10 + (gerado % 10);
    gerado /= 10;
  }

  printf("invertido: %d\n", invertido);

  if (invertido == geradoOriginal) {
    printf("é capicua");
    return 0;
  } else {
    printf("não é capicua");
  }

  return 0;
}
