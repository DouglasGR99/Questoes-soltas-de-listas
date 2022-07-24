//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 300

//protótipos das funções
void parImpar (int vetor[], int tamanho, int pares[], int *tamP, int impares[], int *tamI);

void preencherVetor (int v[], int tamanho);
void exibirVetor (int v[], int tamanho);

//main
void main ()
{
	//declaração de variáveis 
	int v[TAM], vetP[TAM], vetI[TAM];
	int quantP, quantI;
		
	//preenchendo o vetor com numeros aleatórios
	preencherVetor (v, TAM);
		
	//exibindo o vetor
	exibirVetor (v, TAM);	
	
	//chamando a função
	parImpar (v, TAM, vetP, &quantP, vetI, &quantI);
	
	//exibindo os vetores de pares e ímpares
	exibirVetor (vetP, quantP);	
	exibirVetor (vetI, quantI);
}

//implementação das funções
void parImpar (int vetor[], int tamanho, int pares[], int *tamP, int impares[], int *tamI)
{
	//declaração de variáveis
	int i, j = 0, k = 0;
	
	//percorrendo o vetor original
	for (i=0;i<tamanho;i++)
	{
		//verificando se o elemento da posição 'i' é par
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
	
	//armazenando em 'tamP' e 'tamI' os tamanhos dos vetores de pares e de ímpares
	*tamP = j;
	*tamI = k;
}

void preencherVetor (int v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//faz com que o gerados de números aleatórios gere sequências de números diferentes a cada execução
	srand (time(NULL));
	
	for (i=0;i<tamanho;i++)
	{
		v[i] = rand()%10;
	}
}

void exibirVetor (int v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nElementos do vetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", v[i]);
	}
	
	printf ("\n\n");
}
