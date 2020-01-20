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
    void print();
    int size();






private:
    int count = 0;
    node* head;
};

Part::Part() {
    count = 0;
    head = NULL;
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
        while(temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        if(temp2->next == NULL)
        {
            temp2->next = temp;
        }
        count++;
    }
}

void Part::print() {
    node* temp = head;
    int element = 0;
    while(element != size())
    {
        cout << "Item[" << element+1 <<"]:\n";
        cout << "PART ID: " << temp->partId << endl;
        cout << "DESCRIPTION:  " << temp->description << endl;
        cout << "PRICE:   $" << temp->price << endl;
        cout << "INVENTORY:   " << temp->inventory << endl;
        element++;
        temp = temp->next;
    }


}



#endif //EPP_PT2_PART_H
