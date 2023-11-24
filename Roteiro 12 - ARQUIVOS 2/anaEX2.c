//Ana Luiza Goncalves Campos - 30/10/2023
//Descricao: programa para escrever uma mensagem em um arquivo. 

#include <stdio.h>

int main(){
	
	FILE *arquivo;
	
	arquivo=fopen("mensagem.txt", "w");
	
if (arquivo == NULL) {
 	printf("Não foi possível abrir o arquivo.\n");
}

fprintf(arquivo,"Esta é uma mensagem de exemplo que será escrita no arquivo");	


fclose(arquivo);

return 0;

}
