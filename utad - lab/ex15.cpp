#include <stdio.h>
#include <locale.h>
/* 15. Escreva um programa que calcule o maior valor da soma dos primeiros n números naturais cujo valor
da soma ainda seja inferior a 2000. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int i;
  long int res = 0;

  for (i = 1; res < 2000; i++) {
    // printf("%ld + %d = ", res, i);
    res += i;
    // printf("%ld\n", res);
    // os printf comentados mostram o resultado
  };

/*
  while res < 2000) {
    // printf("%ld + %d = ", res, i);
    res += i;
    // printf("%ld\n", res);
    i++;
  };
*/

  printf("------\n%ld", res - i);

  return 0;
}
