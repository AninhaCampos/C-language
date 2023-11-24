//Ana Luiza Goncalves Campos - 23/10/2023
 
#include <stdio.h>
#include <stdlib.h>

int main(){
	char file[16],frase[50];
	FILE *arquivo;
	
	printf("Digite o nome do arquivo a ser criado:\n");
	scanf("%s",file);
	
	arquivo=fopen(file,"w");
	
	if(arquivo==NULL){
		printf("Nao foi possivel criar o arquivo \n");
	}
	
	printf("Insira a frase a ser escrita no arquivo:\n");
	scanf("%s",frase);
	
	fprintf(arquivo,"%s",frase);
	
	fclose(arquivo);
	
}
