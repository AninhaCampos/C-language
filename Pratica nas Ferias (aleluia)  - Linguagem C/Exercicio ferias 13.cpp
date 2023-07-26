//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para aplicar determinado desconto dependendo do valor.
#include <stdio.h>

int main(){
	
	float compra,desc;
	
	printf("Qual o valor da sua compra?\n");
	scanf("%f",&compra);
	
	if(compra<=100){
		desc=compra-(compra*5/100);
		printf("Parabens! Foi aplicado um desconto de 5%% a sua compra.\nValor total:R$%.2f",desc);
	}
	else{
		desc=compra-(compra*10/100);
		printf("Parabens! Foi aplicado um desconto de 10%% a sua compra.\nValor total:R$%.2f",desc);
	}
	
	return 0;
}
