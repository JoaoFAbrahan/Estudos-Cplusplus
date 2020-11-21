/*
	DESAFIO 1:
		Crie um programa que declare uma estrutura (struct) para o cadastro de alunos.
			a.	Deverão ser armazenados, para cada aluno: matrícula, sobrenome e ano de nascimento.
			b.	Ao início do programa, o usuário deverá informar o número de alunos que serão armazenados
			c.	O programa deverá alocar dinamicamente a quantidade necessária de memória para armazenar os registros dos alunos.
			d.	O programa deverá pedir ao usuário que entre com as informações dos alunos.
			e.	Ao final, mostrar os dados armazenados e liberar a memória alocada.
*/
#include<iostream>
#include<locale>
#include<string>

//Declarando struct
struct Cadastro
{
	int matricula;
	std::string sobrenome;
	int nascimento;
};


//Funções do programa
Cadastro* alocacaoDinamica(int* length);

void cadastrandoAlunos(Cadastro vetor[], int length);
void apresentar(Cadastro vetor[], int length);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	Cadastro* vetorAlunos;
	int length;

	//Alocação dinâmica
	vetorAlunos = alocacaoDinamica(&length);

	cadastrandoAlunos(vetorAlunos, length);
	apresentar(vetorAlunos, length);

	//Liberar memória
	free(vetorAlunos);
}

Cadastro* alocacaoDinamica(int* length)
{
	std::cout << "Digite a quantidade de alunos a ser cadastrado:" << std::endl;
	std::cin >> *length;
	system("cls");

	return (Cadastro*)malloc(*length * sizeof(Cadastro));
}

void cadastrandoAlunos(Cadastro vetor[], int length)
{
	std::cout << "- - - - CADSTRANDO - - - -" << std::endl;
	for (int i = 0; i < length; i++)
	{
		std::cout << "ALUNO " << i + 1 << ":" << std::endl;
		std::cout << "Matricula: ";
		std::cin >> vetor[i].matricula;
		std::cout << "Sobrenome: ";
		std::cin.ignore();
		std::getline(std::cin, vetor[i].sobrenome);
		std::cout << "Ano de Nascimento: ";
		std::cin >> vetor[i].nascimento;
		std::cout << std::endl;
	}
	system("cls");
}

void apresentar(Cadastro vetor[], int length)
{
	std::cout << "- - - - APRESENTAR - - - -" << std::endl;
	for (int i = 0; i < length; i++)
	{
		std::cout << "ALUNO " << i + 1 << ":" << std::endl;
		std::cout << "Matricula: " << vetor[i].matricula << std::endl;
		std::cout << "Sobrenome: " << vetor[i].sobrenome << std::endl;
		std::cout << "Ano de Nascimento: " << vetor[i].nascimento << std::endl;
		std::cout << std::endl;
	}
}