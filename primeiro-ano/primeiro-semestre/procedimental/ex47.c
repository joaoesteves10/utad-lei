/* 47. Implemente um programa que permita inserir uma sequência de 100
elementos do tipo inteiro com valores entre 0 e 20. Utilize uma função que
permita ao utilizador inserir um valor inteiro apenas pode ter valor entre 0 e
20. Se tal não acontecer deve insistir na leitura. */

#include <stdio.h>

int inserir(int min, int max) {

  int a;
  printf("Insira um inteiro entre %d e %d: ", min, max);
  do {
    scanf_s("%d", &a);
  } while (a < min || a > max);
  return a;
  
}


int main() {


  int valor[100];

  for (int i=0; i<100; i++) {
    valor[i] = inserir(0, 20);
  }

  for (int i=0; i<100; i++) {
    printf("%d\n", valor[i]);
  }

  return 0;
}
