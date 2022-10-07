#include <stdio.h>
#include <locale.h>
/* 6. Escreva um programa que peça ao utilizador um valor em dias e os converta para anos, semanas e
dias (suponha que não existem anos bissextos). */

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
