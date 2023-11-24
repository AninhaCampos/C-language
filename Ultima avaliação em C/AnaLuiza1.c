//Ana Luiza Goncalves Campos- Questao 1

#include <stdio.h>
#include <stdlib.h>

struct Alunos {
	char nome[25];
	int matricula;
	char curso[25];
};
int main(){
	
	struct Alunos a;
	
	printf("Digite seu nome:\n");
	gets(a.nome);
	
	printf("Digite seu curso:\n");
	gets(a.curso);
	
	printf("Digite sua matricula:\n");
	scanf("%d",&a.matricula);
	
	printf("Nome:%s\n",a.nome);
	printf("Matricula: %d\n",a.matricula);
	printf("Curso:%s\n",a.curso);
	
	return 0;
}
