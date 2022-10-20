#include <stdio.h>
#include <locale.h>
/* 23. Implemente um programa que faça uma conversão entre Euros e Dólares ou
vice-versa consoante a preferência do utilizador. O utilizador deve primeiro
escolher o tipo de conversão e depois inserir o valor a converter.
1,00 € = 1,16 $ */

int main()
{
  /* por algum motivo, o locale português usa , como separador decimal, eu não
  uso e o meu compilador não aceita acentos e não, mesmo com o locale certo
  setlocale(LC_ALL, "Portuguese"); */

  int menuOption = 0;
  float valor;

  printf("VALOR A CONVERTER: ");
  scanf_s("%f", &valor);

  // não era para fazer com estruturas de repetição mas eu fiz porque não sabia
  while (1) {

    printf("Converter\n1. EURO para DÓLAR\n2. DÓLAR para EURO\n?: ");
    scanf_s("%d", &menuOption);

    switch (menuOption) {
      case 1:
        printf("%.2f EUR = %.2f USD", valor, valor*1.16);
        break;

      case 2:
        printf("%.2f USD = %.2f EUR", valor, valor*(1/1.16));
        break;

      default:
        printf("opção inválida\n");
        continue;
    }

    return 0;

  }
}
