//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para calcular a media ponderada com os pesos 5,3,2 respectivamente.

#include <stdio.h>

int main (){
	float n1,n2,n3,media;
	
	printf("Digite sua nota:\n");
	scanf("%f",&n1);
	
	printf("Digite sua nota:\n");
	scanf("%f",&n2);
	
	printf("Digite sua nota:\n");
	scanf("%f",&n3);
	
	media=(n1*5+n2*3+n3*2)/(5+3+2);
	
	printf("A media ponderada das tres notas eh %.2f",media);
	
	
}
