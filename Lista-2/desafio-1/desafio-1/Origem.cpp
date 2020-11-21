/*
	DESAFIO 1:
		As tarifas de certo parque de estacionamento s�o as seguintes:
			�	1� e 2� hora - R$ 1,00 cada
			�	3� e 4� hora - R$ 1,40 cada
			�	5� hora e seguintes - R$ 2,00 cada

		O n�mero de horas a pagar � sempre inteiro e arredondado por excesso. Deste modo, quem estacionar durante 61 minutos pagar� por 
		duas horas, que � o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida deste s�o 
		apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par 12 50 representar� �dez para a uma
		da tarde�. Pretende-se criar um programa que, lidos pelo teclado os momentos de chegada e de partida, apresente na tela o pre�o 
		cobrado pelo estacionamento. Admite-se que a chegada e a partida se d�o com intervalo n�o superior a 24 horas. Portanto, se uma 
		dada hora de chegada for superior � da partida, isso n�o � uma situa��o de erro, pois significar� que a partida ocorreu no dia 
		seguinte ao da chegada.
*/
#include<iostream>
#include<locale>
#include<cmath>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int horaEntrada, minutoEntrada, horaSaida, minutoSaida;
	float valorPagamentoHora;

	std::cout << "Digite a horario de entrada do ve�culo no estacionamento:" << std::endl << "HORA: ";
	std::cin >> horaEntrada;
	std::cout << "MINUTO: ";
	std::cin >> minutoEntrada;
	std::cout << std::endl;

	std::cout << "Digite a horario de sa�da do ve�culo no estacionamento:" 
		<< std::endl << "HORA: ";
	std::cin >> horaSaida;
	std::cout << "MINUTO: ";
	std::cin >> minutoSaida;
	std::cout << std::endl;

	//Converte tudo pra minutos, e encontra o tempo utilizado pelo ve�culo e arredonda tudo para o m�ximo.
	int horaPagamento = ceil((((horaSaida - horaEntrada) * 60.0) + (minutoSaida - minutoEntrada)) / 60.0);

	std::cout.precision(2);

	if (horaPagamento < 24)
	{
		if (horaPagamento <= 2)
		{
			//Atribuir o valor de R$ 1.00 por hora
			valorPagamentoHora = horaPagamento * 1.00;

			std::cout << "O valor a ser pago � de: R$" << std::fixed << valorPagamentoHora << std::endl;
		}
		else if (horaPagamento > 2 && horaPagamento <= 4)
		{
			//Atribui o valor de R$ 1.40
			valorPagamentoHora = horaPagamento * 1.40;
			std::cout << "O valor a ser pago � de: R$" << std::fixed << valorPagamentoHora << std::endl;
		}
		else
		{
			//Atribui o valor de R$ 2.00 por hora
			valorPagamentoHora = horaPagamento * 2.00;
			std::cout << "O valor a ser pago � de: R$" << std::fixed << valorPagamentoHora << std::endl;
		}
	}
	else
	{
		std::cout << "Hor�rio excede 24h!" << std::endl;
	}
}