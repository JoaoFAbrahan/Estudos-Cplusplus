/*
	EXERCÍCIO 2:
		Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiúscula ou minúscula).
*/
#include<iostream>
#include<locale>
#include<string>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::string nome;

	std::cout << "Digite um nome:" << std::endl;
	std::getline(std::cin, nome);
	std::cout << std::endl;

	if (nome.front() == 'a' || nome.front() == 'A')
	{
		std::cout << nome << std::endl;
	}
}