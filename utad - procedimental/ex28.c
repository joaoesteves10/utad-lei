#include <stdio.h>
#include <locale.h>
/* 28. Implemente um programa que permita aceitar um valor numérico que apenas
pode ser positivo. Se não for positivo deve insistir na leitura. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int numero;

  do {
    printf("Introduza um valor positivo: ");
    scanf_s("%d", &numero);
  } while (numero < 0);

  return 0;
}
