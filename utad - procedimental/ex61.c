#include <stdio.h>
#include <locale.h>
#include <string.h>
/* 61. Escreva o código de um programa que peça ao utilizador para introduzir uma
string e que apresente no ecrã a string escrita “ao contrário”.
Exemplo : “Universidade” deve ser escrito como “edadisrevinU”. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  char entrada[100];

  printf("string para inverter: ");
  gets(entrada);

  /*
  printf("%s\n", entrada);

  for(int i=strlen(entrada)-1; i >= 0; i--) {
    printf("%c", entrada[i]);
  }
  */

  printf("%s", strrev(entrada));

  return 0;
}
