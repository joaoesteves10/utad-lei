/* 28. Considere uma estrutura com os campos: número mecanográfico, nome e nota para o armazenamento dos dados dos alunos de uma determinada UC.

Escreva um programa que leia a partir do teclado os dados de 20 alunos para um vetor adequado e apresente no ecrã o nome de todos os alunos que passaram à UC (nota >= 9,5). */

#include <stdio.h>
#include <string.h>
#define N_ALUNOS 20

typedef struct { 
    int numMecanografico;
    char nome[100];
    float nota;
} aluno;

int main() {

    int i;
    aluno infoAlunos[N_ALUNOS];
    char nomeaux[100];

    for (i=0; i<N_ALUNOS; i++) {

        // o stor disse para fazer isto, o c é mau
        printf("insira o nome: ");
        fgets(infoAlunos[i].nome, sizeof(infoAlunos[i].nome), stdin);
        infoAlunos[i].nome[strcspn(infoAlunos[i].nome, "\n")] = 0;
        
        printf("insira o numero mecanografico: ");
        scanf_s("%d", &infoAlunos[i].numMecanografico);

        printf("insira a nota: ");
        scanf_s("%f", &infoAlunos[i].nota);
        printf("----------\n");

        // limpa o stdin
        char ch = getchar();
    }

    /* 
    printf("\n\ndados:\n");
    for(i=0; i<N_ALUNOS; i++) {
        printf("aluno %d", i);
        printf("numMecanografico: %d\n", infoAlunos[i].numMecanografico);
        printf("nome: %s\n", infoAlunos[i].nome);
        printf("nota: %.2f\n", infoAlunos[i].nota);
        printf("----------\n");
    } */

    printf("ALUNOS APROVADOS: \n");
    for(i=0; i<N_ALUNOS; i++) {
        if (infoAlunos[i].nota >= 9.5);
        printf("%s\n", infoAlunos[i].nome);
    }    


    return(0);
}
