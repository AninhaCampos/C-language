//Ana Luiza Goncalves Campos - 28/08/2023
//Programa para calcular o lucro de cada dois produtos

#include <stdio.h>

int main (){
	
	int c1,c2,v1,v2,l1,l2;
	int menor=0,entre=0,maior=0;
	
		printf("Digite o preco de compra do produto 1:\n");
		scanf("%d",&c1);
		
		printf("Digite o preco de venda do produto 1:\n");
		scanf("%d",&v1);
	
	
		printf("Digite o preco de compra do produto 2:\n");
		scanf("%d",&c2);
		
		printf("Digite o preco de venda do produto 2:\n");
		scanf("%d",&v2);
		
		l1=v1-c1;
		
		l2=v2-c2;
		
		if (l1<(v1*10/100)){
			menor++;
		}
		else if (l1>(v1*20/100)){
			maior++;
		}
		else{
			entre++;
		}
		if (l2<(v2*10/100)){
			menor++;
		}
		else if (l2>(v2*20/100)){
			maior++;
		}
		else{
			entre++;
		}		
		
		printf("Mercadorias com lucro < 10%% : %d\n",menor);
		printf("Mercadorias com lucro entre 10%% e 20%% : %d\n",entre);
		printf("Mercadorias com lucro maior que 20%% : %d\n",maior);
		
		return 0;
}
