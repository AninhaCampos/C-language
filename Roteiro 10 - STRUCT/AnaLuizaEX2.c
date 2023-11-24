#include <stdio.h>

struct Carro {
	char marca[50];
	float preco;
	int ano;
};

int main(){
	
	struct Carro carro1;
	
	strcpy(carro1.marca,"Ferrari");
	carro1.ano=2023;
	carro1.preco=300000.00;
	
	
	printf("Marca: %s\n",carro1.marca);
	printf("Ano: %d\n",carro1.ano);
	printf("Preco: %.2f\n",carro1.preco);
	
	return 0;
	
}
