#include <stdio.h>
#include <locale.h>
/* 18. Escreva um programa que calcule o valor do fatorial de um número natural
n introduzido através do teclado. */

// desta vez com funções yay

int fatorial(int n) {
  int result = 1;
  while (n > 0) {
    result *= n;
    n--;
  }
  return result;
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int in;
  printf("> ");
  scanf_s("%d", &in);

  printf("------\n%d! = %d", in, fatorial(in));

  return 0;
}
