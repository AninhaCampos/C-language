//Ana Luiza Goncalves Campos - 02/10/2023
//Programa para trocar dois valores (por valor)

#include <stdio.h>

int Trocar(int a,int b){
	int temp= a;
	a=b;
	b=temp;
	
}
int main(){
	int n1,n2;
	
	printf("Insira um numero:\n");
	scanf("%d",&n1);
	
	printf("Insira outro numero:\n");
	scanf("%d",&n2);
	
	Trocar(n1,n2);
	
	printf("num1:%d		num2:%d",n1,n2);
	
	return 0;
	
}
