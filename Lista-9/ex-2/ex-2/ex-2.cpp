/*
	EXERC�CIO 2:
		Dado uma pilha que armazene n�meros, escreva uma fun��o que forne�a o maior, o menor e a m�dia aritm�tica dos elementos da pilha.
*/
#include<iostream>
#include<locale>
#include<stack>


//Fun��es do programa
void entradaDados(std::stack<float>* armazenamento);
void encontraValores(std::stack<float>* armazenamento);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::stack<float>  armazenamento;

	entradaDados(&armazenamento);
	encontraValores(&armazenamento);
}

void entradaDados(std::stack<float>* armazenamento)
{
	int qtdNumeros, num;

	//Verifica quantos n�meros ser�o adicionados
	std::cout << "Digite a quantidade de numeros para a pilha:" << std::endl;
	std::cin >> qtdNumeros;
	std::cout << std::endl;

	//Entrada dos n�meros
	std::cout << "- - - - ENTRADA DE DADOS: - - - -" << std::endl;
	for (int i = 0; i < qtdNumeros; i++)
	{
		std::cout << i + 1 << "� n�mero:" << std::endl;
		std::cin >> num;
		armazenamento->push(num);
	}
}

void encontraValores(std::stack<float>* armazenamento)
{
	float maior, menor, media;
	int divisor = armazenamento->size();	//recolhe o tamanho da pilha para obter depois a m�dia

	//Define os primeiros valoes para verifica��o
	maior = armazenamento->top();
	menor = armazenamento->top();
	media = armazenamento->top();

	//Remove o primeiro elemento pois ele j� est� adicionado
	armazenamento->pop();

	while (!armazenamento->empty())
	{
		media += armazenamento->top();		//Somatoria de todos os elementos para adquirir a m�dia

		if (maior < armazenamento->top())	//Localiza o maior n�mero
		{
			maior = armazenamento->top();
		}
		if (menor > armazenamento->top())	//Localiza o menor n�mero
		{
			menor = armazenamento->top();
		}

		armazenamento->pop();				//Remove o elemento do topo
	}

	media /= divisor;	//Encontra a m�dia dos elementos

	//Apresenta os resultados
	std::cout << "O maior n�mero �: " << maior << std::endl;
	std::cout << "O menor n�mero �: " << menor << std::endl;
	std::cout << "A m�dia �: " << media << std::endl << std::endl;
}