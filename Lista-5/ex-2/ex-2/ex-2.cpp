/*
	EXERC�CIO 2:
		Implemente uma fun��o que calcule a �rea da superf�cie e o volume de uma esfera de raio R. Essa fun��o deve obedecer ao prot�tipo:
		void calc_esfera(float R, float* area, float* volume);

		A �rea da superf�cie e o volume s�o dados, respectivamente, por:
		A = 4 * p * R�
		V = 4 / 3 * p * R�
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

	std::cout << "A �rea de superf�cie da esfera �: " << area << std::endl << "O volume da esfera �: " << volume << std::endl;
}

void calc_esfera(float R, float* area, float* volume)
{
	*area = 4 * PI * pow(R, 2);
	*volume = 4 / 3 * PI * pow(R, 3);
}