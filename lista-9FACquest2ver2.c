#include<stdio.h>
//lista 9-questao 2
	//converter medidas de temperatura
float celsofaro(float celcius){
	//� possivel ja retornar com calculo
	return celcius * 9 / 5 + 32;
}
void main(){
	float celcius/*,fahrenheit*/;
	printf("diga a temperatura em celsius: ");
	scanf("%f",&celcius);
	/*fahrenheit = celsofaro(celcius);*/
	//colocando a fun�ao no printf evita a cria�ao de mais variaveis
	printf("%.2f",celsofaro(celcius));
}
