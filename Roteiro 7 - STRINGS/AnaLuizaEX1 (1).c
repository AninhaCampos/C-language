//Ana Luiza Goncalves Campos - 04/09/2023
//Descricao:programa para contar os caracteres de uma palavra

#include <stdio.h>
#include <string.h>
int main (){
	
	char palavra [16];
	printf("Digite uma palavra:\n");
	gets(palavra);
	
	printf("Essa palavra tem %d caracteres",strlen(palavra));
	
	return 0;
}
