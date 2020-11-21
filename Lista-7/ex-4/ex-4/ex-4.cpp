/*
	EXERCÍCIO 4:
		Faça um programa que receba dois arquivos do usuário, e crie um terceiro arquivo com o conteúdo dos dois primeiros 
		juntos (o conteúdo do primeiro seguido do conteúdo do segundo).
*/
#include<iostream>
#include<locale>
#include<string>
#include<fstream>

bool abrirLeituraArquivo(std::fstream* arquivo);
void fecharArquivo(std::fstream* arquivo);

void juntarArquivos(std::fstream* arq1, std::fstream* arq2);
std::string copiaTexto(std::fstream** arquivo);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::fstream arquivo1, arquivo2;

	std::cout << "- - - 1º ARQUIVO - - -" << std::endl;
	if (abrirLeituraArquivo(&arquivo1))
	{
		std::cout << "- - - 2º ARQUIVO - - -" << std::endl;
		if (abrirLeituraArquivo(&arquivo2))
		{
			juntarArquivos(&arquivo1, &arquivo2);
		}
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
		std::cout << "Arquivo não localizado!" << std::endl;
		return false;
	}
}

void fecharArquivo(std::fstream* arquivo)
{
	arquivo->close();
}

void juntarArquivos(std::fstream* arq1, std::fstream* arq2)
{
	std::ofstream arquivoFinal;
	arquivoFinal.open("arqFinal.txt", std::ios::out);

	arquivoFinal << copiaTexto(&arq1) << std::endl << std::endl << copiaTexto(&arq2);

	arquivoFinal.close();
}

std::string copiaTexto(std::fstream** arquivo)
{
	std::string txt, line;

	while (std::getline(**arquivo, line))
	{
		txt += line + "\n";
	}

	return txt;
}