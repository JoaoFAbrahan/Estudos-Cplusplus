/*
	EXERCÍCIO 2:
		Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio R. Essa função deve obedecer ao protótipo:
		void calc_esfera(float R, float* area, float* volume);

		A área da superfície e o volume são dados, respectivamente, por:
		A = 4 * p * R²
		V = 4 / 3 * p * R³
*/
#include<iostream>
#include<locale>
#include<cmath>

#define PI 3.14

void calc_esfera(float R, float* area, float* volume);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float raio, area, volume;

	std::cout << "Digite o raio de uma esfera:" << std::endl;
	std::cin >> raio;

	calc_esfera(raio, &area, &volume);

	std::cout << "A área de superfície da esfera é: " << area << std::endl << "O volume da esfera é: " << volume << std::endl;
}

void calc_esfera(float R, float* area, float* volume)
{
	*area = 4 * PI * pow(R, 2);
	*volume = 4 / 3 * PI * pow(R, 3);
}