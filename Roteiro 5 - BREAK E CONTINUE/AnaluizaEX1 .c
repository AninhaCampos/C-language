//Ana Luiza Goncalves Campos - 255/08/2023
//Imprimir a soma dos numeros pares que o usuario digitar


#include <stdio.h>

int main(){
	int x=0;
	float preco,total;
	
	while(1){
		printf("Insira o valor do produto(ou um numero negativo para sair): \n");
		scanf("%f",&preco);
		
		if(preco<0){
			break;
		}
		
		total+=preco;
	}
	
	printf("O valor total da compra eh de R$%.2f",total);
	
	return 0;
}
