/* 3. Escreva um programa que leia através do teclado o valor do raio de um
círculo e apresente no ecrã o seu perímetro e a sua área. */

#include <stdio.h>
#define pi 3.14159

int main()
{

    int r;

    printf("Insira o raio do círculo:\n> ");
    scanf_s("%d", &r);

    printf("O diâmetro é %d, o perímetro é %f e a área é %f", r*2, 2*pi*r, pi*r*r);
    return 0;
}
