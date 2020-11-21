/*
	EXERCÍCIO 3:
		Digite um nome, calcule e retorne quantas letras tem esse nome.
*/
#include<iostream>
#include<locale>
#include<string>

int main()
{
	std::string nome;
	int quantidadeLetras = 0;

	std::cout << "Digite um nome:" << std::endl;
	std::getline(std::cin, nome);
	std::cout << std::endl;

	for (int i = 0; i < nome.length(); i++)
	{
		//Faz a contagem das letras, ignorando espaços.
		if (nome[i] != ' ')
		{
			quantidadeLetras++;
		}
	}

	std::cout << "O nome possui " << quantidadeLetras << " letras." << std::endl;
}