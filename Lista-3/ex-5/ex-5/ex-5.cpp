/*
	EXERC�CIO 5:
		Escreva um algoritmo que leia certa quantidade de n�meros e imprima o maior deles e quantas vezes o maior n�mero foi lido. 
		A quantidade de n�meros a serem lidos deve ser fornecida pelo usu�rio.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero, qtdNumero, contador = 0, maior = 0;

	std::cout << "Digite quantos n�meros voc� deseja digitar." << std::endl;
	std::cin >> qtdNumero;

	for (int i = 0; i < qtdNumero; i++)
	{
		std::cout << "Digite o " << i + 1 << "� n�mero:" << std::endl;
		std::cin >> numero;

		if (maior == numero)
		{
			contador++;
		}
		else if (maior < numero)
		{
			contador = 1;
			maior = numero;
		}
	}
	std::cout << std::endl << std::endl;

	std::cout << "O maior n�mero �: " << maior << " e ele foi digitado " << contador << " vezes." << std::endl;
}