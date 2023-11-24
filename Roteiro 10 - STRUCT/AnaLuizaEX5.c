#include <stdio.h>

struct Aluno {
	char nome[50];
	float nota;
};

void imprimirAluno(struct Aluno a){
	printf("Nome: %s\n",a.nome);
	printf("Nota: %.2f\n",a.nota);
	
}

int main(){
	struct Aluno aluno1;
	
	strcpy(aluno1.nome,"Maria");
	aluno1.nota=10;
	
	imprimirAluno(aluno1);
	
	return 0;
}
