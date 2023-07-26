//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para determinar se um valor eh impar ou par.

#include <stdio.h>

int main(){
	
	int n;
	
	printf("Digite um numero: \n");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("Este numero eh par!");
	}
	else{
		printf("Este numero eh impar!");
	}
	
	return 0;
}
