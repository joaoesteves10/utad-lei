#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
/* 25. Escreva um programa que preencha aleatoriamente (com valores entre 0 e
10) uma matriz de 10x10 e calcule e mostre no ecrã a soma de cada uma das suas
linhas e de cada uma das suas colunas. */

int main() {
  setlocale(LC_ALL, "Portuguese");

  int vetor[10][10], somaLinhas[10], somaColunas[10];
  int somaTotal = 0, somaSomas = 0; // só para ver se está certo, isto não está no enunciado
  srand(time(0));

  for(int i = 0; i < 10; i++) {
    for(int n=0; n < 10; n++){
      vetor[i][n] = rand() % 11;
      somaTotal += vetor[i][n];
    }
  }

  for(int i = 0; i < 10; i++) {
    somaLinhas[i] = 0;
    for(int n=0; n < 10; n++){
      somaLinhas[i] += vetor[i][n];
      somaTotal += vetor[i][n];
    }
  }

  for(int n=0; n < 10; n++){
    somaColunas[n] = 0;
    for(int i = 0; i < 10; i++) {
      somaColunas[n] += vetor[i][n];
    }
  }

  for(int i = 0; i < 10; i++) {
    for(int n=0; n < 10; n++){
      printf("%d-%d: %d\n", i, n, vetor[i][n]);
    }
    printf("\n");
  }

  for(int i = 0; i < 10; i++) {
    printf("soma linha %d:   %d\n", i, somaLinhas[i]);
    printf("soma coluna %d:  %d\n", i, somaColunas[i]);
    somaSomas += somaLinhas[i] + somaColunas[i];
    printf("\n");
  }

  printf("%d %d", somaTotal, somaSomas);

  return 0;
}
