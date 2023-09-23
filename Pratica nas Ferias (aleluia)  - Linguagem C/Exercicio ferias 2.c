//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para calcular a area de um circulo.

#include <stdio.h>

int main (){
	
	float r,pi=3.14,area;
	
	printf("Digite o raio do circulo:\n");
	scanf("%f",&r);
	
	area=2*pi*r;
	
	printf("A area do circulo eh %.2f",area);
	
	return 0;
}
