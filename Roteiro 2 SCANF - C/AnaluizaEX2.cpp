//Nome:Ana Luiza Goncalves Campos - 03/07/2023
//Descricao: programa para calcular o quadrado e o cubo de um numero.

#include <stdio.h>
#include <math.h>

int main (){
	
	float numero,quadrado,cubo;
	
	printf("Digite um valor: \n");
	scanf("%f",&numero);
	
	quadrado=pow(numero,2);
	cubo=pow(numero,3);
	
	printf("O quadrado de %.2f eh %.2f, e o cubo de %.2f eh %.2f",numero,quadrado,numero,cubo);
	
	return 0;
}
