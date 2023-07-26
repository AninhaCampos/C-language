//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para calcular o aumento de um salario.
#include <stdio.h>

int main(){
	
	float salario,aumento,total;
	
	printf("SEJA BEM VINDO !\nQual eh seu atual salario?\n");
	scanf("%f",&salario);
	
	printf("De quantos %%(porcento) foi seu aumento? \n");
	scanf("%f",&aumento);
	
	total=salario+(salario*aumento/100);
	
	printf("Seu novo salario com aumento eh de R$%.2f",total);
	
	return 0;
}
