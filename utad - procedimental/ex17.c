#include <stdio.h>
#include <locale.h>
/* 17. Implemente um programa que, de entre três números fornecidos pelo
utilizador, permita encontrar o maior deles. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float numero1, numero2, numero3;

  printf("número 1: ");
  scanf_s("%f", &numero1);

  printf("número 2: ");
  scanf_s("%f", &numero2);

  printf("número 3: ");
  scanf_s("%f", &numero3);

  if (numero1 > numero2 && numero1 > numero3) {
    printf("%.2f (número 1) é o maior", numero1);
  } else if (numero2 > numero1 && numero2 > numero3) {
    printf("%.2f (número 2) é o maior", numero2);
  } else if (numero3 > numero1 && numero3 > numero2) {
    printf("%.2f (número 3) é o maior", numero3);
  } else {
    printf("valores inválidos ou iguais");
  }

  return 0;
}
