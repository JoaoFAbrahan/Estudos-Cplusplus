/*
	EXERCÍCIO 10:
		Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do vetor. A função deverá preencher os elementos de vetor com esse
		valor. Não utilize índices para percorrer o vetor, apenas aritmética de ponteiros.
*/
#include<iostream>
#include<locale>

//Definindo length do vetor
int const LENGTH = 10;

//Funções do programa
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
	Declarei um ponteiro que recebe o endereço da primeira posição do vetor, logo depois percorro o vetor através dos endereços, mudando 
	o endereço até que o vetor chegue na ultima posição
	*/
	for (int* ponteiro = &vetor[0]; ponteiro < &vetor[LENGTH]; ponteiro++)
	{
		//Adiciona o valor de num no vetor através do endereço de cada posição
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