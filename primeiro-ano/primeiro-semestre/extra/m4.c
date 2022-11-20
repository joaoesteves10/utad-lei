/* EXTRA. Escreva duas funções que desenham triangulos (usando o caracter #). O resultado da invocação dessas funcões com um argumento 5 deverá ser o seguinte:

#
##
###
####
#####
####
###
##
#
    #
   ###
  #####
 #######
######### */

#include <stdio.h>

void triangulo_vert(int x) {

  for (int i = 1; i <= x; i++) {
    for (int n = 1; n <= i; n++) {
      printf("#");
    }
    printf("\n");
  }

  for (int i = x-1; i > 0; i--) {
    for (int n = i; n > 0; n--) {
      printf("#");
    }
    printf("\n");
  }
}


void triangulo_horiz(int x) {

  for (int i = 1; i <= x; i++) {

    for (int n = ((x-i)); n > 0 ; n--){
      printf(" ");
    }

    for (int n = 1; n <= 2*i-1; n++) {
      printf("#");
    }

    printf("\n");
  }
}

int main() {

  int arg;
  printf("insira o argumento™: ");
  scanf_s("%d", &arg);

  triangulo_vert(arg);
  triangulo_horiz(arg);

  return 0;
}
