#include <stdio.h>
#include <locale.h>
#include <string.h>
/* 62. Escreva o código de um programa que permita a introdução de uma string e que
escreva no ecrã a sigla representativa dessa string.
Exemplo : “World Wide Web”  “WWW”. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  char entrada[100];

  printf("string para sigla: ");
  gets(entrada);


  printf("%s\n", entrada);

  printf("%c", entrada[0]);
  for(int i=1; i < strlen(entrada); i++) {
    if (entrada[i] == ' '){
      printf("%c", entrada[i+1]);
    }
  }

  return 0;
}
