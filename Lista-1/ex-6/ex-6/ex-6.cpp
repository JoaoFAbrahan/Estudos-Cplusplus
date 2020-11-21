/*
	EXERCÍCIO 6:
		Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. 
		A fórmula de conversão é: F = C * (9.0 / 5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float celsius, fahrenheit;

	std::cout << "Digite a temperatura em graus Celsius:" << std::endl;
	std::cin >> celsius;

	fahrenheit = celsius * (9 / 5) + 32;

	std::cout << "A temperatura convertida para Fahrenheit é: " << fahrenheit << "º" << std::endl;
}