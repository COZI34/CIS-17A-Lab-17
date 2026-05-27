// David Duong
#include <iostream>
#include "Linked_List.h"

using namespace std;

int main() {
	// create a linked list
	Linked_List l;

	// insert some values into the linked list
	l.insert(2);
	l.insert(5);
	l.insert(7);
	l.insert(9);

	// print the linked list
	l.print();

	system("pause");
	return 0;
}
