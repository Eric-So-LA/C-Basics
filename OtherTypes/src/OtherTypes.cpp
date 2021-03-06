//============================================================================
// Name        : OtherTypes.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bVal = false;

	cout << "bval: " << bVal << endl;

	//you put integers into char, and it returns the character that it represents in ascii

	//a '7' in char is different from the number 7 in ascii table
	char val1 = '9';
	char val2 = 58;
	char val3 = 126;

	cout << "values 1 to 3: " << val1 << " " << val2 << " " << val3 << endl;

	cout << "Size of Char: " << sizeof(char) << endl;

	wchar_t wVal = 'i';
	cout << (char)wVal << endl;

	cout << "Size of wchar_t" << sizeof(wchar_t) << endl;

	return 0;
}
