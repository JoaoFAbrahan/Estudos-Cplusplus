/*
	EXERC�CIO 7:
		Ler 3 n�meros e dizer se todos s�o diferentes entre si, se h� 2 iguais, ou todos iguais.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero1, numero2, numero3;

	std::cout << "Digite 3 n�meros inteiros:" << std::endl;
	std::cin >> numero1 >> numero2 >> numero3;

	if (numero1 == numero2 && numero2 == numero3)
	{
		std::cout << "Todos s�o iguis." << std::endl;
	}
	else if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3)
	{
		std::cout << "Dois s�o iguais." << std::endl;
	}
	else
	{
		std::cout << "Todos s�o diferentes." << std::endl;
	}
}