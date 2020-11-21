/*
	EXERCÍCIO 7:
		Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. 
		A fórmula de conversão é: C = 5.0 * (F - 32.0) / 9.0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float celsius, fahrenheit;

	std::cout << "Digite uma temperatura em graus Fahrenheit:" << std::endl;
	std::cin >> fahrenheit;

	celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

	std::cout << "A temperatura convertida para graus Celsius é: " << celsius << "º" << std::endl;
}