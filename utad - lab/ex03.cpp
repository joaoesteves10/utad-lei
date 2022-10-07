#include <stdio.h>
#include <locale.h>
#define pi 3.14159
/* 3. Escreva um programa que leia através do teclado o valor do raio de um
círculo e apresente no ecrã o seu perímetro e a sua área. */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int r;

    printf("Insira o raio do círculo:\n> ");
    scanf_s("%d", &r);

    printf("O diâmetro é %d, o perímetro é %f e a área é %f", r*2, 2*pi*r, pi*r*r);
    return 0;
}
