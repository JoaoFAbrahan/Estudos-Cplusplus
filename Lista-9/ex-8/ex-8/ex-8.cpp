/*
	EXERC�CIO 8:
		Fa�a uma fun��o que receba uma fila como argumento e retorne o valor armazenado em seu in�cio. A fun��o deve remover tamb�m esse elemento.
*/
#include<iostream>
#include<locale>
#include<queue>


//Fun��es do programa
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

	std::cout << "Quantidade de n�meros de entrada:" << std::endl;
	std::cin >> qtdNum;
	std::cout << std::endl;

	std::cout << "- - - - ENTRADA DE DADOS: - - - -" << std::endl;
	for (int i = 0; i < qtdNum; i++)
	{
		std::cout << i + 1 << "� n�mero:" << std::endl;
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