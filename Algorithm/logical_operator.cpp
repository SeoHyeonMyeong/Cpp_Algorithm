#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void logical_operator() {
	// && AND logical operator
	// || OR logical operator
	// ! NOT logical operator

	double temp;
	string cough;
	string name;

	cout << "Enter your name: ";
	getline(cin, name);

	if (!name.empty()) {
		cout << "Welcome " << name << endl;
	}
	else {
		cout << "You did not enter your name! >:(" << endl;
	}

	cout << "Enter your temperature (C): ";
	cin >> temp;
	
	cout << "Do you have a cough (yes/no): ";
	cin >> cough;

	if (cough.at(0) == 'y' || cough.at(0) == 'Y') {
		cout << "You are sick!" << endl;
	}
	else {
		cout << "You are probably fine" << endl;
	}

	if (temp >= 35 && temp <= 37.5) {
		cout << "Your temperature is normal" << endl;
	}
	else {
		cout << "Your temperature is weird." << endl;
	}

	cout << endl;
}