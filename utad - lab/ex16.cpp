#include <stdio.h>
#include <locale.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

/* 16. Escreva um programa que gere aleatoriamente um inteiro de 3 dígitos e de seguida o inverta.
Exemplo:259 deve ficar 952. */


int main()
{
  setlocale(LC_ALL, "Portuguese");

  srand(time(NULL));
  int gerado = rand() % 900 + 100;
  printf("gerado: %d\n", gerado);
  int invertido = 0;

  // copiei isto tudo porque não sei matemática e não sei passar int para char[3]
  while (gerado > 0)
  {
  invertido = invertido * 10 + (gerado % 10);
  gerado /= 10;
  }
  printf("invertido: %d\n", invertido);

  return 0;
}
