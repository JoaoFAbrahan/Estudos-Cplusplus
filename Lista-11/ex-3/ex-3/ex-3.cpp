/*
EXERCÍCIO 3:
	Crie uma classe em C++ chamada Relogio para armazenar um horário, composto por hora, minuto e segundo. A classe deve representar esses
	componentes de horário e deve apresentar os métodos descritos a seguir:
	•	um método chamado setHora, que deve receber o horário desejado por parâmetro (hora, minuto e segundo);
	•	um método chamado getHora para retornar o horário atual, através de 3 variáveis passadas por referência;
	•	um método para avançar o horário para o próximo segundo (lembre-se de atualizar o minuto e a hora, quando for o caso).

*/
#include<iostream>
#include<windows.h>
#include<locale>
#include<string>


///Classes do programa
class Relogio
{
public:
	void setHora(int registroHora, int registroMinuto, int registroSegundo);
	void getHora();
	void avançarHora();

private:
	int horas;
	int minutos;
	int segundos;
};
void Relogio::setHora(int registroHora, int registroMinuto, int registroSegundo)
{
	horas = registroHora;
	minutos = registroMinuto;
	segundos = registroSegundo;
}
void Relogio::getHora()
{
	std::cout << "HORÁRIO " << horas << ":" << minutos << ":" << segundos << std::endl;
}
void Relogio::avançarHora()
{
	int totalEmSegundos;

	//Converte tudo em segundos
	segundos += 1;
	minutos *= 60;
	horas *= 3600;

	//Soma tudo
	totalEmSegundos = segundos + minutos + horas;

	//Faz nova converção com o novo horário
	horas = totalEmSegundos / 3600;
	minutos = (totalEmSegundos % 3600) / 60;
	segundos = (totalEmSegundos % 3600) % 60;
}


///Funções do programa
void entradaDados(Relogio& relogio);
void loopRelogio(Relogio& relogio);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	Relogio* relogio = new Relogio();


	//Entrada de dados
	entradaDados(*relogio);


	//Loop relogio
	loopRelogio(*relogio);
}

void entradaDados(Relogio& relogio)
{
	int h, m, s;

	std::cout << "- - - - ENTRADA: - - - -" << std::endl;
	std::cout << "Hora: ";
	std::cin >> h;
	std::cout << "Minuto: ";
	std::cin >> m;
	std::cout << "Segundo: ";
	std::cin >> s;
	std::cout << std::endl;

	relogio.setHora(h, m, s);
}

void loopRelogio(Relogio& relogio)
{
	while (true)
	{
		system("cls");

		relogio.getHora();
		Sleep(1000);
		relogio.avançarHora();
	}
}