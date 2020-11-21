/*
	EXERC�CIO 10:
		Crie uma fun��o que receba dois par�metros: um vetor e um valor do mesmo tipo do vetor. A fun��o dever� preencher os elementos de vetor com esse
		valor. N�o utilize �ndices para percorrer o vetor, apenas aritm�tica de ponteiros.
*/
#include<iostream>
#include<locale>

//Definindo length do vetor
int const LENGTH = 10;

//Fun��es do programa
void preencher_Vetor(int vetor[LENGTH], int num);
void apresentar_vetor(int vetor[LENGTH]);

int main()
{
	int vetor[LENGTH];
	int numero = 5;

	preencher_Vetor(vetor, numero);
	apresentar_vetor(vetor);
}

void preencher_Vetor(int vetor[LENGTH], int num)
{
	/*
	Declarei um ponteiro que recebe o endere�o da primeira posi��o do vetor, logo depois percorro o vetor atrav�s dos endere�os, mudando 
	o endere�o at� que o vetor chegue na ultima posi��o
	*/
	for (int* ponteiro = &vetor[0]; ponteiro < &vetor[LENGTH]; ponteiro++)
	{
		//Adiciona o valor de num no vetor atrav�s do endere�o de cada posi��o
		*ponteiro = num;
	}
}

void apresentar_vetor(int vetor[LENGTH])
{
	std::cout << "APRESENTANDO VETOR:" << std::endl;
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << vetor[i] << " ";
	}
	std::cout << std::endl;
}