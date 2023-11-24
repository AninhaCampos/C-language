#include <stdio.h>

struct Aluno {
	char nome[50];
	float nota;
};

int main(){
	
	struct Aluno aluno1;
	
	strcpy(aluno1.nome,"Joao");
	aluno1.nota=8.5;
	
	printf("Nome: %s\n",aluno1.nome);
	printf("Nota: %.2f\n",aluno1.nota);
	
	return 0;
	
}
