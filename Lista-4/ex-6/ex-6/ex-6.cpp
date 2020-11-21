/*
	EXERCÍCIO 6:
		Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero1, numero2;

	//Modo de resolver sem usar ponteiros
	std::cout << "SEM PONTEIROS:" << std::endl;
	if (&numero1 > &numero2)
	{
		std::cout << "O maior é: " << &numero1 << std::endl;
	}
	else
	{
		std::cout << "O maior é: " << &numero2 << std::endl;
	}
	std::cout << std::endl;


	//Modo de resolver usando ponteiros
	int* ponteiro1;
	int* ponteiro2;

	ponteiro1 = &numero1;
	ponteiro2 = &numero2;

	std::cout << "USANDO PONTEIROS:" << std::endl;
	if (ponteiro1 > ponteiro2)
	{
		std::cout << "O maior é: " << ponteiro1 << std::endl;
	}
	else
	{
		std::cout << "O maior é: " << ponteiro2 << std::endl;
	}
}