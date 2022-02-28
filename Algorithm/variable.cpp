#include <iostream>
#include <vector>
#include "test.h"
using namespace std;

void variable() {

	int year = 2022;
	double price = 9999.99;
	char status = 'N';
	string model = "Gucci";
	bool for_sale = true;

	vector <int> ages;
	ages.push_back(10);
	ages.push_back(20);
	ages.push_back(30);

	cout << "--------------------------------" << endl;
	cout << "Exacute Variable Function" << endl;
	cout << "Year: " << year << endl;
	cout << "Price: " << price << endl;
	cout << "Status: " << status << endl;
	cout << "Model: " << model << endl;
	cout << "For_sale?: " << for_sale << endl;
	cout << "Age Lists: " << ages[0] << " " << ages[1] << " " << ages[2] << endl;

}