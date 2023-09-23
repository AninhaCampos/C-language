//Ana Luiza Goncalves Campos - 29/08/2023
//Programa para verificar se a senha esta correta ou nao.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	char senha[]="senha123";
	char usuario[8];
	int verificar;
	
	printf("Digite a senha para o acesso ser concedido: ");
	scanf("%s",usuario);
	
	verificar=strcmp(senha,usuario);
	
	if(verificar==0){
		printf("Senha correta! Acesso concedido.");
	}
	else {
		printf("Senha incorreta! Acesso negado");
	}
	
	return 0;
}

