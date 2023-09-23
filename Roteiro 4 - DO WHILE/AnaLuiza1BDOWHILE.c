//Ana Luiza Gonçalves Campos - 21/08/2023
//Descricao: programa para validar uma senha do while

#include <stdio.h>

int main (){
	
	const int senha=1234;
	int usuario;
	
	do{
		printf("Digite a senha: \n");
		scanf("%d",&usuario);
		if(usuario==senha){
		printf("Senha correta ! \n");
			break;
		}
		
		printf("Senha incorreta ! \n");
		
	}while(usuario!=senha);
	
	return 0;
}
