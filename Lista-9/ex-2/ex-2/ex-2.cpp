/*
	EXERCÍCIO 2:
		Dado uma pilha que armazene números, escreva uma função que forneça o maior, o menor e a média aritmética dos elementos da pilha.
*/
#include<iostream>
#include<locale>
#include<stack>


//Funções do programa
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

	//Verifica quantos números serão adicionados
	std::cout << "Digite a quantidade de numeros para a pilha:" << std::endl;
	std::cin >> qtdNumeros;
	std::cout << std::endl;

	//Entrada dos números
	std::cout << "- - - - ENTRADA DE DADOS: - - - -" << std::endl;
	for (int i = 0; i < qtdNumeros; i++)
	{
		std::cout << i + 1 << "º número:" << std::endl;
		std::cin >> num;
		armazenamento->push(num);
	}
}

void encontraValores(std::stack<float>* armazenamento)
{
	float maior, menor, media;
	int divisor = armazenamento->size();	//recolhe o tamanho da pilha para obter depois a média

	//Define os primeiros valoes para verificação
	maior = armazenamento->top();
	menor = armazenamento->top();
	media = armazenamento->top();

	//Remove o primeiro elemento pois ele já está adicionado
	armazenamento->pop();

	while (!armazenamento->empty())
	{
		media += armazenamento->top();		//Somatoria de todos os elementos para adquirir a média

		if (maior < armazenamento->top())	//Localiza o maior número
		{
			maior = armazenamento->top();
		}
		if (menor > armazenamento->top())	//Localiza o menor número
		{
			menor = armazenamento->top();
		}

		armazenamento->pop();				//Remove o elemento do topo
	}

	media /= divisor;	//Encontra a média dos elementos

	//Apresenta os resultados
	std::cout << "O maior número é: " << maior << std::endl;
	std::cout << "O menor número é: " << menor << std::endl;
	std::cout << "A média é: " << media << std::endl << std::endl;
}