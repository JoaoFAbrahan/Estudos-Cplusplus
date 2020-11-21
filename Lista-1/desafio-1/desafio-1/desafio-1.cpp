/*
	DESAFIO 1:
		Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). 
		Gere outro número formado pelos dígitos invertidos do número lido.
		exemplo:
			NúmeroLido = 123
			NúmeroGerado = 321.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero, unidade, dezena, centena;

	std::cout << "Digite um número de três dígitos (100 a 999):" << std::endl;
	std::cin >> numero;

	unidade = numero % 10;			// 3
	numero /= 10; // 123 -> 12
	dezena = numero % 10;			// 2
	centena = numero / 10;			// 1

	std::cout << unidade << dezena << centena << std::endl;
}