#include "cppClasses.h"
using namespace std;

class myAnimal {
	// public members
public:
	bool quadrupedalism;
	float weight, height;
	string name;

	// basic constructor
	myAnimal() {}

	// overloaded constructor
	myAnimal(bool q, float w, float h) {
		quadrupedalism = q;
		weight = w;
		height = h;
	}

	// member function (method) for displaying animal properties
	void displayInfo() {
		cout << "My animal is a " << name << ".\n"
			<< "It is quadrupedal: "; numToBool(quadrupedalism); cout << ".\n"
			<< "They are normally " << height << "m tall/long, "
			<< "and " << weight << "kg heavy.\n";
	}

	// private members
private:
	bool endangered;
	string countryOrigin;

	// convert bool output of 1|0 to true|false
	void numToBool(bool boolVal) {
		if (boolVal = true)
			cout << "true";
		else if (boolVal = false)
			cout << "false";
		else
			cout << "invalid bool value";
	}
};

void cppClasses() {
	// Instantiating animal then assigning properties
	myAnimal unknownAnimal;
	unknownAnimal.quadrupedalism = false;
	unknownAnimal.name = "No Name";

	// Instantiating animal with overloaded constructor
	myAnimal myPlatypus(true, 1.5f, 0.38f);
	myPlatypus.name = "platypus";

	cout << "Using member function 'displayInfo()' to print properties:\n";
	myPlatypus.displayInfo();
}