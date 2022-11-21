/* 51_1. Crie um programa que preencha um vetor V de N elementos do tipo inteiro. O programa deverá ter pelo menos os seguintes subprogramas:

a. LerVetor,
b. MostrarVetor. 

O programa deve usar alocação dinâmica de memória (o user deve introduzir o número de elementos do vetor, N)*/

#include <stdio.h>
#include <stdlib.h>

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

  int N, *V;
  printf("quantos elementos? ");
  scanf_s("%d", &N);

  /* aloca o espaço necessário para um vetor de N elementos
   * o malloc mantém o lixo que estava na memória, o calloc enche a memória com zeros */
  V = (int *)malloc(N * sizeof(int));

  if (V == NULL) { // isto acontece se não houver memória suficiente
    printf("erro de alocação");
    exit(0);
  }

  LerVetor(V, N);
  MostrarVetor(V, N);

  /* liberta memória alocada dinamicamente */
  free(V);

  return 0;
}
