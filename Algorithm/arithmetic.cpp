#include <iostream>
#include "test.h"
using namespace std;

void arithmetic() {

	int num1, num2;

	cout << "1�� ���� �Է�: ";
	cin >> num1;
	cout << "2�� ���� �Է�: ";
	cin >> num2;

	cout << "����" << endl;
	cout << "���� (+): " << num1 + num2 << endl;
	cout << "���� (-): " << num1 - num2 << endl;
	cout << "���� (*): " << num1 * num2 << endl;
	cout << "������ (/): " << num1 / num2 << endl;
	cout << "������ (%): " << num1 % num2 << endl;
	cout << endl;

	cout << "! ������ ���� !" << endl;
	cout << "���� / ���� => ���� ��" << endl;
	cout << "���� / �Ǽ� => �Ǽ�" << endl;
	cout << "�Ǽ� / ���� => �Ǽ�" << endl;
	cout << "�Ǽ� / �Ǽ� => �Ǽ�" << endl;

	cout << endl;
}