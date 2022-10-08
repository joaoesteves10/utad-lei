#include <stdio.h>
#include <locale.h>
/* 1. Implemente um programa que permita calcular a área de um quadrado.
(Área=Lado*Lado), visualizando o resultado obtido, com:
>> a) Lado = 5 cm.
b) o valor do lado deverá ser pedido ao utilizador. */

int main()
{
	//	locale em português para os acentos funcionarem corretamente
	setlocale(LC_ALL, "Portuguese");

	// declaração de variáveis:
	// (tipo de dados) (nome da variável) = (valor)
	int lado = 5, area;

	// calcular a área de um quadrado
	area = lado * lado;

	// visualizar o resultado obtido
	printf("A área de um quadrado %dx%d é: %d", lado, lado, area);

	return 0;
}
