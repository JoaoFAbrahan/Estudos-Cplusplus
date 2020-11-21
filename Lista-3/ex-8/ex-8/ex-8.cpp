/*
	EXERC�CIO 8:
		Fa�a uma fun��o para verificar se um n�mero � positivo ou negativo. Sendo que o valor de retorno ser� 1 se positivo, -1 se negativo e 0 se for igual a 0.
*/
#include<iostream>
#include<locale>

int verifica_Numero(int numero);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	std::cout << "Digite um n�mero:" << std::endl;
	std::cin >> numero;

	std::cout << verifica_Numero(numero) << std::endl;
}

int verifica_Numero(int numero)
{
	if (numero > 0)
	{
		return 1;
	}
	else if (numero < 0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}