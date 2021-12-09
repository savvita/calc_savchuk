#include <iostream>
#include"calc.h"
using std::cout;

int main()
{
	calc calc;
	cout << calc.add(2, 5) << "\n";
	cout << calc.minus(2, 5) << "\n";
	cout << calc.multiply(2, 5) << "\n";
	cout << calc.divide(2, 5) << "\n";
	cout << calc.isBigger(2, 5) << "\n";
	cout << calc.isLess(2, 5) << "\n";
	cout << calc.isEqual(2, 5) << "\n";
	cout << calc.isNotEqual(2, 5) << "\n";
}

