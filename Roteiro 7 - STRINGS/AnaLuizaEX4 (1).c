//Ana Luiza Goncalves Campos - 04/09/2023
//Descricao: programa para imprimir a quantidade de vogais de uma palavra.

#include <stdio.h>
#include <string.h>

int main (){
	
	char palavra[16];
	int tam,vogais=0,i;
	
	printf("Digite uma palavra e descubra quantas vogais ela tem:\n");
	gets(palavra);
	
	tam=strlen(palavra);
	strlwr(palavra);
	
	for(i=0;i<tam;i++){
		if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
			vogais++;
		}
	}
	printf("Esssa palavra tem %d vogais",vogais);
	
	return 0;
}
