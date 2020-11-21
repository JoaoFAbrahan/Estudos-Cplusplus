/*
	EXERCÍCIO 2:
		Utilizando a biblioteca <cmath>, faça um programa que leia um número inteiro positivo e imprima:
			a)	O quadrado do número lido;
			b)	A raiz quadrada do número lido;
			c)	O seno do número lido;
			d)	O cosseno do número lido.
*/
#include<iostream>
#include<locale>
#include<cmath>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	std::cout << "Digite um número inteiro positivo:" << std::endl;
	std::cin >> numero;
	std::cout << std::endl;

	std::cout << "a) Quadrado:	" << pow(numero, 2) << std::endl;
	std::cout << "b) Raiz:	" << sqrt(numero) << std::endl;
	std::cout << "c) Seno:	" << sin(numero) << std::endl;
	std::cout << "d) Cosseno:	" << cos(numero) << std::endl;
}