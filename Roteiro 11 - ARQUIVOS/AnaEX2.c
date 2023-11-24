//Ana Luiza Goncalves Campos - 23/10/2023

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char file;
	FILE *arquivo;
	
	arquivo=fopen("exemplo.txt","r");
	
	if(arquivo==NULL){
		printf("Nao foi possivel criar o arquivo \n");
		
		return 1;
	}
	
	while((file=fgetc(arquivo))!=EOF){
		
		putchar(file);
	}
	
	fclose(arquivo);
	
	return 0;
}
