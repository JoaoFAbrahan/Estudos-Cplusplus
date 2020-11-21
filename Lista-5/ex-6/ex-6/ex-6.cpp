/*
	EXERCÍCIO 6:
		Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.
*/
#include<iostream>
#include<locale>

void imprimeNumeros(int n);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int n;

	std::cout << "Digite um número:" << std::endl;
	std::cin >> n;
	std::cout << std::endl;

	imprimeNumeros(n);
}

void imprimeNumeros(int n)
{
	if (n >= 0)
	{
		std::cout << n << " ";
		n--;
		imprimeNumeros(n);
	}
	else
	{
		std::cout << std::endl;
	}
}