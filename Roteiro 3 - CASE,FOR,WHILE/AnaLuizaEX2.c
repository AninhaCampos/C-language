//Ana Luiza Goncalves Campos - 14/08/2023
//Descricao: programa solicitar uma letra e exibir se ela eh vogal ou consoante

#include <stdio.h>

int main (){
	
	char x;
	int y;
	
	printf("Digite uma letra:\n");
	scanf("%c",&x);

	switch(x){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'U':
		case 'u':	
			printf("%c eh uma vogal",x);
			break;
	
	default:
		printf("%c eh uma consoante",x);
	}

	return 0;
}
