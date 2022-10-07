#include <stdio.h>
#include <locale.h>
/* 6. Escreva um programa que peça ao utilizador um valor em dias e os converta
para anos, semanas e dias (suponha que não existem anos bissextos). */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int t_dias, anos, semanas, dias;

    printf("Introduza os dias: ");
    scanf_s("%d", &t_dias);

    anos = t_dias / 365;
    t_dias = t_dias % 365;
    semanas = t_dias / 7;
    dias = t_dias % 7;

    printf ("%d anos, %d semanas, %d dias", anos, semanas, dias);

    return 0;
}

/* outra maneira de fazer, usando estruturas de decisão para não mostrar valores a zero

    if (userDias < 7) {
      printf("%d dias.", userDias);
    } else if (userDias < 365) {
      semanas = userDias / 7;
      dias = userDias % 7;
      printf("%d semanas, %d dias", semanas, dias);
    } else {
      anos = userDias / 365;
      semanas = (userDias - anos*365) / 7;
      dias = (userDias - anos*365) % 7;
      printf ("%d anos, %d semanas, %d dias", anos, semanas, dias);
    }

*/
