/*
	EXERCÍCIO 9:
		Faça uma função recursiva que permita inverter um número inteiro N.
		Exemplo: 123 ==> -321.
		-123 = 3-2-1
*/
#include<iostream>
#include<locale>

void inverterNumero(int n, int cont = 0);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	std::cout << "Digite um número:" << std::endl;
	std::cin >> numero;
	std::cout << std::endl;

	inverterNumero(numero);
}

void inverterNumero(int n, int cont)
{
	//Inverte o sinal do número
	if (cont == 0)
	{
		//Caso o numero seja positivo, inverte apenas a primeira casa
		if (n > 0)
		{
			std::cout << (n % 10) * -1;
			cont++;
			inverterNumero(n / 10, cont);

		}
		//caso o número seja negativo, inverte todo o valor de n
		else
		{
			n *= -1;
			std::cout << n % 10;
			cont++;
			inverterNumero(n / 10, cont);
		}
	}
	else if (n != 0)
	{
		std::cout << n % 10;
		inverterNumero(n / 10, cont);
	}
}