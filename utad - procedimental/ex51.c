#include <stdio.h>
#include <locale.h>
/* 51. Crie um programa que preencha um vetor V de N elementos do tipo inteiro. O
programa deverá ter pelo menos os seguintes subprogramas:
a. LerVetor,
b. MostrarVetor. */

#define N 10

void LerVetor(int *vetor){
  for (int i=0; i<N; i++) {
    printf("%dº valor: ", i);
    scanf_s("%d", &vetor[i]);
  }
}

void MostrarVetor(int *vetor) {
  for (int i = 0; i<N; i++){
    printf("%d ", vetor[i]);
  }
}

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int V[N];

  LerVetor(V);
  MostrarVetor(V);

  return 0;
}
