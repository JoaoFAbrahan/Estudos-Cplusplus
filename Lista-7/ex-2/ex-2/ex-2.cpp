/*
	EXERCÍCIO 2:
		Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas esse arquivo possui.
*/
#include<iostream>
#include<locale>
#include<string>
#include<fstream>

bool abrirLeituraArquivo(std::fstream* arquivo);
void fecharArquivo(std::fstream* arquivo);

void contaLinhas(std::fstream* arquivo);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::fstream arquivo;

	if (abrirLeituraArquivo(&arquivo))
	{
		contaLinhas(&arquivo);
		fecharArquivo(&arquivo);
	}
}

bool abrirLeituraArquivo(std::fstream* arquivo)
{
	std::string nomeArquivo;
	std::cout << "Digite o nome do arquivo." << std::endl;
	std::getline(std::cin, nomeArquivo);
	std::cout << std::endl;

	arquivo->open(nomeArquivo, std::ios::in);

	if (arquivo->is_open())
	{
		std::cout << "Arquivo Localizado!" << std::endl << std::endl;
		return true;
	}
	else
	{
		std::cout << "Arquivo não Localizado!" << std::endl;
		return false;
	}
}

void fecharArquivo(std::fstream* arquivo)
{
	arquivo->close();
}

void contaLinhas(std::fstream* arquivo)
{
	std::string line;
	int cont = 0;

	while (std::getline(*arquivo, line))
	{
		cont++;
	}

	std::cout << "Existem " << cont << " Linhas no arquivo." << std::endl;
}