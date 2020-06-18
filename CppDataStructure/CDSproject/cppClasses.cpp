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

// private members
private:			
	bool endangered;
	string countryOrigin;
};

void cppClasses() {
	// Instantiating animal then assigning properties
	myAnimal unknownAnimal;
	unknownAnimal.quadrupedalism = false;
	unknownAnimal.name = "No Name";

	// Instantiating animal with overloaded constructor
	myAnimal myPlatypus(true, 1.5, 0.38);
	myPlatypus.name = "platypus";
}