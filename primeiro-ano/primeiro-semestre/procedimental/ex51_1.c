/* 51_1. Crie um programa que preencha um vetor V de N elementos do tipo inteiro. O programa deverá ter pelo menos os seguintes subprogramas:

a. LerVetor,
b. MostrarVetor. 

O programa deve usar alocação dinâmica de memória (o user deve introduzir o número de elementos do vetor, N)*/

#include <stdio.h>

void LerVetor(int *vetor, int N){
  for (int i=0; i<N; i++) {
    printf("V[%d]: ", i);
    scanf_s("%d", &vetor[i]);
  }
}

void MostrarVetor(int *vetor, int N) {
  for (int i = 0; i<N; i++){
    printf("%d; ", vetor[i]);
  }
}

int main() {

  int N;
  printf("quantos elementos? ");
  scanf_s("%d", &N);

  int V[N];

  LerVetor(V, N);
  MostrarVetor(V, N);

  return 0;
}
