#include <stdio.h>
#include <locale.h>
/* 7. O preço de um automóvel é calculado pela soma do preço de fábrica com o
preço dos impostos (45% do preço de fábrica) e a percentagem do revendedor
(28% do preço de fábrica).

Implemente um programa que leia o nome do automóvel e o preço de fábrica e que
imprima o nome do automóvel e o preço final. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  char nome[20];
	float precoFabrica;

  printf("Nome do automóvel (max. 20 chars): ");
	gets(nome);

	printf("Preço de fábrica: ");
	scanf_s("%f", &precoFabrica);

	float precoFinal = (0.45*precoFabrica) + (0.28*precoFabrica) + precoFabrica;

    printf("-----\n%s: %.2f", nome, precoFinal);
    return 0;
}
