//Ana Luiza Goncalves - PROVA LALP - 18/09/2023
//QUESTAO 1

#include <stdio.h>
#include <string.h>

int main (){
	char nome[16];
	int tam,i;
	printf("Digite a palavra maria:\n");
	scanf("%s",nome);
	
	tam=strlen(nome);
	
	printf("Vogais do nome maria:");
	
	for(i=0;i<=tam;i++){
		if(nome[i]=='a'){
			printf(" a ");
		}
		if(nome[i]=='e'){
			printf(" e ");
		}
		if(nome[i]=='i'){
			printf(" i ");
		}
		if(nome[i]=='o'){
			printf(" o ");
		}
		if(nome[i]=='u'){
			printf(" u ");
		}
	}
	

	return 0;
}
