// ivan 11.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//5. Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), используя  алгоритм Евклида

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "введите числа" << endl;
	cin >> a >> b;
	while ((a < 0) || (b < 0))
	{
		cout << "введите числа" << endl;
		cin >> a >> b;
	}

	while (a != b) {
		if (a >= b) {
			a = a - b;;
		}
		else if (b >= a) {
			b = b - a;
		}
	}
	cout << "наибольший общий делитель =  " << b;
	return 0;
}