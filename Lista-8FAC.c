#include <stdio.h>
int main(){
	/*Dados tr�s n�meros inteiros a, b e c,  
implementar um programa que exiba os
n�meros do intervalo definido por a e b
(sempre come�ando em a e terminando em b),
com exce��o daqueles que sejam m�ltiplos de
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
	/*Construir um programa que, dado um n�mero
inteiro n fornecido pelo usu�rio, exiba uma
sequ�ncia de elementos, distribu�dos em
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
