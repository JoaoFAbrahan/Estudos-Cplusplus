#include "Funcionario.h"

Funcionario::Funcionario()
{
	std::cout << "- - - - CADASTRO: - - - -" << std::endl;
	std::cout << "Nome: ";
	std::getline(std::cin, nome);
	std::cout << "Sal�rio: R$";
	std::cin >> salario;
	std::cout << std::endl;

	std::cout << "- - - DATA DE CADASTRO - - -" << std::endl;
	std::cout << "Dia: ";
	std::cin >> admicao.dia;
	std::cout << "M�s: ";
	std::cin >> admicao.mes;
	std::cout << "Ano: ";
	std::cin >> admicao.ano;
	std::cout << std::endl;

	std::cout << "Cadastrado com sucesso!!!" << std::endl;
	std::cin.ignore();
	system("pause");
}
Funcionario::~Funcionario()
{
	std::cout << "Funcion�rio: " << nome << std::endl;
	std::cout << "Dispensado!!!" << std::endl;
	system("pause");
}
void Funcionario::getInformacoes()
{
	std::cout << "- -  FICHA DO FUNCION�RIO: - - " << std::endl;
	std::cout << "Nome: " << nome << std::endl;
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "Sal�rio: R$" << salario << std::endl;
	std::cout << "Data de contrata��o: " << admicao.dia << "/" << admicao.mes << "/" << admicao.ano << std::endl;
	std::cout << std::endl;

	system("pause");
}
std::string Funcionario::busca()
{
	return nome;
}