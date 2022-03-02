#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void bakePizza(string bread) {
	cout << "Here is your ";
	cout << bread << " ";
	cout << " pizza" << endl;

};
void bakePizza(string bread, string sauce) {
	cout << "Here is your ";
	cout << bread << " ";
	cout << sauce << " ";
	cout << " pizza" << endl;

};
void bakePizza(string bread, string sauce, string cheese) {
	cout << "Here is your ";
	cout << bread << " ";
	cout << sauce << " ";
	cout << cheese << " ";
	cout << " pizza" << endl;

};
void bakePizza(string bread, string sauce, string cheese, string topping) {
	cout << "Here is your ";
	cout << bread << " ";
	cout << sauce << " ";
	cout << cheese << " ";
	cout << topping << " ";
	cout << " pizza" << endl;

};

void overloaded_function() {
	
	string bread = "thicc crust";
	string sauce = "marinara";
	string cheese = "mozzerella";
	string topping = "pepperoni";

	bakePizza(bread, sauce, cheese);
	
	cout  << endl;
}