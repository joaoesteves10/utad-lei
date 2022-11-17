/* n movimentos bancários
 * créditos -> dinheiro que entrou na conta
 * débitos -> dinheiro que saiu da conta
 * média -> média dos movimentos todos
 * saldo -> creditos - debitos
 */

#include <stdio.h>
#include <locale.h>
#define N 5

float creditos(float m[N]){
    float soma = 0;
    for (int i=0; i < N; i++){
        if (m[i] > 0) {
            soma += m[i];
        }
    }
    return soma;
}

float debitos(float m[N]){
    float soma = 0;
    for (int i=0; i < N; i++){
        if (m[i] < 0) {
            soma += m[i];
        }
    }
    return soma;
}

float saldo(float m[N]) {
    float soma = 0;
    for (int i=0; i < N; i++){
        soma += m[i];
    }
    return soma;
}

float media(float m[N]){
    return (saldo(m)/N);
}


int main() {
    setlocale(LC_ALL, "Portuguese");

    float movimentos[N];
    int op;
    printf("Insira os %d movimentos, linha por linha:\n", N);

    for (int i=0; i < N; i++) {
        scanf_s("%f", &movimentos[i]);
    }

    do {
        printf("\nescolha uma operação:\n1. créditos\n2. débitos\n3. média\n4. saldo\n0. sair\n> ");
        scanf_s("%d", &op);
        switch (op) {
            case 1:
                printf("\nO total de créditos é: %.2f\n", creditos(movimentos));
                break;
            case 2:
                printf("\nO total de débitos é: %.2f\n", debitos(movimentos));
                break;
            case 3:
                printf("\nA média dos movimentos é: %.2f\n", media(movimentos));
                break;
            case 4:
                printf("\nO saldo é: %.2f\n", saldo(movimentos));
                break;
            case 0:
                break;
            default:
                printf("\nopção inválida\n");
                break;
        }
    } while (op != 0);
    return 0;
}
