#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void string_function() {
	string name;

	cout << "이름을 입력하시오: ";
	getline(cin, name);

	if (name.length() >= 30) {
		cout << "이름은 최대 30글자를 넘을 수 없습니다." << endl;
	}
	else if (name.empty()) {
		cout << "이름은 공백일 수 없습니다." << endl;
	}
	else {
		cout << "Welcome " << name << endl;
	}

	string email = name.append("@gmail.com");
	string nickname = name.substr(0, 3);

	char letter1 = name.at(0);
	cout << "Your name is start with " << letter1 << endl;
	cout << "Your email is " << email << endl;
	cout << "Your nickname is " << nickname << endl;
	cout << "Your name length is " << name.length() << endl;

	string phone_number;
	cout << "Enter your phone number: ";
	getline(cin, phone_number);

	phone_number.erase(0, 4);
	cout << "phone number: " << phone_number;

	cout << endl;
}