/*
EXERC�CIO 3:
	Crie uma classe em C++ chamada Relogio para armazenar um hor�rio, composto por hora, minuto e segundo. A classe deve representar esses
	componentes de hor�rio e deve apresentar os m�todos descritos a seguir:
	�	um m�todo chamado setHora, que deve receber o hor�rio desejado por par�metro (hora, minuto e segundo);
	�	um m�todo chamado getHora para retornar o hor�rio atual, atrav�s de 3 vari�veis passadas por refer�ncia;
	�	um m�todo para avan�ar o hor�rio para o pr�ximo segundo (lembre-se de atualizar o minuto e a hora, quando for o caso).

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
	void avan�arHora();

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
	std::cout << "HOR�RIO " << horas << ":" << minutos << ":" << segundos << std::endl;
}
void Relogio::avan�arHora()
{
	int totalEmSegundos;

	//Converte tudo em segundos
	segundos += 1;
	minutos *= 60;
	horas *= 3600;

	//Soma tudo
	totalEmSegundos = segundos + minutos + horas;

	//Faz nova conver��o com o novo hor�rio
	horas = totalEmSegundos / 3600;
	minutos = (totalEmSegundos % 3600) / 60;
	segundos = (totalEmSegundos % 3600) % 60;
}


///Fun��es do programa
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
		relogio.avan�arHora();
	}
}