//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para aplicar determinado auemento dependendo do salario.
#include <stdio.h>

int main(){
	
	float salario,desc;
	
	printf("Qual seu atual salario?\n");
	scanf("%f",&salario);
	
	if(salario<=1500){
		desc=salario+(salario*10/100);
		
		printf("Parabens! Seu salario recebeu 10%% de desconto, valor total: R$%.2f",desc);
	}
	else{
		desc=salario+(salario*5/100);
		
		printf("Parabens! Seu salario recebeu 5%% de desconto, valor total: R$%.2f",desc);
	}
	return 0;
}
