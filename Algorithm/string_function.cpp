#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void string_function() {
	string name;

	cout << "�̸��� �Է��Ͻÿ�: ";
	getline(cin, name);

	if (name.length() >= 30) {
		cout << "�̸��� �ִ� 30���ڸ� ���� �� �����ϴ�." << endl;
	}
	else if (name.empty()) {
		cout << "�̸��� ������ �� �����ϴ�." << endl;
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