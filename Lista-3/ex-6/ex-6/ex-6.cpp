/*
	EXERCÍCIO 6:
		Escreva um algoritmo que leia um número inteiro entre 100 e 999 e imprima na saída cada um dos algarismos que compõem o número.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	std::cout << "Digite um número de 3 dígitos: (100 à 999)" << std::endl;
	std::cin >> numero;

	for (int i = 0; i < 3; i++)
	{
		std::cout << numero % 10;
		numero /= 10;
	}


	std::cout << std::endl;
}