#include <iostream>
using std::cout;

double add(double, double);
double minus(double, double);
double multiply(double, double);
double divide(double, double);
bool isLess(double, double);
bool isBigger(double, double);

int main()
{
	cout << add(2, 5) << " \n";
	cout << minus(2, 5) << "\n";
	cout << multiply(2, 5) << "\n";
	cout << divide(2, 5) << "\n";
	cout << isLess(2, 5) << "\n";
	cout << isBigger(2, 5) << "\n";
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