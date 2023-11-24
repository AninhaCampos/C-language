//Ana Luiza Goncalves Campos - 30/10/2023
//Descricao: programa para ler uma frase em um arquivo e imprimi-la em maiusculo em outro arquivo. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	
	FILE *arquivo1,*arquivo2;
	
	arquivo1=fopen("entrada.txt", "r");
	arquivo2=fopen("saida.txt", "w");
	
if (arquivo1 == NULL) {
 	printf("Não foi possível abrir o arquivo.\n");
}
if (arquivo2 == NULL) {
 	printf("Não foi possível abrir o arquivo.\n");
}

char caractere;

while((caractere=fgetc(arquivo1))!=EOF){
	
	caractere=toupper(caractere);
	
	fprintf(arquivo2,"%c",caractere);
	
	if(caractere == ' '){
		fprintf(arquivo2," ");
	}
}



fclose(arquivo1);
fclose(arquivo2);

return 0;

}
