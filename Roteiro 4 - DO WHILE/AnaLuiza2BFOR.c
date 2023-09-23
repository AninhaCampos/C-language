//Ana Luiza Gonçalves Campos - 21/08/2023
//Descricao: programa para mostrar as alturas de cm para in for

#include <stdio.h>

int main (){
	int cm;
	float in;
	
	for(cm=150;cm<=190;cm=cm+5){
		
		in=cm/2.54;
		printf("Altura (cm) : %d cm    Altura (in) : %.2f in\n",cm,in);
	}
	
	return 0;
}
