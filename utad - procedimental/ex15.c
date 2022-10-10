#include <stdio.h>
#include <locale.h>
/* 15. Implemente um programa que indique se um dado número inteiro é PAR ou
IMPAR. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int numero;

  printf("número (int): ");
  scanf_s("%d", &numero);

  if (numero % 2 == 0) {printf("par.");}
  else {printf("impar.");}

  return 0;
}
