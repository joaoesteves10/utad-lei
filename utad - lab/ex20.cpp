#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* 20. Escreva um programa que calcule e apresente no ecrã o valor da função
1,52x2+5 para todos os valores de x pertencentes ao intervalo [a, b] e com
incrementos de dx. Utilize uma função no seu programa que receba como parâmetros
os valores de a, b e dx.

Para ficar mais claro, imagine que querem postar o gráfica da função 1,52x2+5
entre 1 e 50. O programa teria como entrada a=1, b=50 e dx=1. Isso significa que
o programa deve imprimir o valor para x=1, x=2, x=3,...,x=50. */

void fun(int a, int b, int dx) {
  float valor;
  while (a <= b) {
    valor = 1.52*a*a+5;
    printf("%d: %f\n", a, valor);
    a+=dx;
  }
}


int main() {
  setlocale(LC_ALL, "Portuguese");

  int a, b, dx;
  printf("Insira os valores (a, b, dx): ");
  scanf_s("%d, %d, %d", &a, &b, &dx);
  fun(a, b, dx);
  return 0;
}
