#include <iostream>
#include "test.h"
using namespace std;

void if_statement() {
	int age;

	cout << "���̸� �Է��ϼ���: ";
	cin >> age;

	if (age >= 18) {
		cout << "����� ��Դϴ�" << endl;
	}
	else if (age >= 10) {
		cout << "����� û�ҳ��Դϴ�." << endl;
	}
	else {
		cout << "����� �����Դϴ�" << endl;
	}

	cout << endl;
}