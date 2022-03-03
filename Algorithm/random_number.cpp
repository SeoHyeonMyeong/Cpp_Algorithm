#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h> //srand, rand
#include <time.h>	//time
#include "test.h"
using namespace std;

void random_number() {

	srand(time(NULL));

	// 1~10 까지의 랜덤 숫자 생성
	int num1 = rand() % 10 + 1;
	int num2 = rand() % 10 + 1;
	int num3 = rand() % 10 + 1;
	
	cout << num1 << " " << num2 << " " << num3 << endl;

	int answer = rand() % 10 + 1;
	int response;
	int score = 10;

	do {
		cout << "Enter your guess (1-10): ";
		cin >> response;

		if (response > answer) {
			cout << "That was too high!" << endl;
		}
		else if (response < answer) {
			cout << "That was too low!" << endl;
		}
		else {
			cout << "Answer!" << endl;
		}
		score--;
	} while (response != answer);

	cout << "Answer is: " << answer << endl;
	cout << "Your score is: " << score << endl;

	cout << endl;
}