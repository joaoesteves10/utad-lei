/* 32. Dada uma série de 20 valores reais, implemente um programa que calcule
e escreva a média aritmética destes valores. Entretanto se a média obtida for
maior que 20 deverá ser atribuído o valor 20 para a média. */

#include <stdio.h>

int main() {

  float valores[20], soma, media;

  for(int i=0; i < 20; i++) {

    printf("valor real: ");
    scanf_s("%f", &valores[i]);

  }

  for(int i=0; i < 20; i++) {
    printf("%f ", valores[i]);
    soma += valores[i];
  }

  media = soma/20.0;
  printf("\nmédia calculada: %.2f\n", media);

  if (media > 20) { media = 20; }

  printf("------- \na média é %.2f", media);

  return 0;
}
