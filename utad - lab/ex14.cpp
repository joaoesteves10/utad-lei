#include <stdio.h>
#include <locale.h>
/* 14. Escreva um programa que calcule mn utilizando ciclos. Os valores de m e n devem ser inteiros e
introduzidos através do teclado. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int m, n, i;
  long int res = 1;

  printf("m (base): ");
  scanf_s("%d", &m);

  printf("n (expoente): ");
  scanf_s("%d", &n);

  for (i=0; i < n; i++) {
    res *= m;
  }

/*
  while (i < n) {
    res *= m;
    i++;
  }
*/

  printf("------\n%ld", res);

  return 0;
}
