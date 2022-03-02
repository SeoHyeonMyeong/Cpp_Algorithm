#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void while_loop() {
	// while loop

	string name;

	while (name.empty()) {
		cout << "Please enter your name" << endl;
		getline(cin, name);
	}
	cout << "Welcome " << name;


	// do-while loop

	string answer;

	do {
		cout << "You are playing the Game" << endl;
		cout << " * pew pew * " << endl;
		cout << "Press q to quit!" << endl;
		getline(cin, answer);
		cout << "***************************" << endl;
	} while (answer.at(0)!='q' && answer.at(0)!='Q');

	cout << "You have quit the Game!" << endl;

	cout << endl;
}