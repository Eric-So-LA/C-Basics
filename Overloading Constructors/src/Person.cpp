/*
 * Person.cpp
 *
 *  Created on: Jul 28, 2016
 *      Author: ericso0303
 */

#include <sstream>
#include "Person.h"

Person::Person(){
	name = "undefined";
	age = 0;
}
Person::Person(string newName, int newAge){
	name = newName;
	age = newAge;
}
string Person::toString(){
	stringstream ss;
	ss << "Name: " << name << "; age: " << age;

	return ss.str();
}
