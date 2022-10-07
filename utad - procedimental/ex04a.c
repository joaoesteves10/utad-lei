#include <stdio.h>
#include <locale.h>
#define pi 3.141592654
/* 4. O volume de um cilindro é dado por: V = π * r2 * h (considere π = 3,141592654).

>> a) Implemente um programa que calcule o volume (V) de um cilindro
através dos valores da altura (h) do cilindro e do raio (r) da base.

b) Repita o exercício anterior utilizando a função “pow” da biblioteca
“math.h”.

Apresente os resultados com 4 casas decimais. */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int r, h;

    printf("Insira o raio da base: ");
    scanf_s("%d", &r);
    printf("Insira a altura do cilindro: ");
    scanf_s("%d", &h);

    printf("O volume é %.4f", pi*r*r*h );
    return 0;
}
