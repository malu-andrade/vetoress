#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Endereco{
	char logradouro[100];
	int numero;
	char complemento[100];
	char bairro[100];
	char cidade[100];
	char estado[100];
};

struct Aluno{
	char nome[200];
	char cpf[14];
	int idade;
	char matricula[12];
	float av1;
	float av2;
	float av3;
	struct Endereco end_domiciliar;
};

struct Pessoa{
	char nome[200];
	char cpf[14];
	int idade;
};

int main(int argc, char* argv[]){
	
	struct Pessoa p1[10];	
	struct Aluno turma[30];
	
	strcpy(turma[0].end_domiciliar.bairro, "Tejipió");
	strcpy(p1[0].nome, "Paulo Henrique");
	strcpy(p1[0].cpf , "123.984.049-48");
	p1[0].idade = 33;
	
	gets(turma[0].end_domiciliar.bairro);
	
	printf("Nome: %s \n", p1[0].nome);
	printf("CPF: %s \n", p1[0].cpf);
	printf("Idade: %d \n", p1[0].idade);	
}
