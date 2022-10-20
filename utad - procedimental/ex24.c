#include <stdio.h>
#include <locale.h>
/* 24. Implemente um programa que permita efetuar a soma dos 180 primeiros
números inteiros positivos. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int soma = 0, i;


  for (i = 1; i <= 180; i++) {
    soma += i;
  }


  printf("%d", soma);

  return 0;
}
