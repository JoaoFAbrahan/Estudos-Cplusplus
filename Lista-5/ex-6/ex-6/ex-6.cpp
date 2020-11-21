/*
	EXERC�CIO 6:
		Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e imprima todos os n�meros naturais de 0 at� N em ordem decrescente.
*/
#include<iostream>
#include<locale>

void imprimeNumeros(int n);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int n;

	std::cout << "Digite um n�mero:" << std::endl;
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