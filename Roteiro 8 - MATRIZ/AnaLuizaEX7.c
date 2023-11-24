//Ana Luiza Goncalves Campos - 25/09/2023
//Programa que armazena 5 nomes e imprime os nomes repetidos (e informa caso nao haja nomes repetidos).

#include <stdio.h>
#include <string.h>

int main(){
	char nome[10][16],i,j;
	int repetido=0;
	
	for(i=0;i<10;i++){
	printf("Digite um nome: \n");
	scanf("%s",nome[i]);
	}

	for(i=0;i<10;i++){	
		for(j=i+1;j<10;j++){
			if(strcmp(nome[i],nome[j])==0){
			repetido=1;
			printf("%s\n",nome[i]);
		}
	}
}

	if(repetido=0){
		printf("\nNao tem nomes repetidos.");
	}
	return 0;
}
