/*
	EXERC�CIO 1:
		Fa�a um programa que leia um n�mero inteiro, incremente 1 a ele e o imprima
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	std::cout << "Digite um n�mero inteiro:" << std::endl;
	std::cin >> numero;

	numero++;

	std::cout << "Incrementado (1): " << numero << std::endl;
}