#include <stdio.h>
#include <locale.h>
/* 8. Uma empresa tem para um determinado funcionário uma ficha contendo o nome,
número de horas trabalhadas e o número de dependentes de um funcionário.
Considere que:
• A empresa paga 12 euros por hora e 40 euros por cada dependente.
• Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IRS.

Faça um algoritmo e implemente um programa para ler o nome, o número de horas
trabalhadas e o número de dependentes de um funcionário. Após a leitura, escreva
qual o nome, o salário bruto, os valores descontados para cada tipo de imposto e
finalmente qual o salário líquido do funcionário. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  char nome[50];
	int horas, dependentes;
  float salarioBruto, salarioLiquido, descontoINSS, descontoIRS;

  printf("Nome do funcionário: ");
	gets(nome);

  printf("Número de horas trabalhadas: ");
  scanf_s("%d", &horas);

  printf("Número de dependentes: ");
  scanf_s("%d", &dependentes);

  salarioBruto = ( horas * 12 ) + ( dependentes * 40 );
  descontoINSS = salarioBruto * 0.085;
  descontoIRS = salarioBruto * 0.05;
  salarioLiquido = salarioBruto - ( descontoINSS + descontoIRS );

  printf("-----\n%s\n%d horas trabalhadas, %d dependentes\n", nome, horas, dependentes);
  printf("salário bruto: %.2f€\ndesconto INSS (8.5%%): %.2f€\ndesconto IRS (5%%): %.2f€\nsalário líquido: %.2f€", salarioBruto, descontoINSS, descontoIRS, salarioLiquido);

  return 0;
}
