/*
	EXERC�CIO 10:
		Fa�a um programa que leia do usu�rio o tamanho de um vetor a ser lido e fa�a a aloca��o din�mica de mem�ria. Em seguida, 
		leia do usu�rio seus valores e mostre quantos dos n�meros s�o pares e quantos s�o �mpares.
*/
#include<iostream>
#include<locale>
#include<string>

//Fun��es do programa
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

	//Aloca��o Din�mica
	vetor = (int*)malloc(length * sizeof(int));
	
	entradaDados(vetor, length);
	contaPar_e_Impar(vetor, length);

	//Liberar a Mem�ria
	free(vetor);
}

void entradaDados(int vetor[], int length)
{
	std::cout << "- - - - ENTRADA DE DADOS - - - -" << std::endl;
	for (int i = 0; i < length; i++)
	{
		std::cout << "Digite o " << i + 1 << "� n�mero:" << std::endl;
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
	std::cout << "Quantidade de n�meros �mpares: " << impar << std::endl;
	std::cout << "Quantidade de n�meros pares: " << par << std::endl;
}