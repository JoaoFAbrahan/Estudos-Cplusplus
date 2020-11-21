/*
	EXERCÍCIO 4:
		Considere a seguinte declaração: int A, *B, **C, ***D; escreva um programa que leia a variável a e calcule e exiba o dobro, o triplo
		e o quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo 
		e D o quádruplo.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int A;
	int* B, ** C, *** D;

	std::cout << "Digite um número:" << std::endl;
	std::cin >> A;
	std::cout << std::endl;

	//Endereçando os ponteiros
	B = &A;
	C = &B;
	D = &C;

	//calculando dobro, tríplo e quádruplo
	*B += A;
	std::cout << "Dobro: " << *B << std::endl;
	
	**C += *B / 2;
	std::cout << "Tríplo: " << **C << std::endl;
	
	***D += **C / 3;
	std::cout << "Quádruplo: " << ***D << std::endl;
} 