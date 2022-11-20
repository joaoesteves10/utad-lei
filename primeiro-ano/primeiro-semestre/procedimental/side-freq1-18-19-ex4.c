/* FREQUÊNCIA 1 DE PROGRAMAÇÃO PROCEDIMENTAL, 2018/2019; ENUNCIADO DISPONÍVEL NO SIDE

4. Faça um subprograma que tenha como parâmetros de entrada e saída: o endereço de um vetor de
números inteiros e o número de elementos desse vetor. O subprograma deve eliminar do vetor todos
os valores que estejam fora do intervalo entre 10 e 20, recolocando os valores dentro do vetor e
ajustando o número de elementos do vetor.

Exemplo: entra o vetor [2,13,10,4,20,17,5,12,10,3] com 10 elementos e sai o vetor
[13,10,20,17,12,10] com 6 elementos. */

#include <stdlib.h>
#include <stdio.h>

int intervalo(int* v) {
  int i, size = sizeof(v)/sizeof(int);
  printf("%d", size);
  for(i=0; i<size; i++){
    if (v[i] < 10 || v[i] > 20) {
      size--;
      int n;
      for (n=i; n<size; n++) {
        v[i] = v[i+1];
      }
      v[size] = 0;
    }
  }
  return(size);
}


int main() {

    int vetor[10] = {2, 13, 10, 4, 20, 17, 5, 12, 10, 3};

    int r = intervalo(vetor), i;

    for (i = 0; i < r; i++) {
      printf("%d", vetor[i]);
    }

    printf("\n%d elementos", r);

    return(0);
}
