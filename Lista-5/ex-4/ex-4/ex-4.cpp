/*
	EXERC�CIO 4:
		Considere a seguinte declara��o: int A, *B, **C, ***D; escreva um programa que leia a vari�vel a e calcule e exiba o dobro, o triplo
		e o qu�druplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo 
		e D o qu�druplo.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int A;
	int* B, ** C, *** D;

	std::cout << "Digite um n�mero:" << std::endl;
	std::cin >> A;
	std::cout << std::endl;

	//Endere�ando os ponteiros
	B = &A;
	C = &B;
	D = &C;

	//calculando dobro, tr�plo e qu�druplo
	*B += A;
	std::cout << "Dobro: " << *B << std::endl;
	
	**C += *B / 2;
	std::cout << "Tr�plo: " << **C << std::endl;
	
	***D += **C / 3;
	std::cout << "Qu�druplo: " << ***D << std::endl;
} 