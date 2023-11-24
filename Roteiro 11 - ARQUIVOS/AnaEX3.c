//Ana Luiza Goncalves Campos - 23/10/2023

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[16],op;
	int cod;
	float preco;
	
	FILE *arquivo;
	
	arquivo=fopen("exemplo.txt","w");
	
	if(arquivo==NULL){
		printf("Nao foi possivel criar o arquivo \n");
		return 1;
	}
	
	while(cod!=-1){
		
	printf("Digite o codigo, o nome e o preço do produto (-1 para encerrar):\n");
	scanf("%d",&cod);
	if(cod==-1){
	break;
	}
	scanf("%s",nome);
	scanf("%f",&preco);
	
	fprintf(arquivo,"%d\t %s\t %f\n",cod,nome,preco);
	
	}
	
	fclose(arquivo);
	
	return 0;
}
