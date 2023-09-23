//Ana Luiza Goncalves - 04/09/2023
//Descricao: programa para imprimir quantas vogais e consoantes tem em uma palavra.

#include <stdio.h>
#include <string.h>

int main (){
	
	char palavra[16];
	int tam,vogais=0,i,con=0;
	
	printf("Digite uma palavra e descubra quantas vogais ela tem:\n");
	gets(palavra);
	
	tam=strlen(palavra);
	strlwr(palavra);
	
	for(i=0;i<tam;i++){
		if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
			vogais++;
		}else{
			con++;
		}
	}
	printf("Esssa palavra tem %d vogais e %d consoantes",vogais,con);
	
	return 0;
}

