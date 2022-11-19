/* 4. Escreva um programa que leia através do teclado valores de velocidades em
Km/h e os converta para m/s. */

#include <stdio.h>

int main()
{
  
    int km;

    printf("Insira a velocidade a converter de km/h para m/s:\n> ");
    scanf_s("%d", &km);

    // o google diz que 1 km/h = 0.277777778 m/s
    printf("a velocidade é %f m/s", 0.277777778 * km);
    return 0;
}
