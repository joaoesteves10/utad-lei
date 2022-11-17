#include <stdio.h>
#define N 5


int soma(int vetor[N]);

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

		case 1: printf("\nSoma = %d", soma(vetor) );

			break;

		case 2: printf("\nMedia = %f", media(vetor) );

			break;

		default: break;

	}

}


int soma(int vetor[N])

{

	int i, s=0;



	for(i=0;i<N;i++)

		s+=vetor[i];

	return(s);

}


float media(int vetor[N])

{

	int i,s;



	s=soma(vetor);

  // a média nunca vai ser correta mas não dá para passar isto para float
	return(s/N);

}
