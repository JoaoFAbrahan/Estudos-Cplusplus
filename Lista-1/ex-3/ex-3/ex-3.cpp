/*
	EXERCÍCIO 3:
		Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
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

	std::cout << "O resultado da soma dos 3 valores é: " << numero1 << std::endl;
}