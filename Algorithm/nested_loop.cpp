#include <iostream>
#include "test.h"
using namespace std;

void nested_loop() {
	//nested loop

	char symbol;
	int width, height;
	

	cout << "Enter the symbol to use: ";
	cin >> symbol;

	cout << "Enter the width: ";
	cin >> width;

	cout << "Enter the height: ";
	cin >> height;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << symbol;
		}
		cout << endl;
	}
	cout << endl;
}