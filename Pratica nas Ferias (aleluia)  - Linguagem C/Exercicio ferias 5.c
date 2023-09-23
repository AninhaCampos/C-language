//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para ler dois valores e imprimir o maior dentre eles.

#include <stdio.h>

int main (){
	
	int n1,n2;
	
	printf("Digite um numero:\n");
	scanf("%d",&n1);
	
	printf("Digite outro numero:\n");
	scanf("%d",&n2);
	
	if(n1>n2){
		printf("%d eh maior que %d",n1,n2);
	}
	
	else{
		printf("%d eh maior que %d",n2,n1);
	}
	
}
