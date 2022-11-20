/* 11. Implemente um programa que converta um par de valores (horas, minutos) do formato 24 horas para o formato AM/PM.

Exemplo:
13h07 -> 1h07 PM
00h25 -> 12h25 AM
12h21 -> 12h21 PM */

#include <stdio.h>

int main() {

  int horas, minutos;

  printf("horas (hh:ss): ");
  scanf_s("%d:%d", &horas, &minutos);

  if (horas > 12) {
    horas -= 12;
    printf("\n%d:%d PM", horas, minutos);
  } else {
    printf("\n%d:%d AM", horas, minutos);
  }

  return 0;
}
