/*
	EXERC�CIO 2:
		Fa�a um programa que leia um n�mero real e o imprima.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float numero;

	std::cout << "Digite um n�mero real:" << std::endl;
	std::cin >> numero;
	std::cout << "O n�mero digitado foi: " << numero << std::endl;
}