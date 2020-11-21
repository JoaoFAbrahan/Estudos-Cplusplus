/*
	EXERCÍCIO 5:
		Leia um número real e imprima a quinta parte deste número.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float numero;

	std::cout << "Digite um número real:" << std::endl;
	std::cin >> numero;

	numero /= 5;

	std::cout << "A quinta parte do número digitado é: " << numero << std::endl;
}