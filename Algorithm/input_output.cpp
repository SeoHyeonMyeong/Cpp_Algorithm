#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void input_output() {
	string item;
	double price;
	int quantity;
	double total;

	cout << "What item do you wanna buy? ";
	getline(cin, item);
	cout << "What is the price for each? $";
	cin >> price;
	cout << "How many do you wnat to buy? ";
	cin >> quantity;
	cout << endl;
	
	total = price * quantity;

	cout << "item: " << item << endl;
	cout << "price: $" << price;
	cout << " x " << quantity << endl;
	cout << "Total: $" << total << endl;
	cout << endl;
}