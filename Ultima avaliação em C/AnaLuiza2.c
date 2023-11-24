//Ana Luiza Goncalves Campos- Questao 2

#include <stdio.h>

int main(){
	
	FILE *arquivo;
	arquivo=fopen("questao2.txt","w");
	
	if(arquivo==NULL){
		printf("Erro ao abrir o arquivo");
	}
	printf("O poema foi escrito com sucesso!");
	fprintf(arquivo,"E agora, Jose?\nA festa acabou,\no povo sumiu,\na noite esfriou,\ne agora, Jose?\n");
	
	fclose(arquivo);
}
