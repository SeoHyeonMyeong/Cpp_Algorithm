#include <iostream>
#include "test.h"
using namespace std;

void arithmetic() {

	int num1, num2;

	cout << "1¹ø ¼ýÀÚ ÀÔ·Â: ";
	cin >> num1;
	cout << "2¹ø ¼ýÀÚ ÀÔ·Â: ";
	cin >> num2;

	cout << "¿¬»ê" << endl;
	cout << "µ¡¼À (+): " << num1 + num2 << endl;
	cout << "»¬¼À (-): " << num1 - num2 << endl;
	cout << "°ö¼À (*): " << num1 * num2 << endl;
	cout << "³ª´°¼À (/): " << num1 / num2 << endl;
	cout << "³ª¸ÓÁö (%): " << num1 % num2 << endl;
	cout << endl;

	cout << "! ³ª´°¼À ÁÖÀÇ !" << endl;
	cout << "Á¤¼ö / Á¤¼ö => Á¤¼ö ¸ò" << endl;
	cout << "Á¤¼ö / ½Ç¼ö => ½Ç¼ö" << endl;
	cout << "½Ç¼ö / Á¤¼ö => ½Ç¼ö" << endl;
	cout << "½Ç¼ö / ½Ç¼ö => ½Ç¼ö" << endl;

	cout << endl;
}