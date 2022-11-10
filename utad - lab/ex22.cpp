#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 10
/* 22. Escreva um programa que leia através do teclado os elementos de um vetor de tamanho N e os
apresente no ecrã pela ordem inversa. */

int main() {
  setlocale(LC_ALL, "Portuguese");

  int vetor[N];

  for(int i=0; i < N; i++) {
    printf("> ");
    scanf_s("%d", &vetor[i]);
  }

  for(int i=N-1; i >= 0; i--) {
    printf("%d; ", vetor[i]);
  }

  return 0;
}
