//Nome:Ana Luiza Goncalves Campos - 03/07/2023
//Descricao: programa para calcular a raiz quadrada de um numero.

#include <stdio.h>
#include <math.h>

int main (){
	float numero,quadrado;
	
	printf("Digite um numero: \n");
	scanf("%f",&numero);
	
	quadrado=sqrt(numero);
	
	printf("O quadrado de %.2f eh %.2f",numero,quadrado);
	
	return 0;
}


