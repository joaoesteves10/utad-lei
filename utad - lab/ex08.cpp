#include <stdio.h>
#include <locale.h>
#include <math.h>
/* 8. Escreva um programa que leia um inteiro introduzido através do teclado e
determine se ele é par ou impar. */

int main()
{
  setlocale(LC_ALL, "pt_PT.UTF-8");

  int numero;

  printf("número: ");
  scanf_s("%d", &numero);

  if (numero % 2 == 0) {
    printf("número par");
  } else {
    printf("número impar");
  }

  return 0;
}
