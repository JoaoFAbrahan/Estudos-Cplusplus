#include"classe.h"

void Carro::setGasolina(float tanqueGasolina)
{
	this->tanqueGasolina += tanqueGasolina;
}
void Carro::setDistancia(float kmPercorrido)
{
	this->kmPercorrido += kmPercorrido;
	tanqueGasolina -= (kmPercorrido / 15.0);
}
void Carro::getKm_e_QtdGasolina()
{
	std::cout << "- - - CARRO: - - -" << std::endl;
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "Gasolina: " << tanqueGasolina << std::endl;
	std::cout << "Km total: " << kmPercorrido << std::endl;
	std::cout << std::endl;
}