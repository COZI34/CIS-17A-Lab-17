#include "Linked_List.h"

// destructor to free the memory used by the linked list
Linked_List::~Linked_List() {
	Node* tmp = head;
	while (tmp != NULL) {
		Node* del = tmp;
		tmp = tmp->getNext();
		delete del;
	}
}
// insert a value at the beginning of the linked list
void Linked_List::insert(int val) {
	Node* tmp = new Node(val);
	tmp->set_next(head);
	head = tmp;
}
// print the linked list
void Linked_List::print() const {
	Node* tmp = head;
	while(tmp != NULL) {
		cout << tmp->getVal() << " ";
		tmp = tmp->getNext();
	}
	cout << endl;
}
