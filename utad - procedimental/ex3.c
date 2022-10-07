#include <stdio.h>
#include <locale.h>
/* 3. Implemente um programa que permita somar dois quaisquer números,
visualizando o resultado obtido. */


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int x, y, soma;
	
	printf("Insira o primeiro valor:\n> ");
	scanf_s("%d", &x);

	printf("Insira o segundo valor:\n> ");
	scanf_s("%d", &y);

	soma = x + y;

	printf("( %d + %d ) = %d", x, y, soma);

	return 0;
}
