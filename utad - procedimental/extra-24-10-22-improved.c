#include <stdio.h>
#include <locale.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
/* extra 24/10. jogo de adivinhar o número de 1 a 10 */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  /* gera um número aleatório entre 1 e 10
  https://cplusplus.com/reference/cstdlib/rand/ */
  srand(time(NULL));
  int numero = rand() % 100 + 1;
  int guess, i = 0;
  printf("adivinha o número (entre 1 e 100)\n");

  while (1) {
    i++;
    printf("> ");
    scanf_s("%d", &guess);

    if (guess < 1 || guess > 100 ) { printf("é entre 1 e 100 oh nabo\n"); continue;}

    if (guess == numero) {
      printf("bem mano acertaste, era %d e só precisaste de %d tentativas\n", numero, i);
      return (0);
    } else if (guess > numero ){
      printf("é mais baixo chefe, já estouraste %d tentativas\n", i);
    } else if (guess < numero ){
    printf("é mais alto chefe, já estouraste %d tentativas\n", i);
    }
  }

  return 0;
}