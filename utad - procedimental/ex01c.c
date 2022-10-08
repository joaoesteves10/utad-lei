#include <stdio.h>
#include <locale.h>
/* 1. Implemente um programa que permita calcular a área de um quadrado.
(Área=Lado*Lado), visualizando o resultado obtido, com:
a) Lado = 5 cm.
b) O valor do lado deverá ser pedido ao utilizador.
>> (extra) c) O valor do lado deve ser validado. */

int main()
{
	// locale em português para os acentos funcionarem corretamente
	setlocale(LC_ALL, "Portuguese");

	// declaração de variáveis
	int lado, area;

  // perguntar ao utilizador o valor do lado
	printf("Insira o lado do quadrado: \n> ");
	scanf_s("%d", &lado);

  // verifica se o numero é valido ou não
  if (lado <= 0){
		printf("Introduza um numero valido");
		return 1;
  }

	// calcular a área de um quadrado
	area = lado * lado;

	// visualizar o resultado obtido
	printf("A área de um quadrado %dx%d é: %d", lado, lado, area);

	return 0;
}
