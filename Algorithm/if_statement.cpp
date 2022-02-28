#include <iostream>
#include "test.h"
using namespace std;

void if_statement() {
	int age;

	cout << "나이를 입력하세요: ";
	cin >> age;

	if (age >= 18) {
		cout << "당신은 어른입니다" << endl;
	}
	else if (age >= 10) {
		cout << "당신은 청소년입니다." << endl;
	}
	else {
		cout << "당신은 아이입니다" << endl;
	}

	cout << endl;
}