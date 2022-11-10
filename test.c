#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
  int a, b, c;
  printf("Largura: ");
  scanf_s("%d", &c);

  printf("Altura: ");
  scanf_s("%d", &a);

  b = (c * a)/1000000;

  if (b>12) {
    printf("Resolução: %d", b);
  } else {
    printf("Resolução baixa!");
  }

  return 0;

}
