//Ana Luiza Gonçalves Campos - 21/08/2023
//Descricao: programa para mostrar os valores de graus em ceusius e Fahrenheit em do while

#include <stdio.h>

 int main (){
 	
 	float c,f=40;
 	
 	do{
 		printf("%.2fF em graus ceusius eh igual a %.2fC\n",c,f);
 		c=(f-32)/1.8;
 		f++;
 	}while(f<70);
 	
 	return 0;
 }
