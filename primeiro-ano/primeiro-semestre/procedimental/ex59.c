/*  59. Implemente um algoritmo que armazene uma sequência de números inteiros positivos num array dinâmico (cuja marca de fim é -1).
Os números devem ser introduzidos sequencialmente através do teclado. */

#include <stdio.h>
#include <stdlib.h>

int main() {

  int num, i = 0, n, *V;

  V = (int *)malloc(sizeof(int)); // alocar a memória para um int

  do {

    printf("inteiro positivo: ");
    scanf_s("%d", &num);

    if (num > 0) {
      V = (int *)realloc(V, i+1 * sizeof(int)); // realocar a memória com espaço para o que já lá está (i*sizeof(int)) mais uma int
      V[i] = num;
      i++;
    }

  } while (num != -1);

  for(n = 0; n < i; n++) {
    printf("%d; ", V[n]);
  }

  free(V) // liberta a memória 

  return 0;
}
