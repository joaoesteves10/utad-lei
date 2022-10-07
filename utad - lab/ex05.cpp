#include <stdio.h>
#include <locale.h>
/* 5. Escreva um programa que leia através do teclado valores de horas no formato
hora, minuto e os converta para segundos. */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int horas, minutos;

    printf("Insira os valores no formato \"horas, minutos\":\n> ");
    scanf_s("%d, %d", &horas, &minutos);

    printf("%d horas e %d minutos são %d segundos", horas, minutos, minutos * 60 + horas * 60 * 60);

    return 0;
}
