/*
	EXERCÍCIO 10:
		Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória. Em seguida, 
		leia do usuário seus valores e mostre quantos dos números são pares e quantos são ímpares.
*/
#include<iostream>
#include<locale>
#include<string>

//Funções do programa
void entradaDados(int vetor[], int length);
void contaPar_e_Impar(int vetor[], int length);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int length;
	int* vetor;

	//Pega o tamanho do vetor a ser alocado
	std::cout << "Digite o tamanho do vetor:" << std::endl;
	std::cin >> length;
	std::cout << std::endl;

	//Alocação Dinâmica
	vetor = (int*)malloc(length * sizeof(int));
	
	entradaDados(vetor, length);
	contaPar_e_Impar(vetor, length);

	//Liberar a Memória
	free(vetor);
}

void entradaDados(int vetor[], int length)
{
	std::cout << "- - - - ENTRADA DE DADOS - - - -" << std::endl;
	for (int i = 0; i < length; i++)
	{
		std::cout << "Digite o " << i + 1 << "º número:" << std::endl;
		std::cin >> vetor[i];
	}
	std::cout << std::endl;
}

void contaPar_e_Impar(int vetor[], int length)
{
	int impar = 0, par = 0;

	for (int i = 0; i < length; i++)
	{
		if (vetor[i] % 2 == 0)
		{
			par++;
		}
		else
		{
			impar++;
		}
	}
	std::cout << "Quantidade de números ímpares: " << impar << std::endl;
	std::cout << "Quantidade de números pares: " << par << std::endl;
}