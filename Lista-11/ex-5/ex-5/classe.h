#pragma once
#include<iostream>
#include<iomanip>
#include<locale>
#include<string>

class Televisao
{
public:
	void controleVolume(int operacao);
	void controleCanal(int operacao);
	void getCanal_e_Volume();

private:
	int volumeAtual = 0;
	int canalAtual = 0;
};