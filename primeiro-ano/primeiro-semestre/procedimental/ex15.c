/* 15. Implemente um programa que indique se um dado número inteiro é PAR ou IMPAR. */

#include <stdio.h>

int main()
{

  int numero;

  printf("número (int): ");
  scanf_s("%d", &numero);

  if (numero % 2 == 0) {printf("par.");}
  else {printf("impar.");}

  return 0;
}
