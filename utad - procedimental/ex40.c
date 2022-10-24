#include <stdio.h>
#include <locale.h>
/* 40. Implemente um programa que calcule a média de uma sequência, de valores
reais, terminada por ‘-1’. O programa deve apresentar igualmente o número de
valores introduzidos */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int i = 0;
  float numero, soma, media;

  printf("Insira valores reais: \n");

  while (1) {
    printf("> ");
    scanf_s("%f", &numero);
    if (numero == -1) {break;}
    soma += numero;
    i++;
  }

  if (i == 0) {printf("é impossível dividir por zero"); return 1;}
  media = soma/i;
  printf("%f", media);
  return 0;
}
