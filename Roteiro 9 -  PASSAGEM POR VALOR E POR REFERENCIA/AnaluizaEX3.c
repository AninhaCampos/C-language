//Ana Luiza Goncalves Campos - 02/10/2023
//Programa para mostrar o quadrado de um numero (por valor)

#include <stdio.h>

int Quadrado(int a){
	return a*a;
}
int main(){
	int n1,n2;
	
	printf("Insira um numero:\n");
	scanf("%d",&n1);
	
	n2=n1;
	
	Quadrado(n2);
	
	printf("Valor original: %d\nQuadrado:%d",n1,n2);
	
	return 0;
	
}
