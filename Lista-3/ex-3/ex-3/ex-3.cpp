/*
	EXERCÍCIO 3:
		Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.
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
		std::cout << "Digite um número positivo:" << std::endl;
		std::cin >> numero;

		if (numero >= 0)
		{
			soma += numero;
			cont++;
		}
	}
	std::cout << std::endl << std::endl;

	float media = soma / 10;

	std::cout << "A média dos números digitados é: " << media << std::endl;
}