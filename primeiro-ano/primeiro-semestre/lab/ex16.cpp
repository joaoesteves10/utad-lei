/* 16. Escreva um programa que gere aleatoriamente um inteiro de 3 dígitos e de seguida o inverta.
Exemplo:259 deve ficar 952. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

  srand(time(NULL));
  int gerado = rand() % 900 + 100;
  printf("gerado: %d\n", gerado);
  int invertido = 0;

  // código do professor, sei o que faz? não
  while (gerado > 0)
  {
    invertido = invertido * 10 + (gerado % 10);
    gerado /= 10;
  }
  printf("invertido: %d\n", invertido);

  return 0;
}
