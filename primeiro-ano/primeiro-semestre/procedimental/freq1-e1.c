/* Complete o programa abaixo o qual permite visualizar uma barra de progresso.
Exemplo de saída no ecran:

Em quantas partes pretende dividir a barra de progresso: 5
20% ||||||||||||||||||||
40% ||||||||||||||||||||||||||||||||||||||||
60% ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
80% ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
100% |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */

/* como isto é de um momento de avaliação, pode não estar 100% certo, mas deve compilar e funcionar minimamente. */

#include <stdio.h>

int main() {

    int partes, parte=0, percentagem, i;
    
    printf("Em quantas partes pretende dividir a barra de progresso: ");
    scanf_s("%d", &partes);
    
    do { // PRIMEIRO ESPAÇO
    
        parte++; // SEGUNDO ESPAÇO
    
        percentagem = ((float)parte/partes)*100;
    
        printf("%d%% ", percentagem); // TERCEIRO ESPAÇO
    
        for (i=0; i<percentagem; i++) { // QUARTO ESPAÇO
            printf("|");
        } // QUINTO ESPAÇO
    
        printf("\n");
    
    }while(parte < partes); // SEXTO ESPAÇO
    
    return 0;
}
