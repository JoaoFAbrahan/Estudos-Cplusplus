/*
	EXERCÍCIO 5:
		Faça um programa que leia dois números inteiros e imprima o maior deles, assim como a diferença existente entre eles.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero1, numero2, diferenca;

	std::cout << "Digite dois números inteiros:" << std::endl;
	std::cin >> numero1 >> numero2;

	if (numero1 > numero2)
	{
		std::cout << "O maior é: " << numero1 << " a diferença entre os dois é: " << numero1 - numero2 << std::endl;
	}
	else
	{
		std::cout << "O maior é: " << numero2 << " a diferença entre os dois é: " << numero2 - numero1 << std::endl;
	}
}