/* 4. O volume de um cilindro é dado por: V = π * r2 * h (considere π = 3,141592654).

>> b) Repita o exercício anterior utilizando a função “pow” da biblioteca “math.h”.

Apresente os resultados com 4 casas decimais. */

#include <stdio.h>
#include <math.h>
#define pi 3.141592654

int main() {
  
    int r, h;

    printf("Insira o raio da base: ");
    scanf_s("%d", &r);
    printf("Insira a altura do cilindro: ");
    scanf_s("%d", &h);

    printf("O volume é %.4f", pi*pow(r, 2)*h );
    return 0;
}
