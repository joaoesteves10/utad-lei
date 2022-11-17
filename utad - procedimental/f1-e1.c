#include <stdio.h>

int main()
{

    int partes, parte=0, percentagem, i;

    printf("Em quantas partes pretende dividir a barra de progresso: ");

    scanf_s("%d", &partes);

    do {

        parte++;

        percentagem = ((float)parte/partes)*100;

        printf("%d%% ", percentagem);

        for (i=0; i<percentagem; i++) {

            printf("|");

        }

        printf("\n");

    }while(parte < partes);

    return 0;

}
