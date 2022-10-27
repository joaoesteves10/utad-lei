#include <stdio.h>
#include <locale.h>
/* 18. Escreva um programa que calcule o valor do fatorial de um número natural
n introduzido através do teclado. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int n, result = 1;
  printf("n: ");
  scanf_s("%d", &n);

  while (n > 0) {
    result *= n;
    n--;
  }

  printf("------\n%d",result);

  return 0;
}
