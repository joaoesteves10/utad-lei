/* 3. Implemente um programa que permita somar dois quaisquer números, visualizando o resultado obtido. */

#include <stdio.h>

int main() {

	int x, y, soma;
	
	printf("Insira o primeiro valor:\n> ");
	scanf_s("%d", &x);

	printf("Insira o segundo valor:\n> ");
	scanf_s("%d", &y);

	soma = x + y;

	printf("( %d + %d ) = %d", x, y, soma);

	return 0;
}
