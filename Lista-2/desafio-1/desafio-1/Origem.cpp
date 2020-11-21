/*
	DESAFIO 1:
		As tarifas de certo parque de estacionamento são as seguintes:
			•	1ª e 2ª hora - R$ 1,00 cada
			•	3ª e 4ª hora - R$ 1,40 cada
			•	5ª hora e seguintes - R$ 2,00 cada

		O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem estacionar durante 61 minutos pagará por 
		duas horas, que é o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são 
		apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par 12 50 representará “dez para a uma
		da tarde”. Pretende-se criar um programa que, lidos pelo teclado os momentos de chegada e de partida, apresente na tela o preço 
		cobrado pelo estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24 horas. Portanto, se uma 
		dada hora de chegada for superior à da partida, isso não é uma situação de erro, pois significará que a partida ocorreu no dia 
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

	std::cout << "Digite a horario de entrada do veículo no estacionamento:" << std::endl << "HORA: ";
	std::cin >> horaEntrada;
	std::cout << "MINUTO: ";
	std::cin >> minutoEntrada;
	std::cout << std::endl;

	std::cout << "Digite a horario de saída do veículo no estacionamento:" 
		<< std::endl << "HORA: ";
	std::cin >> horaSaida;
	std::cout << "MINUTO: ";
	std::cin >> minutoSaida;
	std::cout << std::endl;

	//Converte tudo pra minutos, e encontra o tempo utilizado pelo veículo e arredonda tudo para o máximo.
	int horaPagamento = ceil((((horaSaida - horaEntrada) * 60.0) + (minutoSaida - minutoEntrada)) / 60.0);

	std::cout.precision(2);

	if (horaPagamento < 24)
	{
		if (horaPagamento <= 2)
		{
			//Atribuir o valor de R$ 1.00 por hora
			valorPagamentoHora = horaPagamento * 1.00;

			std::cout << "O valor a ser pago é de: R$" << std::fixed << valorPagamentoHora << std::endl;
		}
		else if (horaPagamento > 2 && horaPagamento <= 4)
		{
			//Atribui o valor de R$ 1.40
			valorPagamentoHora = horaPagamento * 1.40;
			std::cout << "O valor a ser pago é de: R$" << std::fixed << valorPagamentoHora << std::endl;
		}
		else
		{
			//Atribui o valor de R$ 2.00 por hora
			valorPagamentoHora = horaPagamento * 2.00;
			std::cout << "O valor a ser pago é de: R$" << std::fixed << valorPagamentoHora << std::endl;
		}
	}
	else
	{
		std::cout << "Horário excede 24h!" << std::endl;
	}
}