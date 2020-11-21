#include"classe.h"

void Arcondicionado::setPotencia()
{
	bool loop = true;
	do
	{
		system("cls");

		std::cout << "Digite a potência: (0 a 10)" << std::endl;
		std::cin >> potencia;

		if (potencia >= 0 && potencia <= 10)
		{
			tempArcondicionado = potencia * 1.8;
			loop = false;
		}
		else
		{
			std::cout << "Potência inválida!" << std::endl;
			system("pause");
		}
	} while (loop == true);
	
}
void Arcondicionado::setTemperatura(float temp)
{
	tempExterna = temp;
}
void Arcondicionado::getTemperatura()
{
	std::cout << "Temp: " << (tempExterna - tempArcondicionado) << "ºC" << std::endl;
	std::cout << "Potência: " << potencia << std::endl;
}