//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 300

//prot�tipos das fun��es
void parImpar (int vetor[], int tamanho, int pares[], int *tamP, int impares[], int *tamI);

void preencherVetor (int v[], int tamanho);
void exibirVetor (int v[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis 
	int v[TAM], vetP[TAM], vetI[TAM];
	int quantP, quantI;
		
	//preenchendo o vetor com numeros aleat�rios
	preencherVetor (v, TAM);
		
	//exibindo o vetor
	exibirVetor (v, TAM);	
	
	//chamando a fun��o
	parImpar (v, TAM, vetP, &quantP, vetI, &quantI);
	
	//exibindo os vetores de pares e �mpares
	exibirVetor (vetP, quantP);	
	exibirVetor (vetI, quantI);
}

//implementa��o das fun��es
void parImpar (int vetor[], int tamanho, int pares[], int *tamP, int impares[], int *tamI)
{
	//declara��o de vari�veis
	int i, j = 0, k = 0;
	
	//percorrendo o vetor original
	for (i=0;i<tamanho;i++)
	{
		//verificando se o elemento da posi��o 'i' � par
		if (vetor[i] % 2 == 0)
		{
			pares[j] = vetor[i];
			j++;
		}
		else
		{
			impares[k] = vetor[i];
			k++;
		}
	}
	
	//armazenando em 'tamP' e 'tamI' os tamanhos dos vetores de pares e de �mpares
	*tamP = j;
	*tamI = k;
}

void preencherVetor (int v[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//faz com que o gerados de n�meros aleat�rios gere sequ�ncias de n�meros diferentes a cada execu��o
	srand (time(NULL));
	
	for (i=0;i<tamanho;i++)
	{
		v[i] = rand()%10;
	}
}

void exibirVetor (int v[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nElementos do vetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", v[i]);
	}
	
	printf ("\n\n");
}
