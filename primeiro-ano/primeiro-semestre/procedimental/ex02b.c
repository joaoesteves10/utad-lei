/* 2. Implemente um programa que permita calcular o perímetro e a área de um retângulo (Área=altura*base), com:
>> b) o valor das variáveis a ser pedido ao utilizador. */

#include <stdio.h>

int main() {

	int base, altura, perimetro, area;

	printf("Insira a base do retângulo (cm):\n> ");
	scanf_s("%d", &base);

	printf("Insira a altura do retângulo (cm):\n> ");
	scanf_s("%d", &altura);

	area = base * altura;
	perimetro = (base + altura) * 2;

	printf("um retângulo com %dcm de base e %dcm de altura tem:\nperímetro %dcm\nárea %dcm²", base, altura, perimetro, area);

	return 0;
	
}
