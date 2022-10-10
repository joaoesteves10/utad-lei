#include <stdio.h>
#include <locale.h>
/* 18. Implemente um programa que indique se um determinado número aleatório é
divisível por 3. */
/* como o enunciado é confuso, em (a) vou fazer para um número aleatório e em
(b) para um número introduzido pelo utilizador */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int numero;

  printf("número: ");
  scanf_s("%d", &numero);

  if (numero % 3 == 0) {
    printf("é divisível por 3");
  } else if (numero % 3 != 0){
    printf("não é divisível por 3");
  } else {
    printf("valor inválido");
  }

  return 0;
}
