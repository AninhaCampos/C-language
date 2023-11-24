//Ana Luiza Goncalves Campos - 25/09/2023
//Programa que armazena 4 nomes em uma matriz e imprime na tela.

#include <stdio.h>

int main(){
	char matriz[4][16],i;
	
	for(i=0;i<4;i++){
	printf("Digite um nome: \n");
	scanf("%s",matriz[i]);
	}
	printf("Os nomes sao: \n");
	
	for(i=0;i<4;i++){	
	printf("%s \n",matriz[i]);
	}
	return 0;
}
