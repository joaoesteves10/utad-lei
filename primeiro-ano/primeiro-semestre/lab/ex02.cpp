/* 2. Reescreva o exercício anterior utilizando para a altura e para o comprimento valores introduzidos pelo utilizador através do teclado. */

#include <stdio.h>

int main()
{
  
    int h, c;

    printf("Insira a altura do retângulo, em centímetros:\n> ");
    scanf_s("%d", &h);

    printf("Insira o comprimento do retângulo, em centímetros:\n> ");
    scanf_s("%d", &c);

    printf("o perímetro é %dcm e a área é %dcm²", (h + c) * 2, h * c);
    return 0;
}
