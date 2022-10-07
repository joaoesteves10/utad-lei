#include <stdio.h>
#include <locale.h>
/* 6. Implemente um programa que peça ao utilizador um nome completo, e o
escreva no ecrã. Considere um máximo de 20 carateres para o nome.
Exemplo: Ana Santos */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20];

    printf("Nome (max. 20 chars): ");
    /* leitura de strings com mais de uma palavra, se tentarmos usar o scanf,
    ele só vai guardar corretamente a primeira palavra da string */
    gets(nome);


    /* versão alternativa:
    puts(nome);
    o puts não suporta formatação como o printf*/
    printf("-----\n%s", nome );

    return 0;
}
