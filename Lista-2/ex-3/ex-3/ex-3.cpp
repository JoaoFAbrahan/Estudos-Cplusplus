/*
	EXERCÍCIO 3:
		Faça um programa que receba um número e verifique se este número é par ou ímpar.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	std::cout << "Digite um número inteiro:" << std::endl;
	std::cin >> numero;

	if (numero % 2 == 0)
	{
		std::cout << "Número é Par!" << std::endl;
	}
	else
	{
		std::cout << "Número é Ímpar!" << std::endl;
	}
}