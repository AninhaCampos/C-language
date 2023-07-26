//Ana Luiza Goncalves - 25/07/2023
//Descricao: programa para determinar se ele eh equilatero, isosceles ou escaleno.

#include <stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Digite o comprimento dos 3 lados do triangulo:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a==b and b==c){
		printf("Este triangulo eh Equilatero!");
	}
	else if(a==b || a==c ||b==c){
		printf("Este triangulo eh Isosceles");
	}
	else{
		printf("Este triangulo eh Escaleno");
	}
}
