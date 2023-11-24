//Ana Luiza Goncalves Campos- Questao 3

#include <stdio.h>
#include <string.h>

int main(){
	char nome[16],palavra[16],arq[16],p1[16];
	int cont=0;
	printf("Digite o nome do arquivo a ser aberto:\n");
	scanf("%s",nome);
	
	FILE *arquivo;
	arquivo=fopen(nome,"r");
	
	if(arquivo==NULL){
		printf("Erro ao abrir o arquivo");
		return 1;
	}
	printf("Digite a palavra a ser procurada:\n");
	scanf("%s",palavra);
	
	while(fscanf(arquivo,"%s",arq)!=EOF){
		
		if(strcmp(arq,palavra)==0){
			
			cont++;
		}
	}
	printf("A palavra '%s' aparece %d vezes no arquivo '%s'",palavra,cont,nome);
	
	fclose(arquivo);
	
	return 0;
}
