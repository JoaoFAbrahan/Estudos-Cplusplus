/*
	EXERC�CIO 3:
		Fa�a um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 * i) % (i + 1), sendo i a posi��o do elemento no vetor. Em seguida 
		imprima o vetor na tela.
*/
#include<iostream>
#include<locale>

//Definindo length do vetor
int const LENGTH = 50;

//Fun��es do programa
void calculando_Dados(int vetor[LENGTH]);
void apresentar(int vetor[LENGTH]);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int vetor[LENGTH];

	calculando_Dados(vetor);
	apresentar(vetor);

}

void calculando_Dados(int vetor[LENGTH])
{
	for (int i = 0; i < LENGTH; i++)
	{
		vetor[i] = (i + 5 * i) % (i + 1);
	}
}

void apresentar(int vetor[LENGTH])
{
	std::cout << "OS VALORES DO VETOR S�O:" << std::endl;
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << vetor[i] << " ";
	}
	std::cout << std::endl;
}