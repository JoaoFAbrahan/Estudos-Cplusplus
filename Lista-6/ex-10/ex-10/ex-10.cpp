/*
	EXERCÍCIO 10:
		Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final), armazenando em um vetor. Uma vez lidos
		os dados, divida estes dados em 2 novos vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a média
		mínima para a aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados do vetor de reprovados.
*/
#include<iostream>
#include<locale>
#include<string>

//Declarando estrutura
typedef struct Aluno
{
	std::string nome;
	std::string matricula;
	float media;
}t_Aluno;


//Declarando length do vetor
int const LENGTH = 10;


//Funções do programa
void entradaDados(t_Aluno lista[LENGTH]);
void separaAprovadosEReprovados(t_Aluno lista[LENGTH], t_Aluno aprovados[LENGTH], t_Aluno reprovados[LENGTH]);
void apresentarDados(t_Aluno lista[LENGTH]);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	t_Aluno listaAlunos[LENGTH], listaAprovados[LENGTH], listaReprovados[LENGTH];

	entradaDados(listaAlunos);

	separaAprovadosEReprovados(listaAlunos, listaAprovados, listaReprovados);


	//Apresentando aprovados
	std::cout << "- - - ALUNOS APROVADOS: - - -" << std::endl;
	apresentarDados(listaAprovados);
	std::cout << std::endl << std::endl;

	//Apresentando reprovados
	std::cout << "- - - ALUNOS REPROVADOS: - - -" << std::endl;
	apresentarDados(listaReprovados);
	std::cout << std::endl;
}

void entradaDados(t_Aluno lista[LENGTH])
{
	std::cout << "- - - CADASTRANDO ALUNOS: - - -" << std::endl;
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << "ALUNO " << i + 1 << ":" << std::endl;
		std::cout << "Nome: ";
		std::getline(std::cin, lista[i].nome);
		std::cout << "Matricula: ";
		std::getline(std::cin, lista[i].matricula);
		std::cout << "Média Final: ";
		std::cin >> lista[i].media;
		std::cin.ignore();
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void separaAprovadosEReprovados(t_Aluno lista[LENGTH], t_Aluno aprovados[LENGTH], t_Aluno reprovados[LENGTH])
{
	int contAp = 0, contRp = 0;

	for (int i = 0; i < LENGTH; i++)
	{
		if (lista[i].media >= 5.0)
		{
			aprovados[contAp].nome = lista[i].nome;
			aprovados[contAp].matricula = lista[i].matricula;
			aprovados[contAp].media = lista[i].media;
			contAp++;
		}
		else
		{
			reprovados[contRp].nome = lista[i].nome;
			reprovados[contRp].matricula = lista[i].matricula;
			reprovados[contRp].media = lista[i].media;
			contRp++;
		}
	}
}

void apresentarDados(t_Aluno lista[LENGTH])
{
	for (int i = 0; i < LENGTH; i++)
	{
		if (lista[i].nome != "")
		{
			std::cout << "Aluno: " << lista[i].nome << std::endl;
			std::cout << "Matricula: " << lista[i].matricula << std::endl;
			std::cout << "Média Final: " << lista[i].media << std::endl;
			std::cout << std::endl;
		}
	}
}