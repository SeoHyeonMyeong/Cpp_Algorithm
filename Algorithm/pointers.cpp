#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void pointers() {

	string name = "Bro";
	string food = "pizza";
	int age = 100;

	string* pName = &name;
	string* pFood = &food;
	int* pAge = &age;

	cout << "pointers value is address" << endl;
	cout << pName << endl;
	cout << pFood << endl;
	cout << pAge << endl;

	cout << "pointers *value is a value of pointed variable" << endl;
	cout << *pName << endl;
	cout << *pFood << endl;
	cout << *pAge << endl;

	cout << endl;
}