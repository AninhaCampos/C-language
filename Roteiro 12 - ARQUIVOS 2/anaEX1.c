//Ana Luiza Goncalves Campos - 30/10/2023
//Descricao: programa para calcular media dos numeros em um arquivo. 

#include <stdio.h>

int main(){
	
	int numero,i=0,acm=0;
	float media;
	
	FILE *arquivo;
	
	arquivo=fopen("numeros.txt", "r");
	
if (arquivo == NULL) {
 	printf("Não foi possível abrir o arquivo.\n");
}
	
while(fscanf(arquivo, "%d", &numero) != EOF){
		acm=acm+numero;
		i++;
}

media=acm/i;


printf("A media dos valores no arquivo eh %.2f",media);

fclose(arquivo);

return 0;

}
