//Ana Luiza Goncalves Campos - 04/09/2023
//Descricao:programa para exibir a palavra ao contrario para o usuario

#include <stdio.h>
#include <string.h>

int main(){
	
	char palavra[16],contrario[16];
	int tamanho,i,palin,p=0;
	
	printf("Digite uma palavra e descubra se ela eh ou polindromo:\n");
	scanf("%s",palavra);
	
	tamanho=strlen(palavra);
	
	for(i=tamanho-1;i>=0;i--){
		contrario[p]=palavra[i];
		p++;
		
	}
	contrario[p] = '\0';
	
	palin = strcmp(palavra, contrario);

    if (palin == 0) {
        printf("Essa palavra eh um palindromo\n");
    } else {
        printf("Essa palavra nao eh um palindromo\n");
    }
	
	return 0;
}
