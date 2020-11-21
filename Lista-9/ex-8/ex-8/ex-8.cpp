/*
	EXERCÍCIO 8:
		Faça uma função que receba uma fila como argumento e retorne o valor armazenado em seu início. A função deve remover também esse elemento.
*/
#include<iostream>
#include<locale>
#include<queue>


//Funções do programa
void entadaDados(std::queue<int>* fila);
int apresentaTopo(std::queue<int>* fila);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::queue<int> fila;

	entadaDados(&fila);

	std::cout << "- - - - APRESENTA TOPO: - - - -" << std::endl;
	std::cout << apresentaTopo(&fila) << std::endl;
}

void entadaDados(std::queue<int>* fila)
{
	int qtdNum, num;

	std::cout << "Quantidade de números de entrada:" << std::endl;
	std::cin >> qtdNum;
	std::cout << std::endl;

	std::cout << "- - - - ENTRADA DE DADOS: - - - -" << std::endl;
	for (int i = 0; i < qtdNum; i++)
	{
		std::cout << i + 1 << "º número:" << std::endl;
		std::cin >> num;

		fila->push(num);
	}
}

int apresentaTopo(std::queue<int>* fila)
{
	int num = fila->front();
	fila->pop();

	return num;
}