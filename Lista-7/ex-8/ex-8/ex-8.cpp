/*
	EXERCÍCIO 8:
		Crie um programa que tenha um enumerador para agrupar os meses do ano, os dias da semana e os períodos do dia (manhã, tarde, noite, madrugada).
*/
#include<iostream>
#include<locale>
#include<string>
#include<fstream>

//Declarando enumeadores
enum Mes
{
	Janeiro, Fevereio, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro
};

enum Semana
{
	Segunda, Terca, Quarta, Quinta, Sexta, Sabado, Domingo
};

enum Periodo
{
	Manha, Tarde, Noite, Madrugada
};


//Declarando struct
typedef struct Agrupamento
{
	Mes mes;
	Semana semana;
	Periodo periodo;
}t_Agrupamento;


//Funções do programa
void escolhaDoMes(t_Agrupamento* agrupamento);
void escolhaSemana(t_Agrupamento* agrupamento);
void escolhaPeriodoDia(t_Agrupamento* agrupamento);
void apresentar(t_Agrupamento agrupamento);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	t_Agrupamento agrupamento;

	escolhaDoMes(&agrupamento);
	escolhaSemana(&agrupamento);
	escolhaPeriodoDia(&agrupamento);

	apresentar(agrupamento);
}

void escolhaDoMes(t_Agrupamento* agrupamento)
{
	int opcao;
	bool loop;
	do
	{
		system("cls");
		loop = false;

		std::cout << "- - - ESCOLHA O MES: - - -" << std::endl;
		std::cout << "1 - Janeiro" << std::endl << "2 - Fevereiro" << std::endl << "3 - Março" << std::endl << "4 - Abril" << std::endl << "5 -  Maio" << std::endl << "6 - Junho" << std::endl;
		std::cout << "7 - Julho" << std::endl << "8 - Agosto" << std::endl << "9 - Setembro" << std::endl << "10 - Outubro" << std::endl << "11 - Novembro" << std::endl << "12 - Dezembro" << std::endl;
		std::cin >> opcao;

		switch (opcao)
		{
		case 1:
			agrupamento->mes = Janeiro;
			break;
		case 2:
			agrupamento->mes = Fevereio;
			break;
		case 3:
			agrupamento->mes = Marco;
			break;
		case 4:
			agrupamento->mes = Abril;
			break;
		case 5:
			agrupamento->mes = Maio;
			break;
		case 6:
			agrupamento->mes = Junho;
			break;
		case 7:
			agrupamento->mes = Julho;
			break;
		case 8:
			agrupamento->mes = Agosto;
			break;
		case 9:
			agrupamento->mes = Setembro;
			break;
		case 10:
			agrupamento->mes = Outubro;
			break;
		case 11:
			agrupamento->mes = Novembro;
			break;
		case 12:
			agrupamento->mes = Dezembro;
			break;
		default:
			loop = true;
			std::cout << "Opção Inválida!" << std::endl;
			system("pause");
			break;
		}
	} while (loop == true);
}

void escolhaSemana(t_Agrupamento* agrupamento)
{
	char opcao;
	bool loop;
	do
	{
		system("cls");
		loop = false;

		std::cout << "- - - ESCOLHA O DIA DA SEMANA: - - -" << std::endl;
		std::cout << "1 - Segunda-Feira" << std::endl << "2 - Terça-Feira" << std::endl << "3 - Quarta-Feira" << std::endl << "4 - Quinta-Feira" << std::endl << "5 - Sexta-Feira" << std::endl << "6 - Sábado" << std::endl << "7 - Domingo" << std::endl;
		std::cin >> opcao;

		switch (opcao)
		{
		case '1':
			agrupamento->semana = Segunda;
			break;
		case '2':
			agrupamento->semana = Terca;
			break;
		case '3':
			agrupamento->semana = Quarta;
			break;
		case '4':
			agrupamento->semana = Quinta;
			break;
		case '5':
			agrupamento->semana = Sexta;
			break;
		case '6':
			agrupamento->semana = Sabado;
			break;
		case '7':
			agrupamento->semana = Domingo;
			break;
		default:
			loop = true;
			std::cout << "Opção Inválida!" << std::endl;
			system("pause");
			break;
		}
	} while (loop == true);
}

void escolhaPeriodoDia(t_Agrupamento* agrupamento)
{
	char opcao;
	bool loop;
	do
	{
		system("cls");
		loop = false;

		std::cout << "- - - ESCOLHA O PERÍODO: - - -" << std::endl;
		std::cout << "1 - Manhã" << std::endl << "2 - Tarde" << std::endl << "3 - Noite" << std::endl << "4 - Madrugada" << std::endl;
		std::cin >> opcao;

		switch (opcao)
		{
		case '1':
			agrupamento->periodo = Manha;
			break;
		case '2':
			agrupamento->periodo = Tarde;
			break;
		case '3':
			agrupamento->periodo = Noite;
			break;
		case '4':
			agrupamento->periodo = Madrugada;
			break;
		default:
			loop = true;
			std::cout << "Opção Inválida!" << std::endl;
			system("pause");
			break;
		}
	} while (loop == true);
}

void apresentar(t_Agrupamento agrupamento)
{
	system("cls");
	std::cout << "- - - - APRESENTAÇÃO: - - - -" << std::endl;
	std::cout << "Mês: ";
	switch (agrupamento.mes)
	{
	case Janeiro:
		std::cout << "Janeiro" << std::endl;
		break;
	case Fevereio:
		std::cout << "Fevereiro" << std::endl;
		break;
	case Marco:
		std::cout << "Março" << std::endl;
		break;
	case Abril:
		std::cout << "Abril" << std::endl;
		break;
	case Maio:
		std::cout << "Maio" << std::endl;
		break;
	case Junho:
		std::cout << "Junho" << std::endl;
		break;
	case Julho:
		std::cout << "Julho" << std::endl;
		break;
	case Agosto:
		std::cout << "Agosto" << std::endl;
		break;
	case Setembro:
		std::cout << "Setembro" << std::endl;
		break;
	case Outubro:
		std::cout << "Outubro" << std::endl;
		break;
	case Novembro:
		std::cout << "Novembro" << std::endl;
		break;
	case Dezembro:
		std::cout << "Dezembro" << std::endl;
		break;
	}

	std::cout << "Dia: ";
	switch (agrupamento.semana)
	{
	case Segunda:
		std::cout << "Segunda-Feira" << std::endl;
		break;
	case Terca:
		std::cout << "Terça-Feira" << std::endl;
		break;
	case Quarta:
		std::cout << "Quarta-Feira" << std::endl;
		break;
	case Quinta:
		std::cout << "Quinta-Feira" << std::endl;
		break;
	case Sexta:
		std::cout << "Sexta-Feira" << std::endl;
		break;
	case Sabado:
		std::cout << "Sábado" << std::endl;
		break;
	case Domingo:
		std::cout << "Domingo" << std::endl;
		break;
	}

	std::cout << "Período: ";
	switch (agrupamento.periodo)
	{
	case Manha:
		std::cout << "Manhã" << std::endl;
		break;
	case Tarde:
		std::cout << "Tarde" << std::endl;
		break;
	case Noite:
		std::cout << "Noite" << std::endl;
		break;
	case Madrugada:
		std::cout << "Madrugada" << std::endl;
		break;
	}
}