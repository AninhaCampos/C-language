//Ana Luiza Goncalves Campos - 25/08/2023
//Jogo para adivinhar o resultado do lancamento de um dado

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int geradorNumerosAleatorios(int min, int max){
	
	return min + rand() % (max - min + 1);
}


int main (){
	

	int chute;
	srand( (unsigned)time(NULL) );
	
	printf("Seja Bem-vindo ao jogo de adivinhacao de lancamento de dados !\nTente adivinhar o resultado do lancamento do dado (1 a 6)\n");

	while(1){
		
	int numero= geradorNumerosAleatorios(1,6);

	printf("Digite sua aposta (1 a 6) ou 0 para sair do jogo: \n");
	scanf("%d",&chute);

	if (chute==0){
	break;
	} else if (chute<1 || chute>6){
	printf("Numero invalido, digite um numero entre 1 e 6\n");
	}else if (chute==numero){
	printf("Parabens ! voce acertou o resultado %d\n",numero);
	break;
	}
	else{
	printf("Infelizmente voce errou, tente novamente\n");
		}
	}
	
	return 0;

}
