/*
	EXERC�CIO 4:
		Fa�a um programa que leia um n�mero inteiro positivo par N e imprima todos os n�meros pares de 0 at� N em ordem crescente.
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

		std::cout << "Digite um n�mero par:" << std::endl;
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
			std::cout << "N�mero �MPAR!" << std::endl;
			system("pause");
		}
	} while (loop == true);
}