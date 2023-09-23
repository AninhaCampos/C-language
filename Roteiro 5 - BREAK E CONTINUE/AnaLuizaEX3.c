//Ana Luiza Goncalves Campos - 25/08/2023
//Media de provas

#include <stdio.h>

int main (){
	
	float nota,soma=0,media;
	int i=0;
	
	while(1){
		
		printf("Insira uma nota de prova (Para sair digite um numero negativo ou maior que 10):\n");
		scanf("%f",&nota);
		
		if(nota<0 || nota>10){
			break;
	}
		
		i++;
		soma=soma+nota;
	}
	
	media=soma/i;
		printf("A soma das notas eh %.2f",media);
	return 0;
}
