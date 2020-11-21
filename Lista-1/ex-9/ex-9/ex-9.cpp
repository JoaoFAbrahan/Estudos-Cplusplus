/*
	ESERCÍCIO 9:
		Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilômetros por hora).
		A fórmula de conversão é: K = M * 3.6, sendo K a velocidade em km/h e M em m/s.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float metrosSegundo, quilometrosHora;

	std::cout << "Digite uma velocidade em M/s:" << std::endl;
	std::cin >> metrosSegundo;

	quilometrosHora = metrosSegundo * 3.6;

	std::cout << "A velocidade digitada convertida para Km/H é: " << quilometrosHora << "º" << std::endl;
}