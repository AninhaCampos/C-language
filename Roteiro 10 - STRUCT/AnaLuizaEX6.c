#include <stdio.h>

struct Aluno {
	char nome[50];
	float nota;
};

struct Curso {
	struct Aluno alunos[5];
};

int main(){
	int i;
	struct Curso curso1;
	
	for(i=0;i<5;i++){
		printf("Digite o nome do aluno %d:", i+1);
		scanf("%s", curso1.alunos[i].nome);
		
		printf("Digite a nota do aluno %d ", i+1);
		scanf("%f",&curso1.alunos[i].nota);
		
	}
	
	for(i=0; i<5 ;i++){
		
		printf("Aluno %d\n",i+1);
		printf("Nome: %s\n",curso1.alunos[i].nome);
		printf("Nota: %.2f\n",curso1.alunos[i].nota);
		
	}
	
	return 0;
}
