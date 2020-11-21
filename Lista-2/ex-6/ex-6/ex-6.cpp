/*
	EXERCÍCIO 6:
		Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
			•	Homens: 	(72.7 * h) - 58
			•	Mulheres:	(62.1 * h) - 44.7
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float alturaUsuario;
	char generoUsuario;

	std::cout << "Escolha o gênero:" << std::endl << "1 - Masculino." << std::endl << "2 - Feminino." << std::endl;
	std::cin >> generoUsuario;
	std::cout << "Digite sua altura (Metros):" << std::endl;
	std::cin >> alturaUsuario;

	std::cout.precision(2);
	
	if (generoUsuario == '1')
	{
		std::cout << "Seu peso ideal: " << std::fixed << (72.7 * alturaUsuario) - 58 << std::endl;
	}
	else
	{
		std::cout << "Seu peso ideal: " << std::fixed << (62.1 * alturaUsuario) - 44.7 << std::endl;
	}
}