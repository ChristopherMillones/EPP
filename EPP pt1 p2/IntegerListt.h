//
// Created by Chris on 11/22/2019.
//

#ifndef EPP_PT1_P2_INTEGERLISTT_H
#define EPP_PT1_P2_INTEGERLISTT_H

#pragma once

#include <stdexcept>
#include "IntListNode.h"

using namespace std;

class IntegerListt {				// a singly linked list
public:
    IntegerListt();				// empty list constructor
    ~IntegerListt();				// destructor
    int& front();					// return front element
    void addFront(int e);		// add to front of list
    void removeFront();			// remove front item list
    void print();
    int size() const;					// list size
    void AddAtPosition(int elem, int pos);
private:
    IntListNode* head;				// head of the list
    int     n;							// number of items
};



#endif //EPP_PT1_P2_INTEGERLISTT_H
