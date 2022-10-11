#include <stdio.h>
#include <locale.h>
#include <stdbool.h> // por algum motivo é preciso importar uma lib para ter bools
/* 14. Implemente um programa que faça a classificação qualitativa de uma nota
(valor inteiro) de um aluno segundo os seguintes níveis:
• 0 <= nota < 5: péssimo;
• 5 <= nota < 8: mau;
• 8 <= nota < 10: insuficiente;
• 10 <= nota < 12: suficiente;
• 12 <= nota < 16: bom;
• 16 <= nota < 18: muito bom;
• 18 <= nota <= 20: excelente; */

// vamos tentar validar e pedir novamente a nota se não for válida

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int nota;
  bool valido = 0; // bool para o while

  while (valido == 0) {
    printf("nota (int): ");
    scanf_s("%d", &nota);

    if (nota > 0 && nota < 20) {
      valido = 1;
    } else {
      (printf("valor inválido\n"));
    }
  }

  if (0 <= nota && nota < 5) {printf("péssimo.");}
  else if (5 <= nota && nota < 8) {printf("mau.");}
  else if (8 <= nota && nota < 10) {printf("insuficiente");}
  else if (10 <= nota && nota < 12) {printf("suficiente");}
  else if (12 <= nota && nota < 16) {printf("bom");}
  else if (16 <= nota && nota < 18) {printf("muito bom");}
  else if (18 <= nota && nota < 20) {printf("excelente");}

  else if (nota == 20) {printf("20 boa mano");}
  else {printf("nota inválida");}

  return 0;
}
