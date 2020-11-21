/*
	EXERCÍCIO 8:
		Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor 
		valor na primeira variável, o segundo menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três 
		valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.
*/
#include<iostream>
#include<locale>

int ordenacao_Numeros(int* num1, int* num2, int* num3);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero1, numero2, numero3;

	std::cout << "Digite os três valores:" << std::endl;
	std::cin >> numero1 >> numero2 >> numero3;

	int codigo = ordenacao_Numeros(&numero1, &numero2, &numero3);

	//apresenta os numeros ordenados
	std::cout << "Código (1 - Todos iguais / 0 - Um ou mais é diferente): " << codigo << std::endl;
	std::cout << numero1 << " " << numero2 << " " << numero3 << std::endl;
}

int ordenacao_Numeros(int* num1, int* num2, int* num3)
{
	int aux;

	//Verifica igualdade
	if (*num1 == *num2 && *num1 == *num3)
	{
		return 1;
	}
	else
	{
		//Ordena os números
		if (*num1 <= *num2 && *num1 <= *num3)
		{
			if (*num2 <= *num3) {} //Não executa nada pois já está ordenado
			else
			{

				aux = *num2;
				*num2 = *num3;
				*num3 = aux;
			}
		}
		else if (*num2 <= *num1 && *num2 <= *num3)
		{
			//Troca o segundo com o primeiro
			aux = *num1;
			*num1 = *num2;
			*num2 = aux;

			if (*num2 <= *num3) {} //Não executa nada pois já está ordenado
			else
			{
				//Troca o segundo com o terceiro
				aux = *num2;
				*num2 = *num3;
				*num3 = aux;
			}
		}
		else
		{
			//Troca o terceiro com o primeiro
			aux = *num1;
			*num1 = *num3;
			*num3 = aux;

			if (*num2 <= *num3) {} //Não executa nada pois já está ordenado
			else
			{
				//Troca o segundo com o terceiro
				aux = *num2;
				*num2 = *num3;
				*num3 = aux;
			}
		}

		return 0;
	}
}