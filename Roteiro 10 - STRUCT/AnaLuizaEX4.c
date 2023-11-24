#include <stdio.h>

struct Carro {
	char marca[50];
	float preco;
	int ano;
};

int main(){
	int i;
	struct Carro carros[5];
	
	for(i=0; i<5; i++){
		
		printf("Digite a marca do carro %d: \n",i+1);
		scanf("%s",carros[i].marca);
		
		printf("Digite o ano do carro %d: \n",i+1);
		scanf("%d",&carros[i].ano);
		
		printf("Digite preco do carro %d: \n",i+1);
		scanf("%d",&carros[i].preco);
	}
	
	for(i=0; i<5; i++){
	
	printf("Carro %d\n",i+1);
	printf("Marca: %s\n",carros[i].marca);
	printf("Ano: %d\n",carros[i].ano);
	printf("Preco: %.2f\n",carros[i].preco);
	
	}
	
	return 0;
	
}
