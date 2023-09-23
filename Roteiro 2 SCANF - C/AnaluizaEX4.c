//Nome:Ana Luiza Goncalves Campos - 03/07/2023
//Descricao: programa para imprimir a altura e idade do usuario

#include <stdio.h>

int main (){
	
	int idade;
	float altura;
	
	printf("Digite sua altura: \n");
	scanf("%f",&altura);
	
	printf("Digite sua idade: \n");
	scanf("%d",&idade);
	
	
	printf("Sua altura eh %.2f metros, e sua idade eh %d anos",altura,idade);
	
	return 0;
}
