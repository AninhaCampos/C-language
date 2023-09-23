//Ana Luiza Gonçalves Campos - 21/08/2023
//Descricao: programa para validar uma senha while

#include <stdio.h>

 int main (){
 	
 	const int senha=1234;
 	int usuario;
 	
 	printf("Digite a senha:\n");
 	scanf("%d",&usuario);
 	
  	while(usuario!=senha){
  		
  		printf("Senha incorreta!\n");
  		printf("Digite a senha:\n");
 		scanf("%d",&usuario);
 		
  		if(usuario==senha){
  		printf("Senha correta !");
  		break;
 		}
 		
  	}
  	return 0;
 }
