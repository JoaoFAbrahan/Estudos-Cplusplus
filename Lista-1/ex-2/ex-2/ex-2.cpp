/*
	EXERCÍCIO 2:
		Faça um programa que leia um número real e o imprima.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float numero;

	std::cout << "Digite um número real:" << std::endl;
	std::cin >> numero;
	std::cout << "O número digitado foi: " << numero << std::endl;
}