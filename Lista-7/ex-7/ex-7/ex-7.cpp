/*
	EXERC�CIO 7:
		Elabore um programa que disponha de enumeradores para representar os 4 cargos de funcion�rios de uma empresa, e mais 2 setores de servi�o para cada cargo.
		EXEMPLO:
			Cargos: Vendedor, Almoxarife, Gerente, Rela��es P�blicas.
			Setores: Interno, Externo.
*/
#include<iostream>
#include<locale>
#include<string>
#include<fstream>

//Declarando enumeradores
enum Cargos
{
	Vendedor, Almoxarife, Gerente, RelacoesPublicas
};

enum Setores
{
	Interno, Externo
};


//Declarando structs
typedef struct Funcionario
{
	Cargos cargo;
	Setores setor;
}t_Funcionario;


//Fun��es do programa
void cadastrarFuncionario(t_Funcionario* funcionaro);
Cargos cadastroCargo();
Setores cadastroSetor();

void apresentar(t_Funcionario* funcionario);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	t_Funcionario funcionarioEmpresa;

	cadastrarFuncionario(&funcionarioEmpresa);
	apresentar(&funcionarioEmpresa);
}

void cadastrarFuncionario(t_Funcionario* funcionaro)
{
	funcionaro->cargo = cadastroCargo();
	funcionaro->setor = cadastroSetor();
}
Cargos cadastroCargo()
{
	char opcao;
	bool loop;
	do
	{
		system("cls");
		loop = false;

		std::cout << "- - - CADASTRANDO FUNCIONARIO - - -" << std::endl;
		std::cout << "- - - - - - - CARGO - - - - - - - -" << std::endl;
		std::cout << "1 - Vendedor" << std::endl << "2 - Almoxarife" << std::endl << "3 - Gerente" << std::endl << "4 - Rela��es P�blicas" << std::endl;
		std::cin >> opcao;
		std::cout << std::endl;

		switch (opcao)
		{
		case '1':
			return Vendedor;
			break;
		case '2':
			return Almoxarife;
			break;
		case '3':
			return Gerente;
			break;
		case '4':
			return RelacoesPublicas;
			break;
		default:
			loop = true;
			std::cout << "Op��o Inv�lida!" << std::endl;
			system("pause");
			break;
		}
	} while (loop == true);
}
Setores cadastroSetor()
{
	char opcao;
	bool loop;
	do
	{
		system("cls");
		loop = false;

		std::cout << "- - - CADASTRANDO FUNCIONARIO - - -" << std::endl;
		std::cout << "- - - - - - - SETOR - - - - - - - -" << std::endl;
		std::cout << "1 - Interno" << std::endl << "2 - Externo" << std::endl;
		std::cin >> opcao;
		std::cout << std::endl;

		switch (opcao)
		{
		case '1':
			return Interno;
			break;
		case '2':
			return Externo;
			break;
		default:
			loop = true;
			std::cout << "Op��o Inv�lida!" << std::endl;
			system("pause");
			break;
		}
	} while (loop == true);
}

void apresentar(t_Funcionario* funcionario)
{
	std::cout << "Funcion�rio Cadastrado!" << std::endl;
	std::cout << "Cargo: ";
	switch (funcionario->cargo)
	{
	case Vendedor:
		std::cout << "Vendedor" << std::endl;
		break;
	case Almoxarife:
		std::cout << "Almoxarife" << std::endl;
		break;
	case Gerente:
		std::cout << "Gerente" << std::endl;
		break;
	case RelacoesPublicas:
		std::cout << "Rela��es P�blicas" << std::endl;
		break;
	}

	std::cout << "Setor: ";
	switch (funcionario->setor)
	{
	case Interno:
		std::cout << "Interno" << std::endl;
		break;
	case Externo:
		std::cout << "Externo" << std::endl;
		break;
	}
}