#pragma once
#include<iostream>
#include<iomanip>
#include<locale>
#include<string>

class Arcondicionado
{
public:
	void setPotencia();
	void setTemperatura(float temp);
	void getTemperatura();

private:
	float tempArcondicionado;
	float tempExterna;
	int potencia;
};