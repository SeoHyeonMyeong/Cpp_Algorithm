#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void welcome(string name, int age) {
	cout << "Welcome " << name << endl;
	cout << "your are " << age << " yo!" << endl;
};

void goodbye() {
	cout << "Goodbye!" << endl;
};

double add(double x, double y) {
	return x + y;
}

void user_defined_function() {

	string name;
	int age;

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your age: ";
	cin >> age;

	welcome(name, age);

	double num1, num2;

	cout << "Enter in #1: ";
	cin >> num1;
	cout << "Enter in #2: ";
	cin >> num2;

	cout << "result number is: " << add(num1, num2) << endl;

	goodbye();
}