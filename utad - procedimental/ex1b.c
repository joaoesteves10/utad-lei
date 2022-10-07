#include <stdio.h>
#include <locale.h>
/* 1. Implemente um programa que permita calcular a área de um quadrado.
(Área=Lado*Lado), visualizando o resultado obtido, com:

a) Lado = 5 cm.

>> b) o valor do lado deverá ser pedido ao utilizador. */

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int lado, area;

	printf("Insira o lado do quadrado: \n> ");
	scanf_s("%d", &lado);

	area = lado * lado;
	printf("A área de um quadrado %dx%d é: %d", lado, lado, area);

	return 0;
}
