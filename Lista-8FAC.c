#include <stdio.h>
int main(){
	/*Dados três números inteiros a, b e c,  
implementar um programa que exiba os
números do intervalo definido por a e b
(sempre começando em a e terminando em b),
com exceção daqueles que sejam múltiplos de
c.
	int a, b, c;
	printf("insira a: \n");
	scanf("%d", &a);
	printf("insira b: \n");
	scanf("%d", &b);
	printf("insira c: \n");
	scanf("%d", &c);
	while(a < b){
		if(a % c != 0){
			printf("%d ", a);	
		}
			a++;
	}   
	*/
	/*Construir um programa que, dado um número
inteiro n fornecido pelo usuário, exiba uma
sequência de elementos, distribuídos em
linhas, como nos exemplos a seguir:
N = 7
1 0 0 0 0 0 0
2 1 0 0 0 0 0
3 2 1 0 0 0 0
4 3 2 1 0 0 0
5 4 3 2 1 0 0
6 5 4 3 2 1 0
7 6 5 4 3 2 1
*/
	int c;
	c = 1;
	do{
		c = c++;
		printf("%d",c);
	}
	while(c >= 100);
}
