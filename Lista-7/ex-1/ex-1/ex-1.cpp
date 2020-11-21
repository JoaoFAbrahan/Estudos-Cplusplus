/*
	EXERCÍCIO 1:
		Escreva um programa que:
		a.	Crie/abra um arquivo texto de nome “arq.txt”
		b.	Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre com o caractere ‘0’
		c.	Feche o arquivo

		Agora, abra e leia o arquivo, e escreva na tela todos os caracteres armazenados.
*/
#include<iostream>
#include<locale>
#include<string>
#include<fstream>

//Funções do programa
void abrirArquivo(std::fstream* arquivo);
bool abrirLeituraArquivo(std::fstream* arquivo);
void sairArquivo(std::fstream* arquivo);

void entradaDados(std::fstream* arquivo);
void apresentar(std::fstream* arquivo);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::fstream arquivo;

	abrirArquivo(&arquivo);
	entradaDados(&arquivo);
	sairArquivo(&arquivo);

	if (abrirLeituraArquivo(&arquivo))
	{
		apresentar(&arquivo);
		sairArquivo(&arquivo);
	}

}

void abrirArquivo(std::fstream* arquivo)
{
	arquivo->open("arq.txt", std::ios::out); //ZERAR e entao abrir
}

bool abrirLeituraArquivo(std::fstream* arquivo)
{
	arquivo->open("arq.txt", std::ios::in);

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

void sairArquivo(std::fstream* arquivo)
{
	arquivo->close();
}


void entradaDados(std::fstream* arquivo)
{
	char caracter;

	do
	{
		system("cls");

		std::cout << "Digite um caracter: (0 - Sair)" << std::endl;
		std::cin >> caracter;

		if (caracter != '0')
		{
			*arquivo << caracter << std::endl;
		}
	} while (caracter != '0');
}

void apresentar(std::fstream* arquivo)
{
	std::string line;

	std::cout << "- - - APRESENTANDO CONTEÚDO: - - -" << std::endl;
	while (std::getline(*arquivo, line))
	{
		std::cout << line << std::endl;
	}
}