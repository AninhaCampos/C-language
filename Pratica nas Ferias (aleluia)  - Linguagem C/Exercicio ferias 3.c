//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para mostrar uma mensagem personalizada ao usuario.

#include <stdio.h>

int main (){
	
	char nome[10];
	int idade;
	
	printf("Digite seu nome: \n");
	scanf("%s",&nome);
	
	printf("Digite sua idade: \n");
	scanf("%d",&idade);
	
	printf("Ola %s ,voce tem %d anos, seja bem vindo ao mundo dos algoritimos!",nome,idade);
	
	return 0;
}
