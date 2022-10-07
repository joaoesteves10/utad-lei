#include <stdio.h>
#include <locale.h>
#include <math.h>
/* EXTRA. Escreva um programa que leia um inteiro introduzido através do teclado
e determine se se ele é divisível por 2, 3 e 5.

Por exemplo, para o número 2 o programa deve retornar que ele é divisível por 2.
Enquanto para o número 6, que ele é divisível por 2 e 3. Para o 30, que ele é
divisível por 2, 3, 5. Enquanto, caso o número dado seja o 11, que ele não é
divisível por nenhum dos três! */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int numero, i = 0;

  printf("número: ");
  scanf_s("%d", &numero);

  if (numero % 2 == 0 ) { printf("é divisível por 2\n"); i++; }
  if (numero % 3 == 0 ) { printf("é divisível por 3\n"); i++; }
  if (numero % 5 == 0 ) { printf("é divisível por 5\n"); i++; }

  if ( i == 0 ) { printf("não é divisível por nenhum"); }

  return 0;
}
