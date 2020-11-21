/*
	EXERCÍCIO 7:
		Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.
*/
#include<iostream>
#include<locale>
#include<string>

//Criando a estrutura
typedef struct Dados
{
	std::string nome;
	int idade;
	std::string endereco;
}t_Dados;

//Funções do programa
void apresentarDados(t_Dados pessoa);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//declarando a estrutura
	t_Dados pessoa;

	//Entrada de dados
	std::cout << "Digite os dados de uma pessoa:" << std::endl << "Nome: ";
	std::getline(std::cin, pessoa.nome);
	std::cout << "Idade: ";
	std::cin >> pessoa.idade;
	std::cin.ignore();
	std::cout << "Endereço: ";
	std::getline(std::cin, pessoa.endereco);
	std::cout << std::endl;

	//Apresentando dados na estrutura
	apresentarDados(pessoa);
}

void apresentarDados(t_Dados pessoa)
{
	std::cout << "DADOS DO USUÁRIO:" << std::endl;
	std::cout << pessoa.nome << std::endl << pessoa.idade << std::endl << pessoa.endereco << std::endl;
}