//============================================================================
// Name        : prototypesAndIncludes.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "utils.h"
//this is called prototype, shows what function takes and gives

//this will make the main function compile and basically hoist the function

int main() {

	int num = multiplyByThree(4);
	cout << num << endl;
	doSomething();
	doSomething();
	return 0;
}

void doSomething(){
	cout << "Hello" << endl;
}

int multiplyByThree(int num){
	return num*3;
}
