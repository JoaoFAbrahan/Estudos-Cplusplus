/*
	EXERCÍCIO 10:
		Faça uma função para intercalar filas: a função recebe as duas filas e retorna a fila com os elementos das duas filas
		intercalados conforme a ordem com que elas se dispõem na fila.
*/
#include<iostream>
#include<locale>
#include<queue>


//Funções do programa
void entadaDados(std::queue<int>* fila);
std::queue<int> intercalaFilas(std::queue<int>* fila1, std::queue<int>* fila2);

void apresentar(std::queue<int> fila);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::queue<int> fila1;
	std::queue<int> fila2;

	entadaDados(&fila1);
	entadaDados(&fila2);

	std::queue<int> filaResultado = intercalaFilas(&fila1, &fila2);

	apresentar(filaResultado);
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
	std::cout << std::endl;
}

std::queue<int> intercalaFilas(std::queue<int>* fila1, std::queue<int>* fila2)
{
	std::queue<int> filaResultado;

	while (!fila1->empty() || !fila2->empty())
	{
		if (!fila1->empty())
		{
			filaResultado.push(fila1->front());
			fila1->pop();
		}
		if (!fila2->empty())
		{
			filaResultado.push(fila2->front());
			fila2->pop();
		}
	}

	return filaResultado;
}

void apresentar(std::queue<int> fila)
{
	std::cout << "- - - - APRESENTAR RESULTADO: - - - -" << std::endl;
	while (!fila.empty())
	{
		std::cout << fila.front() << " ";
		fila.pop();
	}
	std::cout << std::endl;
}