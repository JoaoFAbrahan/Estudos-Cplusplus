/*
	EXEC�CIO 4:
		Leia um n�mero real e imprima o resultado do quadrado desse n�mero.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float numero;

	std::cout << "Digite um n�mero real:" << std::endl;
	std::cin >> numero;

	numero *= numero;

	std::cout << "O quadrado do n�mero digitado �: " << numero << std::endl;
}