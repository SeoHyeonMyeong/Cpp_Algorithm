#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void arrays_2D() {

	int arrays[3][4] = { 
		{ 0, 1, 2, 3 }, 
		{ 4, 5, 6, 7 }, 
		{ 8, 9, 10, 11 } 
	};

	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 4; col++) {
			cout << arrays[row][col] << " ";
		}
		cout << endl;
	}
	cout << endl;

	char keyboard[4][10] = {
		{'1','2','3','4','5','6','7','8','9','0'},
		{'Q','W','E','R','T','Y','U','I','O','P'},
		{'A','S','D','F','G','H','J','K','L',';'},
		{'Z','X','C','V','B','N','M',',','.','/'}
	};

	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 10; col++) {
			cout << keyboard[row][col] << " ";
		}
		cout << endl;
	}

	cout << endl;
}