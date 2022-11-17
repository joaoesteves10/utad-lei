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
