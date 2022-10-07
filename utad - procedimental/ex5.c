#include <stdio.h>
#include <locale.h>
/* 5. Implemente um programa que peça ao utilizador os valores da base e da altura
de um triângulo. Em seguida, apresente a área do mesmo.
Obs.: Área = (Base * Altura) / 2. */


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int b, h;

    printf("Insira a base do triângulo:> ");
    scanf_s("%d", &b);
    printf("Insira a altura do triângulo:> ");
    scanf_s("%d", &h);

    printf("A área do triângulo é: %f", (b*h)/2.0 );
    return 0;
}
