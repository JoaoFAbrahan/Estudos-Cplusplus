/*
	EXERC�CIO 3:
		Fa�a um programa que leia 10 inteiros positivos, ignorando n�o positivos, e imprima sua m�dia.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero, soma = 0;

	int cont = 0;
	while (cont < 10)
	{
		std::cout << "Digite um n�mero positivo:" << std::endl;
		std::cin >> numero;

		if (numero >= 0)
		{
			soma += numero;
			cont++;
		}
	}
	std::cout << std::endl << std::endl;

	float media = soma / 10;

	std::cout << "A m�dia dos n�meros digitados �: " << media << std::endl;
}