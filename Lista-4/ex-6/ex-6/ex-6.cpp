/*
	EXERC�CIO 6:
		Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e exiba o maior endere�o.
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
		std::cout << "O maior �: " << &numero1 << std::endl;
	}
	else
	{
		std::cout << "O maior �: " << &numero2 << std::endl;
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
		std::cout << "O maior �: " << ponteiro1 << std::endl;
	}
	else
	{
		std::cout << "O maior �: " << ponteiro2 << std::endl;
	}
}