//Ana Luiza Goncalves Campos - 14/08/2023
//Descricao: programa que gera um numero aleatorio e pede para o usuario tentar adivinha-lo.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int numeroAleatorio,srand(time(NULL)),tentativas=0, x;
	
  numeroAleatorio = rand() % 100;
  printf("\n\nBEM VINDO AO JOGO DA ADIVINHACAO\n\n");
  
  while(tentativas<=15){
  
  printf("Digite seu palpite:\n");
  scanf("%d",&x);
  tentativas++;
  
  if(x==numeroAleatorio){
  	printf("Parabens vc acertou em %d tentativas!!!",tentativas);
  	break;
  }
  else if (x<numeroAleatorio){
  printf("Tente um numero maior\n");
  tentativas++;
  }
else if (x>numeroAleatorio){
  printf("Tente um numero menor\n");
  tentativas++;
  }
  }
  return 0;
}
