/* 24. Escreva um programa que leia através do teclado os elementos de um vetor de tamanho N e calcule a sua soma, média e os valores máximo e mínimo. */

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main() {

  int vetor[N], soma;

  for(int i=0; i < N; i++) {
    printf("> ");
    scanf_s("%d", &vetor[i]);
    soma += vetor[i];
  }

  // segundo o google é assim que se vê o tamanho de um array
  int maximo, minimo, size = sizeof(vetor) / sizeof(int);
  float media = (float)soma/size;

  for(int i=0; i < size; i++) {
    if (i == 0) { maximo = vetor[i]; minimo = vetor[i]; continue;}
    if (vetor[i] > maximo) { maximo = vetor[i]; }
    if (vetor[i] < minimo) { minimo = vetor[i]; }
  }

  printf("soma: %d, media: %f, maximo: %d, minimo: %d", soma, media, maximo, minimo);

  return 0;

}
