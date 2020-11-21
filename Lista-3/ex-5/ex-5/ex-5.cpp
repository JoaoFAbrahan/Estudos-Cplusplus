/*
	EXERCÍCIO 5:
		Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles e quantas vezes o maior número foi lido. 
		A quantidade de números a serem lidos deve ser fornecida pelo usuário.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero, qtdNumero, contador = 0, maior = 0;

	std::cout << "Digite quantos números você deseja digitar." << std::endl;
	std::cin >> qtdNumero;

	for (int i = 0; i < qtdNumero; i++)
	{
		std::cout << "Digite o " << i + 1 << "º número:" << std::endl;
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

	std::cout << "O maior número é: " << maior << " e ele foi digitado " << contador << " vezes." << std::endl;
}