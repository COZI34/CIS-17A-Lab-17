#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"
// Linked_List class definition
class Linked_List {
private:
	Node* head;
public:
	// constructor to initialize the head of the linked list
	Linked_List() { head = NULL; }
	// destructor to free the memory used by the linked list
	~Linked_List();
	// insert a value into the linked list
	void insert(int val);
	// print the linked list
	void print() const;
};

#endif
