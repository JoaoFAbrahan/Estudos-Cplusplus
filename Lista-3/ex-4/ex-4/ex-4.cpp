/*
	EXERCÍCIO 4:
		Faça um programa que leia um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem crescente.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	bool loop = true;
	do
	{
		system("cls");

		std::cout << "Digite um número par:" << std::endl;
		std::cin >> numero;

		if (numero % 2 == 0)
		{
			for (int i = 0; i <= numero; i++)
			{
				std::cout << i << " ";
			}
			std::cout << std::endl << std::endl;
			loop = false;
		}
		else
		{
			std::cout << "Número ÍMPAR!" << std::endl;
			system("pause");
		}
	} while (loop == true);
}