// Number symbols in string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a;
	getline(cin, a);//введення рядка
	int size = a.size();
	
	cout << "Кількість літер, цифр та символів у стрічці дорівнює - " << size <<endl;	
}
