/*
	EXERC�CIO 6:
		Escreva um algoritmo que leia um n�mero inteiro entre 100 e 999 e imprima na sa�da cada um dos algarismos que comp�em o n�mero.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	std::cout << "Digite um n�mero de 3 d�gitos: (100 � 999)" << std::endl;
	std::cin >> numero;

	for (int i = 0; i < 3; i++)
	{
		std::cout << numero % 10;
		numero /= 10;
	}


	std::cout << std::endl;
}