//Ana Luiza Goncalves - PROVA LALP - 18/09/2023
//QUESTAO 2

#include <stdio.h>
#include <string.h>

int main(){
	char str1[16],str2[16];
	int tam;
	
	printf("Digite a primeira string:\n");
	scanf("%s",str1);
	
	printf("Digite a segunda string:\n");
	scanf("%s",str2);
	
	tam=strcmp(str1,str2);
	
	if(tam==0){
		printf("As strings sao Iguais !\n");
	}
	else{
		printf("As strings sao diferentes !\n");
	}
}

