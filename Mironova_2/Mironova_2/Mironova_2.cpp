// Mironova_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "Russian");
	cout << "Введите трехзначное число: ";
	int number;
	cin >> number;
	int last_num = number % 10;
	int data = number / 10;
	int second_num = data % 10;

	cout << (last_num > second_num ? "Последняя" : "Вторая") << " цифра больше";
}