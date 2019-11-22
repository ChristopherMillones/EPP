//
// Created by Chris on 11/19/2019.
//

#ifndef EPP_INTLISTNODE_H
#define EPP_INTLISTNODE_H

#pragma once

class IntListNode {					// singly linked list node
public:
    IntListNode(int e, IntListNode *nextptr):
            elem(e), next(nextptr) { }
    int &getElement() {return elem;}
    IntListNode *getNext() {return next;}
private:
    int elem;					// linked list element value
    IntListNode *next;				// next item in the list
};

#endif //EPP_INTLISTNODE_H
