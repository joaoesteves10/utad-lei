#include <stdio.h>
#include <locale.h>
/* 14. Implemente um programa que faça a classificação qualitativa de uma nota
(valor inteiro) de um aluno segundo os seguintes níveis:
• 0 <= nota < 5: péssimo;
• 5 <= nota < 8: mau;
• 8 <= nota < 10: insuficiente;
• 10 <= nota < 12: suficiente;
• 12 <= nota < 16: bom;
• 16 <= nota < 18: muito bom;
• 18 <= nota <= 20: excelente; */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int nota;

  printf("nota (int): ");
  scanf_s("%d", &nota);

  if (0 <= nota && nota < 5) {printf("péssimo.");}
  else if (5 <= nota && nota < 8) {printf("mau.");}
  else if (8 <= nota && nota < 10) {printf("insuficiente");}
  else if (10 <= nota && nota < 12) {printf("suficiente");}
  else if (12 <= nota && nota < 16) {printf("bom");}
  else if (16 <= nota && nota < 18) {printf("muito bom");}
  else if (18 <= nota && nota < 20) {printf("excelente");}

  else if (nota == 20) {printf("20 mano boa");}
  else {printf("nota inválida");}

  return 0;
}
