#include <stdio.h>
#include <locale.h>
/* 10. Elabore um algoritmo que permita calcular a classificação média de um
estudante atendendo às classificações obtidas nas duas frequências e visualizar
se foi aprovado ou reprovado, tendo em conta que um aluno aprova sempre que a
média é superior ou igual a 9,5 valores.
>> a) Considere que o peso de cada frequência é de 50%.
b) Repita o exercício anterior considerando que o peso das frequências é de 40%
para a 1ª e 60% para a 2ª, e que para cada uma delas é obrigatória uma nota mínima
de 8,5 valores, sem a qual o aluno está automaticamente reprovado.
Apresente os resultados com 1 casa decimal.. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float freq1, freq2, notaFinal;

  printf("nota 1ª frequência (-,-): ");
  scanf_s("%f", &freq1);

  printf("nota 2ª frequência (-,-): ");
  scanf_s("%f", &freq2);

  notaFinal = (freq1+freq2)/2.0;

  printf("( %.1f + %.1f ) / 2 = %.1f\n", freq1, freq2, notaFinal);

  if (notaFinal >= 9.5) {
    printf("APROVADO");
  } else {
    printf("REPROVADO");
  }

  return 0;
}
