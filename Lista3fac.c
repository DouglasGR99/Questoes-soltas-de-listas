#include <stdio.h>
int main(){
	//Denominar dadas duas datas qual a maior
	int dia1,mes1,ano1,dia2,mes2,ano2;
	printf("Insira uma data, dia, mes e ano, nessa ordem: ");
	scanf("%d%d%d",&dia1,&mes1,&ano1);
	printf("agora insira uma segunda data, na mesma ordem: ");
	scanf("%d%d%d",&dia2,&mes2,&ano2);
	if(ano1>ano2){
		printf("a primeira data e maior.");
	}else{
		if(ano2>ano1){
			printf("a segunda data e maior.");
		}else{
			if(ano1==ano2){
				if(mes1>mes2){
					printf("a primeira data e maior");
				}else{
					if(mes2>mes1){
						printf("a segunda data e maior.");
					}else{
						if(mes1==mes2){
							if(dia1>dia2){
								printf("a primeira data e maior");
							}else{
								if(dia2>dia1){
									printf("a segunda data e maior.");
								}else{
									printf("as duas datas sao iguais.");
								}
							}
						}
					}
				}
				
			}
		}
	}
}
