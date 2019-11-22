#include <iostream>
#include "IntegerListt.h"

IntegerListt::IntegerListt()			// constructor
        : head(NULL), n(0) { }

int& IntegerListt::front() 		// return front element
{
    if (n==0) throw length_error("empty list");
    return head->getElement();
}

IntegerListt::~IntegerListt()			// destructor
{
    while (n > 0) removeFront();
}

void IntegerListt::addFront(int e) {	// add to front of list
    IntListNode* v = new IntListNode(e, head);		// create new node
    head = v;				// v is now the head
    n++;
}

void IntegerListt::removeFront() {		// remove front item
    if (n == 0) throw length_error("empty list");
    IntListNode* old = head;		// save current head
    head = old->getNext();			// skip over old head
    delete old;				// delete the old head
    n--;
}

void IntegerListt::print() {		// print all elements
    IntListNode* current = head;
    while (current != NULL) {
        std::cout << current->getElement() << endl;
        current = current->getNext();
    }
}

int IntegerListt::size() const {				// list size
    return n;
}