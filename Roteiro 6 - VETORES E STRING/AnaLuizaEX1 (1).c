//Ana Luiza Goncalves Campos - 28/08/2023
//Programa que imprime a soma de dois vetores de numeros

#include <stdio.h>
#include <stdlib.h>
#define max 5

int main (){
	
	int i,vetor1[max],vetor2[max],soma[max];
	
	for(i=0;i<max;i++){
		printf("Insira um numero inteiro: \n");
		scanf("%d",&vetor1[i]);
	}
	for(i=0;i<max;i++){
		printf("Insira outro numero inteiro: \n");
		scanf("%d",&vetor2[i]);
	}
	
	system("cls");
	
	for(i=0;i<max;i++){
		soma[i]=vetor1[i]+vetor2[i];
		printf("A soma de %d + %d eh = %d\n",vetor1[i],vetor2[i],soma[i]);
	}
	
	return 0;
}
