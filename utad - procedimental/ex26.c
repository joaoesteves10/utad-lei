#include <stdio.h>
#include <locale.h>
/* 26. Implemente um programa que repita a mensagem “Introduza a Letra ‘a’” até
que se verifique a sua inserção. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  char a;

   while (a != 'a') {
    printf("Introduza a letra 'a': ");
    scanf_s("%s", &a);
  }
  
  return 0;
}
