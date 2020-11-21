#pragma once
#include<iostream>
#include<iomanip>
#include<locale>
#include<string>

class Carro
{
public:
	void setGasolina(float tanqueGasolina);
	void setDistancia(float kmPercorrido);
	void getKm_e_QtdGasolina();

private:
	float tanqueGasolina = 0.0;
	float kmPercorrido = 0.0;
};