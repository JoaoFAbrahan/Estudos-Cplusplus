/*
	EXERC�CIO 2:
		Utilizando a biblioteca <cmath>, fa�a um programa que leia um n�mero inteiro positivo e imprima:
			a)	O quadrado do n�mero lido;
			b)	A raiz quadrada do n�mero lido;
			c)	O seno do n�mero lido;
			d)	O cosseno do n�mero lido.
*/
#include<iostream>
#include<locale>
#include<cmath>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	std::cout << "Digite um n�mero inteiro positivo:" << std::endl;
	std::cin >> numero;
	std::cout << std::endl;

	std::cout << "a) Quadrado:	" << pow(numero, 2) << std::endl;
	std::cout << "b) Raiz:	" << sqrt(numero) << std::endl;
	std::cout << "c) Seno:	" << sin(numero) << std::endl;
	std::cout << "d) Cosseno:	" << cos(numero) << std::endl;
}