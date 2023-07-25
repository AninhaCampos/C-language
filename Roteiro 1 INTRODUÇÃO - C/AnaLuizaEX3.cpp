//Nome:Ana Luiza Goncalves Campos - 03/07/2023
//Descricao: programa em C para calcular a area e a circunferencia de um ciruclo.

#include <stdio.h>

int main (){
	float pi=3.14,area,c;
	int raio=2;
	
	area=pi*raio*raio;
	
	c=2*pi*raio;
	
	printf("A area do circulo eh %.2f , e a circunferencia eh %.2f",area,c);
}
