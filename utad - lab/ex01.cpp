/* 1. Escreva um programa que calcule e apresente no ecrã o perímetro e a área
de um retângulo com 7 cm de altura e 5 cm de comprimento. */

#include <stdio.h>

int main()
{

    int h = 7, c = 5;

    printf("o perímetro é %dcm e a área é %dcm²", (h + c) * 2, h * c);
    return 0;
}
