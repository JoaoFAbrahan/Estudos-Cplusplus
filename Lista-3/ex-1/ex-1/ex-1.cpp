/*
	EXERCÍCIO 1:
		Escreva um programa que escreva na tela, de 1 até 50, de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura
		de repetição for, a segunda while, e a terceira do-while.
*/
#include<iostream>

int main()
{
	for (int i = 0; i < 50; i++)
	{
		std::cout << i + 1 << " ";
	}
	std::cout << std::endl << std::endl;

	int cont = 0;
	while (cont < 50)
	{
		std::cout << cont + 1 << " ";
		cont++;
	}
	std::cout << std::endl << std::endl;

	cont = 0;
	do
	{
		std::cout << cont + 1 << " ";
		cont++;
	} while (cont < 50);
	std::cout << std::endl << std::endl;
}