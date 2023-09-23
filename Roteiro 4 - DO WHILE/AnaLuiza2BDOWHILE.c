//Ana Luiza Gonçalves Campos - 21/08/2023
//Descricao: programa para mostrar os alturas de cm para in dowhile

#include <stdio.h>

int main (){
	int cm=150;
	float in;
	
	do{
		cm=cm+5;
		in=cm/2.54;
		printf("Altura (cm) : %d cm    Altura (in) : %.2f in\n",cm,in);
		
	}while(cm<190);
	
	return 0;
}
