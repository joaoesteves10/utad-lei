#include <stdio.h>
#include <locale.h>
/* 12. Implemente um programa que converta um valor em bytes para um formato
legível (Kilo, Mega, Giga ou Tera bytes consoante o múltiplo que melhor se
adapte a uma representação de fácil leitura do valor). Considere 1024 bytes =
1Kbytes
Exemplo: 16548973 bytes = 15,78 MB */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int i = 0;
  float bytes, convertido;
  char prefixo = '-';

  printf("bytes: ");
  scanf_s("%f", &bytes);

  convertido = bytes;
  // isto vai converter até o valor estar em 0.algumacoisa
  while ( convertido > 1) {
    convertido = convertido / 1024;
    i += 1;
  }

  switch (i-1) {
    case 1: prefixo = 'K'; break;
    case 2: prefixo = 'M'; break;
    case 3: prefixo = 'G'; break;
    case 4: prefixo = 'T'; break;
  }

  printf("%f %cB", convertido*1024, prefixo);

  return 0;
}
