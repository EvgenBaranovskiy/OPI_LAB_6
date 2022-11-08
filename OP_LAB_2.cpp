﻿#include <iostream>
#include "windows.h"

using namespace std;
int main()
{
	// для кирилиці
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int A, B, H, C;
	double S, P;
	// 1. Функції потокового введення/виведення
	// 1.1 Вхідні дані задані у програмі
	A = 113;//Змінив значення
	B = 3;
	C = 2;
	H = 2;
	S = ((A + B) * H) / 2.0;
	P = A + B + 2 * C;
	
	cout << "1.1 Вхідні дані задані у програмі" << endl;
	
	cout << "Площа: " << S << endl;
	cout << "Периметр: " << P << endl;

	// 1.2 Вхідні дані задаються користувачем 
	cout << "1.2 Вхідні дані задаються користувачем " << endl;
	
	cout << "Введіть A(int): ";
	cin >> A;
	cout << "Введіть B(int): ";
	cin >> B;
	cout << "Введіть C(int): ";
	cin >> C;
	cout << "Введіть H(int): ";
	cin >> H;
	S = ((A + B) * H) / 2.0;
	P = A + B + 2 * C;
	
	cout << "Площа: " << S << endl;
	cout << "Периметр: " << P << endl;

	// 2. Введення/виведення здійснюється функціями форматного введення/виведення 
	// 2.1 Вхідні дані задані у програмі
	printf("2.1 Вхідні дані задані у програмі\n");
	
	A = 2;
	B = 2;
	C = 2;
	H = 2;
	S = ((A + B) * H) / 2.0;
	P = A + B + 2 * C;

	printf("Площа трапеції = %lf\nПериметр трапеції = %lf\n", S, P);

	// 2.2 Вхідні дані задаються користувачем 
	printf("2.2 Вхідні дані задаються користувачем \n");
	
	printf("Введіть A(int): ");
	scanf_s("%u", &A);
	printf("Введіть B(int): ");
	scanf_s("%u", &B);
	printf("Введіть C(int): ");
	scanf_s("%u", &C);
	printf("Введіть H(int): ");
	scanf_s("%u", &H);
	S = ((A + B) * H) / 2.0;
	P = A + B + 2 * C;

	printf("Площа трапеції = %lf\nПериметр трапеції = %lf\n", S, P);

	//Кінець програми
	system("pause");
	return 0;
}

