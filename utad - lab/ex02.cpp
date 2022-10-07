#include <stdio.h>
#include <locale.h>
/* 1. Escreva um programa que calcule e apresente no ecrã o perímetro e a área
de um retângulo com 7 cm de altura e 5 cm de comprimento.

2. Reescreva o exercício anterior utilizando para a altura e para o comprimento
valores introduzidos pelo utilizador através do teclado. */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int h, c;

    printf("Insira a altura do retângulo, em centímetros:\n> ");
    scanf_s("%d", &h);

    printf("Insira o comprimento do retângulo, em centímetros:\n> ");
    scanf_s("%d", &c);

    printf("o perímetro é %dcm e a área é %dcm²", (h + c) * 2, h * c);
    return 0;
}
