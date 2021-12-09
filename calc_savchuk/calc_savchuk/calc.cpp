#include "calc.h"

double calc::add(double x, double y)
{
	return x + y;
}

double calc::minus(double x, double y)
{
	return x - y;
}

double calc::multiply(double x, double y)
{
	return x * y;
}

double calc::divide(double x, double y)
{
	if (y != 0)
		return x / y;
	return 0;
}

bool calc::isLess(double x, double y)
{
	return x < y;
}

bool calc::isBigger(double x, double y)
{
	return x > y;
}