#include <stdio.h>
#include <locale.h>
#include <string.h>
/* 60. Escreva o código de um programa que peça ao utilizador para introduzir o
nome e o sobrenome e que construa e apresente no ecrã uma string com o nome
completo. */

int main()
{
  setlocale(LC_ALL, "Portuguese");
  char nome[20], sobrenome[20];

  printf("nome: ");
  scanf_s("%s", &nome);
  // gets(nome);

  printf("sobrenome: ");
  scanf_s("%s", &sobrenome);
  // gets(sobrenome)

  printf("%s %s\n", nome, sobrenome);

  strcat(nome, " ");
  strcat(nome, sobrenome);
  printf("%s\n", nome);


  return 0;
}
