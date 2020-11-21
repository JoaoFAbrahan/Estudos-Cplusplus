/*
EXERCÍCIO 2:
	Crie uma classe denominada Elevador para armazenar as informações de um elevador dentro de um prédio. A classe deve armazenar o
	andar atual (0=térreo), total de andares no prédio, excluindo o térreo, capacidade do elevador, e quantas pessoas estão presentes nele.

	A classe deve também disponibilizar os seguintes métodos:
		inicializa: que deve receber como parâmetros: a capacidade do elevador e o total de andares no prédio (os elevadores sempre começam no térreo e vazios);
		entrada: para acrescentar uma pessoa no elevador (só deve acrescentar se ainda houver espaço);
		saida: para remover uma pessoa do elevador (só deve remover se houver alguém dentro dele);
		sobe: para subir um andar (não deve subir se já estiver no último andar);
		desce: para descer um andar (não deve descer se já estiver no térreo);
		get....: métodos para obter cada um dos os dados armazenados.
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
		std::cout << "Capacidade máxima atingida!" << std::endl;
		system("pause");
	}
}
void Elevador::saida()
{
	std::cout << "Digite a quantidade de pessoas que sairam do elevador:" << std::endl;
	std::cin >> qtd;

	if (getCapacidadePessoas(qtd, 0)) //0 - Representa saída de pessoas
	{
		qtdPessoasElevador -= qtd;
	}
	else
	{
		std::cout << "Quantidade mínima atingida!" << std::endl;
		system("pause");
	}
}
void Elevador::sobe()
{
	std::cout << "Andar atual: " << andarAtual << std::endl << "Subir quantos andares? " << std::endl;
	std::cin >> qtd;

	if (getLimiteAndares(qtd, 1)) //1 - Representa operação de subida do elevador
	{
		andarAtual += qtd;
	}
	else
	{
		std::cout << "Quantidade máxima atingida!" << std::endl;
		system("pause");
	}
}
void Elevador::desce()
{
	std::cout << "Andar atual: " << andarAtual << std::endl << "Descer quantos andares? " << std::endl;
	std::cin >> qtd;

	if (getLimiteAndares(qtd, 0)) //0 - Representa operação de descida do elevador
	{
		andarAtual -= qtd;
	}
	else
	{
		std::cout << "Quantidade mínima atingida!" << std::endl;
		system("pause");
	}
}
bool Elevador::getCapacidadePessoas(int qtd, int operacao)
{
	//Define tipo de operação (1 = entrada / 0 = saída)
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
	//Define tipo de operação (1 = subida / 0 = descida)
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


///Funções do programa
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
		std::cout << "1 - Subir" << std::endl << "2 - Descer" << std::endl << "3 - Entrada Pessoas" << std::endl << "4 - Saída Pessoas" << std::endl;
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
			std::cout << "Opção Inválida!" << std::endl;
			system("pause");
			break;
		}
	} while (true);
}