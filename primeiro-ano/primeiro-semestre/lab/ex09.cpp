/* 9. Escreva um programa que leia um inteiro através do teclado e determine se
ele é simultaneamente divisível por 3 e por 5 */

#include <stdio.h>

int main()
{


  int numero;

  printf("número: ");
  scanf_s("%d", &numero);

  if (numero % 3 == 0 && numero % 5 == 0) {
    printf("é divisível simultaneamente por 3 e por 5");
  } else {
    printf("não é divisível simultaneamente por 3 e por 5");
  }

  return 0;
}
