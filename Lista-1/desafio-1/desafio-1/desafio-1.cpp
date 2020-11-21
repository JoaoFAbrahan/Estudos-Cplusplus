/*
	DESAFIO 1:
		Fa�a um programa que leia um n�mero inteiro positivo de tr�s d�gitos (de 100 a 999). 
		Gere outro n�mero formado pelos d�gitos invertidos do n�mero lido.
		exemplo:
			N�meroLido = 123
			N�meroGerado = 321.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero, unidade, dezena, centena;

	std::cout << "Digite um n�mero de tr�s d�gitos (100 a 999):" << std::endl;
	std::cin >> numero;

	unidade = numero % 10;			// 3
	numero /= 10; // 123 -> 12
	dezena = numero % 10;			// 2
	centena = numero / 10;			// 1

	std::cout << unidade << dezena << centena << std::endl;
}