//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para calcular o valor das parcelas de um produto.
#include <stdio.h>

int main (){
	
	float produto,desc,parc,total;
	
	printf("Qual o valor do produto?\n");
	scanf("%f",&produto);
	
	printf("Qual o desconto do produto?\n");
	scanf("%f",&desc);
	
	printf("Qual o numero de parcelas?\n");
	scanf("%f",&parc);
	
	total=(produto-(produto*desc/100))/parc;
	
	printf("O valor de cada parcela eh de %.2f",total);
	
	return 0;
}
