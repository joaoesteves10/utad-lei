/* 22. Escreva um programa que leia através do teclado os elementos de um vetor de tamanho N e os apresente no ecrã pela ordem inversa. */

#include <stdio.h>
#define N 10


int main() {

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
