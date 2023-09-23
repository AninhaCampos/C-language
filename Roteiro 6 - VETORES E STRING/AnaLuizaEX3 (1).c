//Ana Luiza Goncalves Campos - 28/08/2023
//Programa para imprimir uma saudacao personalizada para o usuario.


#include <stdio.h>
#include <stdlib.h>

int main (){
	char nome[16];
	
	printf("Digite seu nome: ");
	scanf("%s",nome);
	
	printf("Ola, %s ! Seja Bem vindo(a) ao programa",nome);
	
	return 0;
}
