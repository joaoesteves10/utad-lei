/* Escreva um programa que simule uma máquina de calcular simples. Crie um menu e use obrigatoriamente funções.
(primeira versão: adição, multiplicação, subtração e divisão; depois atualizar com fatorial, potencia, seno, cosseno, raiz quadrada) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

float adicao(float a, float b) {
  return (a + b);
}

float multiplicacao(float a, float b) {
  return (a * b);
}

float subtracao(float a, float b) {
  return (a - b);
}

float divisao(float a, float b) {
  if (b == 0) {printf("ERRO: NÃO É POSSÍVEL DIVIDIR POR ZERO"); abort();}
  return (a/b);
}

float fatorial(float n) {
  int result = 1;
  while (n > 0) {
    result *= n;
    n--;
  }
  return result;
}

float potencia(float a, float b){
  int result = 1;
  while (b > 0) {
    result *= a;
    b--;
  }
  return result;
}

float seno(float a) {
  return sin(a*(PI/180));
}

float cosseno(float a) {
  return cos(a*(PI/180));
}

int main() {


  int menu = 0;
  float a, b;

  printf("1. ADIÇÃO\n2. MULTIPLICAÇÃO\n3. SUBTRAÇÃO\n4. DIVISÃO\n5. FATORIAL\n6. POTÊNCIA (a^b)\n7. SENO (entrada em graus) \n8. COSSENO (entrada em graus)\n9. RAIZ QUADRADA\n\n> ");
  scanf_s("%d", &menu);

  if (menu > 0 && menu <= 4 || menu == 6 ) {
    printf("\nInsira dois números (float):\n> ");
    scanf_s("%f", &a);
    printf("> ");
    scanf_s("%f", &b);
  } else if (menu <= 9) {
    printf("\nInsira um número (float):\n> ");
    scanf_s("%f", &a);
  }

  switch (menu) {
    case 1: printf("------\n%f", adicao(a, b)); break;
    case 2: printf("------\n%f", multiplicacao(a, b)); break;
    case 3: printf("------\n%f", subtracao(a, b)); break;
    case 4: printf("------\n%f", divisao(a, b)); break;
    case 5: printf("------\n%f", fatorial(a)); break;
    case 6: printf("------\n%f", potencia(a, b)); break;
    case 7: printf("------\n%f", seno(a)); break;
    case 8: printf("------\n%f", cosseno(a)); break;
    case 9: printf("------\n%f", sqrt(a)); break;
    default: printf("opção inválida"); break;
  }

  return 0;
}
