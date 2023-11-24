//Ana Luiza Goncalves - PROVA LALP - 18/09/2023
//QUESTAO 3

#include <stdio.h>
#include <string.h>

int main(){
	
	char palavra[16];
	int tam,i;
	
	printf("Digite uma palavra: \n");
	scanf("%s",palavra);
	
	strrev(palavra); //comando da biblioteca string.h para inverter a string, sem a necessidade de um for, deixando o codigo mais legivel.
	
	printf("%s",palavra);
	
	return 0;
}
