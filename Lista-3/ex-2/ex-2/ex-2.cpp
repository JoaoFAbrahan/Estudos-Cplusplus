/*
	EXERCÍCIO 2:
		Faça um programa que peça ao usuário para digitar 10 valores e some-os.
*/
#include<iostream>
#include<iostream>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero, soma = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Digite o " << i + 1 << "º valor:" << std::endl;
		std::cin >> numero;

		soma += numero; // => soma = soma + numero
	}
	std::cout << std::endl << std::endl;

	std::cout << "A soma de todos os números é: " << soma << std::endl;
}