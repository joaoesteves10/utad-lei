/* 52. Crie um programa que armazene num vetor 10 nomes completos. */

#include <stdio.h>
#include <string.h>

int main() {

  char nomes[10][100];

  
  for(int i=0; i < 10; i++) {
    printf("> ");
    gets(nomes[i]);
  }

  for(int i=0; i < 10; i++) {
    printf("%d: ", i); 
    puts(nomes[i]);
  }

  return 0;
}
