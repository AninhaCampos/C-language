#include <stdio.h>

struct Aluno {
	char nome[50];
	float nota;
};

int main(){
	int i;
	struct Aluno alunos[5];
	
	for(i=0; i<5; i++){
		
		printf("Digite o nome do aluno %d: \n",i+1);
		scanf("%s",alunos[i].nome);
		
		printf("Digite a nota do aluno %d: \n",i+1);
		scanf("%f",&alunos[i].nota);
	}
	
	for(i=0; i<5; i++){
	
	printf("Aluno: %d\n",i+1);
	printf("Nome: %s\n",alunos[i].nome);
	printf("Nota: %.2f\n",alunos[i].nota);
	
	}
	
	return 0;
	
}
