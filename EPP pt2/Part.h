//
// Created by Chris on 1/17/2020.
//

#ifndef EPP_PT2_PART_H
#define EPP_PT2_PART_H
#include <iostream>

using namespace std;

struct node
{
    int partId;
    string description;
    float price;
    int inventory;
    node* next;
};

class Part {
public:
    Part();

    ~Part();

    void insertNode(int partId, string description, float price, int inventory);
    int size();






private:
    int count = 0;
    node* head;
};

Part::Part() {
    count = 0;
}

Part::~Part() {
}

int Part::size() {
    return count;
}

void Part::insertNode(int partId, string description, float price, int inventory) {
    node* temp = new node;
    temp->partId = partId;
    temp->description = description;
    temp->price = price;
    temp->inventory = inventory;
    temp->next = NULL;

    if(size() == 0)
    {
        head = temp;
        count++;
    }
    else
    {
        node* temp2 = head;
        while(temp2 != NULL)
        {
            if(temp2->next == NULL)
            {
                temp2->next = temp;
            }
            temp2 = temp2->next;
        }
        count++;
    }
}



#endif //EPP_PT2_PART_H
