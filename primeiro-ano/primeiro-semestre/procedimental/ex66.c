/* 66. Escreva o código de um programa que permita contabilizar o número de linhas de texto que estão armazenadas no ficheiro “dados.txt”. */

#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE *fp;
  int numerolinhas = 0;
  char linhacompleta[255];

  // Abre o ficheiro e verifica se foi aberto com sucesso
  fp = fopen("dados.txt", "r"); // para leitura
  if (fp == NULL) {
    printf("Erro ao abrir o ficheiro dados.txt!");
    exit(1);
  }


  while(!feof(fp)) {
    fgets(linhacompleta, 255, fp);
    numerolinhas++;
  }

  printf("O número de linhas do ficheiro dados.txt é: %d\n", numerolinhas);
  fclose(fp);

  return 0;
}
