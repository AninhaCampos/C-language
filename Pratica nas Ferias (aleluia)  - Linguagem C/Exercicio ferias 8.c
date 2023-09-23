//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para calcular o IMC (Indice de massa corporal).

#include <stdio.h>

int main (){
	
	float altura,peso,imc;
	
	printf("Digite sua altura em m:\n");
	scanf("%f",&altura);
	
	printf("Digite seu peso em kg:\n");
	scanf("%f",&peso);
	
	imc=peso/(altura*altura);
	
	printf("Seu IMC eh %.2f",imc);
	
	return 0;
}
