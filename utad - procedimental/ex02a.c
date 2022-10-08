#include <stdio.h>
#include <locale.h>
/* 2. Implemente um programa que permita calcular o perímetro e a área de um
retângulo (Área=altura*base), com:
>> a) altura=3 cm e base=8 cm.
b) o valor das variáveis a ser pedido ao utilizador. */


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int base = 8, altura = 3, perimetro, area;

	area = base * altura;
	perimetro = (base + altura) * 2;

	printf("um retângulo com %dcm de base e %dcm de altura tem:\nperímetro %dcm\nárea %dcm²", base, altura, perimetro, area);

	return 0;
}
