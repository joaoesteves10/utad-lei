/* 65. Escreva o código de um programa que escreva no ficheiro “mensagem.txt” o texto “Olá mundo!”. */

#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE *fp;

  // Abre o ficheiro e verifica se foi aberto com sucesso
  fp = fopen("dados.txt", "w"); // para escrita
  if (fp == NULL) {
    printf("Erro ao abrir o ficheiro dados.txt!");
    exit(1);
  }

  fprintf(fp, "hewwo wowwd");
  fclose(fp);

  return 0;
}
