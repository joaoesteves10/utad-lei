#include <stdio.h>
#include <locale.h>
/* 31. Implemente um programa que permita encontrar o maior e menor número de
uma série de números positivos fornecidos. A sequência termina com o
número ‘0’. */


// NOT WORKING AS INTENDED !!!!!!

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int numero, maior = 0, menor = 0;

  printf("Insira valores positivos: \n");

  do {
    printf("> ");
    scanf_s("%d", &numero);
    if (numero < 0) {printf("valor inválido pelo enunciado\n"); continue;}

    if (maior == 0 && menor == 0) {

      menor = numero;
      maior = numero;

    } else {

      if (numero > maior) {maior = numero;}
      if (numero < menor) {menor = numero;}

    }

  } while (numero != 0);

  printf("maior: %d\nmenor: %d", maior, menor);

  return 0;
}
