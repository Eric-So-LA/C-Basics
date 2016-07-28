//============================================================================
// Name        : String.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
//stands for string stream
#include <sstream>

using namespace std;

int main() {
	//string streams let you concatenate different data
	string name = "Bob";
	int age = 32;

	stringstream ss;
	ss << "Name is: " << name << ", Age is: " << age;
	string info = ss.str();
	cout << info << endl;
//	string info = "Name: " + name + ", age: " + age;

	return 0;
}
