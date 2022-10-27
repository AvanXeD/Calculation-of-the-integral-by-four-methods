#pragma once
#include <iostream> 
#include <Windows.h>
#include <math.h>
using namespace std;

double simpson(double (*fpointer)(double), double min, double max, int n) // ме-тод симпсона
{
	double h = (max - min) / n;
    double I = fpointer(min) + fpointer(max);
    double x = 0.0;
    for (int i = 1; i < n - 1; i++) {
        x = 2 + 2 * (i % 2);
        I += x * fpointer(min + i * h);
	}
    I *= h / 3;
	return I;
}

double trapezoid(double (*fpointer)(double), double a, double b, int n)        // метод трапеций
{
    double h = (b - a) / n;

    double I = 0;
    for (int i = 0; i < n; i++) {
        double x1 = a + i * h;
        double x2 = a + (i + 1) * h;

        I += 0.5 * (x2 - x1) * (fpointer(x1) + fpointer(x2));
    }

    return I;
}

double left(double(*fpointer)(double), double min, double max, int n)          //метод левых интегралов
{
    double h = (max - min) / n;
    double I = 0.0;
    for (int i = 0; i <= n - 1; i++)
    {
        I += h * fpointer(min + i * h);
    }
    return I;
}

double right(double(*fpointer)(double), double min, double max, int n) {     //метод правых интергалов
    double h = (max - min) / n;
    double I = 0.0;
    for (int i = 1; i <= n; i++)
    {
        I += h * fpointer(min + i * h);
    }
    return I;

}


double mid(double(*fpointer)(double), double min, double max, int n)          //метод средних интегралов
{
    double h = (max - min) / n;
    double I = 0.0;
    for (int i = 0; i <= n - 1; i++)
    {
        I += h * fpointer((min + i * h) + (h/2));
    }
    return  I;
}
