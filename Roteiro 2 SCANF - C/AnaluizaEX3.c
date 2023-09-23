//Nome:Ana Luiza Goncalves Campos - 03/07/2023
//Descricao: programa para arredondar um numero

#include <stdio.h>
#include <math.h>

int main (){
	
	double numero=125.12225888;
	int arredondado;
	
	arredondado=round(numero);
	
	printf("Numero original: %.8f \n Numero arredondado: %d ",numero,arredondado);
	
	return 0;
}
