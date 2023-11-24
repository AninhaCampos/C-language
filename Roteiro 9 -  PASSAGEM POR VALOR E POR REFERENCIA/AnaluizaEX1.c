//Ana Luiza Goncalves Campos - 02/10/2023
//Programa para calcular media em uma funcao de passagem por referencia

#include <stdio.h>

float calcularMedia(float x,float y){
	float media;
	media=(x+y)/2;
	
	printf("%.2f",media);
	
	}
	
int main(){
	
	float n1,n2;
	
	printf("Insira um numero:\n");
	scanf("%f",&n1);
	
	printf("Insira outro numero:\n");
	scanf("%f",&n2);
	
	calcularMedia(n1,n2);

	
	return 0;
}
