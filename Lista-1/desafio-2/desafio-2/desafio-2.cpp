/*
	DESAFIO 2:
		Faça um programa para ler o horário (hora, minuto e segundo) de início e a duração, em segundos, de uma experiência biológica. 
		O programa deve resultar com o novo horário (hora, minuto e segundo) do término da mesma.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int horaInicio, minutoInicio, segundoInicio, duracao, soma;

	std::cout << "Digite a hora, minuto e segundo do início do experimento:" << std::endl;
	std::cout << "HORA: ";
	std::cin >> horaInicio;
	std::cout << "MINUTO: ";
	std::cin >> minutoInicio;
	std::cout << "SEGUNDO: ";
	std::cin >> segundoInicio;
	std::cout << std::endl;

	std::cout << "Digite a duração do experimento em segundos:" << std::endl;
	std::cin >> duracao;
	std::cout << std::endl;

	//Converte Horas e Minutos em segundos
	horaInicio *= 3600; // 12 -> 43200
	minutoInicio *= 60; // 30 -> 1800

	//Faz a soma de todos os valores já convertidos em segundo
	soma = horaInicio + minutoInicio + segundoInicio + duracao; //-> 48600

	//Converte novamente os valores em seus respectivos tipos Hora, Minuto e Segundo
	int horaFinal = soma / 3600;				//-> 13
	int minutoFinal = (soma % 3600) / 60;		//-> (48600 / 3600) === 1800 / 60 = 30
	int segundoFinal = (soma % 3600) % 60;		//-> (48600 / 3600) === (1800 / 60) === 0

	std::cout << "Horário final após a experiência: " << horaFinal << ":" << minutoFinal << ":" << segundoFinal << std::endl;
}