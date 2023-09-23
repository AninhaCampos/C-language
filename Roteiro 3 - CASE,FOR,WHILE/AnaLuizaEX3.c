//Ana Luiza Goncalves Campos - 14/08/2023
//Descricao: programa solicitar um numero e exibir se eh primo ou nao.

#include <stdio.h>

int main (){
	
	int x,i,c=0;
	
	printf("Digite um numero: \n");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++){
		x%i==0;
		c++;
	}
	if(c==2){
		printf("Este numero eh primo !");
	}
	else{
		printf("Este numero nao eh primo !");
	}
}
