/*
	EXERC�CIO 5:
		Leia um n�mero real e imprima a quinta parte deste n�mero.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float numero;

	std::cout << "Digite um n�mero real:" << std::endl;
	std::cin >> numero;

	numero /= 5;

	std::cout << "A quinta parte do n�mero digitado �: " << numero << std::endl;
}