/*
	EXERC�CIO 3:
		Pe�a ao usu�rio para digitar tr�s valores inteiros e imprima a soma deles.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero1, numero2, numero3;

	std::cout << "Digite 3 numeros inteiros:" << std::endl;
	std::cin >> numero1 >> numero2 >> numero3;

	numero1 += numero2 + numero3;

	std::cout << "O resultado da soma dos 3 valores �: " << numero1 << std::endl;
}