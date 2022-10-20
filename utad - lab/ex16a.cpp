#include <stdio.h>
#include <locale.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

# include <string>
using namespace std;

/* 16. Escreva um programa que gere aleatoriamente um inteiro de 3 dígitos e de seguida o inverta.
Exemplo:259 deve ficar 952. */

// não aprendemos a fazer com strings mas ya

int main()
{
  setlocale(LC_ALL, "Portuguese");

  srand(time(NULL));
  int gerado = rand() % 900 + 100;
  printf("gerado: %d\n", gerado);

  string inverter = to_string(gerado);
  printf("%c%c%c", inverter[2], inverter[1], inverter[0]);

  return 0;
}
