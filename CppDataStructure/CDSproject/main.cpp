#include <iostream>
#include "cppVectors.h"
#include "cppClasses.h"
#include <string>
using namespace std;

// Example of common string functions used
void stringExample(bool extraText) {
	string myString = "Hello World! This is extra text.";

	// .length() to display length of string
	int stringLength = myString.length();
	// strings act as arrays, use [] as indexer
	char myChar = myString[6]; // should be W
	// .substr(int1, int2) isolates string from int1 to int2
	string extraString = myString.substr(13, 31); // should be "This is extra text."
	// .erase(int1, int2) similarly erases text from int1 to int2
	myString.erase(11, 31);
	// .insert(int, string) inserts string at int location
	myString.insert(11, "!");

	if (extraText == true) {
		string myString = "Hello World! This is extra text.";
		cout << "Currently myString displays: " << myString << endl
			<< "Using .length displays: " << stringLength << endl
			<< "Using myString[7] displays: " << myChar << endl
			<< "Using .substr(13,31) displays: " << extraString << endl;
		myString.erase(11, 31);
		cout << "Using .erase(11,31) displays: " << myString << endl;
		myString.insert(11, "!");
		cout << "Using .insert(11,'!') displays: " << myString << endl;
	}
	else {
		cout << myString << endl;
	}
}

int main() {
	//printf("hello world!\n");
	stringExample(false); // print hello world

	//vectorExample();
	cppClasses();
	cin.get();
	return 0;
}