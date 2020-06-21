#include "cppVectors.h"
using namespace std;

void vectorExample() {
	printf("testing vectorExample!\n");

	// myVector is now a vector of ints
	vector<int> myVector;

	// Fills vector with 7 five times (five 7's)
	myVector.assign(5, 7);

	// Appends 12 to the end of the vector
	myVector.push_back(12);

	// Prints vector
	cout << "myVector contains elements: ";
	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << " ";
	}
	cout << endl;

	// Pops the last element of the vector off
	myVector.pop_back();
	cout << "After using 'pop_back', vector is now: ";
	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << " ";
	}
	cout << endl;

	// vector.insert() takes a position and value to insert
	// in this case it inserts 3 to the beginning of the vector
	myVector.insert(myVector.begin(), 3);
	cout << "First elem of myVector after using .insert(): " << myVector[0] << endl;

	// vector.erase() takes a position to erase
	// in this case it removes the first element of the vector
	myVector.erase(myVector.begin());
	cout << "First elem of myVector after using .erase(): " << myVector[0] << endl;

	// max_element displays the largest value in the vector
	// algorithm library was needed (see above)
	cout << "This is the max element in myVector: " << *max_element(myVector.begin(), myVector.end()) << endl;

}