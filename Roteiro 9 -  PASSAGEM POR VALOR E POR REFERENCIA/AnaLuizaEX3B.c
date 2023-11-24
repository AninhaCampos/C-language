//Ana Luiza Goncalves Campos - 02/10/2023
//Programa para mostrar o quadrado de um numero (por referencia)

#include <stdio.h>
#include <math.h>

int Quadrado(int *a){
	*a = *a * *a;
}
int main(){
	int n1,n2;
	
	printf("Insira um numero:\n");
	scanf("%d",&n1);
	
	n2=n1;
	
	Quadrado(&n1);
	
	printf("Valor original: %d\nQuadrado: %d",n2,n1);
	
	return 0;
	
}
