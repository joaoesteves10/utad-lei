/* 46. Implemente um programa que calcule o maior de 3 números reais inseridos pelo utilizador. 
Implemente para o efeito uma função que calcule/retorne o maior de dois valores reais. */

#include <stdio.h>

float maior(float a, float b) {
  
  if (b > a) {
    // retorna b se b > a
    return b;
  } else { 
    // retorna a se a > b ou se a = b
    return a;
  }

}


int main() {

  float valores[3];

  for(int i=0; i < 3; i++) {

    printf("valor real: ");
    scanf_s("%f", &valores[i]);

  }

  printf("o maior é %f", maior((maior(valores[0], valores[1])), valores[2]) );

  return 0;
}
