/*
	EXERC�CIO 9:
		Crie um programa que:
			a.	Aloque dinamicamente um array de 5 n�meros inteiros,
			b.	Pe�a para o usu�rio digitar os 5 n�meros no espa�o alocado,
			c.	Mostre na tela os 5 n�meros,
			d.	Libere a mem�ria alocada.
*/
#include<iostream>
#include<locale>
#include<string>

//Fun��es do programa
void entradaDados(int vetor[]);
void apresentar(int vetor[]);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int* vetor;

	//Aloca��o din�mica
	vetor = (int*)malloc(5 * sizeof(int));

	entradaDados(vetor);
	apresentar(vetor);

	//Liberando memoria
	free(vetor);
}

void entradaDados(int vetor[])
{
	std::cout << "- - - ENTRADA DE DADOS - - -" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Digite o " << i + 1 << "� n�mero:" << std::endl;
		std::cin >> vetor[i];
	}
	std::cout << std::endl;
}

void apresentar(int vetor[])
{
	std::cout << "- - - - - APRESENTAR - - - - -" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << vetor[i] << " ";
	}
	std::cout << std::endl;
}