//Ana Luiza Gonçalves Campos - 21/08/2023
//Descricao: programa para mostrar os 4 primeiros multiplos de 3 (do-while)

#include <stdio.h>

int main (){
	
	int x=0,a=0;
	do{
		x=x+3;
		printf("%d \n",x);
		a++;
	} while (a<4);
	
	return 0;
}

