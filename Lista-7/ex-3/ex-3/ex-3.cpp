/*
	EXERCÍCIO 3:
		Faça um programa que receba do usuário um arquivo texto e um caractere. Mostre na tela quantas vezes aquele caractere ocorre
		dentro do arquivo.
*/
#include<iostream>
#include<locale>
#include<string>
#include<fstream>

bool abrirLeituraArquivo(std::fstream* arquivo);
void fecharArquivo(std::fstream* arquivo);

void contaCaracter(std::fstream* arquivo);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::fstream arquivo;

	if (abrirLeituraArquivo(&arquivo))
	{
		contaCaracter(&arquivo);
		fecharArquivo(&arquivo);
	}
}

bool abrirLeituraArquivo(std::fstream* arquivo)
{
	std::string nomeArquivo;

	std::cout << "Digite o nome do arquivo:" << std::endl;
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

void contaCaracter(std::fstream* arquivo)
{
	std::string line;
	char caracter;
	int cont = 0;

	std::cout << "Digite um caractere para ser localizado:" << std::endl;
	std::cin >> caracter;

	while (std::getline(*arquivo, line))
	{
		for (int i = 0; i < line.length(); i++)
		{
			if (line[i] == caracter)
			{
				cont++;
			}
		}
	}

	std::cout << "Existem " << cont << " caracteres iguais ao '" << caracter << "' no arquivo." << std::endl;
}