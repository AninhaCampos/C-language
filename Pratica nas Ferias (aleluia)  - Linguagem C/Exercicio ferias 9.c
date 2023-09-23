//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para calcular o valor final de um produto com desc.


#include <stdio.h>

int main(){
	
	float produto,desconto,total;
	
	printf("Digite o valor do produto:\n");
	scanf("%f",&produto);
	
	printf("Qual a porcentagem do desconto?\n");
	scanf("%f",&desconto);
	
	total=produto-(produto*desconto/100);
	
	printf("O valor final do produto com o desconto eh R$%.2f",total);
	
	return 0;
}
