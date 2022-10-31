#include <stdio.h>
#include <locale.h>
/* 30. Implemente um programa que leia 30 números inteiros positivos e visualize
o menor deles. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int i = 0, valores[30], menor;

  while (i < 30) {

    printf("inteiro positivo: ");
    scanf_s("%d", &valores[i]);


    if (valores[i] < 0) {
      printf("valor inválido --\n");
    } else {

      if (i == 0) { menor = valores[i]; }
      else if (menor > valores[i]) {menor = valores[i];}

      i++;
    }
  }


  for(i=0; i < 30; i++) {
    printf("%d ", valores[i]);
  }

  printf("\no menor valor válido introduzido foi: %d", menor);

  return 0;
}
