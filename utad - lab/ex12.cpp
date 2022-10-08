#include <stdio.h>
#include <locale.h>
/* 12. Escreva um programa que determine se um ano, introduzido através do
teclado, é bissexto. Um ano é bissexto quando é divisível por 4, exceto se for
divisível por 100 a não ser que também seja divisível por 400. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int ano;

  printf("ano: ");
  scanf_s("%d", &ano);

  if (ano % 4 == 0 && ((ano % 100 != 0) || (ano % 100 == 0 && ano % 400 == 0)) ) {
    printf("%d é bissexto", ano);
  } else {
    printf("%d não é bissexto", ano);
  }

  return 0;
}
