/* 15. Escreva um programa que calcule o maior valor da soma dos primeiros n números naturais cujo valor da soma ainda seja inferior a 2000. */

#include <stdio.h>

int main()
{

  int i;
  long int res = 0;

  for (i = 1; res < 2000; i++) {
    res += i;
  };

  /* o ciclo for acima é equivalente a fazer:
  while (res < 2000) {
    res += i;
    i++;
  };
  */

  printf("------\n%ld", res - i);

  return 0;
}
