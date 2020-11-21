/*
	DESAFIO 1:
		Utilizando as estruturas de repeti��o, fa�a um programa que apresente em tela as seguintes figuras:
		a)	*
			* *
			* * *
			* * * *
			* * * * *
			* * * * * * 

		b)	* * * * * *
			* * * * *
			* * * *
			* * *
			* *
			*

		c)	* * * * * *
			  * * * * *
			    * * * *
			      * * *
			        * *
			          *

		d)	          *
                    * *
                  * * *
                * * * *
              * * * * *
            * * * * * *
*/
#include<iostream>

int main()
{
	//TRI�NGULO A
	std::cout << "A)" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	
	//TRI�NGULO B
	std::cout << "B)" << std::endl;
	for (int i = 6; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;


	//TRI�NGULO C
	std::cout << "C)" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		for (int j = i - 1; j >= 0; j--)		// (i - 1) => � devido ao espa�amento j� pendente para o pr�ximo loop
		{
			std::cout << "  ";
		}
		for (int k = 0; k < 6 - i; k++)
		{
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;


	//TRI�NGULO D
	std::cout << "D)" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < (6 - 1) - i; j++)	// (6 - 1) => � devido ao espa�amento j� pendente para o pr�ximo loop
		{
			std::cout << "  ";
		}
		for (int k = i; k >= 0; k--)
		{
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
}