//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para calcular o valor do desconto e o total.
#include <stdio.h>

int main (){
	
	float compra,desc,total,econ;
	
	printf("Qual o valor da sua compra?\n");
	scanf("%f",&compra);
	
	printf("Qual a porcentagem de desconto?\n");
	scanf("%f",&desc);
	
	total=compra-(compra*desc/100);
	econ=compra-total;
	
	printf("O valor da sua compra com o desconto eh de R$%.2f \nSua economia foi de R$%.2f",total,econ);
}
