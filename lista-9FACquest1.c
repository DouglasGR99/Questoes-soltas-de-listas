#include<stdio.h>
//lista 9-questao 1
	//calcular os multiplos de n no intervalo ab
	//essa funçao fara os calculos(o i pertence a ela)
int multiplos(int a, int b, int n){
	int i;
	for(i=a;i<b;i++){
		if(i % n == 0){
		printf(" %d",i);
		}
	}
}

//essa e a main(a, b, n pertencem)
void main(){
	int n, a, b;

	printf("entre com um numero para a: ");
	scanf("%d", &a);
	printf("entre com um numero para b: ");
	scanf("%d", &b);
	printf("entre com um numero para n: ");
	scanf("%d", &n);
	multiplos(a,b,n); 
}

