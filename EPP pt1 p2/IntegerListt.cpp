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

void IntegerListt::AddAtPosition(int elem, int pos) {
    cout << "\n Func BEGIN \n";
    if(pos == 0)
    {
        addFront(elem);
    }else if (pos >= size())
    {
        cout << "\n Inside else if \n";
        IntListNode* temp = head;
        while(temp != NULL)
        {
            cout << "\n Inside While\n";
            if(temp->getNext() == NULL)
            {
                cout << "\n Inside if \n";
                IntListNode* newElem = new IntListNode(elem, NULL);
                temp->next = newElem;
               // cout << temp->getNext()->getElement() << endl;
                break;
            }
            temp = temp->getNext();
        }
    }else if (pos > 0 && pos < size())
    {
        IntListNode* temp = head;
        for(int i = 0; i <= pos-1; i++)
        {
            if(i == pos - 1)
            {
                IntListNode* newElem = new IntListNode(elem, temp->getNext());
                temp->next = newElem;
                break;
            }
            temp = temp->getNext();
        }
    }
}