/*
	EXERC�CIO 13:
		Fa�a um programa para armazenar em mem�ria um vetor de dados contendo 1500 valores do tipo inteiro, usando a fun��o de aloca��o
		din�mica de mem�ria CALLOC:
			a.	Fa�a um loop e verifique se o vetor cont�m realmente os 1500 valores inicializados com zero (conte os 1500 zeros do vetor).
			b.	Atribua para cada elemento do vetor o valor do seu �ndice junto a este vetor.
			c.	Exibir na tela os 10 primeiros e os 10 �ltimos elementos do vetor.
*/
#include<iostream>
#include<locale>
#include<string>

//Fun��es do programa
int* alocacaoDinamica();
void verificaElementos(int vetor[]);
void atribuirPosicao(int vetor[]);

void apresentar(int vetor[]);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int* vetor;

	vetor = alocacaoDinamica();

	verificaElementos(vetor);
	atribuirPosicao(vetor);
	apresentar(vetor);

	free(vetor);
}

int* alocacaoDinamica()
{
	return (int*)calloc(1500, sizeof(int));
}

void verificaElementos(int vetor[])
{
	int cont = 0;

	for (int i = 0; i < 1500; i++)
	{
		if (vetor[i] == 0)
		{
			cont++;
		}
	}

	if (cont == 1500)
	{
		std::cout << "Vetor Completo" << std::endl;
		std::cout << "Quantidade de 0: " << cont << std::endl;
	}
	else
	{
		std::cout << "Vetor Incompleto!" << std::endl;
		std::cout << "Quantidade de 0: " << cont << std::endl;
	}
	std::cout << std::endl;
}

void atribuirPosicao(int vetor[])
{
	for (int i = 0; i < 1500; i++)
	{
		vetor[i] = i;
	}
}

void apresentar(int vetor[])
{
	std::cout << "- - - - APRESENTAR - - - -" << std::endl;
	for (int i = 0; i < 1500; i++)
	{
		if (i < 10 || i >= (1500 - 10))
		{
			std::cout << vetor[i] << " ";
		}
	}
	std::cout << std::endl;
}