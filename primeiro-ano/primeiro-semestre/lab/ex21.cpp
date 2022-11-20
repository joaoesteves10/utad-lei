/* 21. Escreva um programa que permita efetuar a troca de dois valores inteiros
lidos através do teclado. Utilize obrigatoriamente uma função para efetuar a
troca. Os valores devem ser lidos e apresentados no programa principal.

Para ficar mais claro, o programa deve ter uma função que troque os valores
originais das variáveis no escopo em que foram declaradas! Logo, se x1 = 1 e
x2 = 2, depois de chamar a função PASSANDO SEUS ENDEREÇOS os valores devem ser
x1=2 e x2 = 1. */

#include <stdio.h>

void troca(int* p1, int* p2) {
  int x1 = *p1;
  *p1 = *p2;
  *p2 = x1;
}


int main() {

  int x1, x2;
  printf("Insira x1: ");
  scanf_s("%d", &x1);
  printf("Insira x2: ");
  scanf_s("%d", &x2);

  printf("x1: %d, x2: %d\n", x1, x2);
  troca(&x1, &x2);
  printf("x1: %d, x2: %d\n", x1, x2);

  return 0;

}
