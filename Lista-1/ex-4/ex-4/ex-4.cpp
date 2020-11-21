/*
	EXECÍCIO 4:
		Leia um número real e imprima o resultado do quadrado desse número.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float numero;

	std::cout << "Digite um número real:" << std::endl;
	std::cin >> numero;

	numero *= numero;

	std::cout << "O quadrado do número digitado é: " << numero << std::endl;
}