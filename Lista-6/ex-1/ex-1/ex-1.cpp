/*
	EXERCÍCIO 1:
		Faça um programa que leia uma string e a imprima.
*/
#include<iostream>
#include<locale>
#include<string>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::string texto;

	std::cout << "Digite uma palavra qualquer:" << std::endl;
	std::getline(std::cin, texto);
	std::cout << std::endl;

	std::cout << texto << std::endl;
}