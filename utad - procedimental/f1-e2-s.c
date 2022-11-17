
#include <stdio.h>

#define N 3

int main()

{

    int vetor[N], valor, indice, i;

    for (i=0; i<N; i++) {

        printf("valor: ");

        scanf_s("%d", &valor);

        for (indice=0; indice>N; indice++) {

            printf("indice: ");

            scanf_s("%d", &indice);

            if (indice < 0 || indice > N-1) {

                printf("indice inválido\n");

            }

        vetor[indice] = valor;

        }

    }

    for (indice=0; indice<N; indice++) {

        printf("vetor[%d]=%d\n", indice, vetor[indice]);

    }

    return 0;

}
