#include <iostream>
#include <string>
#include <algorithm>
#include "test.h"
using namespace std;

class Human {
public:
	string name;
	int age;
	double weight;

	Human(string name, int age, double weight) {
		this->name = name;
		this->age = age;
		this->weight = weight;
	}
	Human(string name, int age) {
		this->name = name;
		this->age = age;
	}

	void eat() {
		cout << this->name << " is eating" << endl;
	}

	void drink() {
		cout << this->name << " is drinking" << endl;
	}

	void sleep() {
		cout << this->name << " is sleeping" << endl;
	}
};

void object_oriented_programming() {

	Human human1("Seo", 24, 64);
	Human human2("Ash", 30, 80);
	Human human3("Jerry", 45, 55);
	
	cout << human1.age << endl;
	cout << human1.name << endl;

	cout << human2.age << endl;
	cout << human2.name << endl;

	human1.eat();
	human2.drink();
	human3.sleep();

	cout << endl;
}