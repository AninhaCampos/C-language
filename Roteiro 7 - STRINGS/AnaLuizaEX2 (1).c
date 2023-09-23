//Ana Luiza Goncalves Campos - 04/09/2023
//Descricao:programa para exibir a palavra ao contrario para o usuario

#include <stdio.h>
#include <string.h>

int main (){
	
	char palavra[16];
	int tamanho,i;
	
	printf("Digite uma palavra: \n");
	gets(palavra);
	
	tamanho=strlen(palavra);
	printf("Essa palavra ao contrario eh: ");
	
	for(i=tamanho;i>=0;i--){
		
		printf("%c",palavra[i]);
	}
	return 0;
}
