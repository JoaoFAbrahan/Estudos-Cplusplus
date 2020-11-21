/*
EXERC�CIO 2:
	Crie uma classe denominada Elevador para armazenar as informa��es de um elevador dentro de um pr�dio. A classe deve armazenar o
	andar atual (0=t�rreo), total de andares no pr�dio, excluindo o t�rreo, capacidade do elevador, e quantas pessoas est�o presentes nele.

	A classe deve tamb�m disponibilizar os seguintes m�todos:
		inicializa: que deve receber como par�metros: a capacidade do elevador e o total de andares no pr�dio (os elevadores sempre come�am no t�rreo e vazios);
		entrada: para acrescentar uma pessoa no elevador (s� deve acrescentar se ainda houver espa�o);
		saida: para remover uma pessoa do elevador (s� deve remover se houver algu�m dentro dele);
		sobe: para subir um andar (n�o deve subir se j� estiver no �ltimo andar);
		desce: para descer um andar (n�o deve descer se j� estiver no t�rreo);
		get....: m�todos para obter cada um dos os dados armazenados.
*/
#include<iostream>
#include<iomanip>
#include<locale>
#include<string>


///Classes do programa
class Elevador
{
public:
	void inicializa();
	void entrada();
	void saida();
	void sobe();
	void desce();

private:
	int andarAtual = 0;
	int qtdPessoasElevador = 0;
	int totalAndares;
	int capElevador;
	int qtd;
	bool getCapacidadePessoas(int qtd, int operacao);
	bool getLimiteAndares(int qtd, int operacao);
};
void Elevador::inicializa()
{
	std::cout << "Digite a quantidade de andares do predio:" << std::endl;
	std::cin >> totalAndares;
	std::cout << "Capacidade do elevador:" << std::endl;
	std::cin >> capElevador;
	std::cout << std::endl;
}
void Elevador::entrada()
{

	std::cout << "Digite a quantidade de entrada de pessoas:" << std::endl;
	std::cin >> qtd;

	if (getCapacidadePessoas(qtd, 1)) //1 - Representa entrada de pessoas
	{
		qtdPessoasElevador += qtd;
	}
	else
	{
		std::cout << "Capacidade m�xima atingida!" << std::endl;
		system("pause");
	}
}
void Elevador::saida()
{
	std::cout << "Digite a quantidade de pessoas que sairam do elevador:" << std::endl;
	std::cin >> qtd;

	if (getCapacidadePessoas(qtd, 0)) //0 - Representa sa�da de pessoas
	{
		qtdPessoasElevador -= qtd;
	}
	else
	{
		std::cout << "Quantidade m�nima atingida!" << std::endl;
		system("pause");
	}
}
void Elevador::sobe()
{
	std::cout << "Andar atual: " << andarAtual << std::endl << "Subir quantos andares? " << std::endl;
	std::cin >> qtd;

	if (getLimiteAndares(qtd, 1)) //1 - Representa opera��o de subida do elevador
	{
		andarAtual += qtd;
	}
	else
	{
		std::cout << "Quantidade m�xima atingida!" << std::endl;
		system("pause");
	}
}
void Elevador::desce()
{
	std::cout << "Andar atual: " << andarAtual << std::endl << "Descer quantos andares? " << std::endl;
	std::cin >> qtd;

	if (getLimiteAndares(qtd, 0)) //0 - Representa opera��o de descida do elevador
	{
		andarAtual -= qtd;
	}
	else
	{
		std::cout << "Quantidade m�nima atingida!" << std::endl;
		system("pause");
	}
}
bool Elevador::getCapacidadePessoas(int qtd, int operacao)
{
	//Define tipo de opera��o (1 = entrada / 0 = sa�da)
	if (operacao == 1)
	{
		if ((qtdPessoasElevador + qtd) <= capElevador)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if ((qtdPessoasElevador - qtd) >= 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
bool Elevador::getLimiteAndares(int qtd, int operacao)
{
	//Define tipo de opera��o (1 = subida / 0 = descida)
	if (operacao == 1)
	{
		if ((andarAtual + qtd) <= totalAndares)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if ((andarAtual - qtd) >= 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}


///Fun��es do programa
void menu(Elevador& elevador);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	Elevador* elevador = new Elevador();

	//Entrada de dados
	elevador->inicializa();


	//Menu
	menu(*elevador);
}

void menu(Elevador& elevador)
{
	char opcao;

	do
	{
		system("cls");

		std::cout << "- - - - PAINEL ELEVADOR: - - - -" << std::endl;
		std::cout << "1 - Subir" << std::endl << "2 - Descer" << std::endl << "3 - Entrada Pessoas" << std::endl << "4 - Sa�da Pessoas" << std::endl;
		std::cin >> opcao;

		switch (opcao)
		{
		case '1':
			elevador.sobe();
			break;
		case '2':
			elevador.desce();
			break;
		case '3':
			elevador.entrada();
			break;
		case '4':
			elevador.saida();
			break;
		default:
			std::cout << "Op��o Inv�lida!" << std::endl;
			system("pause");
			break;
		}
	} while (true);
}