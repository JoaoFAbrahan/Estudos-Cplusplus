/*
	EXERC�CIO 8:
		Leia uma velocidade em km/h (quil�metros por hora) e apresente-a convertida em m/s (metros por segundo). 
		A f�rmula de convers�o �: M = K / 3.6, sendo K a velocidade em km/h e M em m/s.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float quilometrosHora, metrosSegundo;

	std::cout << "Digite uma velocidade em Km/h:" << std::endl;
	std::cin >> quilometrosHora;

	metrosSegundo = quilometrosHora / 3.6;

	std::cout << "A velocidade convertida em M/s �: " << metrosSegundo << std::endl;
}