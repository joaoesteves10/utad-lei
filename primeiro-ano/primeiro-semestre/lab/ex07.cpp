/* 7. Escreva um programa que calcule as raízes de uma equação de segundo grau.
Considere a=3, b=11 e c=2. */

#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c;
    float resultPlus, resultMinus;

    printf("a: ");
    scanf_s("%d", &a);
    printf("b: ");
    scanf_s("%d", &b);
    printf("c: ");
    scanf_s("%d", &c);

    // sqrt(): raiz quadrada
    // pow(): potência
    resultPlus = (float)(-b+(sqrt(pow(b, 2)-4*a*c)))/(2*a);
    resultMinus = (float)(-b-(sqrt(pow(b, 2)-4*a*c)))/(2*a);

    printf("%0.4f %0.4f", resultPlus, resultMinus);

    return 0;
}
