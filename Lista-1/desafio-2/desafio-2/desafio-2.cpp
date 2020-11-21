/*
	DESAFIO 2:
		Fa�a um programa para ler o hor�rio (hora, minuto e segundo) de in�cio e a dura��o, em segundos, de uma experi�ncia biol�gica. 
		O programa deve resultar com o novo hor�rio (hora, minuto e segundo) do t�rmino da mesma.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int horaInicio, minutoInicio, segundoInicio, duracao, soma;

	std::cout << "Digite a hora, minuto e segundo do in�cio do experimento:" << std::endl;
	std::cout << "HORA: ";
	std::cin >> horaInicio;
	std::cout << "MINUTO: ";
	std::cin >> minutoInicio;
	std::cout << "SEGUNDO: ";
	std::cin >> segundoInicio;
	std::cout << std::endl;

	std::cout << "Digite a dura��o do experimento em segundos:" << std::endl;
	std::cin >> duracao;
	std::cout << std::endl;

	//Converte Horas e Minutos em segundos
	horaInicio *= 3600; // 12 -> 43200
	minutoInicio *= 60; // 30 -> 1800

	//Faz a soma de todos os valores j� convertidos em segundo
	soma = horaInicio + minutoInicio + segundoInicio + duracao; //-> 48600

	//Converte novamente os valores em seus respectivos tipos Hora, Minuto e Segundo
	int horaFinal = soma / 3600;				//-> 13
	int minutoFinal = (soma % 3600) / 60;		//-> (48600 / 3600) === 1800 / 60 = 30
	int segundoFinal = (soma % 3600) % 60;		//-> (48600 / 3600) === (1800 / 60) === 0

	std::cout << "Hor�rio final ap�s a experi�ncia: " << horaFinal << ":" << minutoFinal << ":" << segundoFinal << std::endl;
}