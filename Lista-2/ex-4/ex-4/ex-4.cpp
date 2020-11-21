/*
	EXERC�CIO 4:
		Leia um n�mero real. Se o n�mero for positivo imprima a raiz quadrada. Do contr�rio, imprima o n�mero ao quadrado.
*/
#include<iostream>
#include<locale>
#include<cmath>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float numero;

	std::cout << "Digite um n�mero real:" << std::endl;
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