/* 61. Escreva o código de um programa que peça ao utilizador para introduzir uma
string e que apresente no ecrã a string escrita “ao contrário”.
Exemplo : “Universidade” deve ser escrito como “edadisrevinU”. */

#include <stdio.h>
#include <string.h>

int main() {

  char entrada[100];

  printf("string para inverter: ");
  gets(entrada);


  // o strrev() do string.h inverte uma string
  printf("%s", strrev(entrada));

  /* sem strrev():
  for(int i=strlen(entrada)-1; i >= 0; i--) {
    printf("%c", entrada[i]);
  }
  */

  return 0;
}
