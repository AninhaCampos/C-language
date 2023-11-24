//Ana Luiza Goncalves Campos - 25/09/2023
//Soma de duas matrizes.

#include <stdio.h>

int main (){
	
	int matriz1[3][3],matriz2[3][3],resultado[3][3],i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("|MATRIZ 1| Digite um numero:\n");
			scanf("%d",&matriz1[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("|MATRIZ 2| Digite um numero:\n");
			scanf("%d",&matriz2[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			resultado[i][j]=matriz1[i][j]+matriz2[i][j];
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("A soma da posicao %d + %d eh =  %d \n",matriz1[i][j],matriz2[i][j],resultado[i][j]);
			
		}
		printf("\n");
	}
	
}
