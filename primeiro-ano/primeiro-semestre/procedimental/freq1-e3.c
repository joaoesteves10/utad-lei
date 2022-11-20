/* O programa lê N valores para um vetor e apresenta ao utilizador um menu que permite escolher entre as operações de soma e média (com outra qualquer opção sai). */

/* como isto é de um momento de avaliação, pode não estar 100% certo, mas deve compilar e funcionar minimamente. */

#include <stdio.h>
#define N 5

int soma(int vetor[N]); // PRIMEIRO ESPAÇO
float media(int vetor[N]);

void main()
{

	int i, op, vetor[N];
	
	printf("\nInsira os valores separados por espaco\n");
	
	for(i=0;i<N;i++)
		scanf_s("%d",&vetor[i]);

	printf("\n1 - Soma\n2 - Media\nOutro - sair\n");
	scanf_s("%d",&op);

	switch(op)
	{

		case 1: printf("\nSoma = %d", soma(vetor) ); // SEGUNDO ESPAÇO
			break;

		case 2: printf("\nMedia = %f", media(vetor) ); // TERCEIRO ESPAÇO
			break;

		default: break;

	}

}


int soma(int vetor[N]) // TERCEIRO ESPAÇO
{

	int i, s=0;

	for(i=0;i<N;i++)
		s+=vetor[i]; // QUARTO ESPAÇO

	return(s);

}


float media(int vetor[N])
{

	int i,s;

	s=soma(vetor); // QUINTO ESPAÇO
	return(s/N); // SEXTO ESPAÇO

}
