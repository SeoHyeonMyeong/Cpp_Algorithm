#include <iostream>
#include <string>
#include <algorithm>
#include "test.h"
using namespace std;

void math_function() {
	double x;
	double y;

	cout << "Enter in number 1: ";
	cin >> x;

	cout << "Enter in number 2: ";
	cin >> y;

	cout << "Max number is " << max(x, y) << endl;
	cout << "Min number is " << min(x, y) << endl;
	cout << "Power x, y is " << pow(x, y) << endl;
	cout << "Square root of x is " << sqrt(x) << endl;
	cout << "Absolute value of x is " << abs(x) << endl;
	cout << "Round of x is " << round(x) << endl;
	cout << "Ceil of x is " << ceil(x) << endl;
	cout << "Floor of x is " << floor(x) << endl;

	cout << endl;
} 