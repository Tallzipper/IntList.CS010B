#ifndef INTLIST_H
#define INTLIST_H

#include <iostream>
using namespace std;

struct IntNode {
	int value;
	IntNode *next;
	IntNode(int value) : value(value), next(nullptr) { }
};

class IntList {
 private:
	IntNode *head;
	IntNode *tail;
 public:
	IntList(); 													// Initializes an empty list
	~IntList();													// Destructor
	void clear();												// Dealocates all nodes in linked list
	void push_front(int);										// Inserts node to front of the list
	void pop_front();											// Kills the node at the front of the list
	bool empty() const;											// Returns true if list is empty
	const int & front() const;									// Returns the front of the list
	const int & back() const;									// Returns the back of the list
	friend ostream & operator<<(ostream &, const IntList &);	/* Overloads insersion operator. Don't stress. This doesn't get output to a file
																   You're fine.
																*/ 
};

#endif
