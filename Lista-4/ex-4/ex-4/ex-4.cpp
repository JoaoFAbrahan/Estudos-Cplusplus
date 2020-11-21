/*
	EXERC�CIO 4:
		Fa�a um programa que leia um vetor de 5 posi��es para n�meros reais e, depois, um c�digo inteiro. Se o c�digo for zero, finalize o 
		programa; se for 1, mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso, o c�digo for diferente de 1 e 2 
		escreva uma mensagem informando que o c�digo � inv�lido.
*/
#include<iostream>
#include<locale>

//Definindo length do vetor
int const LENGTH = 5;

//Fun��es do programa
void entrada_Dados(float vetor[LENGTH], int* codigo);
void apresentar(float vetor[LENGTH], int codigo);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float vetor[LENGTH];
	int codigo;

	entrada_Dados(vetor, &codigo);
	apresentar(vetor, codigo);
}

void entrada_Dados(float vetor[LENGTH], int* codigo)
{
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << "Digite o " << i + 1 << "� valor:" << std::endl;
		std::cin >> vetor[i];
	}
	std::cout << std::endl;

	std::cout << "Digite o C�digo:" << std::endl << "1 - Ordem Direta" << std::endl << "2 - Ordem Inversa" << std::endl << "0 - Encerrar" << std::endl;
	std::cin >> *codigo;
	std::cout << std::endl;
}

void apresentar(float vetor[LENGTH], int codigo)
{
	std::cout << "APRESENTAR:" << std::endl;
	//Ordem Direta
	if (codigo == 1)
	{
		for (int i = 0; i < LENGTH; i++)
		{
			std::cout << vetor[i] << " ";
		}
		std::cout << std::endl;
	}
	//Ordem Inversa
	else if (codigo == 2)
	{
		for (int i = LENGTH - 1; i >= 0; i--)
		{
			std::cout << vetor[i] << " ";
		}
		std::cout << std::endl;
	}
	//C�digo 0
	else if (codigo == 0){}
	//Qualquer outro valor
	else
	{
		std::cout << "C�digo Inv�lido!" << std::endl;
	}
}