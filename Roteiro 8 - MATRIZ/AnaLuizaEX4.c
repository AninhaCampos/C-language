//Ana Luiza Goncalves Campos - 25/09/2023
//Programa que adiciona o valor 1 a diagonal da matriz e zero aos demais.

#include <stdio.h>

int main(){
	int matriz[5][5],i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(matriz[i]==matriz[j]){
				matriz[i][j]=1;
			}else{
				matriz[i][j]=0;
			}
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",matriz[i][j]);
		}
	printf("\n");
	}
	return 0;
}
