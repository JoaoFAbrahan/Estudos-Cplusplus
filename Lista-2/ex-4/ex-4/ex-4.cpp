/*
	EXERCÍCIO 4:
		Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado.
*/
#include<iostream>
#include<locale>
#include<cmath>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float numero;

	std::cout << "Digite um número real:" << std::endl;
	std::cin >> numero;

	if (numero >= 0)
	{
		std::cout << "Raiz:	" << sqrt(numero) << std::endl;
	}
	else
	{
		std::cout << "Quadrado:	" << pow(numero, 2) << std::endl;
	}
}