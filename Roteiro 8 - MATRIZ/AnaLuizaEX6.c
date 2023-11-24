//Ana Luiza Goncalves Campos - 25/09/2023
//Programa que armazena 5 nomes e sobrenomes e imprime uma lista com os dois.

#include <stdio.h>

int main(){
	char nome[5][16],i,sobre[5][16];
	
	for(i=0;i<5;i++){
	printf("Digite um nome: \n");
	scanf("%s",nome[i]);
	printf("Digite o sobrenome: \n");
	scanf("%s",sobre[i]);
	}
	printf("Os nomes completos sao: \n");
	
	for(i=0;i<5;i++){	
	printf("%s %s \n",nome[i],sobre[i]);
	}
	return 0;
}
