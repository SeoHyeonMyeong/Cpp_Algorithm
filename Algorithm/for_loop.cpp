#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void for_loop() {
	// for loop

	for (int i = 1; i <= 10; i++) {
		cout << i << endl;
	}

	cout << "I can count to 10 :D" << endl;

	// for loop

	string word;

	cout << "Enter the word to spell: ";
	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		cout << word.at(i) << " ";
	}
	cout << endl;
}