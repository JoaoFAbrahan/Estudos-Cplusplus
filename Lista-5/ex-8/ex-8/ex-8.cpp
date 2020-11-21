/*
	EXERC�CIO 8:
		Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e retorne o fatorial desse n�mero.
*/
#include<iostream>
#include<locale>

double fatorial(double num);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;
	double fatorialNumero;

	std::cout << "Digite um n�mero:" << std::endl;
	std::cin >> numero;
	std::cout << std::endl;

	
	fatorialNumero = fatorial(numero);

	std::cout << "Fatorial de " << numero << " = " << fatorialNumero << std::endl;
}

double fatorial(double num)
{
	if (num > 1)
	{
		return num * fatorial(num - 1);
	}
	else
	{
		return num;
	}
}