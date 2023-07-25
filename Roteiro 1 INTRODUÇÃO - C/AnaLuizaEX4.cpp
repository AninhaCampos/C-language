//Nome:Ana Luiza Goncalves Campos - 03/07/2023
//Descricao: programa em C para mostrar o desconto de um produto.

#include <stdio.h>

int main  (){
	int sem=100,desconto,total,porcentagem=5;
	
	desconto=(sem*porcentagem)/100;
	total=sem-desconto;
	
	
	printf(" O valor do produto eh: R$%d \n O desconto obtido eh: R$%d \n O valor a ser pago eh R$%d \n Porcentagem do desconto eh %d%%",sem,desconto,total,porcentagem);
	
	return 0;
}
