#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void arrays() {

	string cars[] = { "Corvette", "Tesla", "Ferrari", "Audi" };

	cars[3] = "Mustang";

	for (int i = 0; i < size(cars); i++) {
		cout << cars[i] << endl;
	}

	int num;

	cout << "How many people in this room?: ";
	cin >> num;
	cin.ignore();

	string* pPeople = new string[num];

	for (int i = 0; i < num; i++) {
		cout << "Enter the person name: ";
		getline(cin, pPeople[i]);
	}

	for (int i = 0; i < num; i++) {
		cout << pPeople[i] << endl;
	}


	cout << endl;
}