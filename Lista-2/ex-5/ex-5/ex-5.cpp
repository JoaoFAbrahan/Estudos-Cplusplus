/*
	EXERC�CIO 5:
		Fa�a um programa que leia dois n�meros inteiros e imprima o maior deles, assim como a diferen�a existente entre eles.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero1, numero2, diferenca;

	std::cout << "Digite dois n�meros inteiros:" << std::endl;
	std::cin >> numero1 >> numero2;

	if (numero1 > numero2)
	{
		std::cout << "O maior �: " << numero1 << " a diferen�a entre os dois �: " << numero1 - numero2 << std::endl;
	}
	else
	{
		std::cout << "O maior �: " << numero2 << " a diferen�a entre os dois �: " << numero2 - numero1 << std::endl;
	}
}