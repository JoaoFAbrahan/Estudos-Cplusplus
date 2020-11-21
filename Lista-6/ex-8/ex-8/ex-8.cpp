/*
	EXERCÍCIO 8:
		Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
		•	Horário: composto de hora, minutos e segundos.
		•	Data: composto de dia, mês e ano.
		•	Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/
#include<iostream>
#include<locale>
#include<string>

//Criando estrutura
typedef struct Horario
{
	int hora;
	int minuto;
	int segundo;
}t_Horario;

typedef struct Data
{
	int dia;
	int mes;
	int ano;
}t_Data;

typedef struct Compromisso
{
	t_Data data;
	t_Horario horario;
	std::string texto;
}t_Compromisso;


//Funções do programa
void entradaDados(t_Compromisso* agenda);
void apresentarDados(t_Compromisso agenda);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	t_Compromisso agenda;

	//Entrada de dados através de ponteiro
	entradaDados(&agenda);

	std::cout << std::endl;

	//Apresentando os dados
	apresentarDados(agenda);
}

void entradaDados(t_Compromisso* agenda)
{
	std::cout << "- - - AGENDA: - - -" << std::endl;
	std::cout << "Data do compromisso:" << std::endl << "Dia: ";
	std::cin >> agenda->data.dia;
	std::cout << "Mês: ";
	std::cin >> agenda->data.mes;
	std::cout << "Ano: ";
	std::cin >> agenda->data.ano;
	std::cout << std::endl;
	std::cout << "Horário do compromisso:" << std::endl << "Hora: ";
	std::cin >> agenda->horario.hora;
	std::cout << "Minuto: ";
	std::cin >> agenda->horario.minuto;
	std::cout << "Segundo: ";
	std::cin >> agenda->horario.segundo;
	std::cout << std::endl;
	std::cout << "Descrição do compromisso: " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, agenda->texto);
}

void apresentarDados(t_Compromisso agenda)
{
	std::cout << "- - - COMPROMISSOS DA AGENDA: - - -" << std::endl;
	std::cout << "Data do compromisso: " << agenda.data.dia << "/" << agenda.data.mes << "/" << agenda.data.ano << std::endl;
	std::cout << "Horário: " << agenda.horario.hora << ":" << agenda.horario.minuto << ":" << agenda.horario.segundo << std::endl;
	std::cout << "Descrição: " << agenda.texto << std::endl << std::endl;
}