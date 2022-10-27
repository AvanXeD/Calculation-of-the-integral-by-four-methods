#include <iostream> 
#include <Windows.h>
#include <math.h>
#include "methods.h"
using namespace std;

double f1(double x)	// f(x) = sin (x^3 + 2x)
{
	return (sin(pow(x, 3) + 2*x));
}

double f2(double x) // f(x) = 2x + 3x^2 + 1
{
	return (2 * x + 3 * pow(x, 2) + 1);
}

double f3(double x)	// f(x) = (x/4 - 1)^5
{
	return (pow((x / 4 - 1), 5));
}

void menu(char choisee, double (*fpointer)(double), double min, double max, dou-ble n)
{
		switch (choisee)
		{
		case '1':
		{
			system("cls");
			cout << "Метод Сімпсона:" << endl << simpson(fpointer, min, max, n) << endl;
			break;
		}
		case '2':
		{
			system("cls");
			cout << "Метод трапецій:" << endl << trapezoid(fpointer, min, max, n) << endl;
			break;
		}
		case '3':
		{
			system("cls");
			cout << "Метод лівих прямокутників:" << endl << left(fpointer, min, max, n) << endl;
			break;
		}
		case '4':
		{
			system("cls");
			cout << "Метод правих прямокутників:" << endl << right(fpointer, min, max, n) << endl;
			break;
		}
		case '5':
		{
			system("cls");
			cout << "Метод середніх прямокутників:" << endl << mid(fpointer, min, max, n) << endl;
			break;
		}
		default:
		{
			cout << endl << "Помилка! Виберіть пункт з меню.";
			break;
		}
		}
		
}
