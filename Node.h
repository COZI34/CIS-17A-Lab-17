#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node {
private:
	int val;
	Node* next;
public:
	// constructor to initialize the value and next pointer of the node
	Node(int num) { val = num; next = NULL;}
	// returns the next pointer of the node
	Node* getNext() { return next; }
	// returns the value of the node
	int getVal() { return val; }
	// sets the next pointer of the node
	void set_next(Node* n) { next = n; }
};

#endif
