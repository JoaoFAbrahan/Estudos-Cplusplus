/*
	EXERC�CIO 3:
		Fa�a um programa que receba um n�mero e verifique se este n�mero � par ou �mpar.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	std::cout << "Digite um n�mero inteiro:" << std::endl;
	std::cin >> numero;

	if (numero % 2 == 0)
	{
		std::cout << "N�mero � Par!" << std::endl;
	}
	else
	{
		std::cout << "N�mero � �mpar!" << std::endl;
	}
}