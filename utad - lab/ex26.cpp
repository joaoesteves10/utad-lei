#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

char playerToChar(int player) {
    /* transforma o número do player no seu char
     * o jogador 1 é o 'X', o 2 é o 'O' */
    switch (player){
        case 1: return 'X'; break;
        case 2: return 'O'; break;
        case 0: return ' '; break;
        default : return 0; break;
    }
}

int charToPlayer(char c){
    /* transforma o char no seu número de player
     * o jogador 1 é o 'X', o 2 é o 'O' */
    switch (c){
        case 'X': return 1; break;
        case 'O': return 2; break;
        default : return 0; break;
    }
}

int coordsToPoint(char c) {
    /* converte as coordenadas da linha para o ponto/int para o array */
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


void printBoard(int b[3][3]) {
    /* imprime a board */
    printf("   1   2   3\n");
    printf("A  %c | %c | %c\n", playerToChar(b[0][0]), playerToChar(b[0][1]), playerToChar(b[0][2]));
    printf("   ---------\n");
    printf("B  %c | %c | %c\n", playerToChar(b[1][0]), playerToChar(b[1][1]), playerToChar(b[1][2]));
    printf("   ---------\n");
    printf("C  %c | %c | %c\n", playerToChar(b[2][0]), playerToChar(b[2][1]), playerToChar(b[2][2]));
}

int play(int b[3][3], int contador) {
    /* pergunta a play ao jogador e insere-a na board
     * quando o número da jogada é par, joga o primeiro jogador, quando é impar joga o segundo*/
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

    coluna = (play[1] - '0') - 1; // conversão do char da coluna (1 a 3) para int, -1 para o array
    linha = coordsToPoint(play[0]);

    // VALIDAÇÃO COLUNAS
    if (coluna < 0 || coluna > 2 ) {
        printf("JOGADA INVÁLIDA (VALOR COLUNAS INVÁLIDO)\n");
        return 1;
    }

    // VALIDAÇÃO LINHAS
    if (linha == -1){
        printf("JOGADA INVÁLIDA (VALOR LINHAS INVÁLIDO)\n");
        return 1;
    }

    if (b[linha][coluna] == 0){
        b[linha][coluna] = charToPlayer(ins);
        return 0;
    } else {
        printf("JOGADA INVÁLIDA ([%d][%d] POPULADA POR %c)\n", linha, coluna, playerToChar(b[linha][coluna]));
        return 1;
    }

}

int checkWin(int b[3][3], int contador) {

    // VERIFICAR NÚMERO DE JOGADAS
    if (contador >= 9) {
        return -1;
    }

    // VERIFICAR LINHAS IGUAIS
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

    // VERIFICAR COLUNAS IGUAIS
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

    // VERIFICAR DIAGONAIS
    if (b[1][1] != 0 && (b[0][0] == b[1][1] && b[1][1] == b[2][2]) || (b[2][0] == b[1][1] && b[1][1] == b[0][2] )) {
        return b[1][1];
    }

    return 0;
}


int main() {
    /* board inicial */
    int board[3][3] = {0,0,0,0,0,0,0,0,0};
    int countJogadas = 0;

    while (checkWin(board, countJogadas) == 0){

        printBoard(board);
        printf("\n");
        while(1) {
            int a = play(board, countJogadas);
            if (a == 0) {
                countJogadas++;
                break;
            } else {
                continue;
            }
        }
        printf("-------------------\n");
    }

    int result = checkWin(board, countJogadas);
    printBoard(board);
    if (result == -1){
        printf("EMPATE (JOGADAS ESGOTADAS)\n");
    } else {
        printf("JOGADOR %d (%c) GANHOU\n", result, playerToChar(result));
    }
    return(0);
}
