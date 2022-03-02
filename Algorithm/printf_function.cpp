#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void printf_function() {
	// printf function

	string make = "Ford";
	string model = "Mustang";
	int year = 2022;
	double price = 599.999;
	char for_sale = 'Y';

	printf("Your car is made by: %s\n", make.c_str());
	printf("Your car is a: %s %s\n", make.c_str(), model.c_str());

	printf("The year is: %d\n", year);
	printf("The price is: %.2f\n", price);
	printf("is it for sale: %c\n", for_sale);

	cout << endl;
}