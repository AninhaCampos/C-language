//Ana Luiza Goncalves Campos - 25/09/2023
//Programa para pedir os valores de uma matriz 4x4 e imprimir quantos valores sao maiores que 10.

#include <stdio.h>

int main(){
	
	int matriz[4][4],i,j,cont=0;
	
	for(i=0;i<4;i++){
		for(j=0; j<4; j++){
			printf("Digite um numero:\n");
			scanf("%d",&matriz[i][j]);
			if(matriz[i][j]>10){
				cont++;
			}
		}
	}
	printf("A quantidade de valores maiores que 10 sao: %d",cont);

}
