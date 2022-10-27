#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <math.h> // добавляем математические функции
#include "func.h"
#include "methods.h"
using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double (*f1pointer)(double) = NULL;
	double (*f2pointer)(double) = NULL;
	double (*f3pointer)(double) = NULL;
	double min = 0.0, max = 0.0; // отрезок интегрирования
	int n = 0; // число разбиений n
	// меню
	char choise;
	char choisee;
	cout << "Введіть значення проміжку інтегрування (мінімальне значення, мак-симальне значення):" << endl;
	cin >> min >> max;
	cout << "Введіть кількість кроків інтергування:" << endl;
	while (n <= 0)
	{
		cin >> n;
		if (n <= 0)
		{
			cout << "Помилка! Введіть значення більше 0!" << endl;
		}
	}
	system("cls");
	do {
		cout << "Меню:" << endl << "Оберіть функцію для інтергування:" << endl << "[1] f(x) = sin (x^3 + 2x)" << endl << "[2] f(x) = 2x + 3x^2 + 1" << endl << "[3] f(x) = (x/4 - 1)^5" << endl << "[4] Вийти з програми" << endl << "Оберіть опцію: ";
		cin >> choise;
		switch (choise)
		{
		case '1':
		{
			system("cls");
			cout << "Оберіть метод інтегрування: " << endl << "[1] Метод Сімпсона" << endl << "[2] Метод трапецій" << endl << "[3] Метод лівих прямокут-ників" << endl << "[4] Метод правих прямокутників" << endl << "[5] Метод се-редніх прямокутників" << endl << "Оберіть опцію: ";
			cin >> choisee;
			menu(choisee, f1, min, max, n);
			break;
		}
		case '2':
		{
			system("cls");
			cout << "Оберіть метод інтегрування: " << endl << "[1] Метод Сімпсона" << endl << "[2] Метод трапецій" << endl << "[3] Метод лівих прямокут-ників" << endl << "[4] Метод правих прямокутників" << endl << "[5] Метод се-редніх прямокутників" << endl << "Оберіть опцію: ";
			cin >> choisee;
			menu(choisee, f2, min, max, n);
			break;
		}
		case '3':
		{
			system("cls");
			cout << "Оберіть метод інтегрування: " << endl << "[1] Метод Сімпсона" << endl << "[2] Метод трапецій" << endl << "[3] Метод лівих прямокут-ників" << endl << "[4] Метод правих прямокутників" << endl << "[5] Метод се-редніх прямокутників" << endl << "Оберіть опцію: ";
			cin >> choisee;
			menu(choisee, f3, min, max, n);
			break;
		}
		case '4':
		{
			return 0;
			break;
		}
		default:
		{
			cout << endl << "Помилка! Виберіть пункт з меню.";
			break;
		}
		}

	} while (choise != '4');

	return 0;
}
