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

	cout << endl;
}