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
  int numero = rand() % 10 + 1;
  int guess, i = 0;
  printf("adivinha o número (entre 1 e 10)\n");

  while (1) {
    i++;
    printf("> ");
    scanf_s("%d", &guess);

    if (guess < 1 || guess > 10 ) { printf("é entre 1 e 10 oh nabo\n"); continue;}

    if (guess == numero) {
      printf("bem mano acertaste, era %d e só precisaste de %d tentativas\n", numero, i);
      return (0);
    } else {
      printf("tenta outra vez, já estouraste %d tentativas\n", i);
    }
  }

  return 0;
}
