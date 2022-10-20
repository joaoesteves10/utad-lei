#include <stdio.h>
#include <locale.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
/* 17. Escreva um programa que gere aleatoriamente um inteiro de 4 dígitos e diga se ele é capicua. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));
  int gerado = rand() % 9000 + 1000;
  printf("gerado: %d\n", gerado);
  int geradoOriginal = gerado;
  int invertido = 0;

  // copiei isto tudo porque não sei matemática e não sei passar int para char[3]
  while (gerado > 0)
  {
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
