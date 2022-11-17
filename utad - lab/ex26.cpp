#include <stdio.h>

/* transforma número de player no seu respectivo char na board*/
char playerToChar(int player) {
    switch (player){
        case 1: return 'X';
        case 2: return 'O';
        case 0: return ' ';
        default : return 0;
    }
}

/* transforma o char da board no respectivo número de player */
int charToPlayer(char c){
    switch (c){
        case 'X': return 1;
        case 'O': return 2;
        default : return 0;
    }
}


/* converte as coordenadas introduzidas para a linha para um inteiro compatível com o array */
int coordsToPoint(char c) {
    switch (c){
        case 'A':
        case 'a':
            return 0;

        case 'b':
        case 'B':
            return 1;

        case 'c':
        case 'C':
            return 2;

        default:
            return -1;
    }
}


/* imprime a board */
void printBoard(int b[3][3]) {
    printf("   1   2   3\n");
    printf("A  %c | %c | %c\n", playerToChar(b[0][0]), playerToChar(b[0][1]), playerToChar(b[0][2]));
    printf("   ---------\n");
    printf("B  %c | %c | %c\n", playerToChar(b[1][0]), playerToChar(b[1][1]), playerToChar(b[1][2]));
    printf("   ---------\n");
    printf("C  %c | %c | %c\n", playerToChar(b[2][0]), playerToChar(b[2][1]), playerToChar(b[2][2]));
}

/* pergunta a play ao jogador e insere-a na board
 * quando o número da jogada é par, joga o primeiro jogador, quando é impar joga o segundo */
int play(int b[3][3], int contador) {
    char ins, play[2];
    int coluna, linha;
    if (contador % 2 == 0) {
        printf("JOGADOR 1 (X):");
        ins = 'X';
    } else {
        printf("JOGADOR 2 (O):");
        ins = 'O';
    }

    scanf_s("%s", &play);

    /* conversão do char da entrada para a coluna (1 a 3) para inteiro compatível com o array */
    coluna = (play[1] - '0') - 1;
    linha = coordsToPoint(play[0]);

    /* VALIDAÇÃO COLUNAS */
    if (coluna < 0 || coluna > 2 ) {
        printf("JOGADA INVÁLIDA (VALOR COLUNAS INVÁLIDO)\n");
        return 1;
    }

    /* VALIDAÇÃO LINHAS */
    if (linha == -1){
        printf("JOGADA INVÁLIDA (VALOR LINHAS INVÁLIDO)\n");
        return 1;
    }

    /* finalmente, insere a jogada na board, se já lá não estiver uma */
    if (b[linha][coluna] == 0){
        b[linha][coluna] = charToPlayer(ins);
        return 0;
    } else {
        printf("JOGADA INVÁLIDA ([%d][%d] POPULADA POR %c)\n", linha, coluna, playerToChar(b[linha][coluna]));
        return 1;
    }

}

/* estado da partida: 0 se ainda ninguém ganhou, 1 se ganhar o 1.º jogador, 2 se ganhar o 2.º jogador
 * ou -1 se ao fim de 9 jogadas não houver um vencedor, ou seja, em caso de empate */
int checkWin(int b[3][3], int contador) {

    /* VERIFICAR LINHAS IGUAIS */
    int i, n, completa;
    for(i = 0; i < 3; i++) {
        completa = 1;
        for(n = 1; n < 3; n++) {
            if (b[i][n] != b[i][n - 1]) {
                completa = 0;
            }
        }
        if (completa == 1 && b[i][1] != 0) {
            return b[i][1]; // 1 ou 2
        }
        }

    /* VERIFICAR COLUNAS IGUAIS */
    for(i = 0; i < 3; i++) {
        completa = 1;
        for(n = 1; n < 3; n++) {
            if(b[n][i] != b[n-1][i]) {
                completa = 0;
            }
        }
        if (completa == 1 && b[1][i]) {
            return b[1][i]; // 1 ou 2
        }
    }

    /* VERIFICAR DIAGONAIS IGUAIS
     * não consegui pensar numa maneira melhor de fazer isto */
    if (b[1][1] != 0 && (b[0][0] == b[1][1] && b[1][1] == b[2][2]) || (b[2][0] == b[1][1] && b[1][1] == b[0][2] )) {
        return b[1][1];
    }

    /* VERIFICAR NÚMERO DE JOGADAS */
    if (contador >= 9) {
        return -1;
    }

    /* SE NADA SE VERIFICAR, O JOGO CONTINUA */
    return 0;
}

int main() {
    /* board inicial */
    int board[3][3] = {0,0,0,0,0,0,0,0,0};
    /* contagem das jogadas [0-9] */
    int countJogadas = 0;

    /* enquanto o checkWin retornar 0, ainda não há vencedor e a board ainda não está preenchida, então podemos jogar */
    while (checkWin(board, countJogadas) == 0){

        printBoard(board);
        printf("\n");

        /* ciclo infinito para forçar o user a inserir jogadas válidas */
        while(true) {
            /* play() insere a jogada, e retorna 0 se for válida e 1 se não for */
            int val = play(board, countJogadas);

            /* se a jogada for válida, incrementamos o contador e quebramos o while(true)
             * se não for, como não incementamos e o código vai repetir, vai pedir ao mesmo jogador para repetir */
            if (val == 0) {
                countJogadas++;
                break;
            }
        }
        printf("-------------------\n");
    }

    /* o resultado da partida, determinado pela função checkWin que usamos para o while em cima */
    int result = checkWin(board, countJogadas);

    printBoard(board);
    printf("-------------------\n");

    /* em caso de empate, a função checkWin retorna -1, caso contrário retorna o número do vencedor */
    if (result == -1){
        printf("EMPATE (JOGADAS ESGOTADAS)\n");
    } else {
        printf("JOGADOR %d (%c) GANHOU EM %d ROUNDS\n", result, playerToChar(result), countJogadas);
    }

    return(0);
}
