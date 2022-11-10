#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
/* 23. Escreva um programa que inverta uma sequência de caracteres. Exemplo: “LABINF” deve ficar
“FNIBAL”. */

int main() {
  setlocale(LC_ALL, "Portuguese");

  // vamos reservar 20 chars porque provavelmente chegam
  char sequencia[20] = "";
  char invertido[20] = "";

  printf("> ");
  scanf_s("%s", &sequencia);

  int len = strlen(sequencia);

  /* eu fiz assim porque se fosse para fazer uma função para inverter era preciso
  guardar para depois retornar */
  int i2 = 0;
  for(int i=len-1; i >= 0; i--) {
    invertido[i2] = sequencia[i];
    i2++;
  }

  printf("%s", invertido);

  return 0;
}
