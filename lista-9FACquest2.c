#include<stdio.h>
//lista 9-questao 2
	//converter medidas de temperatura
int celsofaro(){
	int celso, faro;
	printf("diga a temperatura em celsius: ");
	scanf("%d",&celso);
	faro = celso * 9 / 5 + 32;
	printf("%dF", faro);
}

int farocelso(){
	float celso, faro;
	printf("diga a temperatura em faro: ");
	scanf("%f",&faro);
	celso = ((faro - 32) * 5 )/ 9;
	printf("%.2fC", celso);	
}

int celsokelvo(){
	float celso, kelvo;
	printf("diga a temperatura em celso: ");
	scanf("%f",&celso);
	kelvo = celso + 273.15;
	printf("%.2f kelvo", kelvo);	
}

int kelvocelso(){
	float celso, kelvo;
	printf("diga a temperatura em kelvo: ");
	scanf("%f",&kelvo);
	celso = kelvo - 273.15;
	printf("%.2f celso", celso);
}	

void main(){
	int med, loop;

	do{
		printf("escolha uma medida para conversao:\n");
		printf("1-celso para faro\n");
		printf("2-faro para celso\n");
		printf("3-celso para kelvo\n");
		printf("4-kelvo para celso\n");
		scanf("%d", &med);
		switch(med){
			case 1:
				celsofaro();
				break; 
			case 2:
				farocelso();
				break;
			case 3:
				celsokelvo();
				break;
			case 4:
				kelvocelso();
				break;
		}
		printf("\ndeseja converter temperaturas novamente?\n 1-sim\n 2-nao\n");
		scanf("%d",&loop);
	}
	while(loop == 1);
	printf("\nentao e tudo, obrigado.");
}
