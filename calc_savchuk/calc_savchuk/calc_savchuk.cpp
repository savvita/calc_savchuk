#include <iostream>

double add(double, double);
double minus(double, double);
double multiply(double, double);
double divide(double, double);
bool isLess(double, double);

int main()
{
}

double add(double x, double y)
{
	return x + y;
}

double minus(double x, double y)
{
	return x - y;
}

double multiply(double x, double y)
{
	return x * y;
}

double divide(double x, double y)
{
	if (y != 0)
		return x / y;
	return 0;
}

bool isLess(double x, double y)
{
	return x < y;
}

bool isBigger(double x, double y)
{
	return x > y;
}