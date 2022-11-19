/* Complete o programa abaixo o qual calcula e visualiza a resolução em megapixels de uma fotografia com base na sua
dimensão em pixels (largura x altura). O programa mostra a resolução caso seja superior a 12 megapixels, caso contrário
mostra a mensagem "Resolução baixa!".

1 megapixel = 1000000 pixels */

/* como isto é de um momento de avaliação, pode não estar 100% certo, mas deve compilar e funcionar minimamente. */

#include <stdio.h>

#include <stdlib.h>

int main() {
  int a, b, c; // "int" PRIMEIRO ESPAÇO
  printf("Largura: ");
  scanf_s("%d", &c); // %d SEGUNDO ESPAÇO

  printf("Altura: ");
  scanf_s("%d", &a); // &a TERCEIRO ESPAÇO

  b = (c * a)/1000000; // QUARTO ESPAÇO

  if (b>12) { // QUINTO ESPAÇO
    printf("Resolução: %d", b);
  } else { // SEXTO ESPAÇO
    printf("Resolução baixa!");
  }

  return 0;

}
