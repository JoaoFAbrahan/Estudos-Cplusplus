/*
	EXERCÍCIO 7:
		Ler 3 números e dizer se todos são diferentes entre si, se há 2 iguais, ou todos iguais.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero1, numero2, numero3;

	std::cout << "Digite 3 números inteiros:" << std::endl;
	std::cin >> numero1 >> numero2 >> numero3;

	if (numero1 == numero2 && numero2 == numero3)
	{
		std::cout << "Todos são iguis." << std::endl;
	}
	else if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3)
	{
		std::cout << "Dois são iguais." << std::endl;
	}
	else
	{
		std::cout << "Todos são diferentes." << std::endl;
	}
}