//Ana Luiza Goncalves Campos - 25/08/2023
//Programa para imprimir o primeiro numero que é divisivel por 7,9 e 11.

#include <stdio.h>

int main (){
	
	int x=7,y=9,a=11,i;
	
	for(i=1;i<=1000000;i++){
		
		if(i%x==0 and i%y==0 and i%a==0){
			
			printf("O primeiro numero divisivel por 7 , 9 e 11 eh: %d",i);
			break;
			
		}
	}
	return 0;
}
