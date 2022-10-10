#include <stdio.h>
#include <locale.h>
/* 16. Implemente um programa que, de entre dois números fornecidos pelo
utilizador, permita encontrar o menor deles. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float numero1, numero2;

  printf("número 1: ");
  scanf_s("%f", &numero1);

  printf("número 2: ");
  scanf_s("%f", &numero2);


  if (numero1 > numero2) {printf("%.2f > %.2f, %.2f (número 2) é o menor", numero1, numero2, numero2);}
  else if (numero1 < numero2) {printf("%.2f > %.2f, %.2f (número 1) é o menor", numero2, numero1, numero1);}
  else {printf("os números são inválidos ou iguais");}

  return 0;
}
