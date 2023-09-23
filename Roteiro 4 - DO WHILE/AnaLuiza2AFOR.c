//Ana Luiza Gonçalves Campos - 21/08/2023
//Descricao: programa para mostrar os valores de graus em ceusius e Fahrenheit em for

#include <stdio.h>

int main (){
	
	float c,f;
	
	for(f=40;f<=70;f++){
		
		c=(f-32)/1.8;
		printf("%.2fF em graus ceusius eh igual a %.2fC\n",f,c);
 	
	}
	
	return 0;
}
