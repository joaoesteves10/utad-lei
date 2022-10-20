#include <stdio.h>
#include <locale.h>
/* 25. Implemente um programa que permita calcular a soma dos 20 primeiros
números pares positivos. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int soma = 0, i;

  for (i = 0; i <= 20; i++) {
    soma += i*2;
  }

  printf("%d", soma);

  return 0;
}
