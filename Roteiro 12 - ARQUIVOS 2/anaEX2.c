//Ana Luiza Goncalves Campos - 30/10/2023
//Descricao: programa para escrever uma mensagem em um arquivo. 

#include <stdio.h>

int main(){
	
	FILE *arquivo;
	
	arquivo=fopen("mensagem.txt", "w");
	
if (arquivo == NULL) {
 	printf("N�o foi poss�vel abrir o arquivo.\n");
}

fprintf(arquivo,"Esta � uma mensagem de exemplo que ser� escrita no arquivo");	


fclose(arquivo);

return 0;

}
