/*
	EXERCÍCIO 8:
		Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. 
		Note que fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int dia, mes, ano;

	std::cout << "Digite uma data válida:" << std::endl << "DIA: ";
	std::cin >> dia;
	std::cout << "MÊS: ";
	std::cin >> mes;
	std::cout << "ANO: ";
	std::cin >> ano;
	std::cout << std::endl;

	//Verifica ano bissexto
	if (ano % 4 == 0 && ano % 100 != 0)
	{
		//Verifica se o mes é válido
		if (mes > 0 && mes <= 12)
		{
			//Verifica se são meses com 30 dias
			if (mes <= 6 && mes % 2 == 0 && mes != 2)
			{
				if (dia > 0 && dia <= 30)
				{
					std::cout << "Data válida!" << std::endl;
				}
				else
				{
					std::cout << "Data inválida!" << std::endl;
				}
			}
			else if (mes > 6 && mes % 2 != 0)
			{
				if (dia > 0 && dia <= 30)
				{
					std::cout << "Data válida!" << std::endl;
				}
				else
				{
					std::cout << "Data inválida!" << std::endl;
				}
			}

			//Verifica se é Fevereiro de ano bissexto (29 dias)
			else if (mes == 2)
			{
				if (dia > 0 && dia <= 29)
				{
					std::cout << "Data válida!" << std::endl;
				}
				else
				{
					std::cout << "Data inválida!" << std::endl;
				}
			}

			//Caso nenhuma das anteriores seja verdadeira, são meses com 31 dias
			else
			{
				if (dia > 0 && dia <= 31)
				{
					std::cout << "Data válida!" << std::endl;
				}
				else
				{
					std::cout << "Data inválida!" << std::endl;
				}
			}
		}
		else
		{
			std::cout << "Mês inválido!" << std::endl;
		}
	}
	else
	{
		//Verifica se o mes é válido
		if (mes > 0 && mes <= 12)
		{
			//Verifica se são meses com 30 dias
			if (mes <= 6 && mes % 2 == 0 && mes != 2)
			{
				if (dia > 0 && dia <= 30)
				{
					std::cout << "Data válida!" << std::endl;
				}
				else
				{
					std::cout << "Data inválida!" << std::endl;
				}
			}
			else if (mes > 6 && mes % 2 != 0)
			{
				if (dia > 0 && dia <= 30)
				{
					std::cout << "Data válida!" << std::endl;
				}
				else
				{
					std::cout << "Data inválida!" << std::endl;
				}
			}

			//Verifica se é Fevereiro de ano não bissexto (28 dias)
			else if (mes == 2)
			{
				if (dia > 0 && dia <= 28)
				{
					std::cout << "Data válida!" << std::endl;
				}
				else
				{
					std::cout << "Data inválida!" << std::endl;
				}
			}

			//Caso nenhuma das anteriores seja verdadeira, são meses com 31 dias
			else
			{
				if (dia > 0 && dia <= 31)
				{
					std::cout << "Data válida!" << std::endl;
				}
				else
				{
					std::cout << "Data inválida!" << std::endl;
				}
			}
		}
		else
		{
			std::cout << "Mês inválido!" << std::endl;
		}
	}
}