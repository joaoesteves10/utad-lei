/* Complete o programa abaixo o qual permite inserir e visualizar uma lista de valores com base no seu indice.
Exemplo de saída no ecran:

valor: 1
indice: 3
indice inválido
indice: 2
valor: 2
indice: 1
valor: 3
indice: 0
vetor[0]=3
vetor[1]=2
vetor[2]=1 */

/* como isto é de um momento de avaliação, pode não estar 100% certo, mas deve compilar e funcionar minimamente. */

#include <stdio.h>
#define N 3
int main()

{

    int vetor[N], valor, indice, i;
    for (i=0; i<N; i++) { // PRIMEIRO ESPAÇO

        printf("valor: ");
        scanf_s("%d", &valor);

        do { // SEGUNDO ESPAÇO

            printf("indice: ");
            scanf_s("%d", &indice);

            if (indice < 0 || indice > N-1) { // TERCEIRO ESPAÇO
                printf("indice inválido\n");
            }

        }while(indice > N-1); // QUARTO ESPAÇO
        
        vetor[indice] = valor; // QUINTO ESPAÇO

    }

    for (indice=0; indice<N; indice++) { // SEXTO ESPAÇO

        printf("vetor[%d]=%d\n", indice, vetor[indice]);

    }

    return 0;

}
