//Ana Luiza Goncalves Campos- Questao 4

#include <stdio.h>
#include <string.h>

int main(){
	char palavra[16];
	int tamanho;
	
	FILE *arquivo;
	arquivo=fopen("questao2.txt","r");
	
	if(arquivo==NULL){
		printf("Erro ao abrir o arquivo");
		return 1;
	}
	
	fscanf(arquivo,"%s",palavra);
	tamanho=strlen(palavra);
	printf("A palavra '%s' tem %d letras.",palavra,tamanho);
	
	fclose(arquivo);
	
	return 0;
}
