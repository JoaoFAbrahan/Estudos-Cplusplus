/*
	EXERC�CIO 8:
		Leia uma data e determine se ela � v�lida. Ou seja, verifique se o m�s est� entre 1 e 12, e se o dia existe naquele m�s. 
		Note que fevereiro tem 29 dias em anos bissextos, e 28 dias em anos n�o bissextos.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int dia, mes, ano;

	std::cout << "Digite uma data v�lida:" << std::endl << "DIA: ";
	std::cin >> dia;
	std::cout << "M�S: ";
	std::cin >> mes;
	std::cout << "ANO: ";
	std::cin >> ano;
	std::cout << std::endl;

	//Verifica ano bissexto
	if (ano % 4 == 0 && ano % 100 != 0)
	{
		//Verifica se o mes � v�lido
		if (mes > 0 && mes <= 12)
		{
			//Verifica se s�o meses com 30 dias
			if (mes <= 6 && mes % 2 == 0 && mes != 2)
			{
				if (dia > 0 && dia <= 30)
				{
					std::cout << "Data v�lida!" << std::endl;
				}
				else
				{
					std::cout << "Data inv�lida!" << std::endl;
				}
			}
			else if (mes > 6 && mes % 2 != 0)
			{
				if (dia > 0 && dia <= 30)
				{
					std::cout << "Data v�lida!" << std::endl;
				}
				else
				{
					std::cout << "Data inv�lida!" << std::endl;
				}
			}

			//Verifica se � Fevereiro de ano bissexto (29 dias)
			else if (mes == 2)
			{
				if (dia > 0 && dia <= 29)
				{
					std::cout << "Data v�lida!" << std::endl;
				}
				else
				{
					std::cout << "Data inv�lida!" << std::endl;
				}
			}

			//Caso nenhuma das anteriores seja verdadeira, s�o meses com 31 dias
			else
			{
				if (dia > 0 && dia <= 31)
				{
					std::cout << "Data v�lida!" << std::endl;
				}
				else
				{
					std::cout << "Data inv�lida!" << std::endl;
				}
			}
		}
		else
		{
			std::cout << "M�s inv�lido!" << std::endl;
		}
	}
	else
	{
		//Verifica se o mes � v�lido
		if (mes > 0 && mes <= 12)
		{
			//Verifica se s�o meses com 30 dias
			if (mes <= 6 && mes % 2 == 0 && mes != 2)
			{
				if (dia > 0 && dia <= 30)
				{
					std::cout << "Data v�lida!" << std::endl;
				}
				else
				{
					std::cout << "Data inv�lida!" << std::endl;
				}
			}
			else if (mes > 6 && mes % 2 != 0)
			{
				if (dia > 0 && dia <= 30)
				{
					std::cout << "Data v�lida!" << std::endl;
				}
				else
				{
					std::cout << "Data inv�lida!" << std::endl;
				}
			}

			//Verifica se � Fevereiro de ano n�o bissexto (28 dias)
			else if (mes == 2)
			{
				if (dia > 0 && dia <= 28)
				{
					std::cout << "Data v�lida!" << std::endl;
				}
				else
				{
					std::cout << "Data inv�lida!" << std::endl;
				}
			}

			//Caso nenhuma das anteriores seja verdadeira, s�o meses com 31 dias
			else
			{
				if (dia > 0 && dia <= 31)
				{
					std::cout << "Data v�lida!" << std::endl;
				}
				else
				{
					std::cout << "Data inv�lida!" << std::endl;
				}
			}
		}
		else
		{
			std::cout << "M�s inv�lido!" << std::endl;
		}
	}
}