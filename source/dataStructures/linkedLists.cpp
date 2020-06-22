#include "linkedLists.h"

using namespace std;

class node {
public:
	node* next;
	int data;

	node() {}
	node(int D) { data = D; }
};

void linkedListExample() {
	cout << "This will be my linked list\n";
	// Creates new instance of node
	node newNode;
	// Creates pointer pointing to previously made node
	node* firstNode = &newNode;

	// Creating pointers pointing at 3 new nodes
	node* head = new node();
	node* second = new node();
	node* third = new node();

	// Linking the nodes together
	head->next = second;
	second->next = third;
	third->next = NULL;

	// Assigning values to each node
	head->data = 1;
	second->data = 2;
	third->data = 3;

	// Accessing third node from head
	int access = head->next->next->data;
	cout << "Via head access, third node val is: " << access;

	// Removing second node, connecting head to third node
	delete second;
	head->next = third;
}